/*
 uses source files
 AntiThetic.cpp
 Arrays.cpp,
 ConvergenceTable.cpp,
 ExoticBSEngine.cpp
 ExoticEngine.cpp
 MCStatistics.cpp
 Normals.cpp
 Parameters.cpp,
 ParkMiller.cpp,
 PathDependent.cpp
 PathDependentAsian.cpp
 PayOff3.cpp,
 PayOffBridge.cpp,
 Random2.cpp,
 */
#include"ParkMiller.h"
#include<iostream>
using namespace std;
#include"MCStatistics.h"
#include"ConvergenceTable.h"
#include"AntiThetic.h"
//#include"PathDependentAsian.h"
#include"PathDependentUpAndOut.h"
#include"ExoticBSEngine.h"
#include"Logging.h"

int main()
{
    double Expiry;
    double Strike;
    double Spot;
    double Vol;
    double r;
    double d;
    double barrier;
    unsigned long NumberOfPaths;
    unsigned NumberOfDates;
    cout << "\nEnter expiry\n";
    cin >> Expiry;
    cout << "\nStrike\n";
    cin >> Strike;
    cout << "\nEnter spot\n";
    cin >> Spot;
    cout << "\nEnter vol\n";
    cin >> Vol;
    cout << "\nr\n";
    cin >> r;
    cout << "\nd\n";
    cin >> d;
    cout << "\nbarrier\n";
    cin >> barrier;
    cout << "Number of dates\n";
    cin >> NumberOfDates;
    cout << "\nNumber of paths\n";
    cin >> NumberOfPaths;
    PayOffCall thePayOff(Strike);
    MJArray times(NumberOfDates);
    for (unsigned long i=0; i < NumberOfDates; i++)
        times[i] = (i+1.0)*Expiry/NumberOfDates;
    ParametersConstant VolParam(Vol);
    ParametersConstant rParam(r);
    ParametersConstant dParam(d);
    //PathDependentAsian theOption(times, Expiry, thePayOff);
    PathDependentUpAndOut theOption(times, Expiry, thePayOff,barrier);
    StatisticsMean gatherer;
    ConvergenceTable gathererTwo(gatherer);
    RandomParkMiller generator(NumberOfDates);
    AntiThetic GenTwo(generator);
    ExoticBSEngine theEngine(theOption, rParam, dParam,
                             VolParam, GenTwo, Spot);
    theEngine.DoSimulation(gathererTwo, NumberOfPaths);
    vector<vector<double> > results = gathererTwo.GetResultsSoFar();
    cout <<"\nFor the up-and-out call price the results are \n";
    Logging::instance().log("For the up-and-out call price the results are","Log file");
    
    for (unsigned long i=0; i < results.size(); i++){
        for (unsigned long j=0; j < results[i].size(); j++){
            cout << results[i][j] << " ";
            if(j==0){
                Logging::instance().log(std::to_string(results[i][j]),"value");
            }else if(j==1){
                Logging::instance().log(std::to_string(results[i][j]),"paths so far");
            }
        }
        cout << "\n";
    }
    
    double tmp;
    cin >> tmp;
    return 0;
}
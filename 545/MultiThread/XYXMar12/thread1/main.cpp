#include <iostream>
#include <thread>
#include <queue>
#include <condition_variable>
using namespace std;
mutex mtx;  //mutex for critical section
//unsigned count_num=0;


int main(){
    queue<int> myints;
    bool notified = false;
    bool done = false;
    mutex mtx;
    condition_variable cond_var;
    
    thread t1([&](){
        for(int i=0;i<100;i++){
            //this_thread::sleep_for()
            unique_lock<mutex> lck(mtx);
            int secret = rand()%100;
            myints.push(secret);
            cout<<"No."<<i+1<<"random number:"<<secret<<endl;
            notified = true;
            cond_var.notify_one();
        }
        done =true;
        cond_var.notify_one();
    });
    
    thread t2([&](){
        unique_lock<mutex> lck(mtx);
        while(!done){//moniter thread1 and if thread1 is in runtime, thread2 either.
            while(!notified){
                cond_var.wait(lck);//wait
            }
            while(myints.size()>90){
                cout<<"my rand:"<<myints.front()<<endl;
                myints.pop();
            }
            notified = false;//wait again
        }
        
    });
    
    t1.join();
    t2.join();
    
}

//
//#include <condition_variable>
//#include <mutex>
//#include <thread>
//#include <iostream>
//#include <queue>
//#include <chrono>
//
//int main()
//{
//    std::queue<int> produced_nums;
//    std::mutex m;
//    std::condition_variable cond_var;
//    bool done = false;
//    bool notified = false;
//    
//    std::thread producer([&]() {
//        for (int i = 0; i < 100; ++i) {
//            //std::this_thread::sleep_for(std::chrono::seconds(1));
//            std::unique_lock<std::mutex> lock(m);
//            srand(i);
//            int secret = rand()%100;
//            std::cout << "No." << i+1 <<"random number:"<<secret << '\n';
//            produced_nums.push(secret);
//            notified = true;
//            cond_var.notify_one();
//            //std::this_thread::sleep_for(std::chrono::seconds(1));
//        }
//        
//        done = true;
//        cond_var.notify_one();
//    });
//    
//    std::thread consumer([&]() {
//        std::unique_lock<std::mutex> lock(m);
//        while (!done) {
//            while (!notified) {  // loop to avoid spurious wakeups
//                cond_var.wait(lock);
//            }
//            while (!produced_nums.empty()&&produced_nums.size()>90) {
//                std::cout << "consuming " << produced_nums.front() << '\n';
//                produced_nums.pop();
//            }
//            notified = false;
//        }
//    });
//    
//    producer.join();
//    consumer.join();
//}

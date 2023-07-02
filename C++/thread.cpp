#include<iostream>
#include<thread>
#include<chrono>
using namespace std;

void DoSmth(){
    for(int i = 0;i < 7;i++){
        cout<<"Thread`s ID: "<<this_thread::get_id()<<"\tDoSmth\t"<< i <<endl;
        this_thread::sleep_for(chrono::milliseconds(1000));
    }
}

int main (){
    //DoSmth();
    thread th(DoSmth);
    th.join();

    for(int i = 0;i < 7;i++){
        cout<<"Thread`s ID: "<<this_thread::get_id()<<"\tMain\t"<< i <<endl;
        this_thread::sleep_for(chrono::milliseconds(500));
    }
}

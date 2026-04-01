#include <string>
#include <Time.hpp>
#include <iostream>
#include "windows.h"
using namespace std;
int main() {
    BackgroundTask task;
    for (int i=0; i < 10; i++) {
        std::cout << i;
        std:: this_thread::sleep_for(std::chrono::seconds(1));
    }
    // double Shield = 15;
    // bool HealPoint = true;
    // int i= 0;
    // while(i<1000){
    //     int start = 10;
    //     int end = 30;
    //     int x = rand() % (end - start + 1) + start;
    //     if(x==0){
    //         cout<<"muraveinik pogib"<<endl;
    //         break;
    //     };
    // };
    double Shield = 1000;
    bool Existence = true;
    double HealPoint = 2000;
    int i= 0;
    while(i<1){
        int end = 30;
        int x = rand() % end;
        if(x==0){
            cout<<"muraveinik pogib"<<endl;
            break;
        };
        Sleep(100);
    };

};
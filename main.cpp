#include <string>
#include <iostream>
#include "windows.h"
using namespace std;
int main() {
    double Shield = 15;
    bool Existence = true;
    double HealPoint = 67;
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
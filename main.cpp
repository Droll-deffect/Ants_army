#include <string>
#include <iostream>
using namespace std;
int main() {
    double Shield = 15;
    bool HealPoint = true;
    int i= 0;
    while(i<1000){
        int start = 10;
        int end = 30;
        int x = rand() % (end - start + 1) + start;
        if(x==0){
            cout<<"muraveinik pogib"<<endl;
            break;
        };
    };

}
#include <iostream>
using namespace std;

void printHello(){
    cout<<"Hello World!"<<endl;
}

int sum(int a,int b){
    int res = a + b;
    return res;
}

int main(){
    cout<< sum(2,3)<<endl;
}
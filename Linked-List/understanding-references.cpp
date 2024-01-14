#include <iostream>
using namespace std;

int changeValuebyRef(int &a){
    a = a+1;
    return a;
}

int changeValue(int a){
    a = a+1;
    return a;
}

void changeValuebyPointer(int* a){
    *a = *a+1;
}

int main(){

    int x = 10;
    int *ptr = &x;
    
    int &y = x; //reference can access the same memory location with different names
    // therefore pass by reference change the original value not the copies as done by 
    //pass with value


    int num = 456;
    int &ref = num;     //reference creates an alias for the variable  

    //difference between pass by value and pass by reference
    cout<<changeValuebyRef(ref)<<endl;
    cout<<ref<<endl;
    // pass by value 
    cout<<changeValue(ref)<<endl;
    cout<<ref<<endl;
    // pass as refernce
    cout<<changeValuebyRef(y)<<endl;

    
    cout<<*ptr<<endl;
    cout<<ptr<<endl;
    cout<<&x<<endl;
    cout<<y<<endl;

    //change value by passing pointer as parameter
    changeValuebyPointer(&x);
    cout<<ref<<endl;
    //OR
    changeValuebyPointer(ptr);
    cout<<ref<<endl;
    


}


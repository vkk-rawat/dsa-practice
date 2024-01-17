#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> vec;

    for(int i=0; i<=5; i++){
        vec.push_back(i);
    }
    for(int i=0; i<=5; i++){
        cout<<i<<" ";
    }
    cout<<endl;
    cout << "Capacity : " << vec.capacity()<<endl;

    cout<<"new elements-----------"<<endl;
    vec.resize(4);
    vec.shrink_to_fit();
    for(int i=0; i<=5; i++){
        cout<<i<<" ";
    }
    
    cout << "\nSize : " << vec.size();
}

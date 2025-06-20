#include<iostream>
#include<string>
using namespace std;

class student{
    public:
    string name;

    student(){
    cout<<"non-parameterized\n";
    }
    student (string name){
        this->name =name;
        cout<<"parameterized\n";
    }
};
   
int main(){
    
    student s1("tony stark");

    return 0;
    
}
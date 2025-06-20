#include<iostream>
#include<string>
using namespace std;

class teacher{
    public:
    string dept;

    teacher(){
        dept="computer science";
    }
    
};
int main(){
    teacher t1;

    cout<<t1.dept<<endl;
    return 0;
    
}
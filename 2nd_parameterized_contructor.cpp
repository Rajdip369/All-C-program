#include<iostream>
#include<string>
using namespace std;

class teacher{
    public:
    string name;
    string dept;
    string salary;

    teacher( string name,string d,string sal){
        (*this).name=name;
        dept=d;
        salary=sal;
        
    }
   void getinfo(){
        cout<<"name: "<< name <<endl;
         cout<<"dept: "<< dept <<endl;
   }
    
};
int main(){
    teacher t1("Rajdip","coputer science","91000");

   t1. getinfo();
    return 0;
    
}
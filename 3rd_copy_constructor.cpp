#include<iostream>
#include<string>
using namespace std;

class teacher{
    public:
    string name;
    string dept;
    string salary;

    teacher( string name,string d,string sal){
        this->name=name;
        dept=d;
        salary=sal;
        
    }

    //copy constructor(just knowledge)
     teacher(teacher&orgobj){
        cout<<"i am custom copy constractor..\n ";
        this->name=orgobj.name;
        this->dept=orgobj.dept;
        //that is call shallow copy

     }

   void getinfo(){
        cout<<"name: "<< name <<endl;//kind of printf in c language
         cout<<"dept: "<< dept <<endl;
   }
    
};
int main(){
    teacher t1("Rajdip","coputer science","91000");

    teacher t2(t1);//default copy constractor -invoke/call(after custom that is call custom copy not default copy)
    t2.getinfo();
    return 0;
    
}
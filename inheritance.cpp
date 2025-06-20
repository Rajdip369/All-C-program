#include<iostream>
#include<string>
using namespace std;

class person{
    public:
    string name;
    int age;
    // person(string name,int age){
    //     this->name =name;
    //     this->age =age;
// }
        person(){
            cout<<"hi, i am parent constructor..\n";

        }
    };
    class student:public person{

        public:
        int rollno;
        
        student(){
             cout<<"hi, i am child constructor..\n";
        }

        void getinfo(){
            cout<<"name: "<<name<<endl;
              cout<<"age: "<<age<<endl;
                cout<<"rollno: "<<rollno<<endl;

        }

    };

   
   
int main(){
    student s1;
    s1.name="raj";
    s1.age=21;
    s1.rollno=2202;

    s1.getinfo();

    return 0;
    
}
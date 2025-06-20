#include<iostream>
#include<string>
using namespace std;

class student{
    public:
    string name;
    double*cgpaptr;
    student(string name, double cgpa){
        this->name=name;
        cgpaptr=new double;
        *cgpaptr= cgpa;
    }
    
     //destructor
    ~student(){
        cout<<"hi, i delete everythings..\n ";
        delete cgpaptr;//memory leak /memory waste
    } 
    

    void getinfo(){
        cout <<"name: "<<name<<endl;
        cout<<"cgpa: "<<*cgpaptr<<endl;

    }
   
};
int main(){
    student s1( "rahul kumar",8.9);
    student s2(s1);

    return 0;
    
}
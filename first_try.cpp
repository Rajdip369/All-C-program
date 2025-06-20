
#include<iostream>
#include<string>

using namespace std;

class teacher{

//propertice//attributes
private:
    double salary;
   public:
    string name;
    string dept;
    string subject;
    


//method

    void changedept(string newDept){   
    dept = newDept;
    }

    //setter
    void setsalary(double s){
        salary=s;
    }

    //getter
    double getsalary(){
        return salary;
    }

};


class student{
    public:
    string name;
    int age;
    int rollnumber;

};


int main(){

    teacher t1;
    t1.name = "Rajdip saha";
    t1.subject= "C++";
    t1.dept= "cst";
    t1.setsalary(91000);
    

 cout<< t1.name<< endl;
  cout<< t1.subject<< endl;
   cout<< t1.dept<< endl;
   cout<< t1.getsalary()<< endl;




    return 0;

}
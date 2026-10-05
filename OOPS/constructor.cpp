#include<iostream>
#include<vector>
using namespace std;

class Teacher{
    public:
    string name;
    string dept;
    string subject;
    double salary;

    //non parametrized constructor
    Teacher(){
         dept= "science";
    }

    // PARAMETRIZED CONSTRUCTOR
    Teacher(string name,string d,string s,double sal){
        this->name=name;   //if parameter and property same then THIS is used
        dept=d;
        subject=s;
        salary=sal;
    }

};
int main()
{  Teacher t1("bob","maths","geo",20000); 
    cout<<t1.dept<<endl;  //PARAMETRIZED CALL
    Teacher t2;
    cout<<t2.dept<<endl;  // DEFAULT CONSTRUCTOR CALL

    cout<<t1.name<<endl;
    return 0;
}
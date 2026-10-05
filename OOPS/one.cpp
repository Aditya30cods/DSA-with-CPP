#include<iostream>
#include<vector>
using namespace std;


class teacher{
public:
     string name;
     string subject;
     string depart;
     double salary;

};

class student{
    public: 
    string name;

    private:
    int roll;

    public :
    //setter
    void setroll(int r){
        roll = r;
    }
    //getter
    int getroll(){
        return roll;
    }
};
int main()
{   teacher t1;
    t1.name ="bob";
    t1.subject ="science";
    t1.depart ="sci";
    t1.salary = 25000;

    cout<<t1.name<<endl;
    cout<<t1.subject<<endl;
    cout<<t1.depart<<endl;
    cout<<t1.salary<<endl;

  student s1;
  s1.name="neon";
  s1.setroll(12);

  cout<<s1.name<<endl;
  cout<<s1.getroll();

    return 0;
}
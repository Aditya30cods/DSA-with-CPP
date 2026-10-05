#include<iostream>
#include<deque>
using namespace std;

int main()
{   
    deque<int>d;
    d.push_back(10);
    d.push_back(20);
    d.push_front(40);
    d.push_front(50);
    d.push_front(60);
    d.pop_back();  //removes 60
    d.pop_front(); //removes 20
    while(!d.empty()){
        cout<<d.front()<<" ";
        d.pop_front();
    }
    return 0;
}
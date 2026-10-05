#include<iostream>
#include<vector>
#include<list>
using namespace std;

class Stack{
    list<int> v;
    
public:
    void push(int s){
        v.push_front(s);
    }
    void pop(){
        v.pop_front();
    }
    int top(){
        return v.front();
    }
    bool empty(){
        return v.size() == 0;
    }
};
int main()
{
    Stack s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);

    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }
    cout<<endl;
    return 0;
}
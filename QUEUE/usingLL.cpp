#include<iostream>
#include<vector>
#include<list>
using namespace std;

class Queue{
   list<int>q;
   public:

      void enqueue(int val){
        q.push_back(val);
        cout<<endl;
      }

      void dequeue(){
        if(q.empty()){
            cout<<"QUEUE IS EMPTY";
            return;
            cout<<endl;
        }
        q.pop_front();
        cout<<endl;
      }
      int front(){
          if(q.empty()){
            cout<<"QUEUE IS EMPTY";
            return -1;
        }
        else{
            return q.front();
            
        }
        cout<<endl;
      }

      void show(){
        for(int x:q){
            cout<<x<<"-";
        }
        cout<<"NULL"<<endl;
      }

};
int main()
{
    Queue q;
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
     q.show();
    cout<< q.front();
    q.dequeue();
      q.show();
    return 0;
}
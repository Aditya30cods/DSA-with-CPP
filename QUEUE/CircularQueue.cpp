#include<iostream>
#include<vector>
using namespace std;

class CircularQueue{
    int* arr;
    int cap,currSize;
    int f,r;

    public:
    CircularQueue(int size){
        cap = size;
        arr= new int[cap];
        f=0;
        r=-1;
    }

    void push(int data){
       if(currSize == cap){
        cout<<"CQ if full";
        return ;
       }
       r = (r+1)% cap;
       arr[r]= data;
       currSize++;
    }

    void pop(){
    if(empty()){
        cout<<"CQ is empty";
        return ;
    } 
    f=(f+1)%cap;
    currSize--;
    }

    int front(){
    if(empty()){
        cout<<"CQ is empty";
        return ;
    } 
     return arr[f];
    }

    bool empty(){
  return currSize == 0;
    }

    void print(){
        for(int i=0;i<cap;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
};
int main()
{
    return 0;
}
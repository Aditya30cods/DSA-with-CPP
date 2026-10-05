#include<iostream>
#include<vector>
using namespace std;

int linearSearch(int arr[],int size,int target){
    for(int i=0;i<size;i++){
       if(arr[i]== target){
        return i;
       }
    }
    return -1;
}
int main()
{
    int arr[]={2,3,5,64,232};
    int size =5;
    int target= 64;
  cout<<linearSearch(arr,size,target);

    return 0;
}
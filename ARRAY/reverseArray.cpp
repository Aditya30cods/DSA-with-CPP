#include<iostream>
#include<vector>
using namespace std;

void ReverseArray(int arr[],int size){
 int start=0,end=size-1;
 while(start<end){
    swap(arr[start],arr[end]);
    start++;
    end--;
 }
}
int main()
{
    int arr[]={12,44,34,56,7788,98};
    int size=6;
    ReverseArray(arr,size);
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";;
    }
    cout<<endl;
    return 0;
}
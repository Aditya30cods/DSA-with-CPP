#include<iostream>
#include<vector>
using namespace std;
 
void selectionSort(int arr[],int n){
    for(int i=0;i<n-1;i++){
        int smolindex = i;
        for(int j=i+1;j<n;j++){
            if(arr[j]< arr[smolindex]){
                smolindex = j;
            }
        }
        swap(arr[i],arr[smolindex]);
    }
}
int main()
{
    return 0;
}
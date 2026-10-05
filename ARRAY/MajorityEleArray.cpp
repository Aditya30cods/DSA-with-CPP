#include<iostream>
#include<vector>
using namespace std;
 
int majorelement(int arr[],int size){
    int ans=arr[0];
    int freq=1;
    for(int i=1;i<size;i++){
       if(arr[i]==arr[i-1]){
        freq ++;
       }
       else{
       freq=1;
       ans= arr[i];
       }
  } return ans; 
}
int main()
{
    int arr[]={1,2,2,1,1,2,2};
    int size= 7;
   cout<< majorelement(arr,size);
    
    return 0;
}
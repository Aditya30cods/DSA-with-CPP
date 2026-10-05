//MAX SUBARRAY SUM USING KADANE ALGO

#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int arr[]={-1,2,44,-46,32,67,-1};
    int size= 7;
    int currsum=0;
    int maxsum= INT8_MIN;
    for(int i=0;i<size;i++){
        currsum += arr[i] ;
        maxsum= max(currsum,maxsum);
        if(currsum<0){
            currsum=0;
        }
        
    }   
     cout<<maxsum;

    return 0;
}
#include<iostream>
#include<vector>
using namespace std;

int binarySearch( vector<int> arr,int target){
    int start = 0;
    int end = arr.size()-1;
    while(start<= end){
        //int mid = (start + end)/2;
        int mid = start +(end-start)/2; //more optimised
        if(target< arr[mid]){
            end = mid -1;
        }
        else if(target > arr[mid]){
             start = mid +1;
        }
        else{
            return mid;
        }
    }
    return -1;
}

int main()
{
    vector<int> arr ={-3,-1,0,4,5,77,88};
    int t1=88;
    vector<int> vrr ={-3,-1,0,4,5,77,88,122};
 
    cout<<binarySearch(arr,88);

    return 0;
}
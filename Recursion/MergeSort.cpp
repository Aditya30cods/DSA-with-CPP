#include<iostream>
#include<vector>
using namespace std;

void merge(vector<int>&arr,int st,int mid,int end){
    int i= st, j = mid+1;
    vector<int>temp;
    while(i<=mid && j<=end ){
        if(arr[i]<=arr[j]){
           temp.push_back(arr[i]); //STORING SORTED ARRAY IN TEMP
           i++;
        } else{
             temp.push_back(arr[j]);
             j++;
        }}
        while(i<=mid){
             temp.push_back(arr[i]);  //STORING LEFTOVER LEFT PART
           i++;
        }
        while(j<=end){
              temp.push_back(arr[j]);  //STORING LEFTOVER RIGHT PART
             j++;
        }
        //STORING ELEMENTS FROM TEMP TO ARR
        for(int i=0;i<temp.size();i++){
            arr[i+st] = temp[i];          //COPYING ELEMENT
        }
    }

void mergeSort(vector<int>&arr,int st,int end){
    if(st<end){      
        int mid= st+(end-st)/2;

    mergeSort(arr,st,mid); //LEFT
    mergeSort(arr,mid+1,end); //RIGHT

    merge(arr,st,mid,end);
    }
}
int main()
{
  vector<int>arr = {12,31,35,8,32,17};
  mergeSort(arr,0,arr.size()-1);

  for(int val: arr){
    cout<< val<<" ";

  }
  cout<<endl;
    return 0;
}
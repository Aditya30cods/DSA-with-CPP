#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int arr[]={1,2,3,4,5};
    int n=5;
     for(int strt= 0;strt<n;strt++){         //start of subarray
          for(int end =strt;end<n;end++){    //end of subarray
              for(int i=strt; i<=end;i++){
                cout<<arr[i];
              }
          cout<<" ";
        }
   
     cout<<endl;     }
   
    return 0;
}
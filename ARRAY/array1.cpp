 // smallest number 
#include<iostream>
#include<vector>
using namespace std;

int main()
{
     int n;
     cin>>n;
     int smallest = __INT_MAX__;
    int num[n];
     int index ;
    for(int i=0;i<n;i++){
        cin>>num[i];
        if(num[i]< smallest){
            smallest = num[i];
         index = i;
        }
    }
    cout<<smallest<<index<<endl;
   
    return 0;
}
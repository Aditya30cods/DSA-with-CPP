#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int n;
    cin>>n;
   int arr[n];
   int odd=0,even=0;
for(int i=0;i<n;i++){
    cin>>arr[i];
    if(arr[i]%2== 0){
        even++;
    }
    else{
        odd++;
    }
}
if(even > odd){
    cout<<"even"<<endl;
}
else{
    cout<<"odd"<<endl;
}
    return 0;
}
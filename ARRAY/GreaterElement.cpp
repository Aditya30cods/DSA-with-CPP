#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
   for(int i=0;i<n;i++ ){ 
    int ans=0;
    for(int j=i+1;j<n;j++){
        if(a[j]> a[i]){
            ans=a[j];
            break;
        }
    }
    cout<<ans<<" ";
   }


    return 0;
}
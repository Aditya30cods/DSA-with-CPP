#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int k;
    cin>>k;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i=i+2*k){
        for(int j=0;j<k;j++){

            swap(arr[i+j],arr[i+j+k]);

        }
        
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    return 0;
}
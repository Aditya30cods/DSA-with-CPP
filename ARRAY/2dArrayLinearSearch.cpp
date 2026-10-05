#include<iostream>
#include<vector>
using namespace std;

bool linearSearch(int arr[][3],int row,int col,int target){
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            if(target == arr[i][j]){
                return true;
            }
        }
    }
    return false;
}
int main()
{
      int arr[3][3]={1,2,3,4,5,6,7,8,9};
    int row= 3;
    int col=3;
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cout<<arr[i][j]<<" ";

        }
        cout<<endl;
    }
    cout<<linearSearch(arr,row,col,88);
    return 0;
}
#include<iostream>
#include<vector>
using namespace std;

int main()
{    //2D ARRAY PRINTING
    int arr[3][3]={1,2,3,4,5,6,7,8,9};
    int row= 3;
    int col=3;
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cout<<arr[i][j]<<" ";

        }
        cout<<endl;
    }
    return 0;
}
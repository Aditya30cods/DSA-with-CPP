#include<iostream>
#include<vector>
using namespace std;

int main()
{

    vector<int> var = {1,2,3,4,5};
    vector<char> ran = {'a','b','c','d'};
    //FUNCTIONS
    //same Pop_back
    //.at()
    //.size()
    var.push_back(7);
    ran.push_back('e');
     for( int i : var){
        cout<<i<<" ";
     }
     cout<<endl;
     for( char i : ran){
        cout<<i<<" ";
     }

    return 0;
}
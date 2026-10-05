#include <iostream>
#include <vector>
using namespace std;

int main()

{ string s,p,q;
    getline(cin,s);
    cin>>p;
    int n;
    cin>>n;
    for(int i=0;i<s.length();i++){
        if((i+1)%n ==0){
            q=q+s[i];
            q=q+p;
        }
        else{
            q=q+s[i];
        }
    }

    return 0;   
}
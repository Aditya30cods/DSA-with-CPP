#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{   int n,p,k;
    cin>>n>>p>>k;
    string s1,s2;
    cin>>s1>>s2;

    k=k%n;
    string ans1= s2.substr(p) + s2.substr(0,k);
    string ans2= s2.substr(n-k) + s2.substr(0,n-k);
    string final= ans1+ans2;
    string temp= final;
    cout<<final<<endl;
    reverse(final.begin(),final.end());
    if(temp==final){
        cout<<"true"<<endl;
    }else{
        cout<<"false";
    }
    return 0;
}
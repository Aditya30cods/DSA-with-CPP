#include<iostream>
#include<vector>
using namespace std;

double myPow(double x, int n) {
        double ans=1;
        if(n<0){
            x=1/x;
            n=-n;
        }
        while(n>0){
            if(n%2==1){
                ans =ans*x;
            }
            x *= x;
            n/=2;
        }
 return ans;   
}
int main()
{
   cout<< myPow(2,6);
   cout<< myPow(2,-6);

    return 0;
}
  
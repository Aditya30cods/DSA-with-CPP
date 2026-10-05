#include <iostream>
using namespace std;

int main()
{
    string s1, s2, s3;

    cin >> s1;
    cin >> s2;

    for(int i = 0; i < s1.length(); i++)
    {
        bool found = false;

        for(int j = 0; j < s2.length(); j++)
        {
            if(s1[i] == s2[j])
            {
                found = true;
                break;
            }
        }

        if(!found)
        {
            s3 += s1[i];
        }
    }

    cout << s3;

    return 0;
}                  
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;

    if(s[0] >= 97 || s[0] <= 122 )
    {
        s[0] = toupper(s[0]);
        cout << s;
    }
    else{
        cout << s;
    }
}
#include <bits/stdc++.h>
using namespace std;

string largestOddNumber(string num)
{
    for (int i = num.size() - 1; i > 0; i--)
    {
        string snum = num.substr(0, i);
        char ch = snum.back();
        int n = ch - '0';
        if (n % 2 != 0)
        {
            return snum;
        }
    }

    return "";
}

int main()
{
    string num = "1254";

    // cout << num.back() - '0' + 6;

    cout << largestOddNumber("1234");
}
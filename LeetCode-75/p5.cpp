/**
 * @file p5_optimized.cpp
 * @author your name (you@domain.com)
 * @brief T: O(n) S:O(n)
 * @version 0.1
 * @date 2023-10-13
 *
 * @copyright Copyright (c) 2023
 *
 */
#include <bits/stdc++.h>
using namespace std;

int main()
{
    class Solution
    {
    public:
        string reverseVowels(string s)
        {

            vector<char> v;
            string ans;
            for (int i = 0; i < s.size(); i++)
            {
                if (s[i] == 'a' || s[i] == 'A' || s[i] == 'e' || s[i] == 'E' ||
                    s[i] == 'i' || s[i] == 'I' || s[i] == 'o' || s[i] == 'O' ||
                    s[i] == 'U' || s[i] == 'u')
                {
                    v.push_back(s[i]);
                }
            }
            reverse(v.begin(), v.end());
            int j = 0;
            for (int i = 0; i < s.size(); i++)
            {
                if (s[i] == 'a' || s[i] == 'A' || s[i] == 'e' || s[i] == 'E' ||
                    s[i] == 'i' || s[i] == 'I' || s[i] == 'o' || s[i] == 'O' ||
                    s[i] == 'U' || s[i] == 'u')
                {
                    ans.push_back(v[j++]);
                }
                else
                    ans.push_back(s[i]);
            }

            return ans;
        }
    };
}
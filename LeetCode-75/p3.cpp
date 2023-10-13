/**
 * @file p3.cpp
 * @author fahad
 * @brief Time Complexity O(n*n), Space: O(n)
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
        bool checkMax(vector<int> &arr, int value, int j)
        {
            bool res = true;

            for (int i = 0; i < arr.size(); i++)
            {
                if (i == j)
                    continue;
                if (value < arr[i])
                    return false;
                ;
            }

            return res;
        }
        vector<bool> kidsWithCandies(vector<int> &candies, int extraCandies)
        {

            vector<bool> ans;

            for (int i = 0; i < candies.size(); i++)
            {
                int x = candies[i] + extraCandies;
                ans.push_back(checkMax(candies, x, i));
            }

            return ans;
        }
    };
}
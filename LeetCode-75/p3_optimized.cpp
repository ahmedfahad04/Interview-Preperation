
/**
 * @file p3.cpp
 * @author fahad
 * @brief Time Complexity O(n), Space: O(1)
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
        vector<bool> kidsWithCandies(vector<int> &candies, int extraCandies)
        {
            // Find out the greatest number of candies among all the kids.
            int maxCandies = 0;
            for (int candy : candies)
            {
                maxCandies = max(maxCandies, candy);
            }

            // For each kid, check if they will have greatest number of candies
            // among all the kids.
            vector<bool> result;
            for (int candy : candies)
            {
                result.push_back(candy + extraCandies >= maxCandies);
            }

            return result;
        }
    };
}
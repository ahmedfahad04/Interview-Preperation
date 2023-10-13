/**
 * @file p4_optimized.cpp
 * @author your name (you@domain.com)
 * @brief T: O(n), S: O(1)
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
        bool canPlaceFlowers(vector<int> &flowerbed, int n)
        {
            int count = 0;
            for (int i = 0; i < flowerbed.size(); i++)
            {
                // Check if the current plot is empty.
                if (flowerbed[i] == 0)
                {
                    // Check if the left and right plots are empty.
                    bool emptyLeftPlot = (i == 0) || (flowerbed[i - 1] == 0);
                    bool emptyRightPlot = (i == flowerbed.size() - 1) || (flowerbed[i + 1] == 0);

                    // If both plots are empty, we can plant a flower here.
                    if (emptyLeftPlot && emptyRightPlot)
                    {
                        flowerbed[i] = 1;
                        count++;
                    }
                }
            }
            return count >= n;
        }
    };
}
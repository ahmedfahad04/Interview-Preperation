/**
 * @file p4.cpp
 * @author fahad
 * @brief  T: O(n), S: O(1)
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
            int cnt = 0;
            if (flowerbed.size() == 1 and n == 1 and flowerbed[0] == 0)
                return true;

            for (int i = 0; i < flowerbed.size(); i++)
            {
                if (flowerbed[i] == 0)
                {
                    if (i == 0)
                    {
                        if (i + 1 < flowerbed.size() and flowerbed[i + 1] == 0)
                        {
                            cnt++;
                            flowerbed[i] = 1;
                        }
                    }
                    else if (i == flowerbed.size() - 1)
                    {
                        if (i - 1 < flowerbed.size() && flowerbed[i - 1] == 0)
                        {
                            cnt++;
                            flowerbed[i] = 1;
                        }
                    }
                    else
                    {
                        if (flowerbed[i - 1] == 0 and flowerbed[i + 1] == 0)
                        {
                            cnt++;
                            flowerbed[i] = 1;
                        }
                    }
                }
            }
            if (cnt >= n)
                return true;
            else
                return false;
        }
    };
}
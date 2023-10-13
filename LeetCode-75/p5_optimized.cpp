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

string reverseVowels(string s)
{
    string word = s;
    int start = 0;
    int end = s.length() - 1;
    string vowels = "aeiouAEIOU";

    while (start < end)
    {
        // Move the start pointer towards the end until it points to a vowel.
        while (start < end && vowels.find(word[start]) == -1)
        {
            start++;
        }

        // Move the end pointer towards the start until it points to a vowel.
        while (start < end && vowels.find(word[end]) == -1)
        {
            end--;
        }

        // Swap the vowels found at the start and end positions.
        swap(word[start], word[end]);

        // Move the pointers towards each other for the next iteration.
        start++;
        end--;
    }

    return word;
}

int main()
{

    string data = "leetcode";
    cout << reverseVowels(data);
}
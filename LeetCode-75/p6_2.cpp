#include <bits/stdc++.h>
using namespace std;

// #2 Method to return a string of the words in reverse order, using tokenization - O(N) & O(N)
string reverseWords(string s)
{
    vector<string> words;
    stringstream ss(s);
    string tmp = "";

    // Extract each word of the string and store them to the vector
    while (ss >> tmp)
    {
        words.push_back(tmp);
    }

    tmp = "";

    // Append each word to the output string "tmp"
    for (int i = words.size() - 1; i >= 0; i--)
    {
        tmp.append(words[i]);
        tmp.push_back(' ');
    }

    // Remove the additional single space
    tmp.pop_back();

    return tmp;
}

int main()
{
}
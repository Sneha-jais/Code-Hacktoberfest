// anagram is compare two string having same character with same frequency
//  listen==silent

#include <bits/stdc++.h>
using namespace std;
bool anagram(string s1, string s2)
{
    if (s1.length() != s2.length())
        return false;
    int count[256] = {false};
    for (int i = 0; i < s1.length(); i++)
        count[s1[i]]++;
    for (int i = 0; i < s1.length(); i++)
        count[s2[i]]--;
    for (int i = 0; i < 256; i++)
    {
        if (count[i] != 0)
            return false;
    }
    return true;
}

int main()
{
    string s1, s2;
    getline(cin, s1);
    getline(cin, s2);
    if (anagram(s1, s2) == true)
        cout << "Given strings are an anagram of each other\n";
    else
        cout << "Given strings are not an anagram of each other\n";
    return 0;
}
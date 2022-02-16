
#include <bits/stdc++.h>
using namespace std;
bool panagram(string str)
{
    int count = 0;
    int index;
    bool marks[26] = {false};
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] >= 'a' && str[i] <= 'z')
            index = str[i] - 'a';
        else if (str[i] >= 'A' && str[i] <= 'Z')
            index = str[i] - 'A';
        else
            continue;
        marks[index] = true;
    }
    for (int i = 0; i < 26; i++)
    {
        if (marks[i] == false)
        cout<<(char)(i+'a')<<endl;
    }

    return true;
}

int main()
{
    string s;
    getline(cin, s);
    panagram(s); 
     
    return 0;
}
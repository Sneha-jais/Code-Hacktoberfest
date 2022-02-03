#include <iostream>
using namespace std;
int main()
{

    string s;
    getline(cin, s);
    int countA = 0, countE = 0, countI = 0, countO = 0, countU = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == 'a' || s[i] == 'A')
            countA++;
        else if (s[i] == 'e' || s[i] == 'E')
            countE++;
        else if (s[i] == 'i' || s[i] == 'I')
            countI++;
        else if (s[i] == 'o' || s[i] == 'O')
            countO++;
        else if (s[i] == 'u' || s[i] == 'U')
            countU++;
    }

    cout << "No. of vowel A is " << countA << endl;
    cout << "No. of vowel E is " << countE << endl;
    cout << "No. of vowel I is " << countI << endl;
    cout << "No. of vowel O is " << countO << endl;
    cout << "No. of vowel U is " << countU << endl;
    return 0;
}
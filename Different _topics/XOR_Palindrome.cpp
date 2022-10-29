//Codechef Problem Link
//https://www.codechef.com/submit/XOR_PAL?tab=statement

#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n,ans=0;
	    string s;
	    cin>>n>>s;
	    for(int i=0;i<n/2;i++)
	    {
	        if(s[i]!=s[n-i-1])
	        ans++;
	    }
	    cout<<(ans+1)/2<<endl;
	}
	return 0;
}

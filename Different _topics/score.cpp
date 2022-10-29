//Codechef Problem Link
//https://www.codechef.com/submit/WATSCORE?tab=statement

#include <iostream>
#include <map>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n,p=0,s=0,sum=0;
	    cin>>n;
	    int a[8]={0};
	    for(int i=0;i<n;i++)
	    {
	        cin>>p>>s;
	        if(p<9 && a[p-1]<s )
	        a[p-1]=s;
	    }
	    
	    for(int i=0;i<8;i++)
	    sum+=a[i];
	    
	    cout<<sum<<endl;
	    
	   
	}
	return 0;
}

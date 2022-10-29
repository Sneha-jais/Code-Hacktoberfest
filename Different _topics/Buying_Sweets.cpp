
//Codechef Problem Link
//https://www.codechef.com/submit/BUYING2?tab=statement


#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n,k,sum=0,diff=0,flag=1;
	    cin>>n>>k;
	    int a[n];
	    for(int i=0;i<n;i++)
	    {
	        cin>>a[i];
	        sum+=a[i];
	    }
	    
	    //cout<<sum<<endl;
	    
	    if(sum%k==0)
	    cout<<sum/k<<endl;
	    else
	    {
	        diff=sum%k;
	        for(int i=0;i<n;i++)
	        {
	            if(a[i]<=diff)
	            {
	                flag=0;
	                break;
	            }
	        }
	        if(flag==0)
	        cout<<-1<<endl;
	        else
	        cout<<sum/k<<endl;
	    }
	    
	    
	    
	    
	}
	return 0;
}

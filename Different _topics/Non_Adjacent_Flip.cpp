//Codechef Problem Link
//https://www.codechef.com/submit/NONADJFLIP?tab=statement


#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int d=0,e=0;
	    int a;
	    cin>>a;
	    char arr[a];
	    for(int i=0;i<a;i++){
	        cin>>arr[i];
	    }
	    for(int i=0;i<a;i++){
	        if(arr[i]=='0')
	        {
	            d++;
	            
	        }
	        else if(arr[i]=='1' && arr[i+1]=='1'){
	        e=1;
	            break;
	        }
	    }
	    if(d==a)
	    cout<<0<<endl;
	    else if(e==1)
	    cout<<2<<endl;
	    else
	    cout<<1<<endl;
	    
	}
	return 0;
}

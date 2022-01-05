
#include<bits/stdc++.h>
using namespace std;
double findMean(int arr[],int n){
int sum=0;
float mean;
for(int i=0; i<n;i++)
sum+=arr[i];
return (double)sum / (double)n;
}
double findMedian(int arr[], int n){
sort(arr,arr+n);
	if (n % 2 != 0)
		return (double)arr[n / 2];

	return (double)(arr[(n - 1) / 2] + arr[n / 2]) / 2.0;
}
int main(){
int n;
cout<<"Enter number of elements in array\n";
cin>>n;
int arr[n];
cout<<"Enter elements of array\n";
for(int i=0; i<n; i++)
cin>>arr[i];
cout<<findMean(arr,n)<<"\n";
 cout<<findMedian(arr,n);
return 0;
}
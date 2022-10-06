#include <iostream>
using namespace std;
void merge(int arr[],int s, int mid,int l){
 int n1=mid-s+1;
 int n2=l-mid;
 int a[n1],b[n2];

 for(int i=0;i<n1;i++){
 a[i]=arr[s+i];

 }

 for(int i=0;i<n2;i++){
 b[i]=arr[mid+1+i];

 }

 int k=s;
 int i=0,j=0;

 while(i<n1 && j<n2){
 if(a[i]<b[j]){
 arr[k]=a[i];

 i++;

 }
 else{
 arr[k]=b[j];

 j++;

 }
 k++;
 }
 while(i<n1){
 arr[k]=a[i];
 i++;
 k++;
 }
 while(j<n2){
 arr[k]=b[j];
 j++;
 k++;
 }

}
void merge_sort(int arr[],int s,int l){
 int mid;
 if(s<l){
 mid=(s+l)/2;
 merge_sort(arr,s,mid);
 merge_sort(arr,mid+1,l);
 merge(arr,s,mid,l);
 }

}
int main()
{
 int n;
 int arr[n];

 cout<<"Enter number of elements:\n";

 cin>>n;

 cout<<"Enter elements:\n";

 for(int i=0;i<n;i++){
 cin>>arr[i];
 }

 merge_sort(arr,0,n-1);
 cout<<"Sorted array will be:\n";

 for(int i=0;i<n;i++){
 cout<<arr[i]<<" ";
 }
 return 0;
}

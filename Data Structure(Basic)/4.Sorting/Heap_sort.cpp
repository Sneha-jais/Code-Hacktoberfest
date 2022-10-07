#include <iostream>
using namespace std;
void max_heapify(int a[],int n,int i){

 int l=2*i+1; //l means left child
 int r=2*i+2; //r means right child
 int largest=i;
 if(l<n && a[l]>a[i])
 largest=l;


 if(r<n && a[r]>a[largest])
 largest=r;

 if(largest!=i){
 swap(a[i],a[largest]);
 max_heapify(a,n,largest); //checking untill we reach to leaf node
 }


}
void heap_sort(int a[],int n){

 //it will generate heapify
 for(int i=n/2; i>=0;i--){
 max_heapify(a,n,i);
 }

 //it will sort all elements
 for(int i=n-1;i>=1;i--){
 swap(a[0],a[i]);
 max_heapify(a,i,0);
 }

}
int main()
{
 int n;
 cin>>n;
 int arr[n];
 for(int i=0;i<n;i++){
 cin>>arr[i];
 }

 cout<<"Sorted array will be: \n";
heap_sort(arr,n);
for(int i=0;i<n;i++){
 cout<<arr[i]<<" ";
 }
 return 0;
}

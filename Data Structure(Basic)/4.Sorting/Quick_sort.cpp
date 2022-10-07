#include <iostream>
using namespace std;
int part(int arr[], int start, int last)
{
int i = start;
int j = last;
int pivot = arr[start];
while (i < j)
{
while (pivot >= arr[i])
i++;
while (pivot < arr[j])
j--;
if (i < j)
swap(arr[i], arr[j]);
}
swap(arr[start], arr[j]);
return j;
}
void quick_sort(int arr[], int start, int last)
{
if (start<last)
{
int pivot = part(arr, start, last);
quick_sort(arr, start, pivot - 1);
quick_sort(arr, pivot + 1, last);
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
 
 quick_sort(arr,0,n-1);
 cout<<"Sorted array will be:\n";
 
 for(int i=0;i<n;i++){
 cout<<arr[i]<<" ";
 }
return 0;
}


#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
      int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
  int index;
  cout<<"Enter the index where you wish to delete element\n";
  cin>>index;

  for(int i=index; i<n-1; i++){
      arr[i]=arr[i+1];
  }


  for(int i=0; i<n-1;i++)
  cout<<arr[i]<<" ";
  return 0;
}
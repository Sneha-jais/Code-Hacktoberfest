

#include <iostream>

using namespace std;

int ternary_search(int arr[],int n,int x,int start,int end){
    if(start>end){
        return 0;
    }
    int mid1=start+(end-start)/3;
    int mid2=end-(end-start)/3;
    
    if(arr[mid1]==x)
    return mid1;
    if(arr[mid2]==x)
    return mid2;
    if(x<mid1)
    return ternary_search(arr,n,x,start,mid1-1);
    else if(x>mid2)
     return ternary_search(arr,n,x,mid2+1,end);
    else
     return ternary_search(arr,n,x,mid1+1,mid2-1);
    return -1;
}

int main()
{
 int n,key;
 cout<<"Enter number of elements in array:\n";
 cin>>n;
 cout<<"Enter elements of the array:\n";
 int arr[n];
 for(int i=0;i<n;i++){
     cin>>arr[i];
 }
 cout<<"Enter the element which you want to search:\n";
 cin>>key;
 int ans=ternary_search(arr,n,key,0,n-1);
cout<<"The index of desired element is: "<<ans<<endl;

    return 0;
}

/* A majority element in an array A[] of size n
 is an element that appears more than n/2 times 
(and hence there is at most one such element)*/

#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter number of elements\n";
    cin>>n;
    int arr[n];
    cout<<"Enter elements of array\n";
    for(int i=0; i <n; i++){
        cin>>arr[i];
         }

int maxCount=n/2,index;
//for loops to count majority
for(int i=0; i<n; i++){
    int count=0;
    for(int j=0; j<n;j++){
if(arr[i]==arr[j])
count++;
    }
    if(count>maxCount){
        maxCount=count;
   index=i;
    }
}
 if (maxCount > n / 2)
        cout << arr[index] << endl;
 
    else
        cout << "No Majority Element" << endl;

    return 0;
}

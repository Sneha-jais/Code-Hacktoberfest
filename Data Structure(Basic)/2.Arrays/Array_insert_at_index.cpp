#include <iostream>
using namespace std;
int main()
{
    int n;
        cout<<"Enter number of elements in array\n";
    cin >> n;
    int arr[n + 1];
   cout<<"Enter elements of array\n";
  for (int i = 0; i < n; i++)
        cin >> arr[i];
 
 cout << "Enter element which you want to insert\n";
    int x;
    cin >> x;
  cout << "Enter index of element where you want to insert\n";
    int index;
    cin >> index;
    for (int i = n; i >=index; i--)
    {
         arr[i] = arr[i-1];
          }

            arr[index] = x;
 
   
 cout << "Updated array is:\n";
    for (int i=0; i<=n; i++)
        cout << arr[i] << " ";
    return 0;
}
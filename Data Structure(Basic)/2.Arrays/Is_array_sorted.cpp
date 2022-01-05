//check array is in increaseing order or not

#include <iostream>
using namespace std;
int arraySort(int arr[], int n){
     if (n == 1 || n == 0)
        return 1;
        if (arr[n - 1] < arr[n - 2])
        return 0;

        return arraySort(arr, n-1);
}
int main()
{
    int n;
    cout << "Enter number of elements\n";
    cin >> n;
    int arr[n];
    cout << "Enter elements of array\n";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
   if (arraySort(arr, n))
        cout << "Yes\n";
    else
        cout << "No\n";


    return 0;
}

#include <iostream>
using namespace std;

void selection(int arr[], int n)
{

    for (int i = 0; i < n - 1; i++)
    {

        int min_idx = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[min_idx])
                min_idx = j;

            swap(arr[min_idx], arr[i]);
               }
    }
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
}
int main()
{
    int n;
    cout << "Enter number of elements in array\n";
    cin >> n;
    int arr[n];
    cout << "Enter elements of array\n";
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    selection(arr, n);

    return 0;
}
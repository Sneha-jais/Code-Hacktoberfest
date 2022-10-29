#include<iostream>
using namespace std;

void merge(int *a, int l, int m, int r) 
{
   int i, j, k, nl, nr;
   nl = m-l+1; nr = r-m;
   int a_l[nl], a_r[nr];

   for(i = 0; i<nl; i++)
      a_l[i] = a[l+i];
   for(j = 0; j<nr; j++)
      a_r[j] = a[m+1+j];
   i = 0; j = 0; k = l;
   while(i < nl && j<nr) {
      if(a_l[i] <= a_r[j]) {
         a[k] = a_l[i];
         i++;
      }else{
         a[k] = a_r[j];
         j++;
      }
      k++;
   }
   while(i<nl) {       
      a[k] = a_l[i];
      i++; k++;
   }
   while(j<nr) {     
      a[k] = a_r[j];
      j++; k++;
   }
}
void mergeSort(int *a, int l, int r) {
   int m;
   if(l < r) {
      int m = l+(r-l)/2;
      mergeSort(a, l, m);
      mergeSort(a, m+1, r);
      merge(a, l, m, r);
   }
}
int main() {
   int n;
   cout << "Enter the number of elements: ";
   cin >> n;
   int arr[n];     
   cout << "Enter elements:" << endl;
   for(int i = 0; i<n; i++) {
      cin >> arr[i];
   }
   cout << "Array before Sorting: ";
   for(int i = 0; i<n; i++) {
      cout<<arr[i];
   }

   mergeSort(arr, 0, n-1);     
   cout << "\n\nArray after Sorting: ";
   for(int i = 0; i<n; i++) {
      cout<<arr[i];
   }

}

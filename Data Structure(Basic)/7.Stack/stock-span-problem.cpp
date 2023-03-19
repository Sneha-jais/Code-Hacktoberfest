#include <bits/stdc++.h>
using namespace std; 

void calculateSpan(int price[], int n, int S[]) 
{ 
    S[0] = 1;
  
    for (int i = 1; i < n; i++) 
    {
        for (int j = i - 1; (j >= 0) && 
                (price[i] >= price[j]); j--) 
            S[i]++; 
    } 
} 
  
 
void printArray(int arr[], int n) 
{ 
    for (int i = 0; i < n; i++) 
        cout << arr[i] << " "; 
} 



int main() 
{ 
    int price[] = { 110, 14, -5, 930, 20, 84 }; 
    int n = sizeof(price) / sizeof(price[0]); 
    int S[n]; 
    calculateSpan(price, n, S); 
    printArray(S, n); 
  
    return 0; 
} 
  

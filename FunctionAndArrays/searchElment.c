#include <stdio.h>
#define MAX 100  
int main()
{
    int arr[MAX];
    int size, i, search, flag;
    printf("Enter size of array: ");
    scanf("%d", &size);
    printf("Enter elements in array: ");
    for(i=0; i<size; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("\nEnter element to search: ");
    scanf("%d", &search);
    flag = 0; 
    for(i=0; i<size; i++)
    {
        if(arr[i] == search)
        {
            flag = 1;
            break;
        }
    }
    if(flag == 1)
    {
        printf("\n%d is found at position %d", search, i + 1);
    }
    else
    {
        printf("\n%d is not found in the array", search);
    }
    return 0;
}

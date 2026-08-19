// Traversing code in c 
// eg:
#include<stdio.h>
int main()
{
    int a[5] = {1,2,3,4,5};
    for(int i = 0; i<5; i++)
    {
        printf("%d", a[i]);
    }
    return 0;
}
// basic code in arrays :

#include<stdio.h>
void main()
{
    int arr[100];
    int n;

    printf("enter the elements :");
    scanf("%d", &n);
    printf("enter %d elements \n", n);

    for(int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("array elements are :\n");
    for( int i=0; i<n; i++)
    {
        printf("%d", arr[i]);
    }
    
}

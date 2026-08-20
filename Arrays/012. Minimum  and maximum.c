// Minimum and maximum code in c programming language using array traversing operation :
#include<stdio.h>
int main()
{
    int a[100];
    int n;

    printf("enter the elements :");
    scanf("%d", &n);
    printf("the %d elements are \n", n);

    for(int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("the array elements are : \n");
    for(int i = 0; i < n; i++)
    {
        printf("%d\n", a[i]);
    }

    int max = a[1];
    for(int i = 1; i < n; i++)
    {
        if(a[i]>max)
        printf("the maximum element of an array is %d", a[i]);
    }
    return 0;
}

// this is the code using c programming language to print the maximum of an array 

#include<stdio.h>
int main()
{
    int a[100];
    int n;

    printf("enter the elements :");
    scanf("%d", &n);
    printf("enter %d the elements :\n", n);

    for (int i = 0; i <n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("the array elements are :\n");
    for(int i = 0; i < n; i++)
    {
        printf("%d\n", a[i]);
    }

    int min = a[1];
    for( int i = 0; i < n; i++)
    {
        if(a[i]<min)
        printf("the minimum element of an array is %d", a[i]);
    }
    return 0;

}

//  this is the code of minimum of an array using c programming language .
#include<stdio.h>
int main()
{
    int a[100];
    int n;
    printf("enter the array elements :");
    scanf("%d", &n);
    printf("entered %d elements \n", n);
    
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    
    printf("the array elements are :");
    
    for (int i = 0; i < n; i++)
    {
        printf("%d\n", a[i]);
    }
    int max = a[0];
    for (int i = 0; i < n; i++)
        if (a[i]>max) 
        {
            max = a[i];
        }
        printf("the maximum of an array element is %d\n", max);
    int min = a[0];
    for (int i = 0; i < n; i++)
        if (a[i]<min)
        {
            min = a[i];
        }
        printf("the minimum element of an array is %d", min);
        return 0;
        
    
}

// the run time complexity of the three code is O(n).
// and the space time complexity is O(1).

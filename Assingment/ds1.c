#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>

int main()
{
    int m,n,p,temp;
    printf("Enter the size of first array: ");
    scanf("%d",&m);
    printf("Enter the size of second element: ");
    scanf("%d",&n);

    p=m+n;
    
    int x[m];
    int y[n];
    int i,j;

    printf("Enter the elemet of first array: ");
    for(i=0;i<m;i++)
    {
        scanf("%d",&x[i]);
    }

    printf("Enter the elemet of Second array: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&y[i]);
    }

    printf("Befor Sorting\n");

    printf("\nThe first array is: ");
    for(i=0;i<m;i++)
    {
        printf("%d ",x[i]);
    }

    printf("\nThe Second array is: ");
    for(i=0;i<n;i++)
    {
        printf("%d ",y[i]);
    }
    printf("\n");

    int merge[p];
    
    
    for(i=0;i<m;i++)
    {
        merge[i]=x[i];
    }
    for(i=0,j=m;j<p && i<n;i++,j++)
    {
        merge[j]=y[i];
    }

    printf("Merged array: ");
    for(i=0;i<p;i++)
    {
        printf("%d ",merge[i]);
    }
    printf("\n");

    for(i=0;i<p;i++)
    {
        for(j=i+1;j<p;j++)
        {
            if(merge[i]>merge[j])
            {
                temp =merge[i];
                merge[i]=merge[j];
                merge[j]=temp;
            }
        }
    }

    printf("\nAfter Sorting\n");
    printf("The sorted array is : ");
    for(i=0;i<p;i++)
    {
        printf("%d ",merge[i]);
    }
    printf("\n");

    for(i=0;i<m;i++)
    {
        x[i]=merge[i];
    }
    

    printf("The First array after sorting: ");
    for(i=0;i<m;i++)
    {
        printf("%d ",x[i]);
    }
    printf("\n");
    for(i=0,j=m;i<n,j<p;i++,j++)
    {
        y[i]=merge[j];
    }

    printf("The Second array after sorting: ");
    for(i=0;i<n;i++)
    {
        printf("%d ",y[i]);
    }
    printf("\n");
    return 0;
}

#include<stdio.h>
#include<conio.h>
void main()
{
    int a[10],b[10],c[20];
    int i,j=0,k,n,n1,n2,n3,found=0;

    printf("Enter total number elements of a\n");
    scanf("%d",&n1);

    printf("Enter element of a\n");
    for(i=0; i<n1; i++)
    {
        scanf("%d",&a[i]);
    }

    printf("Enter total number elements of b\n");
    scanf("%d",&n2);

    printf("Enter element of b\n");
    for(i=0; i<n2; i++)
    {
        scanf("%d",&b[i]);
    }

    for(i=0; i<n1; i++)
    {
        c[j]=a[i];
        j++;
    }

    for(i=0; i<n2; i++)
    {
        c[j]=b[i];
        j++;
    }

    printf("Merged array:\n");
    for(i=0; i<n3; i++)
    {
        printf("%d",c[i]);
        printf("\n");
    }

    getch();
}

#include<stdio.h>
int main()
{
    int i,j,n,count=1;
    printf("Enter the number of rows: ");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        for(j=i;j>=1;j--)
        {
            printf("%d",j%2);
        }
        printf("\n");
    }
}
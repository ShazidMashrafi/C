#include<stdio.h>
int main()
{
    int rows,cols,i,j;
    printf("Enter the number of rows: ");
    scanf("%d",&rows);
    printf("Enter the number of columns: ");
    scanf("%d",&cols);

    for(i=1;i<=rows;i++)
    {
        for(j=1;j<=cols;j++)
        {
            if(i==1 || i==rows || j==1 || j==cols)
                printf("*");
            else printf(" ");
        }
        printf("\n");
    }
}
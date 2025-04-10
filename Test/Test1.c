#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    printf("%d\n",n);
    if(n<1)
    {
        n=1;
    }
    int ct=0;
    for(int i=0; i<n; ++i)
    {
        ct++;
    }
    printf("%d",ct);
    return 0;
}
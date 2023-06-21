#include<stdio.h>
void main()
{
    int m,n,i,j,flag;
    printf("Enter the lower limit : ");
    scanf("%d",&m);
    printf("Enter the upper limit : ");
    scanf("%d",&n);
    for(i=m;i<=n;i++)
    {
        flag=0;
        for(j=2;j<i;j++)
        {
            if(i%j==0)
            {
                flag=1;
                break;
            }
        }
        if(flag==0){
            printf("%d\n",i);
        }
    }
}
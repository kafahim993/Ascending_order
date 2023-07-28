//ascending
#include<stdio.h>
int main()
{
    int a,n,i,c,j;
    printf("Enter number of the digits\n");
    scanf("%d",&n);
     printf("Enter the digits\n");
    int d[n];
      for(i=0;i<n;i++)
        scanf("%d",&d[i]);
        
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(d[j]>d[j+1])
            {
              c=d[j];
                d[j]=d[j+1];
              d[j+1]=c;
           
            }
        }
    }
    for(i=0;i<n;i++)
    printf("%d ",d[i]);
    return 0;
}
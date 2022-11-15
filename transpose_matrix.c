#include<stdio.h>
int main()
{
    int a[3][3]={1,2,3,4,5,6,7,8,9};
    int i,j,n=3,temp;
   
    for(i=0;i<n;i++)
    for(j=0;j<n;j++)
    {
      temp=a[j][i];
      a[j][i]=a[i][j];
      a[i][j]=temp;
    }
    for(i=0;i<n;i++)
    {
    for(j=0;j<n;j++)
    printf("%d ",a[j][i]);
    printf("\n");
    }
}



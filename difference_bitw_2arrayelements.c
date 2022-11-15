#include <stdio.h>
int main()
{
    int arr[]={1,3,5,2,100,7,8,10},n,i,j,diff=0,s=0,t=0;
    n=sizeof(arr)/sizeof(arr[0]);
    for(i=0,j=i+1;i<n-1;i++,j++)
    {
      diff=arr[i]-arr[j];
      if(diff>s)
          s=diff;
      else if(diff<t)
      t=diff;
    }
    t=t*(-1);
    if(s>t)
    printf("%d ",s);
    else if(s<t) printf("%d ",t);
    else printf("%d ",t);
}


#include<stdio.h>
void main()
{
  int a[10],i,n,j=1;
  int m=0,z=0,b[7];
 printf("enter the number of element\n");
 scanf("%d",&n);
 printf("enter the marks\n");
 for(i=0;i<n;i++)
 {
  scanf("%d",&a[i]);
 }
 while(m!=n-1)
 {
  if(a[m]>a[j])
  {
   if(j==n-1)
    {
      b[z]=a[m];
      z++;
      m++;
      j=m+1;
    }
  else
    {
      j++;
    }
  }
 else
  {
   m++;
   j=m+1;
  }
 }
b[z]=a[n-1];
for(i=0;i<z+1;i++)
{
 printf("\n%d",b[i]);
}
}
#include <stdio.h>
int main() 
{
  int n,key,i;
  //printf("Enter the no.of elements\n");
  scanf("%d",&n);
  //printf("Enter the element to be found\n");
  scanf("%d",&key);
  int a[n];
  //printf("Enter the array elements\n");
  for(i=0;i<n;i++)
  {
     scanf("%d",&a[i]);
  }
  for(i=0;i<n;i++)
  {
	  if(a[i]==key)
	  {
		    printf("%d",i);
		    break;
	  }
  }
  if(i==n)
  {
  	printf("-1");
  }  
}

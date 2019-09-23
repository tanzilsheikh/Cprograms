#include<stdio.h>

int main()

{

	int n, i, sum=0;

	scanf("%d",&n);

	for(i=1; i<= 2*n; i++)

	if(i%2==0)

	sum= sum + i*i;

	printf("Sum of square of %d even numbers is %d\n", n, sum);

	return 0;

}
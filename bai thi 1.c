#include<stdio.h>
void main()
{
	int i=0;
	int s=0;
	int n;
	printf("\n enter the number n");
	scanf("%d",&n);
	while(i++<n)
	s=s+i;
	printf(" sum is: %d\n",s);
	getch();
}

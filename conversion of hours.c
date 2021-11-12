#include<stdio.h>
void main()
{
	int m,h,min;
	printf("enter the minutes");
	scanf(" %d",&m);
	h=m/60;
	min=m%60;
	printf("%d hours,%d minutes",h,min);
}

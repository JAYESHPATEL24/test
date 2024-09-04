#include<stdio.h>
int sum(int x,int y)
{
	int z=x+y;
	return z;
}
int main()
{
	int a,b;
	printf("Enter : ");
	scanf("%d %d",&a,&b);
	int c=sum(a,b);
	printf("sum = %d",c);
	printf("good");
    return 0;
}


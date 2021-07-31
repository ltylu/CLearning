#include<stdio.h>

int mysum(int num1,int num2)
{
	return num1+num2;
}



int main()
{
//	int a=1,b=2,c;
//	c=mysum(a,b);
//	printf("%d",c);
    int b=2;
    int* a=&b;
    float c=1.1111114;
    printf("%d,%d,%f",b,*a,c);


	return 0;
}


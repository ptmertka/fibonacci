#include<stdio.h>

int main()
{
	int i, n = 10;
	int a = 0;
	int b = 1;
	int c = a +b;
	printf("%d ", a);
	printf("%d ", b);

	for(i = 1; i <= n; ++i){
		printf("%d ",c );
		a = b;
		b = c;
		c = a+b;
		
	}
	return 0;
}

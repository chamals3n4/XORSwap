#include <stdio.h>

int main(){

	/*
		a = 1010 
		b = 0010
		---------
		a = 1010    (a XOR b)
		b = 1010    (b XOR a)
		a = 0010	(a XOR b)

		a b z
		0 0 0
		0 1 1
		1 0 1
		1 1 0
	*/

	int a = 10;
	int b = 2;
	printf("Before SWAP : ");
	printf("a is %d and b is %d\n",a,b);
	a = a^b;
	b=b^a;
	a=a^b;
	printf("After SWAP : ");
	printf("a is %d and b is %d\n",a,b);

	return 0;
}

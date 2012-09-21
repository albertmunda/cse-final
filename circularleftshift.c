#include<stdio.h>
typedef struct
{
unsigned a:5;
unsigned b:5;
}bits;
bits one;
int main()
{
	 //y = (x >> shift) | (x << (sizeof(x)*CHAR_BIT - shift));
	one.b=(16<<1) | (16>>(5-1));
	printf("%d",one.b);
}
//Simple calculator
//Copywright Gregory Soukup 2021. See github license file for full terms.


#include <stdio.h>



int main()
{
	int f;
	int s;
	scanf_s("%d", &f);
	scanf_s("%d", &s);
	f = power(f, s);
	printf("%d \n",f);
	return 0;
}
//Simple calculator
//Copywright Gregory Soukup 2021. See github license file for full terms.


#include <stdio.h>



int main()
{
	float f;
	float s;
	scanf_s("%d", &f);
	scanf_s("%d", &s);
	f = root(f, s);
	printf("%.6f\n",f);
	return 0;
}
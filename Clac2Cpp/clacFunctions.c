//This File stores the functions used by the main method


//inputs two ints and returns their sum
int add(int a, int b)
{
	a = a + b;
	return a;
}

//inputs two ints and returns a - b
int subtract(int a, int b)
{
	a = a - b;
	return a;
}


//inputs two ints and returns their product
int multiply(int a, int b)
{
	a = a * b;
	return a;
}


//inputs two ints and returns int a divided by int b
int divide(int a, int b)
{
	a = a / b;
	return a;
}


//inputs two ints and returns int a mod int b
int modulous(int a, int b)
{
	a = a % b;
	return a;
}


//inputs two ints and returns int a to the power of int b
int power(int a, int b)
{
	for (int i = 1; i < b; i++)
	{
		a = a * a;
	}
	return a;
}

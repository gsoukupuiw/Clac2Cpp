//This File stores the functions used by the main method


//inputs two ints and returns their sum
float add(float a, float b)
{
	a = a + b;
	return a;
}

//inputs two ints and returns a - b
float subtract(float a, float b)
{
	a = a - b;
	return a;
}


//inputs two ints and returns their product
float multiply(float a, float b)
{
	a = a * b;
	return a;
}


//inputs two ints and returns int a divided by int b
float divide(float a, float b)
{
	a = a / b;
	return a;
}


//inputs two ints and returns int a mod int b
float modulous(float a, float b)
{
	//a = a % b;
	return a;
}


//inputs two ints and returns int a to the power of int b
float power(float a, float b)
{
	float c = a;
	for (int i = 1; i < b; i++)
	{
		a = a * c;
	}
	return a;
}


//inputs two ints and returns the b root of a
float root(float a, float b)
{
	float c = (1/b);
	for (float i = 1; i < b; i++)
	{
		a = a * c;
	}
	return a;
}

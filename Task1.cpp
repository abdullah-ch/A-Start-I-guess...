// ConsoleApplication67.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"


using namespace std;
#include <iostream>

// Functions Protoyypes
void  binaryToDecimal(int);
void  decimalToBinary(int);
int isBinary(int);
void Process(float);
void takePower(float);
double Power_Function(double, int);


// this function  is an overload function and wil only execute when user enters the  float number and its body will call respective functions
 float Number(float x)
{
	Process(x);
	takePower(x);

	return x;
}

// this function  is an overload function and wil only execute when user enters the  int number and its body will call respective functions

 int Number(int y)
{

	isBinary(y);

	return y;
}

/* this function will check if the entered integer is binary or not...for checking the binary it will first take the binary of the entered number
and will check if it is equal to 1s and 0s or not..if not then it will break and if it's still in decimal it will divide it by 10 and
process will go on until it is converted into either 0s or 1s  and till then a counter will be increasing and if its value if above 0 then
it wont be a binary number and then it will be converted from decimal into binary and if the counter is not greater than 0
its in binary then it will be converted  from binary to decimal ....its an inline functionas it will send a request to the compiler to add this
body of function to the body of that function which calls it........*/

inline int isBinary(int z)
{
	int number = z;
	int counter = 0;
	int Binarry = 0;
	while (number != 0)
	{
		Binarry = number % 10;

		if ((Binarry != 0) && (Binarry != 1))
		{
			counter++;
			break;
		}
		number = number / 10;
	}
	if (counter>0)
	{
		cout << "Number is not Binary " << endl;
		decimalToBinary(z);

	}
	else
	{
		cout << "The number is Binary" << endl;
		binaryToDecimal(z);
	}
	return number;
}

/* it this function the binary number will work as our loop controller when it will be true for the loop i.e 1 , it's modulus with  the our number
will be stored and ur number will then be divided with 10 AGAIN and in the end the product from that divided number and the absolute modulus one will
be
added into our decimal value and this step will go again and again until the loops condition is to be nullified.
*/
 void  binaryToDecimal(int q)
{
	int number = q;
	int decimal_Value = 0;
	int base = 1;
	int house = number;
	while (house)
	{
		int Last_Digit = house % 10;
		house = house / 10;

		decimal_Value += Last_Digit * base;
		base = base * 2;
	}
	cout << " Binary to Decimal conversion is " << decimal_Value << endl;
}
/* in this function, our decimal number's modulus with 10 will be stored in an array and then we will divide the number with 2 as the base
of binary is always 2.....then if the number becomes 0 it will break the if condition and the counter will be stopped..counter is used to
making the printing of the binary easier....and then a loop will start from counter to 0 as to avoid printing the last entry of loop i.e the null..
*/
 void  decimalToBinary(int L)
{
	int size;
	size = 20;
	int counter = 0;

	int *Array = new int[size];

	for (int i = 0; i < size; i++)
	{
		Array[i] = L % 2;
		L /= 2;
		counter++;
		if (L == 0)
		{
			break;
		}

	}


	for (int i = counter - 1; i > -1; i--)
	{
		cout << Array[i];
	}
	cout << endl;


}

/* This function is used to separate the float number into integer part and making the numbers after the decimal part also in integer form
for this we will simply type cast float into int inorder to print the numbers before the decimal part and then float number will be substracted
from the in number and a loop will go on until the float number becomes equal to the integer number which can only happen until we multiply both of
them until the decimal portion of the float is converted into the integeral form and then the integral form of the orignal number is multipled with 10
raised to power to the number of 10s it is taken to make the float and the integer equal...
*/


 void Process(float Wilson)
{
	int L = Wilson;
	int counter = 0;
	cout << "The number before the decimal point  " << L << endl;
	float House;
	House = Wilson - L;
	while (Wilson != (int)Wilson)
	{
		Wilson *= 10;
		counter++;
	}
	cout << "The number after decimal point " << House*Power_Function(10, counter) << endl;

}

/* Similar like above but only this the integeral part is taken to power with the numbers after the decimal part... for this the numbers
which were after the decimal point are stored into a variable by doing exactly the same procedure as done above and then..this stored valve is
raised to power to the integral part of the original number*/
 void takePower(float Cuddy)
{

	int Chase = Cuddy;
	int counter1 = 0;

	float Foreman;
	Foreman = Cuddy - Chase;
	while (Cuddy != (int)Cuddy)
	{
		Cuddy *= 10;
		counter1++;
	}
	int Hannibal;
	Hannibal = Foreman*Power_Function(10, counter1);

	cout << "The Answer after raised to power is the following " << Power_Function(Chase, Hannibal) << endl;


}

/* this power function will calculate the power for this the entered Y value will be the power to which the X base will be raised .......
Actually the loop will keep on multiplying the x with y until the iterater becomes just less than y and if the y is 0 then 1 will be printed
and in tern of negative number the same procedure will be don but just only in reciprocal it will be calculated.
*/

 double Power_Function(double x, int y)
{
	double Power = 1;
	if (y > 0)
	{
		for (int i = 0; i < y; i++)
		{
			Power = x*Power;
		}
		cout << endl;


	}

	if (y == 0)
	{
		cout << " The Number raised to Power is: " << 1 << endl;
	}

	if (y < 0)
	{
		int positive = y*-1;

		for (int u = 0; u < positive; u++)
		{
			Power = x*Power;
		}

		cout << endl;
		cout << " The Number raised to Power is: " << endl;
		cout << 1 / Power << endl;
	}

	return Power;
}




int main()
{

	float number;
	cout << "Enter the number you want to enter" << endl;
	cin >> number;
	/* this will decide which part of the function will be executed the Float one or the integer one,,,if entered number is in integer then only
	integer functions will be executed otherwise it will be the float one.........................
	*/
	if (number == (int)number)
	{
		Number((int)number);
	}
	else
	{
		Number(number);
	}



}

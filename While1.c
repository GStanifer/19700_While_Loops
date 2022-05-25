/*
Program:  while1.c
Made by:  Garrett Stanifer
Date:  2/22/2021
Use while loops to print values, sum values, and make a table
*/

#include <stdio.h>
#include <math.h>

int main()
{
	int k;
	int sum;
	int product;
	int n;
	int cube;
	printf("Even numbers between Six and Twenty\n");
	k = 6;
	while (k <= 20)
	{
		printf("%4d", k);
		k += 2;
	}
	printf("\n\nSum of integers between 2 and 14\n");
	sum = 0;
	k = 2;
	while (k < 15)
	{
		sum += k;
			k++;
	}
	printf("The sum is %d\n", sum);
	/*product = 1;
	k = 2;
	while (k < 15)
	{
		product *= k;
		k++;
	}
	printf("The product of the numbers is %d\n", product);
	*/
	printf("Integer  Cube\n");
	n = 1;
	cube = 1;
	while (cube<3000)
	{
		printf("%4d  %8d\n", n, cube);
		n++;
		cube = pow(n, 3);
	}
	return 0;
}

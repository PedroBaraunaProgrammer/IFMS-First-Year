#include <stdio.h>
int main ()
{
	//start three variables num1 and num2 and sum that is a type int.
	int n1,n2,sum;

	//print a text message asking to write two numbers and get this numbers.
	printf("enter a number");
	scanf("%d",&n1);

	printf("enter other number");
	scanf("%d",&n2);

	//sum this numbers and keep in the variable sum.
	sum = n1 + n2;

	//print the sum.
	printf("the sum result of this numbers is : %d",sum);
}

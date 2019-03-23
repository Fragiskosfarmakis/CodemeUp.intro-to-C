#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
int sum, a;
printf("Please enter an integer number: ");
scanf("%d", &a);
sum = 0; 
while( a != 0)
{
	sum += a;
	printf("Please enter an integer number: ");
	scanf("%d", &a);
}

printf("The total of the numbers is: %d.\n", sum);


}

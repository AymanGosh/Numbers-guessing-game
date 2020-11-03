/* Assignment: 1
Campus: Beer Sheva
Author: Ayman abedlrhman, ID: 311549737
*/

// First Question:
/*#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

enum number{ ZERO = 0, ONE, TWO, THREE, FOUR, FIVE, SIX, SEVEN, EIGHT, NINE, TEN, ELVEN, TWILEV, THIRTEEN, FOURTEEN, FIFTEEN };

int main()
{
	int ch;

	printf("Enter a number : ");
	scanf("%d", &ch);
	if (! (ch >= ZERO &&ch <= FIFTEEN ) )printf("error, wrong input!!\n");
	
	 if(ch==ZERO)printf("0 0 0 0");
	 if (ch == ONE) printf("0 0 0 1");
	 if (ch == TWO) printf("0 0 1 0");
	 if (ch == THREE) printf("0 0 1 1");
	 if (ch == FOUR) printf("0 1 0 0");
	 if (ch == FIVE ) printf("0 1 0 1");
	 if (ch == SIX) printf("0 1 1 0");
	 if (ch == SEVEN) printf("0 1 1 1");
	 if (ch == EIGHT) printf("1 0 0 0");
	 if (ch == NINE) printf("1 0 0 1");
	 if (ch ==TEN) printf("1 0 0 0");
	 if (ch == ELVEN) printf("1 0 0 1");
	 if (ch == TWILEV ) printf("1 1 0 0");
	 if (ch == THIRTEEN ) printf("1 1 0 1");
	 if (ch == FOURTEEN ) printf("1 1 0 0");
	 if (ch == FIFTEEN ) printf("1 1 0 1");

	printf("\n");
	return 0 ;
	}*/
//Second Question:
/*#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define thousand 1000
#define hundred 100
#define ten 10

int main()
{
int ch, a, b, c, d;

printf("Enter a number :");
scanf("%d", &ch);

a = ch / thousand;
b = (ch / hundred) % ten;
c = (ch % hundred) / ten;
d = ch % ten;

if (d > c && c > b && b > a)
{
printf("ASC\n");
}
else
{
if (a > b && b > c && c > d)
{
printf("DESC\n");
}else printf("error, wrong input\n");
}
return 0;
}*/
//Third Question
/*#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define one 1
#define two 2
int main()
{
float a1, d, an, Sn;
int makom;

printf("Enter the first number of the sequence : ");
scanf("%f", &a1);
printf("\n");
printf("Enter the fresh of the sequence : ");
scanf("%f", &d);
printf("\n");
printf("Enter which 'n'(makom) you want to know  : ");
scanf("%d", &makom);

an = a1 + (makom - one)*d;

Sn = (makom*(a1 + an)) / two;

printf("\n");
printf("The %d number in the sequence is:  %f\n\n", makom, an);

printf("The sum of all the numbers till the %d number is:  %f\n\n", makom, Sn);
return 0;
}*/
//Fourth Question
/*#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define three 3
#define two 2
#define one 1

int main()
{
int choice,ch;
printf("wich choice you want ?\n1)root\n2)integration\n3)matrix\n");
scanf("%d", &choice);


switch (choice)
{
case one:
{
printf("wich choice you want ?\n1)newton\n2)secant\n3)bisection\n");
scanf("%d", &ch);
switch (ch)
{
case one: printf("The result of <root>.<newton> result is: ___\n"); break;
case two: printf("The result of <root>.<secant> result is: ___\n"); break;
case three:  printf("The result of <root>.<bisection> result is: ___\n"); break;
default: printf("Error choice ! \n"); break;
}
break;
}

case two:
{
printf("wich choice you want ?\n1)remberg\n2)trapezoidal\n3)simpson\n");
scanf("%d", &ch);
switch (ch)
{
case one: printf("The result of <integration>.<remberg> result is: ___\n"); break;
case two: printf("The result of <integration>.<trapezoidal> result is: ___\n"); break;
case three:  printf("The result of <integration>.<simpson> result is: ___\n"); break;
default:printf("Error choice ! \n"); break;
}
break; }

case three:
{
printf("wich choice you want ?\n1)jacobi\n2)Gauss-seidel\n3)(SOR)Succesive Over Relaxation\n");
scanf("%d", &ch);
switch (ch)
{
case one: printf("The result of <matrix>.<jacobi> result is: ___\n"); break;
case two: printf("The result of <matrix>.<Gauss-seidel> result is: ___\n"); break;
case three:  printf("The result of <matrix>.<(SOR)Succesive Over Relaxation> result is: ___\n"); break;
default:printf("Error choice ! \n"); break;
}
break; }


default:printf("Error choice ! \n"); break;

}
return 0 ;
}*/
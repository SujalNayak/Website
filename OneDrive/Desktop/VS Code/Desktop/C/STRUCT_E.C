#include <stdio.h>
//#include<conio.h>
//#define SIZE 1

/*Write a C structure program to store names, population and area of 5 cities.
Use structure and prints largest and most populas city*/
/*struct city
{
	int pop,area;
	char name[30];
};
void main()
{
	int i,max=0,max_pop_city,large=0,pop[SIZE],area[SIZE];
	struct city name[SIZE][30];
	clrscr();
	for(i=0;i<SIZE;i++)
	{
		printf("Enter name of city %d: \n",i);
		fflush(stdin);
		gets(name[i]);
		//scanf("%s",name[i]);
		printf("\nEnter population of the %s: \n",name[i]);
		scanf("%d",&pop[i]);
		printf("\nEnter area of the %s: \n",name[i]);
		scanf("%d",&area[i]);
	}
	printf("\nSr No.\tName\tPopulation\tArea");
	for(i=0;i<SIZE;i++)
	{
		printf("\n%d\t%s\t\t%d\t%d\n",i+1,name[i],pop[i],area[i]);
	}
	max=pop[0];
	max_pop_city=0;
		for(i=0;i<SIZE;i++)
		{
			if(pop[i]>max)
			{
				max=pop[i];
				max_pop_city=i;
			}
		}

	printf("\nMost populated city is %s",name[max_pop_city]);
	large=area[0];
		for(i=0;i<SIZE;i++)
		{
			if(area[i]>large)
			{
				large=area[i];
			}
		}

	printf("\nLargest city is %s",name);

	getch();
}
*/

/*Write a c program to store the names salary and work per day of
10 employees in a company .write a c program to increase the salary
depending on the no. of hours  of week per day as follows and then
print the name of all employees along with the final salaries .

hours of week per day	8	10	>=12
increase in salary	$50	$100	$150

#define SIZE 3
struct employees
{
	int workpd,salary,incmt_salary;
	char name[50];
};
void main()
{
	int i;
	struct employees emp[SIZE];
	clrscr();
	for(i=0;i<SIZE;i++)
	{
		printf("\nEnter the name of employee %d\n",i+1);
		fflush(stdin);
		gets(emp[i].name);
		printf("\nEnter working hours per day of %s\n",emp[i].name);
		scanf("%d",&emp[i].workpd);
		printf("\nEnter current salary of %s\n",emp[i].name);
		scanf("%d",&emp[i].salary);
	}
	printf("\nSr No.\tName\tWork/day\tCurrent Salary");
	for(i=0;i<SIZE;i++)
	{
		printf("\n%d\t%s\t%d\t\t%d",i+1,emp[i].name,emp[i].workpd,emp[i].salary);
	}
	printf("\n\nAfter increment\n\n");
	for(i=0;i<SIZE;i++)
	{
		if(8<=emp[i].workpd && emp[i].workpd<10)
		{
			emp[i].incmt_salary=emp[i].salary+50;
		}
		else if(10<=emp[i].workpd && emp[i].workpd<12)
		{
			emp[i].incmt_salary=emp[i].salary+100;
		}
		else if(emp[i].workpd>=12)
		{
			emp[i].incmt_salary=emp[i].salary+150;
		}
		else
		{
			emp[i].incmt_salary=emp[i].salary;
		}
	}
	printf("\nSr No.\tName\tWork/day\tFinal Salary");

	for(i=0;i<SIZE;i++)
	{
		printf("\n%d\t%s\t%d\t\t%d",i+1,emp[i].name,emp[i].workpd,emp[i].incmt_salary);
	}
	getch();
}*/

/*Write a C structure to store a real part and imaginary part of a
complex number. Write a main program that takes two complex numbers
from user and print their addition.
*/
/*struct complex
{
	int real, imag;
} a[2], b[2];
main()
{
	int final_real, final_imag, a_c, b_c, a_d, b_d, a_a, b_b, c_c, d_d;

	printf("Enter two real numbers\n");
	scanf("%d%d", &a[0].real, &a[1].real);
	printf("\nEnter two imaginary numbers\n");
	scanf("%d%d", &b[0].imag, &b[1].imag);

	printf("\nFirst Complex number is %d + i%d", a[0].real, b[0].imag);
	printf("\nSecond Complex number is %d + i%d", a[1].real, b[1].imag);
	printf("\n\nAddition of two complex number is\n\n");
	final_real = a[0].real + a[1].real;
	final_imag = b[0].imag + b[1].imag;
	printf("%d + i%d", final_real, final_imag);
	a_c = a[0].real * a[1].real;
	b_c = a[1].real * b[0].imag;
	a_d = a[0].real * b[1].imag;
	b_d = b[0].imag * b[1].imag;
	a_a = a[0].real * a[0].real;
	b_b = b[0].imag * b[0].imag;
	c_c = a[1].real * a[1].real;
	d_d = b[1].imag * b[1].imag;
	printf("\n\nMultiplication of two complex number\n\n");
	printf("%d + i%d", (a_c) - (b_d), (a_d) + (b_c));
	printf("\n\nDivision of two complex number\n\n");
	printf("%.2f + i%.2f", float(a_c + b_d) / (c_c + d_d), float(b_c - a_d) / (c_c + d_d));
	return 0;
}
*/

/* Write a C program that uses a structure to store length of a wooden block in feet and inches (both integers)
Write a main program arround it that takes length of two wooden logs from user , stores them in the structure
and prints the total length of wooden log (in feet and inches) fround by joining them.
*/
struct length
{
	int feet, inch;
} w1, w2;
int main()
{
	int fee, inc;
	printf("Enter feet of first wooden log\n");
	scanf("%d", &w1.feet);
	printf("\nEnter inches of first wooden log\n");
	scanf("%d", &w1.inch);
	printf("Enter feet of second wooden log\n");
	scanf("%d", &w2.feet);
	printf("\nEnter inches of second wooden log\n");
	scanf("%d", &w2.inch);
	printf("\nLength of first wooden log is %d.%d", w1.feet, w1.inch);
	printf("\nLength of second wooden log is %d.%d", w2.feet, w2.inch);

	fee = w1.feet + w2.feet;
	inc = w1.inch + w2.inch;
	if (inc > 12)
	{
		fee++;
		inc = inc - 12;
	}
	printf("\nTotal length is %d.%d", fee, inc);

	
	return 0;
}
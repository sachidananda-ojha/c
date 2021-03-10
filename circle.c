#include<stdio.h>
#include<conio.h>
void main()
{
	int radious;
	float pi=3.141;
	float area,perimeter;
	printf("\n Enter a radious of the circle");
	scanf("%f",&radious);
	area=pi*radious*radious;
	printf("\n Area of the circle is:%f",area);
	perimeter=2*pi*radious;
	printf("\n Perimeter of the area is:%f",perimeter);
	getch();
}

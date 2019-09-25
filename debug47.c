//1. How many variables are created and destroyed in this program.
//2. Identify an error in this program

#include <stdio.h>

int get_an_int()
{
	int len;
	scanf("%d",len);
	return len;
}

int compute_area(int len, int wid)
{
	return len*wid;
}

int main()
{
	int length, width;
	printf("Enter length of rectangle:"); 
	length=get_an_int();
	printf("Enter width of rectangle:"); 
	width=get_an_int();
	int area=length*width;
	printf("The area of rectangle is %d",compute_area(length,width));
	return 0;
}


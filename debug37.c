//The following code is meant for printing the sum of integer numbers between two given numbers (low and high) and it is free from syntax errors. The task is to check whether the given program contains logical error or not.  If logical error is present, indicate the error.           

#include <stdio.h>
int main()
{
        int temp, low, high, i, sum;
        sum = 0; 
        printf(" Enter an integer :\n");
        scanf("%d", &low);
        printf(" Enter another integer which is higher than earlier one: \n");
        scanf("%d", &high);
        if (high<low)
        {
              printf(" You have  entered wrong, let me correct it\n");
              temp=low;
              low=high;
              high=temp;
        }
        for(i=low; low<=high; i++)
        {
              sum+=i;
        }
        printf(" The sum of integer from %d to  %d is %d \n", low, high, sum);
	return 0;
}


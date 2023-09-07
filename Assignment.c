/*program to read number between 10 and 99 and splitting number into 3 integer numbers and finding the biggest number 
in them and finding factors for the biggest number*/

#include<stdio.h>
int main()
 {
    int  i,num, a, b, c , biggest ;
    printf("Enter a number between 10 and 99: ");
    scanf("%d", &num);
// checking wheither the number is in the range of 10 and 99.
    if (num < 10 || num > 99)
     {
        printf("Warning the number is not in the range!\n");
     } 
     else {                     //Splitting number int 3 integer numbers
        a = (num / 10) * 10;    // extract a digit and multiply by 10
        b = num / a;            // subtract a digit to get b digit
        c = num - a - b ;       // calculate c number as difference

        printf("%d = %d + %d + %d \n", num, a,  c , b);

    // Finding biggest number among them

        biggest =a;
        if (b > biggest) 
        {
            biggest = b;
        }
        if (c > biggest) 
        {
            biggest = c;
        }

        printf("The biggest number is: %d\n", biggest);

    // Finding factors of the biggest number 

        printf("The factors of %d are: ", biggest);
        for (i = 1; i <= biggest; i++) 
		{
            if (biggest % i == 0) 
			{
                printf("%d ", i);
            }
        }
	}
    return 0;

}

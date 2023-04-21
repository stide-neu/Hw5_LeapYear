/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int year;
printf("Enter the year:");
scanf("%d",&year);
if(year%400==0){
    printf("%d is a leap years.",year);
}
else if(year%100==0){
    printf("%d is not a leap years.",year );
    
}
else if(year%400==0) {
    printf("%d is a leap years.",year);
}
printf("%d is not a leap years.",year );
    
    return 0;
}

#include <stdio.h>


int main()
{
    int year;
    printf("\n Enter the year \t");
    scanf("%d",&year);
    
    if(year%4==0 && year%100!=0)
    printf("\n %d is a leap year",year);
    
    else if(year%400 == 0)
    printf("%d is a leap year",year);
    
    else
    printf("\n %d is not a Leap Year", year);
    return 0;
}

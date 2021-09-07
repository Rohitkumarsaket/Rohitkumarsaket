#include<stdio.h>
int main(){
    int year;
    
    printf("Enter year\n");
    scanf("%d",&year);
    if ( (year%400==0)||(year%4==0 && year%100!=0) )
    {
        printf("This year is Leap year\n");
    }else {
        printf("This year not Leap year\n");
    }
    

return 0;
}

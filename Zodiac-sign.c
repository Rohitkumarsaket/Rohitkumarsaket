
#include<stdio.h>

int main()

{
    int month , day ;

    printf("WELCOME......\n");
    printf("If you wanna know your Zodiac Sign according to your birth date....\nthen you're at the right place\n ");

    printf("\n Please enter your month of birth(1-12) : ");
    scanf("%d", &month);
    
    printf("\n Please enter your day of birth : ");
    scanf("%d",&day);

     if( (month == 12 && day >= 22) || (month == 1 && day <= 19) )  
    {  
        printf("Your Zodiac Sign according to your date of birth is Capricorn\n");  
    }  
    else if( (month == 1 && day >= 20) || (month == 2 && day <= 17) )  
    {  
        printf("Your Zodiac Sign according to your date of birth is Aquarius\n");  
    }  
    else if( (month == 2 && day >= 18) || (month == 3 && day <= 19) )  
    {  
        printf("Your Zodiac Sign according to your date of birth is Pisces\n");  
    }  
    else if( (month == 3 && day >= 20) || (month == 4 && day <= 19) )  
    {  
        printf("Your Zodiac Sign according to your date of birth is Aries\n");  
    }  
    else if( (month == 4 && day >= 20) || (month == 5 && day <= 20) )  
    {  
        printf("Your Zodiac Sign according to your date of birth is Taurus\n");  
    }  
    else if( (month == 5 && day >= 21) || (month == 6 && day <= 20) )  
    {  
        printf("Your Zodiac Sign according to your date of birth is Gemini\n");  
    }  
    else if( (month == 6 && day >= 21) || (month == 7 && day <= 22) )  
    {  
        printf("Your Zodiac Sign according to your date of birth is Cancer\n");  
    }  
    else if( (month == 7 && day >= 23) || (month == 8 && day <= 22) )  
    {  
        printf("Your Zodiac Sign according to your date of birth is Leo\n");  
    }  
    else if( (month == 8 && day >= 23) || (month == 9 && day <= 22) )  
    {  
        printf("Your Zodiac Sign according to your date of birth is Virgo\n");  
    }  
    else if( (month == 9 && day >= 23) || (month == 10 && day <= 22) )  
    {  
        printf("Your Zodiac Sign according to your date of birth is Libra\n");  
    }  
    else if( (month == 10 && day >= 23) || (month == 11 && day <= 21) )  
    {  
        printf("Your Zodiac Sign according to your date of birth is Scorpio\n");  
    }  
    else if( (month == 11 && day >= 22) || (month == 12 && day <= 21) )  
    {  
        printf("Your Zodiac Sign according to your date of birth is Sagittarius\n");  
    }  
    else  
    {  
        printf("The birth date you entered is invalid\n");  
    }  




    return 0;
}

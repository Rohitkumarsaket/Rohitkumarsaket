#include < stdio.h >

int main()
{
    int m, day;

    printf("Enter your birth month(1-12)\n");
    scanf("%d", &m);

    printf("Enter your birth day\n");
    scanf("%d", &day);

    if( (m == 12 && day >= 22) || (m == 1 && day <= 19) )
    {
        printf("Your Zodiac Sign based on your Birth date is Capricorn\n");
    }
    else if( (m == 1 && day >= 20) || (m == 2 && day <= 17) )
    {
        printf("Your Zodiac Sign based on your Birth date is Aquarius\n");
    }
    else if( (m == 2 && day >= 18) || (m == 3 && day <= 19) )
    {
        printf("Your Zodiac Sign based on your Birth date is Pisces\n");
    }
    else if( (m == 3 && day >= 20) || (m == 4 && day <= 19) )
    {
        printf("Your Zodiac Sign based on your Birth date is Aries\n");
    }
    else if( (m == 4 && day >= 20) || (m == 5 && day <= 20) )
    {
        printf("Your Zodiac Sign based on your Birth date is Taurus\n");
    }
    else if( (m == 5 && day >= 21) || (m == 6 && day <= 20) )
    {
        printf("Your Zodiac Sign based on your Birth date is Gemini\n");
    }
    else if( (m == 6 && day >= 21) || (m == 7 && day <= 22) )
    {
        printf("Your Zodiac Sign based on your Birth date is Cancer\n");
    }
    else if( (m == 7 && day >= 23) || (m == 8 && day <= 22) )
    {
        printf("Your Zodiac Sign based on your Birth date is Leo\n");
    }
    else if( (m == 8 && day >= 23) || (m == 9 && day <= 22) )
    {
        printf("Your Zodiac Sign based on your Birth date is Virgo\n");
    }
    else if( (m == 9 && day >= 23) || (m == 10 && day <= 22) )
    {
        printf("Your Zodiac Sign based on your Birth date is Libra\n");
    }
    else if( (m == 10 && day >= 23) || (m == 11 && day <= 21) )
    {
        printf("Your Zodiac Sign based on your Birth date is Scorpio\n");
    }
    else if( (m == 11 && day >= 22) || (m == 12 && day <= 21) )
    {
        printf("Your Zodiac Sign based on your Birth date is Sagittarius\n");
    }
    else
    {
        printf("Invalid Birth date entered\n");
    }
    return 0;
}

#include <stdio.h>
int main()
{
    float P, C, M, E, H, total_mark, percentage;
    printf("Physucs P:\n");
    scanf("%f", &P);
    printf("Chemistry C:\n");
    scanf("%f", &C);
    printf("Math M:\n");
    scanf("%f", &M);
    printf("English E:\n");
    scanf("%f", &E);
    printf("Hindi H:\n");
    scanf("%f", &H);

    total_mark = (P + C + M + E + H);

    printf("total_mark:%f\n", total_mark);

    percentage = total_mark / 5;

    printf("percentage :%f\n", percentage);

    if (percentage > 90)
    {
        printf("A+");
    }
    else if (percentage >= 75)
    {
        printf("A");
    }
    else if (percentage >= 60)
    {
        printf("B");
    }
    else if (percentage >= 45)
    {
        printf("C");
    }
    else if (percentage >= 33)
    {
        printf("very poor");
    }
    else
    {
        printf("fail");
    }

    return 0;
}

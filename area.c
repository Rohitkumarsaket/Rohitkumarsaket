#include<stdio.h>
int main(){
    int radius_of_circle,height_of_tringle,base_of_tringle,width_of_rectangle,height_of_rectanle;
    float area_of_circle, area_of_tringle,area_of_rectangle, pi = 3.14;

    //Area of Tringle
    printf("Enter the height of the Triangle :\n");
    scanf("%d",&height_of_tringle);
    printf("Enter the base of the Triangle : \n");
    scanf("%d",&base_of_tringle);
    area_of_tringle = (height_of_tringle*base_of_tringle)/2;
    printf("The area of Tringle is = %f\n",area_of_tringle);

    //Area of Circle
    printf("Enter the Radius of Circle :\n");
    scanf("%d",&radius_of_circle);
    area_of_circle = pi*radius_of_circle*radius_of_circle;
    printf("The area of Circle is = %f\n",area_of_circle);

    //Area of Rectangle
    printf("Enter the height of Rectangle :\n");
    scanf("%d",&height_of_rectanle);
    printf("Enter the base of Rectangle :\n");
    scanf("%d",&width_of_rectangle);
    area_of_rectangle = height_of_rectanle * width_of_rectangle;
    printf("The area of Rectangle is %f :",area_of_rectangle);

return 0;
}

//4. WAP to find the area of the circle. Take radius of circle from user as input and print the result in below given format.
//Expected output format – “Area of circle is A having the radius R”. Replace A with area & R with radius.
#include<stdio.h>
int main()
{

    float A,R;
    printf("Enter the radius of the circle \n");
    scanf("%f",&R);
    A=3.14*R*R;
    printf("the Area of circle is %0.2f  having radius %0.2f ",A,R);
    return 0;


}  


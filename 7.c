#include<stdio.h>
#include<math.h>

int main(){
    float a,b,c;
    printf("Enter value of sides :");
    scanf("%f", &a);
    scanf("%f", &b);
    scanf("%f", &c);
    float s = (a+b+c)/2;
    float area = sqrt(s*(s-a)*(s-b)*(s-c));
    printf("Area of the required triangle is : %f", area);
    return 0;


}

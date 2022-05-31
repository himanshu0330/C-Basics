//C program to find cube of any number using function


#include <stdio.h>
double cube(double num);

int main()
{
    int num;
    double c;
    printf("Enter any number: ");
    scanf("%d", &num);
    c = cube(num);
    printf("Cube of %d is %.2f", num, c);     
    return 0;
}

//Function

double cube(double num)
{
    return (num * num * num);
}

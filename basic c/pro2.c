#include<stdio.h>
int main()
{
    int age;
    char name[20];
    float grade;

    
    printf("Enter your name: ");
    scanf("%s", name);  
    printf("Enter your age: ");
    scanf("%d", &age);  

    printf("Enter your grade: ");
    scanf("%f", &grade);

    
    printf("\n--- User Details ---\n");
    printf("Name: %s\n", name);
    printf("Age: %d\n", age);
    printf("Grade: %.2f\n", grade);

    return 0;
}
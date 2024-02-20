#include <stdio.h>
#include <stdlib.h>

//lets make some simple math functions!
int add(int a, int b) {
    return a + b;
}

int subtract(int a, int b) {
    return a - b;
} 

// int multiple(int a, int b) {
//     return a * b;
// }

// int divide(int a, int b) {
//     return a / b;
// } 

int main() {

    char name;
    int a;
    int b;
    printf("Hello, World!\n");
    printf("Press any key to continue...\n");
    printf("Enter the numbers you want to add: \n");
    printf("Enter number a: ");
    scanf("%d", &a);
    printf("Enter number b: ");
    scanf("%d", &b);
    printf("The sum of the numbers is: %d\n", add(a, b));

    // printf("Please state your full name: ");
    // scanf("%c", &name);
    // printf("Nice to meet you Mr. %c", &name);

    // printf("Enter the numbers you want to subtract!\n");
    // int c = scanf("Enter a number c: ", c);
    // int d = scanf("Enter a number d: ", d);
    // printf("The difference of the numbers is: %d\n", subtract(c, d));
    // this is wrong!!

    return 0;






}
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
    printf("Hello, World!\n");
    printf("Press any key to continue...\n");
    printf("Enter the numbers you want to add: \n");
    int a = scanf("Enter a number a: ", a);
    int b = scanf("Enter a number b: ", b);
    printf("The sum of the numbers is: %d\n", add(a, b));

    printf("Enter the numbers you want to subtract!\n");
    int c = scanf("Enter a number c: ", c);
    int d = scanf("Enter a number d: ", d);
    printf("The difference of the numbers is: %d\n", subtract(c, d));




}
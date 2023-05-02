#include <stdio.h>

// Variables
struct variables {
    int a;
    int b;
};

// Math Functions
int add(int num1, int num2) { return (num1 + num2); }
int sub(int num1, int num2) { return (num1 - num2); }
int mul(int num1, int num2) { return (num1 * num2); }
int div(int num1, int num2) { return (num1 / num2); }
int rem(int num1, int num2) { return (num1 % num2); }

// Output
void printer(int num1, int num2, int num3, int num4, int num5, int num6, int num7) {
    printf("%d + %d = %d \n", num1, num2, num3);
    printf("%d - %d = %d \n", num1, num2, num4);
    printf("%d * %d = %d \n", num1, num2, num5);
    printf("%d / %d = %d \n", num1, num2, num6);
    printf("%d %% %d = %d \n", num1, num2, num7);
}

// Main Function
int main() {
    // Init Variables
    struct variables vars;

    // Get numbers
    scanf("%d", &vars.a);
    scanf("%d", &vars.b);

    // Evaluate Results
    int c1 = add(vars.a, vars.b);
    int c2 = sub(vars.a, vars.b);
    int c3 = mul(vars.a, vars.b);
    int c4 = div(vars.a, vars.b);
    int c5 = rem(vars.a, vars.b);

    // ...And Print!
    printer(vars.a, vars.b, c1, c2, c3, c4, c5);
    
    // Yea, And also exit Program
    return 0;
}

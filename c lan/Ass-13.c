#include <stdio.h>

int main() {
    int A = 10; 
    long l = 1212; 
    char ch = 'a'; 
    float f = 1.2; 
    double d = 12.45;

    // Option 1: Print each on a new line with labels
    printf("Integer A: %d\n", A);
    printf("Long l: %ld\n", l);
    printf("Char ch: %c\n", ch);
    printf("Float f: %f\n", f);
    printf("Double d: %lf\n", d);

    // Option 2: Print all on a single line
    // printf("%d %ld %c %f %lf\n", A, l, ch, f, d);

    return 0;
}

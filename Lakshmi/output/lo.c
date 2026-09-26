#include <stdio.h>

int main() {
    int marks = 75;

    printf("Marks = %d\n", marks);

    printf("Pass (marks >= 35) = %d\n", marks >= 35);
    printf("Distinction (marks >= 75) = %d\n", marks >= 75);
    printf("Below 50 = %d\n", marks < 50);

    printf("Eligible = %d\n", marks >= 35 && marks <= 100);

    return 0;
}
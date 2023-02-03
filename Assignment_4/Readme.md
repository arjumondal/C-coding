# Questions 
              <==== Functions & Pointers ====>

1. Write a recursive function for finding the series of n:
            1^1 + 2^2 + 3^3 + 4^4 + ... + n^n
2. Write a C program to swap two values using pointers.
3. Write a program to calculate average of numbers between m and n using pointer.
4. Write a program in C to sort an array using Pointer.

#include <stdio.h>
#include <math.h>

double calculateSeries(int n);

int main() {
    int n;
    printf("Enter The Length of the Series:\t");
    scanf("%d", &n);
    printf("%lf", calculateSeries(n));
}

double calculateSeries(int n) {
    if (n == 1)
        return 1;
    return pow(n, n) + calculateSeries(n-1);
}
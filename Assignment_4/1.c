#include <stdio.h>
#include <math.h>

// Function to return the series sum
int series_sum(int current,int n){
    if(current > n)return 0; // Base condition. When current state reach beyond the maximum desired
    return pow(current,current) + series_sum(current+1,n); // current^current + series_sum(current+1,n);
}

int main() {
    int n;
    printf("enter the length of the series: ");
    scanf("%d",&n); // 1^1 + 2^2 + 3^3 ... n^n
    int current = 1; // Current element from the series, starting point of recursion.
    printf("the sum of the series %d",series_sum(1,n)); // Print the output
    return 0;
}
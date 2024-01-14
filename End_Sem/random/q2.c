# include <stdio.h>

int fib(int n) {
    static int arr[100]; // static variables are initialized to 0
    arr[1] = 1;

    if (arr[n] != 0) {
        // If arr[n] is not 0, then it has been calculated before,
        // and this saves us from calculating the same value again.
        // This technique is called memoization.
        return arr[n];
    }

    arr[n] = fib(n - 1) + fib(n - 2);
    return arr[n];
}

int main(void) {
    int n;
    printf("Enter a non-negative number: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Fibonacci series is not defined for negative numbers.\n");
        return 1;
    }

    for (int i = 0; i <= n; i++) {
        printf("%d ", fib(i));
    }

    printf("\n");
    return 0;
}


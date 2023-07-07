#include <stdio.h>

int main() {
    int n;
    printf("Введіть кількість розрядів: ");
    scanf("%d", &n);
    long long a = 1, b = 1, c = 1;
    for (int i = 2; i <= n; i++) {
        long long new_a = a + b + c;
        long long new_b = a;
        long long new_c = b;
        a = new_a;
        b = new_b;
        c = new_c;
    }
    printf("Кількість чисел із %d розрядів: %lld\n", n, a + b + c);
    return 0;
}

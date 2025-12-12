# include <stdio.h>

int multiply(int x, int y) {
    return x * y;
}

int main() {
    int x = 75;
    int y = 45;

    int result = multiply(x, y);

    printf("The Result is %d\n", result);

    return 0;

}
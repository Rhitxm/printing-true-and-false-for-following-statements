#include <stdio.h>

int main() {
    int x;

    printf("Enter a number: ");
    scanf("%d", &x);
    printf("%d\n", x>9 && x<100); //entering a number between 9 and 100 will give one as output or else you'll get 0 as output
    return 0;
}

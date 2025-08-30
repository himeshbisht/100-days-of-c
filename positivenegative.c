#include <stdio.h>

int main() {
    int x;

    
    printf("Enter an integer: ");
    scanf("%d", &x);

    
    if (x >= 0) {
        if (x == 0) {
            printf("The number is Zero.\n");
        } else {
            printf("The number is Positive.\n");
        }
    } else {
        printf("The number is Negative.\n");
    }

    return 0;
}

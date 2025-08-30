#include <stdio.h>

int main() {
    int percent;

    printf("Enter percentage: ");
    scanf("%d", &percent);

    if (percent >= 90) {
        printf("Grade: A\n");
    } else if (percent >= 75) {
        printf("Grade: B\n");
    } else if (percent >= 50) {
        printf("Grade: C\n");
    } else if (percent >= 35) {
        printf("Grade: D\n");
    } else {
        printf("Grade: F (Fail)\n");
    }

    return 0;
}

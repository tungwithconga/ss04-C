#include <stdio.h>
int main() {
    int numberOne, numberTwo, numberThree;

    printf("So thu nhat: ");
    scanf("%d", &numberOne);

    printf("So thu hai: ");
    scanf("%d", &numberTwo);

    printf("So thu ba: ");
    scanf("%d", &numberThree);

    if ((numberThree > numberOne && numberThree < numberTwo) || 
        (numberThree > numberTwo && numberThree < numberOne)) {
        printf("Nam trong khoang");
    } else {
        printf("Khong nam trong khoang");
    }

    return 0;
}


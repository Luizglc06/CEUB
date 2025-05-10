#include <stdio.h>

int main () {
    int age, calcday;

    scanf("%d", &age);

    int year = age /365;
    int month = (age - year * 365) / 30;
    int day = ((age - month * 365) - month * 30);

    printf("%d ano(s) \n", year);
    printf("%d mes(s) \n", month);
    printf("%d dia(s) \n", day);

    return 0;
}
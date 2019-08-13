#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef struct tm tm;

int main() {
    int choice;
    time_t currentTime;
    time(&currentTime);

    tm *localTime = localtime(&currentTime);

    printf("Would you like the day , month , year or all [0 , 1 , 2 , 3]\n");
    scanf("%d", &choice);

    if (choice == 0) {
        printf("%i",localTime->tm_mday);
    }
    if (choice == 1) {
        printf("%i",localTime->tm_mon);
    }
    if (choice == 2) {
        printf("%i",localTime->tm_year);
    }
    if (choice == 3) {
        printf("%i,%i,%i",localTime->tm_mday,localTime->tm_mon,localTime->tm_year);
        //TODO year is 119?
    }


    return 0;
}
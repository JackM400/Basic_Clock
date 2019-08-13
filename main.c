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


    switch (choice) {
        case 0:
            printf("%i,%i,%i", localTime->tm_mday, localTime->tm_mon, localTime->tm_year + 1900);
            break;
        case 1:
            printf("%i", localTime->tm_mday);
            break;
        case 2:
            printf("%i", localTime->tm_mon);
            break;
        case 3:
            printf("%i", localTime->tm_year + 1900);
            break;
    }

    return 0;
}
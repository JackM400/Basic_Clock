#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef struct tm tm;
int main() {
    time_t currentTime;
    time(currentTime);

    tm *localTime = localtime(&currentTime);
    int x = localTime ->tm_sec;
    printf("%i",&x);
    return 0;
}
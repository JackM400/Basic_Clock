#include <stdio.h>
#include <conio.h>

int main() {
    int i;
    int hour = 0;
    int minute = 0;
    int second = 0;

    printf("Input current time [HH:MM:SS]\n");
    scanf("%d%d%d", &hour, &minute, &second);
    //3 loops , for hour , minute , second , update clock on each successful completion of inner loop

    for (int hour; hour < 24; hour++) {
        for (int minute; minute < 60; minute++) {
            for (int seconds; seconds < 60; seconds++) {

            }
        }
    }
    return 0;
}
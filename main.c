#include <stdio.h>
#include <conio.h>

int main() {
    int noon = 12;
    int hour = 0;
    int minute = 0;
    int second = 0;

    printf("Input current time [HH:MM:SS]\n");
    scanf("%d%d%d", &hour, &minute, &second);
    //3 loops , for hour , minute , second , update clock on each successful completion of inner loop

    for (hour; hour < 24; hour++) {
        for (minute; minute < 60; minute++) {
            for (second; second < 60; second++) {
                printf("%d,%d,%d",hour,minute,second);
                if(hour< noon){
                    printf("AM\n");
                }else{
                    printf("PM\n");
                }
            }
        }
    }
    return 0;
}
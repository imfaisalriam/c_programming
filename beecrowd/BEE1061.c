#include <stdio.h>
int main()
{

    char init_of_day[6];
    int init_day;
    scanf("%s %d", init_of_day, &init_day);
    int init_hours, init_minutes, init_seconds;
    scanf("%d : %d : %d", &init_hours, &init_minutes, &init_seconds);
    char end_of_day[6];
    int end_day;
    scanf("%s %d", end_of_day, &end_day);
    int end_hours, end_minutes, end_seconds;
    scanf("%d : %d : %d", &end_hours, &end_minutes, &end_seconds);
    

    // printf("%d, %d, %d\n", init_hours, init_minutes, init_seconds);
    int init_time_second = (init_day * 86400) + (init_hours * 3600) + (init_minutes * 60) + init_seconds;
    
    int end_time_second = (end_day * 86400) + (end_hours * 3600) + (end_minutes * 60) + end_seconds;
    
    
    int diff_of_time = end_time_second - init_time_second;
//printf("%d   %d ",init_time_second , end_time_second);


    int diff_day = diff_of_time / 86400;
    diff_of_time = diff_of_time % 86400;
    int diff_hour = diff_of_time / 3600;
    diff_of_time = diff_of_time % 3600;
    int diff_munite = diff_of_time / 60;
    int diff_second = diff_of_time % 60;


    printf("%d dia(s)\n%d hora(s)\n%d minuto(s)\n%d segundo(s)\n", diff_day, diff_hour, diff_munite, diff_second);

    return 0;
}
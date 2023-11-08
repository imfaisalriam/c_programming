/*
============================================================================================================
                                       Author: Faisal Ahmed Riam
                             Dipertment of Computer Science and Engineering,
                    Mawlana Bhasani Science and Technology University,Tangail,Bangladesh.
============================================================================================================
*/
#include<stdio.h>
int main()
{
    
    char init_of_day[6];
    int init_day;
    scanf("%5s %d",init_of_day,&init_day);
    char init_time[9];
    scanf("%8s", init_time);
    char end_of_day[6];
    int end_day;
    scanf("%5s %d",end_of_day,&end_day);
    char end_time[9];
    scanf("%8s", end_time);
    int init_hours, init_minutes, init_seconds;
    int parsed_values1 = sscanf(init_time, "%d : %d : %d", &init_hours, &init_minutes, &init_seconds);
    int init_time_second=(init_day*86400)+(init_hours*3600)+(init_minutes*60)+init_seconds;
    int end_hours, end_minutes, end_seconds;
    int parsed_values2 = sscanf(end_time, "%d : %d : %d", &end_hours, &end_minutes, &end_seconds);
    int end_time_second=(end_day*86400)+(end_hours*3600)+(end_minutes*60)+end_seconds;
    int diff_of_time=end_time_second-init_time_second;
    int diff_day=diff_of_time/86400;
    diff_of_time=diff_of_time%86400;
    int diff_hour=diff_of_time/3600;
    diff_of_time=diff_of_time%3600;
    int diff_munite=diff_of_time/60;
    int diff_second=diff_of_time%60;
    printf("%d dia(s)\n%d hora(s)\n%d minuto(s)\n%d segundo(s)\n",diff_day,diff_hour,diff_munite,diff_second);




    return 0;
}
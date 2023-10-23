#include<stdio.h>
int main()
{
    int start_hour,end_hour,start_munite,end_munite,diff_time;
    scanf("%d %d %d %d",&start_hour,&start_munite,&end_hour,&end_munite);
    int start_time=start_hour*60+start_munite;
    int end_time=end_hour*60+end_munite;

    if(start_time<end_time)
        diff_time=end_time-start_time;
    else
        diff_time=(24*60-start_time)+end_time;

    int duration_hour = diff_time/60;
    int duration_munite=diff_time%60;
    /*if(duration_hour>24)
        duration_hour%=24;*/
    

    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",duration_hour,duration_munite);
}
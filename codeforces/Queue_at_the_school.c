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
    int n,t;
    scanf("%d %d",&n,&t);
    char queue[n];
    scanf("%s",&queue);

    for (int i = 0; i < t; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (queue[j]=='B'&&queue[j+1]=='G')
            {
                char temp = queue[j];
                queue[j]=queue[j+1];
                queue[j+1]=temp;
                j++;
            }
        }
    }
    printf("%s",queue);


    return 0;
}
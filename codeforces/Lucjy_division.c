/*
============================================================================================================
                                       Author: Faisal Ahmed Riam
                             Dipertment of Computer Science and Engineering,
                    Mawlana Bhasani Science and Technology University,Tangail,Bangladesh.
============================================================================================================
*/
#include <stdio.h>
int main()
{
    int num;
    int count1, count2, count3,count4=0;
    scanf("%d", &num);
    for (int i = 1; i <= num; i++)
    {
        count1 = 0;
        count2 = 0;
        count3 = 0;
        int I = i;
        while (I != 0)
        {
            I /= 10;
            count2++;
        }
        int i1 = i;
        while (i1 != 0)
        {
            int rem = i1 % 10;
            if (rem == 4 || rem == 7)
            {
                count1++;
            }
            i1 /= 10;
        }
        if (num % i == 0)
        {
            count3 = 1;
        }
        if (((count1 != 0 && count2 != 0) && count1 == count2) && count3 == 1)
        {
            count4=1;
        }
    }
    if (count4)
    {
        printf("YES");
    }else
    {
        printf("NO");
    }

    return 0;
}
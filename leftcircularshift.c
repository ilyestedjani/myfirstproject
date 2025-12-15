#include <stdio.h>

int main(void)
{
    int T[10];
    int i, test = 5, temp;

    /* Input */
    for (i = 1; i <= 10; i++)
    {   printf("T[%d]= ",i);
        scanf("%d", &T[i]);
    }
    printf("Before Left ciricular shift 5 times.\n");
    for (i = 1; i <= 10; i++)
    {   printf("%d ", T[i]);
       
    }

    /* Left circular shift repeated 5 times */
    while (test > 0){
    
        temp = T[1];

        for (i = 1; i <= 9; i++)
        {
            T[i] = T[i + 1];
        }

        T[10] = temp;

        test--;
    }
printf("\nAfter Left ciricular shift 5 times.\n");
    /* Output */
    for (i = 1; i <=10; i++)
    {
        printf("%d ", T[i]);
    }

    return 0;
}

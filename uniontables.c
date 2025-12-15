#include <stdio.h>
int main () {
    int T1[5];
    int T2[5];
    int T3[10];
    int i;
        for(i=1;i<=5;i++){
            do
            {
            printf("Give a positive numbers %d : ",i);
            scanf("%d",&T1[i]); 
         }  while (T1[i]<0);
        }
        printf("This is Table2 arrays2.\n");
           for(i=1;i<=5;i++){
            do
            {
            printf("Give a positive numbers %d : ",i);
            scanf("%d",&T2[i]); 
            }  while (T2[i]<0);
        }
        for (i=1;i<=5;i++){
            T3[i]=T1[i];
        }
        for (i=1;i<=5;i++){
            T3[i+5]=T2[i];
        }
        printf("----The Union of Two tables----\n");
        for (i=1;i<=10;i++){
            printf("%d",T3[i]);
        }
}
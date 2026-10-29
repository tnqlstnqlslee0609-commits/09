#include <stdio.h>
#include <stdlib.h>

#define SIZE    5

int main(void)
{
    int i;
    int grade[SIZE];
    int score[SIZE];
    
    for(i=0;i<SIZE;i++)
    {
        grade[i] = rand() % 100;
        printf("grade[%d] : %d\n", i, grade[i]);
    }

    //배열값 복사
    for(i=0;i<SIZE;i++)
        score[i] = grade[i];

    for(i=0;i<SIZE;i++)
        printf("scare[%d] = %d\n", i, score[i]);    
    
    return 0;
}
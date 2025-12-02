#include<stdio.h>
#include<time.h>
#include<stdlib.h>

int main()
{
    time_t start,end;
    int guess,attemps=0;
    double time_taken;

    srand(time(NULL));
    int secret= (rand() % 100) + 1;

    start=time(NULL);
    while(1)
    {
        printf("\nEnter your guess: ");
        scanf("%d",&guess);

        if(guess==secret)
        {
            printf("\nU guessed the number right it's %d",secret);
            break;
        }
        else
        {
            attemps++;
            if(guess > secret)
                printf("\tToo High..!!\n");
            else
                printf("\tToo Low..!!\n");
        }
    }
    
    end=time(NULL);
    time_taken= difftime(end,start);
    // We can write time_taken= end - start but using difftime is the most safest way
    printf("\nYour taken time is %.2f",time_taken);
    return 0;
}
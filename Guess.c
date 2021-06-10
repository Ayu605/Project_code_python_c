# include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
    int number, guess, nguess=1;
    srand(time(0));
    number=rand()% 100+1;
    do{
        printf("Please Guess the Number in range betwee 1 to 100 ");
        scanf("%d",&guess);
        if(guess>number){
            printf("Lower Number Please\n");
        }

        else if(guess<number){
            printf("Higher  Number Please\n");
        }

        else{
            printf("You Gussed it in %d attempts\n",nguess);
        }
        nguess++;
    }while(guess!=number);
    return 0;
}
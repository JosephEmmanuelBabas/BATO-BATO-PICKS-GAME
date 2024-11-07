#include <stdio.h>
#include <conio.h>

int main(){

int p1,p2,p1s = 0, p2s = 0,Continue ;


printf("\n BATO BATO PICKS  \n PLAYER 1 VS. PLAYER 2 \n FIRST TO REACH 5 POINTS WINS \n");


for (Continue = 0; Continue < 2;)
{  
 
        for (p1s = 0 ,p2s = 0; p1s < 5 && p2s < 5;){


            do
            {
                printf("\nPLAYER 1 PLEASE ENTER YOUR CHOICE [1-ROCK/2-PAPER/3-SCISSOR]: ");
                p1 = getch() - '0';
            } while (p1 < 1 || p1 > 3);

                printf("\n\nPLAYER 1 HAS PICKED");

            do
            {
                printf("\n\nPLAYER 2 PLEASE ENTER YOUR CHOICE [1-ROCK/2-PAPER/3-SCISSOR]: ");
                p2 = getch() - '0';
            } while (p2 < 1 || p2> 3);

            const char* choice[3] = {"ROCK","PAPER","SCISSOR"};
            printf("\n PLAYER 1 HAS CHOSE %s",choice[p1 - 1]);  
            printf("\n PLAYER 2 HAS CHOSE %s",choice[p2 - 1]);

            if(p1 == p2 ){
                printf("\n IT'S DRAW ");
            } 
            else if(p1 == 1 && p2 == 3 || p1 == 2 && p2 == 1 || p1 == 3 && p2 == 2 ){
                printf("\n PLAYER 1 WIN THIS ROUND");
                p1s++;
            }
            else{
                printf("\n PLAYER 2 WIN THIS ROUND");
                p2s++;
            }

            printf("\n\n CURRENT SCORE PLAYER 1 = %d | PLAYER 2 = %d",p1s,p2s);
        }

        printf("\n THE PLAYER %d IS THE WINNNER", p1s == 5 ? 1:2); 

        do
        {
        printf("\n\nDo You wish to restart the game? [ 1 - Y / 2- N]");
        scanf("%d",&Continue); }
        while (Continue < 1 || Continue > 2);

}

    return 0;

}

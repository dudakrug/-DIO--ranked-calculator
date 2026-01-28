#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int balance (int victories, int defeats){
    return victories - defeats;
}

int main() {
    
    while(1){
        //Input
        int victories = 0;
        int defeats = 0;
        int balanceResult = 0;
        char rankResult[50];

        printf("\n\nType how much victories you have: ");
        scanf("%d", &victories);
        getchar();

        printf("Type how much defeats you have: ");
        scanf("%d", &defeats);
        getchar();

        //Process
        balanceResult = balance(victories, defeats);

            //rankResult
            if(balanceResult <= 10){
                strcpy(rankResult, "Iron"); 
            } 
            else if(11 <= balanceResult && balanceResult <= 20){
                strcpy(rankResult, "Bronze"); 
            }
            else if(21 <= balanceResult && balanceResult <= 50){
                strcpy(rankResult, "Silver"); 
            }
            else if(51 <= balanceResult && balanceResult <= 80){
                strcpy(rankResult, "Gold"); 
            }
            else if(81 <= balanceResult && balanceResult <= 90){
                strcpy(rankResult, "Diamond"); 
            }
            else if(91 <= balanceResult && balanceResult <= 100){
                strcpy(rankResult, "Legendary"); 
            }
            else if(balanceResult >= 101){
                strcpy(rankResult, "Imortal");
            }

        
        //Output
        printf("\nYour balance of victories is: %d", balanceResult);
        printf("\nYour ranked is: %s", rankResult);
    }
    
    return 0;
}
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int balance (int victories, int defeats){
    return victories - defeats;
}

int main() {
    
    //Input
    int victories = 0;
    int defeats = 0;
    int result = 0;
    char rankResult[50] = " ";

    printf("\nType how much victories you have: ");
    scanf("%d", &victories);
    getchar();

    printf("Type how much defeats you have: ");
    scanf("%d", &defeats);
    getchar();

    //Process
    result = balance(victories, defeats);

        //rankResult
        if(result < 10){
            strcpy(rankResult, "Iron"); 
        }

    
    //Output
    printf("\nYour balance of victories is: %d", result);
    printf("\nYour ranked is: %s", rankResult);

    return 0;
}
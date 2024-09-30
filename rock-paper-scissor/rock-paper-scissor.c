#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
//braindead code why are you here?

int game(char user, char computer){
    int res;
    //cw:rp, ps, sr, d:rr, pp, ss; uw:rs, pr, sp
    //computer wins
    if(user == 'r' && computer == 'p'){
        res = -1;
    }
    if(user == 'p' && computer == 's'){
        res = -1;
    }
    if(user == 's' && computer == 'r'){
        res = -1;
    }
    //draw
    if(user == computer){
        res = 0;
    }
    //user wins
    if(user == 'r' && computer == 's'){
        res = 1;
    }
    if(user == 'p' && computer == 'r'){
        res = 1;
    }
    if(user == 's' && computer == 'p'){
        res = 1;
    }
    return res;
}

int main() {
    //random number <- computer's choice in game
    int computerRandom;
    char userChoice, computerChoice, result;

    srand(time(NULL));
    computerRandom = rand() % 100;
    if(computerRandom < 33) computerChoice = 's';
    else if(computerRandom >= 66) computerChoice = 'z';
    else computerChoice = 'p';

    printf("Welcome to Rock, Paper, Scissors! \n");
    printf("Enter your choice: s for STONE, p for PAPER, z for SCISSOR \n");
    scanf(" %c", &userChoice);
    printf("You have selected: %c\n", userChoice);

    printf("-----Processing Game-----\n");
    result = game(userChoice, computerChoice);
    if      (result == -1)  printf("You Lost!!!!!   \n");
    else if (result == 0)   printf("Its a DRAW!!!!  \n");
    else                    printf("You Won!!!!!    \n");

    printf("Computer: %c, You: %c \n", computerChoice, userChoice);

    return 0;
}
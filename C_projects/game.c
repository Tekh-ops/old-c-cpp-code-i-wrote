#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Declaration of global variable and functions

char *r = "ROCK", *p = "PAPER", *s = "SCISSOR";
int player_Wins, comp_Wins;
char name[30];

// Declaration of functions

int Winner_checker(char a, char b); // Function to check the winner of the game
char generateRandomNumber(); // Function to generate random number
int scoreBoard(); // Function to display the score board
int characterChecker(char, char); // Function to check the character of the user and computer

int main()
{
    char replay, user_choice, comp;
    system("clear");
    printf("\n     Welcome to ROCK PAPER SCISSORS game\n     Please enter your name     \n");
    scanf("%s", name[30]);
    getchar();
    do
    {
        printf("     Please choose your character     \n     Rock(r)  Paper(p)  Scissor(s)     \n");
        scanf("%c", &user_choice); //player choice
        // getchar();

        if ((user_choice == 'r') || (user_choice == 'p') || (user_choice == 's')) // choosing from rock,paper,scissor
        {
            comp = generateRandomNumber(); //calling of functions to generate random number
            characterChecker(comp,user_choice);
            Winner_checker(user_choice, comp);

            printf("\nIf you don't want to play PRESS n OR PRESS ENTER if you want to continue\n");
            scanf("%c", &replay);
        }

        else
        {
            printf("\nInvalid choice\n");
            printf("If you don't want to play PRESS n OR PRESS ENTER if you want to continue\n");
            scanf("%c", &replay);
        }
    } while (replay != 'n');

    //printf("The random number between 0 to 5 is %d\n", generateRandomNumber(100));
    return 0;
}

char generateRandomNumber()
{
    unsigned int n;
    srand(time(NULL)); //srand takes seed as an input and is defined inside stdlib.h
    n = (unsigned)rand() % 100;
    if ((n > 0) && (n <= 33))
    {
        return 'r';
    }
    else if ((n > 33) && (n <= 66))
    {
        return 'p';
    }
    else if ((n > 66) && (n <= 99))
    {
        return 's';
    }
}

int Winner_checker(char a, char b)
{
    int checker;
    {
        if ((a == 'r') && (b == 's'))
        {
            checker = 1;
        }
        else if ((a == 'p') && (b == 'r'))
        {
            checker = 1;
        }
        else if ((a == 's') && (b == 'p'))
        {
            checker = 1;
        }
        else if ((a == 'r') && (b == 'p'))
        {
            checker = -1;
        }
        else if ((a == 'p') && (b == 's'))
        {
            checker = -1;
        }
        else if ((a == 's') && (b == 'r'))
        {
            checker = -1;
        }
        else if ((a == 'r') && (b == 'r'))
        {
            checker = 0;
        }
        else if ((a == 'p') && (b == 'p'))
        {
            checker = 0;
        }
        else if ((a == 's') && (b == 's'))
        {
            checker = 0;
        }
    }
    switch (checker)
    {
    case 1:
        printf("%s Win\n", name);
        player_Wins++;
        break;
    case -1:
        printf("Computer Wins\n");
        comp_Wins++;
        break;
    default:
        printf("It's a Draw\n");
        break;
    }

    scoreBoard(); //function call to display the score board
    return 0;
}

int scoreBoard()
{
    printf("\n*****THE SCORE BOARD*****\n*****               *****\nComputer Score :%d %s Score :%d\n*****               *****\n", comp_Wins, name, player_Wins);
    return 0;
}

int characterChecker(char comp, char user)
{
    {
        if ((comp == 'r')&&(user == 'r')) {
            printf("Computer Choose: %s  %s Choose: %s\n",r,name,r);
        }
        else if ((comp == 's')&&(user == 's'))
        {
            printf("Computer Choose: %s  %s Choose: %s\n",s,name,s);
        }
        else if ((comp == 'p')&&(user == 'p'))
        {
            printf("Computer Choose: %s  %s Choose: %s\n",p,name,p);
        }
        else if ((comp == 'r')&&(user == 'p'))
        {
            printf("Computer Choose: %s  %s Choose: %s\n",r,name,p);
        }
        else if ((comp == 'r')&&(user == 's'))
        {
            printf("Computer Choose: %s  %s Choose: %s\n",r,name,s);
        }
        else if ((comp == 'p')&&(user == 'r'))
        {
            printf("Computer Choose: %s  %s Choose: %s\n",p,name,r);
        }
        else if ((comp == 'p')&&(user == 's'))
        {
            printf("Computer Choose: %s  %s Choose: %s\n",p,name,s);
        }
        else if ((comp == 's')&&(user == 'r'))
        {
            printf("Computer Choose: %s  %s Choose: %s\n",s,name,r);
        }
        else if ((comp == 's')&&(user == 'p'))
        {
            printf("Computer Choose: %s  %s Choose: %s\n",s,name,p);
        }
    }
    return 0;
}

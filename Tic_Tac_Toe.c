#include <stdio.h>
#include <stdlib.h>
#include<conio.h>
#include<string.h>

void dispBoard();
void checkBoard(int);
int dispValueOnBoard();

char square[10]={'0','1','2','3','4','5','6','7','8','9'};
int player;
int returnValue;
int value;
void dispBoard() //general outline of the board
{
    printf("        \n   %c |%c |%c \n",square[1],square[2],square[3]);
    printf(" --------------");
    printf("        \n   %c |%c |%c \n",square[4],square[5],square[6]);
    printf(" --------------");
    printf("        \n   %c |%c |%c \n",square[7],square[8],square[9]);
}
void checkBoard(int value)
 /**return 1 if continues;
return 0 if game is over(draw);
return -1 if ends with a winner**/
{

    if((square[1]==square[2]&&square[2]==square[3]) || (square[4]==square[5]&&square[5]==square[6]) ||
       (square[7]==square[8]&&square[8]==square[9]) || (square[1]==square[4]&&square[4]==square[7]) ||
       (square[2]==square[5]&&square[5]==square[8]) || (square[3]==square[6]&&square[6]==square[9]) ||
       (square[1]==square[5]&&square[5]==square[9]) || (square[3]==square[5]&&square[5]==square[7]))
       {
        printf("\t\t\tTHE PLAYER %d IS THE WINNER\n",player);
        printf("\t\t\tCONGRATULATIONS!!!!!!!!!\n");
        printf("\t\t\tGAME OVER\n");
        returnValue=-1;

       }
    else if((square[1]!='1')&&(square[2]!='2')&&(square[3]!='3')&&
            (square[4]!='4')&&(square[5]!='5')&&(square[6]!='6')&&
            (square[7]!='7')&&(square[8]!='8')&&(square[9]!='9'))
            {
              printf("\t\t\tOOPS!!!IT'S A DRAW\n");
              printf("\t\t\tGAME OVER\n");
              returnValue=0;

            }

    else{
        returnValue=1;
    }

}

int dispValueOnBoard(int player) //display the change in the location entered by the respective player
{
    char var;
    if(player==1){var='X';}
    else if(player==2){var='O';}
    printf("ENTER THE LOCATION OF CHANGE: ");
    scanf("%d",&value);
    system("cls");
    if((square[value]=='X') || (square[value] =='O'))
    {
        printf("LOCATION ALREADY OCCUPIED\n");
        printf("HENCE ENTER ANOTHER LOCATION\n");
        getch();
    }
    else if ((square[value]!='X') || (square[value]!='O'))
    {
        square[value]=var;
    }
}

int main()
{
    int i=1;
    printf("WELCOME TO PLAY TIC-TAC-TOE\n\n");
    printf("PLAYER 1 IS 'X'\nPLAYER 2 IS 'O'\n");
    printf("------------------------------------------------------------------------------------------------------------------------\n");
    dispBoard();
    while(i==1)
    {
        printf("\n\nENTER THE PLAYER NUMBER: ");
        scanf("%d",&player);
        dispValueOnBoard(player);
        dispBoard();
        checkBoard(value);
        i=returnValue;
    }
    return 0;
}

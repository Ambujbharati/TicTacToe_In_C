//#include <bits/stdc++.h>
#include <stdio.h>
#include <conio.h>
#include <windows.h>
#include <stdlib.h>

char square[10] = {'o','1','2','3','4','5','6','7','8','9'};

void board()
{
    system("cls");
    printf("__________Tic Tac Toe Game__________\n\n");
    printf("Marker of Player 1 => X \nMarker of Player 2 => O\n\n");

    printf("     |     |     \n");
	printf("  %c  |  %c  |  %c  \n",square[1],square[2],square[3]);
	printf("_____|_____|_____\n");
	printf("     |     |     \n");
	printf("  %c  |  %c  |  %c  \n",square[4],square[5],square[6]);
	printf("_____|_____|_____\n");
	printf("     |     |     \n");
	printf("  %c  |  %c  |  %c  \n",square[7],square[8],square[9]);
	printf("     |     |     \n");	
}

int checkWinner()
{
    if(square[1] == square[2] && square[2] == square[3]){
        return 1;
    }else if(square[4] == square[5] && square[5] == square[6]){
        return 1;
    }else if(square[7] == square[8] && square[8] == square[9]){
        return 1;
    }else if(square[1] == square[4] && square[4] == square[7]){
        return 1;
    }else if(square[2] == square[5] && square[5] == square[8]){
        return 1;
    }else if(square[3] == square[6] && square[6] == square[9]){
        return 1;
    }else if(square[1] == square[5] && square[5] == square[9]){
        return 1;
    }else if(square[3] == square[5] && square[5] == square[7]){
        return 1;
    }else if(square[1] != '1' && square[2] != '2' && square[3] != '3' && square[4] != '4' && square[5] != '5' && square[6] != '6' && square[7] != '7' && square[8] != '8' && square[9] != '9'){
        return 0;
    }else{
        return -1;
    }
}


int main()
{
    int player = 1;
    int choice, result;
    char marker;
    do{
        board();
        player = (player % 2)? 1 : 2;
        printf("player %d enter your choice : ",player);
        scanf("%d",&choice);
        marker = (player == 1)? 'X' : 'O';
        if(choice == 1 && square[1] == '1'){
            square[1] = marker;
        }else if(choice == 2 && square[2] == '2'){
            square[2] = marker;
        }else if(choice == 3 && square[3] == '3'){
            square[3] = marker;
        }else if(choice == 4 && square[4] == '4'){
            square[4] = marker;
        }else if(choice == 5 && square[5] == '5'){
            square[5] = marker;
        }else if(choice == 6 && square[6] == '6'){
            square[6] = marker;
        }else if(choice == 7 && square[7] == '7'){
            square[7] = marker;
        }else if(choice == 8 && square[8] == '8'){
            square[8] = marker;
        }else if(choice == 9 && square[9] == '9'){
            square[9] = marker;
        }else{
            printf("Invalid option");
            --player;
            getch();
        }

        result = checkWinner();
        player++;
    }while(result == -1);

    board();
    if(result == 1){
        printf("Congratulations....player %d is the winner of this game\n\n",--player);
    }else{
        printf("Game Draw\n\n");
    }
        
    getch();
    return 0;
}
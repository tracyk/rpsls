#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "RPSLS.h"

int computerPick() {
	srand( time(NULL) );
	int number = rand()%5 + 1;
	return number;
}

void numberToName(int num) {
	if (num == 1)
		printf("Rock");
	else if (num == 2)
		printf("Paper");
	else if (num == 3)
                printf("Scissors");
	else if (num == 4)
                printf("Lizard");
	else if (num == 5)
                printf("Spock");
}

int humanPick() {
	printf("\nPlease enter the number corresponding to your choice:\n");
	printf("1:Rock, 2:Paper, 3:Scissors, 4:Lizard, 5:Spock, or 0:Quit... ");
	int choice;
	scanf("%d", &choice);
	return choice;
}

int findWinner(int manNum, int compNum) { 
	int answer;

	if (manNum == compNum)
		answer = 0;
	else if ( (manNum == 1) && ( (compNum == 3) || (compNum == 4) ) )
		answer = 1;
	else if ( (manNum == 2) && ( (compNum == 1) || (compNum == 5) ) )
		answer = 1;
	else if ( (manNum == 3) && ( (compNum == 2) || (compNum == 4) ) )
        answer = 1;
	else if ( (manNum == 4) && ( (compNum == 2) || (compNum == 5) ) )
        answer = 1;
	else if ( (manNum == 5) && ( (compNum == 1) || (compNum == 3) ) )
        answer = 1;
	else
		answer = -1;

	return answer;
}

void winner(int winnerNum) {
	if (winnerNum == 1)
		printf(" => YOU WIN!!\n");
	else if (winnerNum == 0)
		printf(" => TIE GAME!!\n");
	else if (winnerNum == -1)
		printf(" => YOU LOSE!!\n");		 
}

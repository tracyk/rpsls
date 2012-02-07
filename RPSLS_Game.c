#include <stdio.h>
#include "RPSLS.h"

int main(void) {

	int wins = 0, losses = 0, ties = 0;
	int wStreak = 0, lStreak = 0, tStreak = 0;
	int computer, human, winnerNum;
	int rounds = 1;

	printf("\n========================================================================");
	printf("\n------------------------------------------------------------------------");
	printf("\nHello! and Welcome to the Rock, Paper, Scissors, Lizard, Spock Game!\n");

	do {
	switch(humanPick()) {
		case 1: 
			computer  = computerPick(); winnerNum = findWinner(1, computer);
			printf("Human picks: Rock, Computer picks: "); numberToName( computer ); winner(winnerNum);
			if (winnerNum == 1) 	 { wins++; wStreak++; tStreak = 0; lStreak = 0; }
			else if (winnerNum == 0) { ties++; wStreak = 0; tStreak++; lStreak = 0; }
			else if (winnerNum = -1) { losses++; wStreak = 0; tStreak = 0; lStreak++; }
			rounds++; break;
			
		case 2: 
                        computer = computerPick(); winnerNum = findWinner(2, computer);
                        printf("Human picks: Paper, Computer picks: "); numberToName( computer ); winner(winnerNum);
			if (winnerNum == 1)      { wins++; wStreak++; tStreak = 0; lStreak = 0; }
                        else if (winnerNum == 0) { ties++; wStreak = 0; tStreak++; lStreak = 0; }
                        else if (winnerNum = -1) { losses++; wStreak = 0; tStreak = 0; lStreak++; }
                        rounds++; break;

		case 3: 
                        computer = computerPick(); winnerNum = findWinner(3, computer);
                        printf("Human picks: Scissors, Computer picks: "); numberToName( computer ); winner(winnerNum);
                        if (winnerNum == 1)      { wins++; wStreak++; tStreak = 0; lStreak = 0; }
                        else if (winnerNum == 0) { ties++; wStreak = 0; tStreak++; lStreak = 0; }
                        else if (winnerNum = -1) { losses++; wStreak = 0; tStreak = 0; lStreak++; }                        
                        rounds++; break;			

		case 4: 
                        computer = computerPick(); winnerNum = findWinner(4, computer);
                        printf("Human picks: Lizard, Computer picks: "); numberToName( computer ); winner(winnerNum);
                        if (winnerNum == 1)      { wins++; wStreak++; tStreak = 0; lStreak = 0; }
                        else if (winnerNum == 0) { ties++; wStreak = 0; tStreak++; lStreak = 0; }
                        else if (winnerNum = -1) { losses++; wStreak = 0; tStreak = 0; lStreak++; }                        
                        rounds++; break;

		case 5: 
			computer = computerPick(); winnerNum = findWinner(5, computer);
                        printf("Human picks: Spock, Computer picks: "); numberToName( computer ); winner(winnerNum);
                        if (winnerNum == 1)      { wins++; wStreak++; tStreak = 0; lStreak = 0; }
                        else if (winnerNum == 0) { ties++; wStreak = 0; tStreak++; lStreak = 0; }
                        else if (winnerNum = -1) { losses++; wStreak = 0; tStreak = 0; lStreak++; }                        
                        rounds++; break;
			
		case 0: 
			printf("\nThank you for playing!");
                        printf("\nWins: %d, Ties %d, Losses: %d, Rounds played: %d", wins, ties, losses, (rounds-1));
			if (tStreak !=0) printf(", %d-game Tie Streak.\n\n", tStreak);
			if (wStreak !=0) printf(", %d-game Winning Streak.\n\n", wStreak);
			if (lStreak !=0) printf(", %d-game Losing Streak.\n\n", lStreak);
                        rounds = 0; break;

		}

	} while(rounds);

	return 0;
}

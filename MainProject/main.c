#include <stdio.h>
#include <string.h>

char* playRPS(char* player1, char* player2) {
	// Draw
	if (!strcmp(player1, player2)) {
		return "Draw";
	}

	// Victory
	if (!strcmp(player1, "rock")) {
		if (!strcmp(player2, "paper")) {
			return "Player2";
		}
		else if (!strcmp(player2, "scissors")) {
			return "Player1";
		}
	}
	if (!strcmp(player1, "paper")) {
		if (!strcmp(player2, "scissors")) {
			return "Player2";
		}
		else if (!strcmp(player2, "rock")) {
			return "Player1";
		}
	}
	if (!strcmp(player1, "scissors")) {
		if (!strcmp(player2, "rock")) {
			return "Player2";
		}
		else if (!strcmp(player2, "paper")) {
			return "Player1";
		}
	}

	// else, Invalid
	return "Invalid";
}



int main(void) {

	// no code to write

	return 0;
}


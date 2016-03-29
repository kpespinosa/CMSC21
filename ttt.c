#include <stdio.h>
#include <stdbool.h>

void display_board(char board[3][3]);
int main()
{
	int input;
	char board[3][3] = {
						{'1', '2','3'},
						{'4','5','6'},
						{'7','8','9'}
						};
	int player = 1;
	bool has_winner = false;
	do
	{
		display_board(board);
		//jayfer
		input = get_input_from_player(player, board);
		//aiden
		board[get_row(input)][get_col(input)] = player==1?'X':'O';
		//danniele
		has_winner = check_if_win(board);
		//flo
		//switch player here
		player = player%2 + 1;
	} while (!has_winner);
}

int get_input_from_player(player,board)
{
	int num = 0;
	do 
	{
		scanf("%i",&num);
	}while(num < 1 || num > 9);
	return num;
}
void display_board(char board[3][3])
{
	printf("\n");
	for (int i = 0; i < 3; ++i)
	{
		for (int j = 0; j < 3; ++j)
		{
			printf("%c ",board[i][j]);
		}
		printf("\n");
	}

}

void board(int input, char board[3][3]){

int ctr = 0;
int flag = 1;
	for(int i = 0; i<= 3; i++){
		for(int j = 0; j<= 3; j++){
			ctr++;
			if(ctr == input){
				if(flag == 1){
					board[i][j] == "x";
					flag == 0;
				}
				else if(flag == 0){
					board[i][j] == "o";
					flag == 1;
				}
			}
		}
	}
}

bool check_if_win (char board[3][3], player)
{
	char c = input(player);
	if (board[0][0] == c && board[0][1] == c && board[0][2] == c)
		return true;
	else if (board[1][0] == c && board[1][1] == c && board[1][2] == c)
		return true;
	else if (board[2][0] == c && board[2][1] == c && board[2][2] == c)
		return true;
	else if (board[0][0] == c && board[1][0] == c && board[2][0] == c)
		return true;
	else if (board[0][1] == c && board[1][1] == c && board[2][1] == c)
		return true;
	else if (board[0][2] == c && board[1][2] == c && board[2][2] == c)
		return true;
	else if (board[0][0] == c && board[1][1] == c && board[2][2] == c)
		return true;
	else if (board[2][0] == c && board[1][1] == c && board[0][2] == c)
		return true;
	return false;
}


char input(player)
{
	if (player == 1)
		return 'X';
	return 'O';
}
/*
Player 1, enter the square number for X: 2
 1	X	3
 4	5 	6
 7	8	9
Player 2, enter the square number for O: 4
 1	X	3
 O	5 	6
 7	8	9
*/
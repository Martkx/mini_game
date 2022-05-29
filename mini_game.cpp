#include <iostream>
#include <string>
#include <stdlib.h>
using namespace std;

constexpr unsigned int  LEN_X = 10; 
constexpr unsigned int  START = 0;
constexpr unsigned int 	GOAL  = LEN_X - 1;

constexpr char  LEFT = 'a';
constexpr char RIGHT = 'd';

void print_game_state(unsigned int player)
{	char game_state[LEN_X];
	for ( unsigned int i = 0 ; i < LEN_X ; i++)
	{
		game_state[i]= '.';
	}
	
	game_state[START]  = '|';
	game_state[GOAL]   = '|';
	game_state[player] = 'p';

	for ( unsigned int i = 0 ; i < LEN_X ; i++)
	{
		cout << game_state[i] ;
	}
}
unsigned int execute_move(unsigned int player, char move)
{
	if(LEFT == move )
		{
			if( player > START )
			{
				player --;
			}		
		}
		else if (RIGHT == move)
		{
			if( player < LEN_X - 1)
			{
				player ++;
			}
		}
		else
		{
			cout << "Wrong move ! " << endl;
		}	
		return player;
}
bool is_finished(unsigned int player)
{	
	bool finished = false; 
	if( player == GOAL)
		{
			finished = true;
		}
	return finished;	
}

void start_game()
{
	cout<< 	"Welcome to the game.\n" 
			"Enter a to go backwards and enter d to move forwards."<< endl;
}
void end_game()
{
	cout << "You won the game. \n" 
			"You want to repeat this game? \n" 
			"Press y for yes and n for no."<< endl;
}

void game()
{
	bool repeat = true;
	while (repeat)
	{
	char next_game;
	unsigned int player = 0;
	unsigned int START= 0;
	unsigned int GOAL = LEN_X - 1 ;
	char move;
	bool finished = false;
	
	start_game();
	while ( !finished )
	{
		print_game_state(player);
		cin >> move;
		system ("Clear");
		player = execute_move(player,move);
		finished = is_finished(player);
	}
	
	end_game();
	cin >> next_game ;
	if (next_game == 'y')
	{
		repeat = true;
	}
	else if (next_game == 'n')
	{
		repeat = false;
	}
	else
	{
		cout << "Invalid Charkter!"  << endl;
	}
	}

}


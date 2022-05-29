#include <iostream>
#include <string>
#include <stdlib.h>
using namespace std;

#define LEN_X 10u 
#define LEFT 'a'
#define RIGHT 'd'



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
	unsigned int start= 0;
	unsigned int goal = LEN_X - 1 ;
	char move;
	bool finished = false;
	
	start_game();
	while ( !finished )
	{
		for ( unsigned int i = 0 ; i < LEN_X ; i++)
		{
			if( i != 0 && i != goal && i != player)
			{
				cout << '.' ;
			}
			else if ( i== player)
			{
				cout << 'P' ;
			}
			else 
			{
				cout << '|';
			}
		}

		cin >> move;
		system ("Clear");

		if(LEFT == move )
		{
			if( player > start )
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

		if( player == goal)
		{
			finished = true;
		}
		else
		{
			finished = false;
		}
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


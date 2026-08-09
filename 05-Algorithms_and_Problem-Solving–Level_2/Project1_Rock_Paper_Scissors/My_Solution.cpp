#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;


int RandomNUmber(int from, int to)
{
	int randNum = rand() % (to - from + 1) + from;
	return randNum;
}


int ReadNumberOfRounds()
{
	int number;

	cout << "How Many Rounds Do You Want To Play ? (1 To 10 )  \n";
	cin >> number;
	return number;
}


int UserChoice()
{
	int userChoice;

	cout << "Your Choice : [1]:Rock , [2]:Paper , [3] Scissors ? ";
	cin >> userChoice;

	return userChoice;
}


string stUserChoice()
{
	int userchoice = UserChoice();

	if (userchoice == 1)
		return "Rock";

	if (userchoice == 2)
		return "Paper";

	return "Scissors";
}


string computerChoice()
{
	int computerChoice = RandomNUmber(1, 3);

	if (computerChoice == 1)
		return "Rock";

	if (computerChoice == 2)
		return "Paper";

	return "Scissors";
}


string theWinner(string user , string computer)
{
	if (user == "Rock" && computer == "Scissors")
		return "Player1";

	if (user == "Scissors" && computer == "Paper")
		return "Player1";

	if (user == "Paper" && computer == "Rock")
		return "Player1";

	if (computer == "Rock" && user == "Scissors")
		return "Computer";

	if (computer == "Scissors" && user == "Paper")
		return "Computer";

	if (computer == "Paper" && user == "Rock")
		return "Computer";


	else
		return "Draw";

}


string printRoundResults( int roundNumber)
{
	cout << "\nRound [" << roundNumber << "] Begins : \n\n";

	string us = stUserChoice();
	string co = computerChoice();
	string winner = theWinner(us, co);
	
	cout << "\n________________________ Round[" << roundNumber << "]_________________________\n\n";
	

	cout << "Player Choice : " << us << endl;
	cout << "Computer Choice : " << co << endl;

	if (winner == "Player1")
		system("color 2F");

	else if (winner == "Computer")
	{
		system("color 4F");
		cout << "\a";
	}


	else
		system("color 6F");

	cout << "Round Winner : " << winner << endl;
	  


	cout << "-----------------------------------------------------------\n";

	return winner;
}


string getFinalWinner(int player1WonTimes, int computerWonTimes)
{
	if (player1WonTimes > computerWonTimes)
		return "Player1";

	else if (computerWonTimes > player1WonTimes)
		return "Computer";

	else
		return "No Winner";
}


void showGameOverScreen( int roundCount , int player1WonTimes , int computerWonTimes , int DrawTimes)
{
	cout << "\n------------------------------------------------------------------------------\n";
	cout << "\t\t+++ Game Over +++\n";
	cout << "------------------------------------------------------------------------------\n";
	cout << "--------------------[ Game Results ]------------------------\n";
	cout << "Game Rounds        : " << roundCount << endl;
	cout << "Player1 Won Times  : " << player1WonTimes << endl;
	cout << "Computer Won Times : " << computerWonTimes << endl;
	cout << "Draw Times         : " << DrawTimes << endl;
	cout << "Final Winner       : " << getFinalWinner(player1WonTimes, computerWonTimes) << endl;
	cout << "\n------------------------------------------------------------------------------\n";

}


void StartGame()
{
	int player1WonTimes = 0, computerwontimes = 0, DrawTimes = 0;
	int roundCount = ReadNumberOfRounds();

	for (int i = 1; i <= roundCount; i++)
	{
	   string winner = printRoundResults(i);

	   if (winner == "Player1")
		   player1WonTimes++;

	   else if (winner == "Computer")
		   computerwontimes++;

	   else
		   DrawTimes++;

	}

	showGameOverScreen(roundCount, player1WonTimes, computerwontimes, DrawTimes);

}

bool askPlayAgain()
{
	char playAgain = 'Y';
	cout << "\n Do You Want To Play Again ? Y/N ? ";
	cin >> playAgain;
	return (playAgain == 'Y' || playAgain == 'y');

}


int main()
{
	srand((unsigned)time(NULL));

	do 
	{
		system("cls");


	    StartGame();

	} while (askPlayAgain());
	
}

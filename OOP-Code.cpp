// ConsoleApplication49.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;
class Player
{


private:
	string Name;
	int Age;
	string Country;
	string Leagues[3];
	int Score[3];
	int index = 0;
	int index1 = 0;
	int i = -1;
	int j = -1;
	int UPDATED_INDEX=index;

public:

	void Setage(int Age)

	{
		this->Age = Age;
	}

	int Getage()
	{
		return Age;
	}

	void SetName(string Name)
	{
		this->Name = Name;
	}

	string GetName()
	{
		return Name;
	}

	void SetCountry(string Country)
	{
		this->Country = Country;
	}

	string GetCountry()
	{
		return Country;
	}

	void setLeagues(string league)
	{
		this->Leagues[index] = league;
		index++;
	}

	void SetScore(int score)
	{
		this->Score[index1] = score;
		index1++;
	}

	string Get_League_Name()
	{
	
		j++;
			return Leagues[j];
				
	}

	int GetScore()
	{
		i++;

		return Score[i];
	}



	void Update_Score(int UPDATED_Score, int League_Index)
	{
		this->Score[League_Index] = UPDATED_Score;
	}


	



	void Print_Summary()
	{
		cout << "The Player's name is " << GetName() << endl;
		cout << "His Age is " << Getage() << endl;
		cout << "His country is " << GetCountry() << endl;
		
		for ( int i = 0; i < 3; i++)
		{


			cout << "His League  " << i+1 << " name = " << Get_League_Name() << endl;
			cout << "His Score for league " << i+1 << "=" <<  GetScore() << endl;
		}

	}


};

int main()
{


	Player player1;
	player1.SetName("House");
	player1.Setage(35);
	player1.SetCountry("Japan");
	string LEague_names;
	int score;
	int PRESS;



	
	for (int i = 0; i < 3; i++)
	{
		cout << "Enter the score for league " << i+1 << "=" << endl;
		cin >> score;
		cout << "Enter the name of the League " << i+1 <<"=" << endl;
		cin >> LEague_names; 
		player1.setLeagues(LEague_names);
		player1.SetScore(score);
	}

	int UPDATED_SCORe;
	int InDex;
	cout << "Press 1 to update and 0 to not to update ! " << endl;
	cin >> PRESS;
	if (PRESS == 1)
	{
		cout << " Enter the updated Player's Score " << endl;
		cin >> UPDATED_SCORe;
		cout << "Enter the League number, who's score will be updated " << endl;
		cin >> InDex;
		player1.Update_Score(UPDATED_SCORe, InDex - 1);
	}

	player1.Print_Summary();
}






	






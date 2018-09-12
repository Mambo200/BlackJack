#pragma once
#include <string.h>
#include <iostream>
#include <array>
#include "Helper.h"

int p1Cards[21];
int p2Cards[21];


// get a random number
int GetRandom(int _min = 1, int _max = 14)
{
	_max += 1;
	int randomNumber = rand() % (_max - _min);
	randomNumber += _min;
	return randomNumber;
}


// draw card
void DrawCard(int _player[])
{
	for (int i = 0; i < ARRAY_SIZE(_player); i++)
	{
		// check cards
		if (_player[i] == 0 || _player[i] == -858993460)
		{
			// draw card
			_player[i] = GetRandom();
			break;
		}
		else
			// check next card
			continue;
	}

}


void resetCards()
{
	for (int i = 0; i < ARRAY_SIZE(p1Cards); i++)
		p1Cards[i] = 0;
	
	for (int i = 0; i < ARRAY_SIZE(p2Cards); i++)
		p2Cards[i] = 0;
}

void init()
{
	// draw 2 cards player 1
	DrawCard(p1Cards);
	DrawCard(p1Cards);

	// draw 2 cards player 2
	DrawCard(p2Cards);
	DrawCard(p2Cards);

}

int GetRealCardFromRandom(int _randomCard)
{
	int card;
	if (_randomCard == 1)
		card = 11;
	else if (_randomCard == 11)
		card = 10;
	else if (_randomCard == 12)
		card = 10;
	else if (_randomCard == 13)
		card = 10;
	else if (_randomCard == 14)
		card = 10;
	else
		return _randomCard;

	return card;
}

void VisibleCards()
{
	/// <summary>
	/// [Player] [Card]
	/// </summary>
	int cardsIngame[2][21];
	std::cout << "Player 1" << std::endl;

	for (int i = 0; i < (ARRAY_SIZE(cardsIngame) / 2); i++)
	{
		// first card visible because it is player
		int card = GetRealCardFromRandom(cardsIngame[0][i]);
		PRINT_CARD(i + 1, card);
		cardsIngame[0][i];

	}

}


void GameStart()
{
	init();
	while (true)
	{
		VisibleCards();
	}
}
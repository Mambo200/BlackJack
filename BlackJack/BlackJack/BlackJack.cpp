// BlackJack.cpp: Definiert den Einstiegspunkt für die Konsolenanwendung.
//

#include "stdafx.h"
#include "Game.h"
#include "Input.h"

int win = 0;
int lose = 0;

int main() 
{
	while (true)
	{
		cout << "-------NEW GAME-------" << endl;
		GameStart();
		resetCards();
	}

    return 0;
}


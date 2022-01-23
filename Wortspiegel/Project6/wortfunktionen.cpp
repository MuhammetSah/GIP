#include "wortfunktionen.h"
#include <string>
using namespace std;

void wortspiegel(string& text, int pos)
{
	string subStringCurrentWord = "";
	string subStringCurrentWordGespiegelt = "";
	int borderL;
	int borderR;
	int len;
	borderL = searchForLeftWordBorder(text, pos);
	borderR = searchForRightWordBorder(text, pos);
	len = borderR - borderL + 1;

	//Das Wort definieren
	for (int k = borderL; k <= borderR; k++)
	{
		subStringCurrentWord += text.at(k);
	}
	//Wort spiegel
	for (int i = len; i > 0; i--)
	{
		subStringCurrentWordGespiegelt += subStringCurrentWord.at(i - 1);
	}
	//Ersetze das alte mit dem Neuen
	if (isLetter(text.at(pos)))
	{
		text.replace(borderL, len, subStringCurrentWordGespiegelt);
	}
}

//Suche Anfang des Wortes

int searchForLeftWordBorder(string text, int pos)
{
	int leftBorder = pos;
	bool borderfound = false;
	while (!borderfound)
	{
		if (leftBorder == 0 && (isLetter(text.at(leftBorder))))
		{
			borderfound = true;
		}
		else if (isLetter(text.at(leftBorder)))
		{
			borderfound = false;
			leftBorder -= 1;
		}
		else
		{
			borderfound = true;
			leftBorder += 1;
		}
	}
	return leftBorder;
}


//Suche das Ende der Wortes
int searchForRightWordBorder(string text, int pos)
{
	int rightBorder = pos;
	bool borderfound = false;
	int len = text.length() - 1;
	while (!borderfound)
	{
		if (rightBorder == len && (isLetter(text.at(rightBorder))))
		{
			borderfound = true;
		}
		else if (isLetter(text.at(rightBorder)))
		{
			borderfound = false;
			rightBorder += 1;
		}
		else
		{
			borderfound = true;
			rightBorder -= 1;
		}
	}
	return rightBorder;
}


//Überprüfung auf Buchstabe
bool isLetter(char checkChar)
{
	if (checkChar >= 'a' && checkChar <= 'z' || checkChar >= 'A' && checkChar <= 'Z')
	{
		return true;
	}
	else
	{
		return false;
	}
}
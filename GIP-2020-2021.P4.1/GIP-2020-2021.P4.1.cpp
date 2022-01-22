#include<iostream>
#include<string>
using namespace std;

int main()
{
	string text, ver;
	unsigned int v = 0;

	cout << "Bitte geben Sie hier den zu verschluesselnden Text ein: ";
	getline(cin, text);

	cout << "Bitte geben Sie die Anzahl Verschiebepositionen ein (als positive ganze Zahl): ";
	cin >> v;

	//Berücksichtigung der Verschiebung über 26.
	while (v > 26)
	{
		v = v - 26;
	}

	//for loop zum versetzen der Buchstaben/ kontrollieren das alles ein Buchstabe im Alphabet ist  
	for (int i = 0; i < (int)text.length(); i++)
	{
		//Falls string text zwischen den kleinbuchstaben, dann versetze um v.
		  if ('z' >= text.at(i) && text.at(i) >= 'a')
		{
				if ('z' >= text.at(i) + v)
				{
					ver += text.at(i) + v;
				}
				//falls string text größer als z, dann springe zurück zu a
				else
				{
					ver += text.at(i) + v - 26;
				}
		}
		  //Falls string text zwischen den Großbuchstaben,dann versetze um v.
		else if ('Z' >= text.at(i) && text.at(i) >= 'A')
		{
			if ('Z' >= text.at(i) + v)
			{
				ver += text.at(i) + v;
			}
			//falls string text größer Z, dann springe zurück zu A
			else
			{
				ver += text.at(i) + v - 26;
			}
		}
		  //weder A-Z noch a-z, dann keine versetzung und normale ausgabe
		else
		{
			ver += text.at(i);
		}
		
	}	
	
	cout << ver << endl;

	system("PAUSE");

	return 0;
}
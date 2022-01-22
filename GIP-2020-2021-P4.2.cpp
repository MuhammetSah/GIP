#include <iostream>
#include <string>

using namespace std;

int main() {

	int startzeit_stunden;
	int startzeit_minuten = 0;
	int takt = 0;

	//kontrolle auf stunde zwischen 0 und 23
	do {
		cout << "Bitte geben Sie die Stunden der Startuhrzeit ein: ";
		cin >> startzeit_stunden;

	} while (startzeit_stunden < 0 || startzeit_stunden >= 24);

	//Kontrolle auf Minute zwischen 0 und 59
	do {
		cout << "Bitte geben Sie die Minuten der Startuhrzeit ein: ";
		cin >> startzeit_minuten;

	} while (startzeit_minuten > 59 || startzeit_minuten < 0);

	cout << "Der erste Bus faehrt also um " << startzeit_stunden << ":" << startzeit_minuten << " Uhr. " << endl;

	//Kontrolle auf Taktzeiz zwischen 1 und 180
	do {
		cout << "Bitte geben Sie die Taktzeit in Minuten ein: ";
		cin >> takt;

	} while (takt > 180 || takt <= 0);

	int z = 0;
	while (startzeit_stunden < 24)
	{

		z = startzeit_stunden;
		cout << startzeit_stunden << ":" << startzeit_minuten << " ";
		startzeit_minuten += takt;
		startzeit_stunden += startzeit_minuten / 60;

		//Regulierung um nicht in der Minutenanzeige über 59 zu kommen
		startzeit_minuten %= 60;

		//Busplan "fähige" ausgabe
		if (z != startzeit_stunden) {
			cout << endl;
		}
	}
	system("PAUSE");

	return 0;
}
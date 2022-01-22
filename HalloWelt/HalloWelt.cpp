#include <iostream>
using namespace std;

int main()
{
	cout << "Hallo Welt!\n";
	
	system("PAUSE"); 
	
	return 0;
}


/*Vorwort: Dieses Programm dient nur dazu Hallo Welt auszugeben,d.h
änder man den Satz zwischen " \n" in zb. "Gute Nacht\n", dann wird
Gute Nacht ausgegeben. cout benutzt man zum ausgeben von bestimmten Zeichen
im Programm und \n ist nichts anderes als ein Zeilenumburch,was man auch mit <<endl;
ersetzen könnte.

INF-01.03: wenn system("PAUSE") fehlt,
schließt sich das Programm bei einem Tastendruck.
Wenn es da ist, wartet das Programm auf die Eingabe
vom Programmierer.

INF-01.03: return 0; als kommentar zu setzen,
hatte keinen Einfluss auf die Ausgabe des Programmes.
Ferner sieht man bei fehlen und nicht fehlen,
dass das Programm mit dem Code 0 beendet.

INF-01.04: Kommentare sind nur von Programmierer für sich
selbst oder andere Programmierer, deshalb hat es keinen EInfluss
auf das Programm selbst,d.h wenn man alles als Kommentar schreibt
hat das Programm keine Anweisungen mehr, was und wie er Sachen
ausgeben soll.Bedeutet alles als Kommentar= leere Ausgabe.

INF-01.06: schreibt man return, 0 und das Semikolon auf
verschiedene Zeilen, so hat das keine Auswirkung auf den Code.
Der Grund ist, dass der Compiler das Semikolon als "Satzende" ansieht,
sowie wir ein Punkt als Satzende benutzen.Also egal wie weit unten
ich das Semikolon mache, der Compiler erkennt das return 0 und ; zusammengehören

INF-01.07: Ein fehlendes ; ist ein Syntaxfehler und
führt unumstößlich zu einem nicht Kompilierbaren Code,
da bei einem Befehl ein ; fehlt, erkennt das Programm zwar
das dort ein Befehl ist, aber erwartet durch das fehlende ; eine
fortführung oder eben den Abschluss durch ein ;. Deshalb
gibt er die Fehlermeldung "Es wurde ein ; erwartet" aus.

INF-01.08: Solange alles mit einem Semikolon beendet wurde
wird das Programm fehlerfrei kompilieren.
Problematik: Der Programmierer kann schnell den Überblick verlieren und
ist deshalb nicht von Vorteil.

INF-01.09: Die geschweiften Klammern benutzt man um Anweisungen zu unterteilen,
solange alles in der int main() bleibt, erkennt da Programm die einzelnen Anweisungen
und gibt die dementsprechend korrekt aus. Beim komplieren werden keine Fehler rausgegeben.*/
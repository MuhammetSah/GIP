#pragma once
#include <string>

//vorgegeben
struct Person {
	std::string nachname, vorname, geburtsdatum = " ";
};

Person extrahiere_person(std::string eingabezeile);

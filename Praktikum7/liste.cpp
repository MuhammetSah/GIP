#include <string>
#include "liste.h"
void hinten_anfuegen(TListenKnoten*& anker, const int wert)
{
	TListenKnoten* neuer_eintrag = new TListenKnoten;
	neuer_eintrag->data = wert;
	neuer_eintrag->next = nullptr;
	neuer_eintrag->prev = nullptr;
	if (anker == nullptr)
		anker = neuer_eintrag;
	else
	{
		TListenKnoten* ptr = anker;
		while (ptr->next != nullptr)
		{
			ptr = ptr->next;
		}
		neuer_eintrag->prev = ptr;
		ptr->next = neuer_eintrag;
	}
}

std::string liste_als_string(TListenKnoten* anker)
{
	std::string resultat = "";

	if (anker == nullptr)
	{
		return "Leere Liste.";
	}
	else
	{
		resultat += "[ ";
		TListenKnoten* ptr = anker;
		do
		{
			resultat += std::to_string(ptr->data);
			if (ptr->next != nullptr) resultat += " , ";
			else resultat += " ";
			ptr = ptr->next;
		} while (ptr != nullptr);

		resultat += "]";
	}
	return resultat;
}

std::string liste_als_string_rueckwaerts(const TListenKnoten* anker)
{
	std::string resultat = "";
	if (anker == nullptr)
		return "Leere Liste.";
	else
	{
		const TListenKnoten* current = anker;
		while (current->next)
			current = current->next;
		resultat += "[ ";
		do
		{
			resultat += std::to_string(current->data);
			if (current->prev)
				resultat += " , ";
			else
				resultat += " ";
			current = current->prev;
		} while (current);
		resultat += "]";
	}
	return resultat;
}

void in_liste_einfuegen(TListenKnoten*& anker, int wert_neu, int vor_wert)
{
	TListenKnoten* new_TListenKnoten = new TListenKnoten;
	new_TListenKnoten->data = wert_neu;
	new_TListenKnoten->next = nullptr;
	new_TListenKnoten->prev = nullptr;

	if (!anker)
	{
		anker = new_TListenKnoten;
	}
	else
	{
		TListenKnoten* ptr = anker;
		while (ptr->next && ptr->data != vor_wert)
		{
			ptr = ptr->next;
		}

		if (ptr->data == vor_wert)
		{
			TListenKnoten* prev = ptr->prev;
			new_TListenKnoten->next = ptr;
			new_TListenKnoten->prev = prev;
			ptr->prev = new_TListenKnoten;

			if (prev)
			{
				prev->next = new_TListenKnoten;
			}
		}
		else
		{
			ptr->next = new_TListenKnoten;
			new_TListenKnoten->prev = ptr;
		}

		if (new_TListenKnoten->next == anker) 
			anker = new_TListenKnoten;
	}
}

void aus_liste_loeschen(TListenKnoten* &anker, int wert)
{
	TListenKnoten* ptr = anker;
	if (anker != nullptr)
	{
		while (ptr->next != nullptr && ptr->data != wert)
			ptr = ptr->next;

		if (ptr != nullptr && ptr->data == wert)
		{
			if (anker == ptr)
			{
				anker = ptr->next;
			}
			if (ptr->prev != nullptr)
			{
				ptr->prev->next = ptr->next;
			}
			if (ptr->next != nullptr)
			{
				ptr->next->prev = ptr->prev;
			}
			delete ptr;
				
		}
	}
}































/*if (!anker)return;
	TListenKnoten* orig = anker;
	while (anker->data != wert && anker->next)
	{
		anker = anker->next;
	}
	if (anker->data != wert)
	{
		anker = orig;
		return;
	}

	if (anker->prev && anker->next)
	{
		TListenKnoten* next = anker->next;
		anker = anker->prev;
		delete anker->next;
		anker->next = next;
		next->prev = anker;
		anker = orig;
	}
	else if (anker->prev)
	{
		anker = anker->prev;
		delete anker->next;
		anker->next = nullptr;
		anker = orig;
	}
	else if (anker->next)
	{
		anker = anker->next;
		orig = anker;
		delete anker->prev;
		anker->prev = nullptr;
		anker = orig;
	}
	else
	{
		delete anker;
		anker = nullptr;
	}*/

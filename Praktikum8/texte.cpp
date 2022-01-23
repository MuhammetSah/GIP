#include <iostream>
#include <string>
#include "texte.h";

void spalte_ab_erstem(std::string eingabe, char zeichen, std::string& erster_teil, std::string& zweiter_teil)
{
    int counter = 0;
    int position = 0;
    bool zeichenvorhanden = true;

    //Position des ersten Zeichens finden
    for (int i = 0; i < eingabe.length(); i++)
    {
        if (zeichen == eingabe.at(i))
        {
            if (counter == 0)
            {
                position = i;
            }
            counter++;
        }
    }

    for (int i = 0; i < eingabe.length(); i++)
    {
        //gib den ersten Teil(alles VOR dem ',') aus
        if (i < position)
        {
            erster_teil += eingabe.at(i);
        }
        //gib den zweiten Teil(alles NACH dem ',') aus
        if (i > position)
        {
            zweiter_teil += eingabe.at(i);
        }
    }
    if (counter == 0)
    {
        erster_teil = eingabe.at(0) + zweiter_teil;
        zweiter_teil = "";
    }
    
}

std::string trimme(std::string s) {
     std::string step1 = "";
    std::string step2 = "";
    std::string step3 = "";
    std::string step4 = "";
    int c1 = 0;
    int c2 = 0;
    
    //For-Schleife entfernt die ungewollten Zeichen am Anfang des Strings
    
   for (int i = 0; i < s.length(); i++)
   {
        if (s.at(i) == ' ' && c1 == 0) 
        {
            continue;
        }
        else
        {
            step1 += s.at(i);
            c1 = 1;
        }
    }
    // For-Schleife dreht den String um
    for (int i = step1.length(); i > 0; i--) 
    {
        step2 += step1.at(i - 1);
    }
    //For-Schleife entfernt die ungewollten Zeichen am Anfang des Strings
    for (int i = 0; i < step2.length(); i++) 
    {
        if (step2.at(i) == ' ' && c2 == 0) 
        {
            continue;
        }
        else
        {
            step3 += step2.at(i);
            c2 = 1;
        }
    }
    //For-Schleife dreht den String um
    for (int i = step3.length(); i > 0; i--)
    {
        step4 += step3.at(i - 1);
    }
    return step4;
}


std::string ersetze(std::string zeile, char zuersetzen, std::string ersatztext)
{
    std::string final = "";
    for (int i = 0; i < zeile.length(); i++)
    {
        if (zeile.at(i) == zuersetzen)
        {
            final += ersatztext;
        }
        else
        {
            final += zeile.at(i);
        }
    }
    return final;
}
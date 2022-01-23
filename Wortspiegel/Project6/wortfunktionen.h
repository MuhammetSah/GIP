#pragma once
#include <string>
using namespace std;
void wortspiegel(string& text, int pos);
int searchForLeftWordBorder(string text, int pos);
int searchForRightWordBorder(string text, int pos);
bool isLetter(char checkChar);

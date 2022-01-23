#include <iostream>
#include <string>

//Überprüfung als Zahl und ausgabe
bool is_digit(char c)
{
	return (c >= '0' && c <= '9');
}
int as_digit(char c)
{
	return c - '0';
}

//Überprüfung ob und wie oft es in einer Zeile,Spalte,Block vorkommt
void print_invalid(std::string what, unsigned where, unsigned numbers[8], bool& is_valid)
{
	for (unsigned i = 0; i < 9; ++i)
	{
		if (!numbers[i])
		{
			std::cout << what << " " << where << ": Zahl " << i + 1 << " kommt nicht vor."
				<< std::endl;
			is_valid = false;
		}
		else if (numbers[i] > 1)
		{
			std::cout << what << " " << where << ": Zahl " << i + 1
				<< " kommt mehrfach vor." << std::endl;
			is_valid = false;
		}
	}
}

//Sudoku Ausgabe
int main()
{
	int	sudoku[9][9]{ 0 };
	std::string eingabe[11]{ " " };

	std::cout << "Bitte geben Sie das Sudoku ein:" << std::endl;

	for (unsigned i = 0; i < 11; ++i)
	{
	
	std::getline(std::cin, eingabe[i]);
	}

	
	for (unsigned i = 0, array_x = 0; i < 11 && array_x < 9; ++i)
	{
		
		if (eingabe[i][0] == '-') continue;

		for (unsigned array_y = 0, string_i = 0; array_y < 9 && string_i < 22; ++array_y)
		{
		
			while (string_i < 22 && !is_digit(eingabe[i][string_i]))
				++string_i;

			
			sudoku[array_x][array_y] = as_digit(eingabe[i][string_i]);

		
			++string_i;
		}

		++array_x;
	}

	bool is_valid{ true };

	// Spalten überprüfung
	for (unsigned y = 0; y < 9; ++y)
	{
		unsigned column[9]{ 0 };
		for (unsigned x = 0; x < 9; ++x)
		{
			++column[sudoku[x][y] - 1];
		}
		print_invalid("Spalte", y, column, is_valid);
	}

	// Zeilen überprüfung
	for (unsigned y = 0; y < 9; ++y)
	{
		unsigned row[9]{ 0 };
		for (unsigned x = 0; x < 9; ++x)
		{
			++row[sudoku[y][x] - 1];
		}
		print_invalid("Zeile", y, row, is_valid);
	}

	// Block überprüfung
	for (unsigned block_n = 0; block_n < 9; ++block_n)
	{
		unsigned block[9]{ 0 };
		for (int x = block_n / 3 * 3; x < block_n / 3 * 3 + 3; ++x)
		{
			for (int y = block_n % 3 * 3; y  
				< block_n % 3 * 3 + 3; ++y)
			{
				++block[sudoku[x][y] - 1];
			}
		}
		print_invalid("Block", block_n, block, is_valid);
	}

	if (is_valid) std::cout << "Das Sudoku ist gueltig." << std::endl;

	return 0;
}


/*
.1.1.4.|.8.6.9.|.7.2.3
.8.7.2.|.3.4.5.|.6.1.9
.9.6.3.|.2.1.7.|.5.4.8
-------|-------|-------
.6.2.8.|.1.3.4.|.9.5.7
.1.9.7.|.6.5.2.|.8.3.4
.4.3.5.|.7.9.8.|.1.6.2
-------|-------|-------
.2.4.6.|.9.7.1.|.3.8.5
.7.5.1.|.4.8.3.|.2.9.6
.3.8.9.|.5.2.6.|.4.7.9


.5.1.4.|.8.6.9.|.7.2.3
.8.7.2.|.3.4.5.|.6.1.9
.9.6.3.|.2.1.7.|.5.4.8
-------|-------|-------
.6.2.8.|.1.3.4.|.9.5.7
.1.9.7.|.6.5.2.|.8.3.4
.4.3.5.|.7.9.8.|.1.6.2
-------|-------|-------
.2.4.6.|.9.7.1.|.3.8.5
.7.5.1.|.4.8.3.|.2.9.6
.3.8.9.|.5.2.6.|.4.7.1

*/
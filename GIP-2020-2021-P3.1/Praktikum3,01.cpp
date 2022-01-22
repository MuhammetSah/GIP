#include <iostream>

int main()
{

	int t1, t2, m1, m2, j1, j2;

	std::cout << "Bitte geben Sie den Tag des ersten Datums ein: ";
	std::cin >> t1;

	std::cout << "Bitte geben Sie den Monat des ersten Datum ein: ";
	std::cin >> m1;

	std::cout << "Bitte geben Sie das Jahr des ersten Datums ein: ";
	std::cin >> j1;

	std::cout << "Bitte geben Sie den Tag des zweiten Datums ein: ";
	std::cin >> t2;

	std::cout << "Bitte geben Sie den Monat des zweiten Datums ein: ";
	std::cin >> m2;

	std::cout << "Bitte geben Sie das Jahr des zweiten Datums ein: ";
	std::cin >> j2;

	if (j1 < j2)
	{
		std::cout << "Das erste Datum liegt vor dem zweiten Datum." << std::endl;

		
	} else if (j2 < j1)
		{
			std::cout << "Das zweite Datum liegt vor dem ersten Datum." << std::endl;
		}
	else if (j1 == j2)
	{
		if (m1 < m2)
		{
			std::cout << "Das erste Datum liegt vor dem zweiten Datum." << std::endl;
		}
		else if (m2 < m1)
		{
			std::cout << "Das zweite Datum liegt vor dem ersten Datum." << std::endl;
		}
		else if (m1 == m2)
		{
			if (t1 < t2)
			{
				std::cout << "Das erste Datum liegt vor dem zweiten Datum." << std::endl;
			}
			else if (t2 < t1)
			{
				std::cout << "Das zweite Datum liegt vor dem ersten Datum." << std::endl;
			}
			else if (t1 == t2)
			{
				std::cout << "Beide Datumsangaben sind gleich." << std::endl;
			}
		}

	}

	system("PAUSE");

	return 0;
}
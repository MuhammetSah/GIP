#include <iostream>


int main()
{
	int az, pgz, pkz, gz, kz;
	
	for (int i = 0; i < 5; i++)
	{

		std::cout << "Bitte geben Sie die " << i + 1 << ". Zahl ein: ? ";
		std::cin >> az;

		if (i == 0)
		{
			kz = az;
			gz = az;
			pkz = i + 1;
			pgz = i + 1;
		}
		else if (az < kz)
		{
			kz = az;
			pkz = i + 1;
		}
		else if (gz < az)
		{
			gz = az;
			pgz = i + 1;
		}

	}

	std::cout << "Die " << pkz << ". Zahl war die kleinste der eingegebenen Zahlen und lautet: " << kz << std::endl;
	std::cout << "Die " << pgz << ". Zahl war die groesste der eingegebenen Zahlen und lautet: " << gz << std::endl;
	
	system("PAUSE");

	return 0;
}
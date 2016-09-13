#include <iostream>
#include <string>
#include <time.h>

void ex02();
void ex03();
void ex04();
void ex05();
int doubler(int);
int add(int, int);
void addReferance(int &y);
void arrayInput(int[5], int);
void arrayContents(int[5], int);

int main()
{
	// All of the homework is run from the main
	ex02();
	ex03();
	ex04();
	ex05();
}

void ex02()
{
	// section a
	bool hasPassedTest = true;

	// section b
	srand(time (NULL));

	int x = rand();
	int y = rand();

	std::cout << "Is x greater than y?\n";
	std::cout << (x > y) << std::endl;

	// section c
	std::cout << "Enter a numerical value\n>> ";
	int numberOfShares;
	std::cin >> numberOfShares;

	if (numberOfShares <= 100)
	{
		std::cout << numberOfShares << " is less than or equal to 100\n\n";
	}

	else
	{
		std::cout << numberOfShares << " is greater than 100\n\n";
	}

	// section d
	int boxWidth;
	int bookSize;

	std::cout << "Enter a box width\n>> ";
	std::cin >> boxWidth;

	std::cout << "Enter a book size\n>> ";
	std::cin >> bookSize;

	if (boxWidth % bookSize == 0)
	{
		std::cout << "The books will all fit in the box\n\n";
	}
	else
	{
		std::cout << "The books will not all fit in the box\n\n";
	}

	// section e
	int shelfLife;
	std::cout << "Please enter the shelf life of a box of chocolate\n>> ";
	std::cin >> shelfLife;

	int temperature;
	std::cout << "How hot is it outside? (F)\n>> ";
	std::cin >> temperature;

	if (temperature >= 90)
	{
		shelfLife -= 4;
		std::cout << "It's very hot outside! The shelf life is now: " << shelfLife << std::endl;
	}
	else
	{
		std::cout << "Fantastic! You shelf life didn't change.\n";
	}

	return;
}

void ex03()
{
	// a) -----------------------------------------------------------------------------------------------
	int area;
	float diagonal;
	std::cout << "Please enter the area of a square.\n>> ";
	std::cin >> area;

	diagonal = sqrt(2 * area);
	std::cout << "The diagonal line cross-cutting the square is " << diagonal << " long.\n\n";

	// b) ------------------------------------------------------------------------------------------------
	char yesNo;
	std::cout << "Please answer this yes or no question: \"Are you male?\" (y/n)\n>> ";
	std::cin >> yesNo;

	if (yesNo == 'y')
	{
		std::cout << "Your answer was \"Yes\"\n\n";
	}
	else if (yesNo == 'n')
	{
		std::cout << "Your answer was \"No\"\n\n";
	}
	else
	{
		std::cout << "Incorrect input\n\n";
	}

	// c) --------------------------------------------------------------------------------------------------
	char tab = '\t';

	// d) --------------------------------------------------------------------------------------------------
	std::string mailingAddress = "";

	std::cout << "What is your mailing address?\n>> ";
	std::cin.ignore();
	std::getline(std::cin, mailingAddress);
	std::cout << "Your mailing address is: " << mailingAddress << std::endl;
}

void ex04()
{
	// a) -------------------------------------------
	int input;
	do
	{
		
		std::cout << "Enter a number between 1 and 10\n>> ";
		std::cin >> input;

		if (input > 10 || input < 1)
		{
			std::cout << "Please enter valid input.\n";
		}
	} while (input > 10 || input < 1);

	// b) -------------------------------------------
	int squareSum = 0;
	for (int i = 1; i <= input; i++)
	{
		squareSum += pow(i, 3);
		std::cout << squareSum << std::endl;
	}
	std::cout << "The sum of all cubes from 1 to " << input << " is: " << squareSum << std::endl;

	// c) --------------------------------------------
	int decreasingNumber = input;
	do
	{
		std::cout << "*";
		decreasingNumber--;

	} while (decreasingNumber >= 0);
	std::cout << std::endl;

	// d) ---------------------------------------------

	for (int i = 0; i <= 40; i = i + 2)
	{
		std::cout << i << " ";
	}
	std::cout << std::endl;

	// e) ---------------------------------------------

	std::cout << "Your input (" << input << "), doubled, is: " << doubler(input) << std::endl;

	// f) ---------------------------------------------
	srand(time(NULL));

	int x = rand() % 10;
	int y = rand() % 10;

	std::cout << std::endl << "Your randomly generated number is: " << (x, y) << std::endl;

	// g) ---------------------------------------------

	std::cout << "Your input was: " << input << std::endl;

	addReferance(input);

	std::cout << "Your input has been changed to: " << input << std::endl;

}

void ex05()
{
	int input;
	int ARRAY[5];
	int sum = 0;
	int product = 1;

	// This is a change
	std::cout << "Please enter 5 numbers\n";

	for (int i = 0; i <= 4; i++)
	{
		std::cout << ">> ";
		std::cin >> input;
		ARRAY[i] = input;
	}

	for (int i = 0; i <= 4; i++)
	{
		sum += ARRAY[i];
	}
	std::cout << "Array Sum: " << sum << std::endl;

	for (int i = 0; i <= 4; i++)
	{
		product *= ARRAY[i];
	}
	std::cout << "Array Product: " << product << std::endl;

	arrayInput(ARRAY, 5);

	arrayContents(ARRAY, 5);

	return;
}

int doubler(int input)
{
	return input * 2;
}

int add(int x, int y)
{
	return x + y;
}

void addReferance(int &y)
{
	y += 1;
	return;
}

void arrayInput(int list[5], int length)
{
	std::cout << "The length of the array is: " << length << std::endl;

	std::cout << "The array contents are: " << std::endl;
	for (int i = 0; i <= 4; i++)
	{
		std::cout << std::to_string(list[i]) << std::endl;
	}
}

void arrayContents(int list[5], int length)
{
	int input;
	std::cout << "Enter inventory inquirey\n>> ";
	std::cin >> input;

	for (int i = 0; i <= length; i++)
	{
		if (input == list[i])
		{
			std::cout << "'" << input << "' is in the array.\n";
		}
	}
}

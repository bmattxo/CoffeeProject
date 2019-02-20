#include<iostream>
#include<string>
#include<iomanip>
using namespace std;

bool YesNoCream(string);

int main()
{
	enum CoffeeStrength { Light, Medium, Dark };
	enum CoffeeSize { s_small,s_regular, s_medium, s_large, s_extralarge };
	struct Order {
		string name;
		float cost;
		CoffeeStrength strength;
		int sugar; 
		CoffeeSize size;
		

	};
	int typeOfCoffee;
	Order Columbian;
	Order FrenchRoast;
	Order ItalianBlend;
	Order House;
	cout << "Select a coffee\n1. Columbian\n2. FrenchRoast\n3. Italian Blend\n4. House"<< endl;
	cin >> typeOfCoffee;
	string answer;
	string choice;
	int strengthInput; 
	int sizeInput;
	int
		if (typeOfCoffee == 1)
		{
			Columbian.name = "Columbian";
			//cout << "Enter the cost: " << endl;
			//cin >> Columbian.cost;
			cout << "Enter the size: " << endl;
			cin >> sizeInput;
			switch (sizeInput)
			{
			case 0: Columbian.size = s_small; break;
			case 1: Columbian.size = s_regular; break;
			case 2: Columbian.size = s_large; break;
			case 3: Columbian.size = s_extralarge; break;
			default:
				cout << "Bad strength!" << std::endl;
				return;
			}
			if (Columbian.size = s_small)
			{
				Columbian.cost = 1.50;
			}
		cout << "Enter the strength of the coffee 1-light, 2-medium, 3-dark: " << endl;
		cin >> strengthInput;
		switch (strengthInput)
		{
		case 0: Columbian.strength = Light; break;
		case 1: Columbian.strength = Medium; break;
		case 2: Columbian.strength = Dark; break;
		default:
			cout << "Bad strength!" << std::endl;
			return;
		}
		cout << "Enter the amount of sugar to you desire (0-4): " << endl;
		cin >> Columbian.sugar;
		cout << "Do you want cream? 'yes' or 'no': ";
		cin >> answer;
		system("CLS");
		cout << Columbian.name << endl;
		cout << "Cost: $" << Columbian.cost << endl;

		if (Columbian.strength == 1)
		{
			cout << "Light" << endl;
		}
		if (Columbian.strength == 2)
		{
			cout << "Medium" << endl;
		}
		if (Columbian.strength == 3)
		{
			cout << "Dark" << endl;
		}


		cout << "Amount of Sugar: " << Columbian.sugar << " cubes of sugar" << endl;
		if (YesNoCream(answer))
			cout << "With cream" << endl;
		else
			cout << "No cream" << endl;

	}
	if (typeOfCoffee == 2)
	{
		FrenchRoast.name = "French Roast";
		cout << "Enter the cost: " << endl;
		cin >> FrenchRoast.cost;
		cout << "Enter the size: " << endl;

		cin >> sizeInput;
		switch (sizeInput)
		{
		case 0: Columbian.size = s_small; break;
		case 1: Columbian.size = s_regular; break;
		case 2: Columbian.size = s_large; break;
		case 3: Columbian.size = s_extralarge; break;
		default:
			cout << "Bad strength!" << std::endl;
			return;
		}
		cout << "Enter the strength of the coffee 1-light, 2-medium, 3-dark: " << endl;
		cin >> strengthInput;
		switch (strengthInput)
		{
		case 0: Columbian.strength = Light; break;
		case 1: Columbian.strength = Medium; break;
		case 2: Columbian.strength = Dark; break;
		default:
			std::cout << "Bad strength!" << std::endl;
			return;
		}
		cout << "Enter the amount of sugar to you desire (0-4): " << endl;
		cin >> FrenchRoast.sugar;
		cout << "Do you want cream? 'yes' or 'no': ";
		cin >> answer;
		system("CLS");
		cout << FrenchRoast.name << endl;
		cout << "Cost: $" << FrenchRoast.cost << endl;
		if (FrenchRoast.strength == 1)
		{
			cout << "Light" << endl;
		}
		if (FrenchRoast.strength == 2)
		{
			cout << "Medium" << endl;
		}
		if (FrenchRoast.strength == 3)
		{
			cout << "Dark" << endl;
		}
		cout << "Amount of Sugar: " << FrenchRoast.sugar << " cubes of sugar" << endl;
		if (YesNoCream(answer))
			cout << "With cream" << endl;
		else
			cout << "No cream" << endl;

	}
	if (typeOfCoffee == 3)
	{
		ItalianBlend.name = "Italian Blend";
		cout << "Enter the cost: " << endl;
		cin >> ItalianBlend.cost;
		cout << "Enter the size: " << endl;

		cin >> sizeInput;
		switch (sizeInput)
		{
		case 0: Columbian.size = s_small; break;
		case 1: Columbian.size = s_regular; break;
		case 2: Columbian.size = s_large; break;
		case 3: Columbian.size = s_extralarge; break;
		default:
			cout << "Bad strength!" << std::endl;
			return;
		}
		cout << "Enter the strength of the coffee 1-light, 2-medium, 3-dark: " << endl;
		cin >> strengthInput;
		switch (strengthInput)
		{
		case 0: Columbian.strength = Light; break;
		case 1: Columbian.strength = Medium; break;
		case 2: Columbian.strength = Dark; break;
		default:
			std::cout << "Bad strength!" << std::endl;
			return;
		}
		cout << "Enter the amount of sugar to you desire (0-4): " << endl;
		cin >> ItalianBlend.sugar;
		cout << "Do you want cream? 'yes' or 'no': ";
		cin >> answer;
		system("CLS");
		cout << ItalianBlend.name << endl;
		cout << "Cost: $" << ItalianBlend.cost << endl;
		if (ItalianBlend.strength == 1)
		{
			cout << "Light" << endl;
		}
		if (ItalianBlend.strength == 2)
		{
			cout << "Medium" << endl;
		}
		if (ItalianBlend.strength == 3)
		{
			cout << "Dark" << endl;
		}
		cout << "Amount of Sugar: " << ItalianBlend.sugar << " cubes of sugar" << endl;
		if (YesNoCream(answer))
			cout << "With cream" << endl;
		else
			cout << "No cream" << endl;

	}
	if (typeOfCoffee == 4)
	{
		House.name = "House";
		cout << "Enter the cost: " << endl;
		cin >> House.cost;
		cout << "Enter the size: " << endl;

		cin >> sizeInput;
		switch (sizeInput)
		{
		case 0: Columbian.size = s_small; break;
		case 1: Columbian.size = s_regular; break;
		case 2: Columbian.size = s_large; break;
		case 3: Columbian.size = s_extralarge; break;
		default:
			cout << "Bad strength!" << std::endl;
			return;
		}
		cout << "Enter the strength of the coffee 1-light, 2-medium, 3-dark: " << endl;
		cin >> strengthInput;
		switch (strengthInput)
		{
		case 0: Columbian.strength = Light; break;
		case 1: Columbian.strength = Medium; break;
		case 2: Columbian.strength = Dark; break;
		default:
			std::cout << "Bad strength!" << std::endl;
			return;
		}
		cout << "Enter the amount of sugar to you desire (0-4): " << endl;
		cin >> House.sugar;
		cout << "Do you want cream? 'yes' or 'no': ";
		cin >> answer;
		system("CLS");
		cout << House.name << endl;
		cout << "Cost: $" << House.cost << endl;
		if (House.strength == 1)
		{
			cout << "Light" << endl;
		}
		if (House.strength == 2)
		{
			cout << "Medium" << endl;
		}
		if (House.strength == 3)
		{
			cout << "Dark" << endl;
		}
		cout << "Amount of Sugar: " << House.sugar << " cubes of sugar" << endl;
		if (YesNoCream(answer))
			cout << "With cream" << endl;
		else
			cout << "No cream" << endl;

	}
	cout << "Do you want to enter another order? Enter 'yes' for yes or anything else to quit: " << endl;
	cin >> choice;
	cin.get();

	while(choice=="yes")
	{
		system("CLS");

		cout << "Select a coffee\n1. Columbian\n2. FrenchRoast\n3. Italian Blend\n4. House" << endl;
		cin >> typeOfCoffee;
		if (typeOfCoffee == 1)
		{
			Columbian.name = "Columbian";
			cout << "Enter the cost: " << endl;
			cin >> Columbian.cost;
			cout << "Enter the size: " << endl;

			cin >> sizeInput;
			switch (sizeInput)
			{
			case 0: Columbian.size = s_small; break;
			case 1: Columbian.size = s_regular; break;
			case 2: Columbian.size = s_large; break;
			case 3: Columbian.size = s_extralarge; break;
			default:
				cout << "Bad strength!" << std::endl;
				return;
			}
			cout << "Enter the strength of the coffee 1-light, 2-medium, 3-dark: " << endl;
			cin >> strengthInput;
			switch (strengthInput)
			{
			case 0: Columbian.strength = Light; break;
			case 1: Columbian.strength = Medium; break;
			case 2: Columbian.strength = Dark; break;
			default:
				std::cout << "Bad strength!" << std::endl;
				return;
			}
			cout << "Enter the amount of sugar to you desire (0-4): " << endl;
			cin >> Columbian.sugar;
			cout << "Do you want cream? 'yes' or 'no': ";
			cin >> answer;
			system("CLS");

			cout << Columbian.name << endl;
			cout << "Cost: $" << Columbian.cost << endl;

			if (Columbian.strength == 1)
			{
				cout << "Light" << endl;
			}
			if (Columbian.strength == 2)
			{
				cout << "Medium" << endl;
			}
			if (Columbian.strength == 3)
			{
				cout << "Dark" << endl;
			}


			cout << "Amount of Sugar: " << Columbian.sugar << " cubes of sugar" << endl;
			if (YesNoCream(answer))
				cout << "With cream" << endl;
			else
				cout << "No cream" << endl;

		}
		if (typeOfCoffee == 2)
		{
			Columbian.name = "French Roast";
			cout << "Enter the cost: " << endl;
			cin >> FrenchRoast.cost;
			cout << "Enter the size: " << endl;

			cin >> sizeInput;
			switch (sizeInput)
			{
			case 0: Columbian.size = s_small; break;
			case 1: Columbian.size = s_regular; break;
			case 2: Columbian.size = s_large; break;
			case 3: Columbian.size = s_extralarge; break;
			default:
				cout << "Bad strength!" << std::endl;
				return;
			}
			cout << "Enter the strength of the coffee 1-light, 2-medium, 3-dark: " << endl;
			cin >> strengthInput;
			switch (strengthInput)
			{
			case 0: Columbian.strength = Light; break;
			case 1: Columbian.strength = Medium; break;
			case 2: Columbian.strength = Dark; break;
			default:
				std::cout << "Bad strength!" << std::endl;
				return;
			}
			cout << "Enter the amount of sugar to you desire (0-4): " << endl;
			cin >> FrenchRoast.sugar;
			cout << "Do you want cream? 'yes' or 'no': ";
			cin >> answer;
			system("CLS");
			cout << FrenchRoast.name << endl;
			cout << "Cost: $" << FrenchRoast.cost << endl;
			if (FrenchRoast.strength == 1)
			{
				cout << "Light" << endl;
			}
			if (FrenchRoast.strength == 2)
			{
				cout << "Medium" << endl;
			}
			if (FrenchRoast.strength == 3)
			{
				cout << "Dark" << endl;
			}
			cout << "Amount of Sugar: " << FrenchRoast.sugar << " cubes of sugar" << endl;
			if (YesNoCream(answer))
				cout << "With cream" << endl;
			else
				cout << "No cream" << endl;

		}
		if (typeOfCoffee == 3)
		{
			ItalianBlend.name = "Italian Blend";
			cout << "Enter the cost: " << endl;
			cin >> ItalianBlend.cost;
			cout << "Enter the size: " << endl;

			cin >> sizeInput;
			switch (sizeInput)
			{
			case 0: Columbian.size = s_small; break;
			case 1: Columbian.size = s_regular; break;
			case 2: Columbian.size = s_large; break;
			case 3: Columbian.size = s_extralarge; break;
			default:
				cout << "Bad strength!" << std::endl;
				return;
			}
			cout << "Enter the strength of the coffee 1-light, 2-medium, 3-dark: " << endl;
			cin >> strengthInput;
			switch (strengthInput)
			{
			case 0: Columbian.strength = Light; break;
			case 1: Columbian.strength = Medium; break;
			case 2: Columbian.strength = Dark; break;
			default:
				std::cout << "Bad strength!" << std::endl;
				return;
			}
			cout << "Enter the amount of sugar to you desire (0-4): " << endl;
			cin >> ItalianBlend.sugar;
			cout << "Do you want cream? 'yes' or 'no': ";
			cin >> answer;
			system("CLS");
			cout << ItalianBlend.name << endl;
			cout << "Cost: $" << ItalianBlend.cost << endl;
			if (ItalianBlend.strength == 1)
			{
				cout << "Light" << endl;
			}
			if (ItalianBlend.strength == 2)
			{
				cout << "Medium" << endl;
			}
			if (ItalianBlend.strength == 3)
			{
				cout << "Dark" << endl;
			}
			cout << "Amount of Sugar: " << ItalianBlend.sugar << " cubes of sugar" << endl;
			if (YesNoCream(answer))
				cout << "With cream" << endl;
			else
				cout << "No cream" << endl;

		}
		if (typeOfCoffee == 4)
		{
			House.name = "House";
			cout << "Enter the cost: " << endl;
			cin >> House.cost;
			cout << "Enter the size: " << endl;
			cin >> sizeInput;
			switch (sizeInput)
			{
			case 0: Columbian.size = s_small; break;
			case 1: Columbian.size = s_regular; break;
			case 2: Columbian.size = s_large; break;
			case 3: Columbian.size = s_extralarge; break;
			default:
				cout << "Bad strength!" << std::endl;
				return;
			}
			cout << "Enter the strength of the coffee 1-light, 2-medium, 3-dark: " << endl;
			cin >> strengthInput;
			switch (strengthInput)
			{
			case 0: Columbian.strength = Light; break;
			case 1: Columbian.strength = Medium; break;
			case 2: Columbian.strength = Dark; break;
			default:
				std::cout << "Bad strength!" << std::endl;
				return;
			}
			cout << "Enter the amount of sugar to you desire (0-4): " << endl;
			cin >> House.sugar;
			cout << "Do you want cream? 'yes' or 'no': ";
			cin >> answer;
			system("CLS");
			cout << House.name << endl;
			cout << "Cost: $" << House.cost << endl;
			if (House.strength == 1)
			{
				cout << "Light" << endl;
			}
			if (House.strength == 2)
			{
				cout << "Medium" << endl;
			}
			if (House.strength == 3)
			{
				cout << "Dark" << endl;
			}
			cout << "Amount of Sugar: " << House.sugar << " cubes of sugar" << endl;
			if (YesNoCream(answer))
				cout << "With cream" << endl;
			else
				cout << "No cream" << endl;

		}
		
		cout << "Do you want to enter another order? Enter 'yes' to continue or anything else to quit" << endl;
		cin >> choice;
		cin.get();
	}

	system("PAUSE");
	return 0;
}
bool YesNoCream(string a)
{
	if (a == "yes")
		return 1;
	else
		return 0;

}
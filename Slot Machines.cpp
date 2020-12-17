// https://dmoj.ca/problem/ccc00s1

//should easily take sub 10 minutes to do, else you need to practice lots more

// machine one adds 30 after -35 coins spent

// machine two adds 60 after -100 coins spent

// machine three adds 9 after -10 coins spent

// does one, two, three

// each one has seperate timer of coins put in

#include <iostream>
#include <string>

int main() {

	int Coins;

	std::cin >> Coins;


	int timesOne;
	
	int timesTwo;
	
	int timesThree;
	
	std::cin >> timesOne;
	std::cin >> timesTwo;
	std::cin >> timesThree;

	while (timesOne>34) {
		
		timesOne -= 35;

	}

	while (timesTwo > 99) {

		timesTwo -= 99;

	}

	while (timesThree > 9) {

		timesTwo -= 10;

	}

	int timesTotal = 0;

	while (true) {

		if (Coins > 0) {
			timesOne += 1;
			Coins -= 1;
			timesTotal += 1;

			if (timesOne == 35) {

				Coins += 30;

				timesOne = 0;
			}

		

		}
		else { // I could do a goto statment or such, but I chose not to ... yeah

			std::cout << "Martha plays " + std::to_string(timesTotal) + " times before going broke.";

			return 0;
		}

		if (Coins > 0) {
			timesTwo += 1;
			Coins -= 1;

			timesTotal += 1;

			if (timesTwo == 100) {

				Coins += 60;

				timesTwo = 0;
			}

		}

		else { // I could do a goto statment or such, but I chose not to ... yeah

			std::cout << "Martha plays " + std::to_string(timesTotal) + " times before going broke.";

			return 0;
		}
			if (Coins > 0) {
				timesThree += 1;
				Coins -= 1;

				timesTotal += 1;
				if (timesThree == 10) {

					Coins += 9;
					timesThree = 0;
				}

			}
			else { // I could do a goto statment or such, but I chose not to ... yeah

				std::cout << "Martha plays " + std::to_string(timesTotal) + " times before going broke.";

				return 0;

			}
		}

}

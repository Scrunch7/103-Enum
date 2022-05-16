#include <iostream>


enum Names { Rob, Pete, Ella, Jordan };

union inputs {
	char ch;
	char cha[];
	int i;
	float f;
	double d;
};

int main()
{
	//------------------------enums------------------------
	Names name = Rob;

	switch (name) {
	case Names::Rob:
		break;

	case Names::Pete:
		break;

	case Names::Ella:
		break;

	case Names::Jordan:
		break;

	default:
		break;
	};


	



	////------------------------union------------------------\\

	//union inputs userInput {'a'};

	//std::cin >> userInput.ch;

	//std::cin >> userInput.f;

	//std::cout << userInput.ch;
	//


}
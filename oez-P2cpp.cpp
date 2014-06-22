#include <iostream>
using namespace std;

int main()
{
	int metalID = 0;
	double testResult = 0;																				// testResult variable holds input of all test results. 
																												// Must be double to hold decimal?
	cout << "What is the metal ID? (0 to quit): ";												// ask for metal ID or 0 to quit
	cin >> metalID;

	while (metalID > 0)
	{
		cout << "What is the Carbon content of metal " << metalID << "?: ";
		
		cin >> testResult;																				// test 1: Carbon content
		int grade = (testResult < .67) ? 100 : 0;													// grade variable holds results of conditional.  Can declare and set at 
																												// the same time. Type int to use in switch/case
		cout << "What is the Rockwell hardness of metal " << metalID << "?: ";			// test 2: Rockwell hardness >= 50
		cin >> testResult;
		grade += (testResult >= 50) ? 10 : 0;														// grade variable receives new conditional data from test 2

		cout << "What is the Tensile strength of your metal " << metalID << "?: ";		// test 3: Tensile strength > 70,000.
		cin >> testResult;
		grade += (testResult > 70000) ? 1 : 0;														// grade variable receives new conditional data form test 3

		switch(grade)
		{
		case 111:
			cout << "\nMetal " << metalID << "'s grade is 10" << endl;
			break;
		case 110:
			cout << "\nMetal " << metalID << "'s grade is 9" << endl;
			break;
		case 100:
			cout << "\nMetal " << metalID << "'s grade is 8" << endl;
			break;
		case 0:
			cout << "\nMetal " << metalID << "'s grade is 7" << endl;
			break;
		default:
			cout << "\nMetal " << metalID << "'s grade is 0" << endl;
		}

		cout << "\nWhat is the metal ID? (0 to quit): ";
		cin >> metalID;
	}
}
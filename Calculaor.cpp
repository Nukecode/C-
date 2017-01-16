#include <iostream>
using namespace std;
int main()
{
 	int exit;
 	cout << "Calculator\n" << endl;      
	cout << "List Of Functions\n" << endl;
	cout << "1. Add" << endl;
	cout << "2. Subtract" << endl;
	cout << "3. Divide" << endl;
	cout << "4. Multiply" << endl;
	cout << endl << endl ;"Type The Function You Would like to run";
	int func;
	cin >> func;
	if (func == 1) {
		cout<< "Input First Number" << endl;
		int x; 
		cin >> x;
		cout << "Input Second Number" << endl;
		int y;
		cin >> y;
	
		int sum = x+y;
		cout << "Sum =" << sum << endl;
		cout << "Press any key then enter too terminate"
		
	}
	
}

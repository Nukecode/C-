#include <iostream>
using namespace std;

int main()
{
	//Ask To Input First Number
	cout << "Please Input The First Number\n";
	//Input Number
	int num;
	cin >> num;
	//Ask To Input 2nd Number
	cout<< "Please Input The Second Number\n";
	//Imput Number
	int num2;
	cin >> num2;
	int ans; //Declare ans as a varible
	ans = num2 + num; //Set ans value to num + num2
	cout << "Answer Is, "<< ans; //Display a answer
	cout << "Press Enter To Terminate The Program";
	int cont;
	cin >> cont;
	return 0;
}

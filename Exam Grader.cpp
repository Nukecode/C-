#include <iostream>
using namespace std;

int main() {
	
	cout << "Exam Mark To Grade Converter \n\n";
	cout << "Enter Mark\n\n";
	int mark;
	cin >> mark;
	char grade;
	char fail_pass;
	if (mark <= 60) {
		char fail_pass[] = "Failed"; 
		if (mark >= 60) {
		    if(mark <= 50) {
		    	char grade[] = "D";
				cout << "You ";
				cout << fail_pass;
				cout << " And Got an ";
				cout << grade;
			}
			else{
				if(mark <= 40) {
					char grade[] = "E";
					cout << "You ";
					cout << fail_pass;
					cout << " And Got an ";
					cout << grade;

				}
				else{
					char grade[] = "U";
					cout << "You ";
					cout << fail_pass;
					cout << " And Got an ";
					cout << grade;

				}
			}
		 {	
							
		
		
	}
	else{
		char pass_fail[] = "Passed";
		if(mark <= 95){
			if(mark <= 90){
				if (mark <= 80){
					if (mark <= 70){
						if (mark <= 65){
							char grade[] = "C";
							cout << "You ";
							cout << fail_pass;
							cout << " And Got an ";
							cout << grade;
						}
					}
					else{
						char grade[] = "B";
						cout << "You ";
						cout << fail_pass;
						cout << " And Got an ";
						cout << grade;

					}
				}
				else{
					char grade[] = "A";
					cout << "You ";
					cout << fail_pass;
					cout << " And Got an ";
					cout << grade;

				}
			}
			else{
				char grade[] = "A*";
				cout << "You ";
				cout << fail_pass;
				cout << " And Got an ";
				cout << grade;

			}
		} 
		else{
			char grade[] = "A**";
			cout << "You ";
			cout << fail_pass;
			cout << " And Got an ";
			cout << grade;

		}
	}
}
}

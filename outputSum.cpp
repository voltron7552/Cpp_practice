#include <iostream>
#include <iomanip>
#include <ctype.h>
using namespace std;

void averageCal(); 


int main() 
{
	int choice = 0, tmp = 0;

	do {
	cout<<"Welcome to the ultimate app what do you want to do\n";
	cout<<"please choose from the menu\n";
	cout<< "press [1] for test  average calculator\n";
	cout<< "press [0] to exit\n";
	cin >> choice;

	while(choice < 0) {
	cout << "please enter a valid number\n";
	cin >> choice;	
	}
	switch(choice) {
	case 1: averageCal(); 
	}
	return 0;
	}while(tmp != 0);
}

void averageCal() {

	int TMP = 100, sum = 0, counter = 0;
	float MAXSIZE[TMP];
	cout << "welcome to the test average calculator\n";
	cout << "how many test do you want to enter\n";
	cin >>TMP;
	while (TMP <= 0 || isalpha(TMP) ){
			cout<<"Please enter a positive value for test\n";
			cin >>TMP;
			counter++;
			return ;
	}
	counter = 0;
	cout <<"Inside TMP "<<TMP<<endl;
	//add each test percentage
	for (int i = 1; i <= TMP; i++) {
	cout << "Please enter a test "<<  i <<" score\n";
	cin >> MAXSIZE[i];
	}

	for(int i = 1; i <= TMP; i++) {
	cout << "you entered in index"<<"["<< i <<"]"<< " " << MAXSIZE[i] << endl;
	sum += MAXSIZE[i];
	}
	cout <<  "the sum  for "<< "["<<TMP<<"]" <<" test scores is " << sum << endl;
	cout <<  "The average of " << TMP << " scores is " << sum/TMP<<"%"<<endl;

}

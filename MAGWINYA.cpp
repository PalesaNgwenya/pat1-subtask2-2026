#include <iostream>
#include<ctime>
using namespace std;

void waitForFiveMinutes() {
    const int minutes = 5;
    const clock_t wait_time = minutes * 60 * CLOCKS_PER_SEC;

    clock_t start_time = clock();
    while ((clock() - start_time) < wait_time);
}

int main() {
	int temp1, temp2, temp3;

	cout << "Enter the first temperature reading: ";
	cin >> temp1;
	waitForFiveMinutes();
	
	cout << "Enter the second temperature reading: ";
        cin >> temp2;
	
	if (temp2 - temp1 > 50) {
		cout << "Reduce fryer heat before taking the third reading.\n";
	} 
	else if (temp2 - temp1 < 10) {
		cout << "Increase the fryer heat before taking the third reading. \n";
	} 
	waitForFiveMinutes();

	cout << "Enter the third temperature reading: ";
        cin >> temp3;

	if (temp3 >= 150 && temp3 <= 190) {
		cout << "You may start frying Magwinyas.\n";
	}
	else {
		cout << "Oil is not ready for frying!\n";}
	return 0;
}


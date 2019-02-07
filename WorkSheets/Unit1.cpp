
//Anders Love-Tedjoutomo Hello world program
//Prompts user for age then prints age and hello world

#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    float number;
    cout << "Enter a number: "<< endl;
    cin >> number;
    cout << "your number rounded to the nearest tenth is: " << endl;
    cout << fixed;  // fixed number of decimals
	cout << setw(20) << setprecision(1) << left << number;
	cout << setw(20) << right << number << endl;

    return 0;
}

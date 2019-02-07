#include <iostream>
#include <fstream>
#include <cmath>
#include <cstring>

using namespace std;

int main(int argc, char *argv[]) {
    int number;

    ifstream fin("encode.dat");
    if (!fin) {
        cout << "encode.dat not found" << endl;
        return 404;
    }
    while (fin >> number) {
        cout << number << endl;
    }
    return 0;
}

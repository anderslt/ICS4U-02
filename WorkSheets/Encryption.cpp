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
       int i;
       char str[100];
       char letter;

       if ( a <= letter <= z) //FIX!

         for(i = 0; (i < 100 && str[i] != '\0'); i++)
            str[i] = str[i] + letter;

         cout << "\nEncrypted string: " << str << endl;
         break;


         for(i = 0; (i < 100 && str[i] != '\0'); i++)
         str[i] = str[i] - letter;

   return 0;
}


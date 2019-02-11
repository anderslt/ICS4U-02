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
       char letter[3][5];
       char str[100];
       char kword[2];

       while (fin >> str) {
            cout << " " << str << endl;
        }


    for (int x=0; x<3; x++){
        for (int y=0; y<5; y++){
                fin >> letter[x][y];
                if ( 'a' > letter[x][y] > 'z'){
                    y--
                    x--;
                }
                cout << "" << letter[x][y];

        }
    }
        fin.close();


         for(i = 0; (i < 100 && str[i] != '\0'); i++)
            str[i] = str[i] + kword[i];



         for(i = 0; (i < 100 && str[i] != '\0'); i++)
         str[i] = str[i] - kword[i];

   return 0;

}


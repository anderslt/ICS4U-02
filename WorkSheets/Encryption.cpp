/****************************************************
* Anders Love-Tedjoutomo                            *
* ISU4U-02                                          *
* February 7, 2019                                  *
* Ms. Cullum                                        *
* Encyption assignment: Program Reads file for key- *
* word and input and then encrypts(shifts the ASCII *
* value of the letters) and displys the encrypted   *
* message.                                          *
*****************************************************/


#include <iostream>
#include <fstream>
#include <cmath>
#include <cstring>

using namespace std;

int main(int argc, char *argv[]) {
    int number;
    int X = 0;
    int Y =0;
    int Shift[6];
    int KeyWordCharacterNum = 0;
    int InputCharacterNum = 0;
    char KeyWord[6];
    char UncryptedOutput[60];
    int PlaceHolder;
    char EncryptedOutput[60];


    //Verifies that file is found and opened
    ifstream fin("encode.dat");
    if (!fin) {
        cout << "encode.dat not found" << endl;
        return 404;
    }
        //Reads Keyword and length from first line of file
        fin >> KeyWord;
        KeyWordCharacterNum = strlen(KeyWord);

        //Reads Message and length from file
        while(fin >> UncryptedOutput){
        InputCharacterNum = strlen(UncryptedOutput);

        for(X=0; X< KeyWordCharacterNum; X++){
            //Verifies that the Keyword is composed of letters only
            if (KeyWord[X] >= 'A' && KeyWord[X] <= 'Z')
            //Converts Keyword letters into intergers values for shifting input characters
            Shift[X] = KeyWord[X] - 'A';
        }
        for (Y=0; Y < InputCharacterNum; Y++){
            //Verifies that the message is composed of letters only
            if (UncryptedOutput[Y] >= 'A' && UncryptedOutput[Y] <= 'Z'){
                //Shifts message letters per the respective keyword
                PlaceHolder = UncryptedOutput[Y] + Shift[Y%KeyWordCharacterNum];
                //resets letter if it is not in the alphabet and applies respective shift
                if (PlaceHolder > 90){
                    PlaceHolder = PlaceHolder - 91;
                    PlaceHolder = PlaceHolder + 65;
                }
                //transfers encrypted message
                EncryptedOutput[Y] = PlaceHolder;
                //displays encrypted message
                cout << EncryptedOutput[Y] << endl;
            }
        }
    }
    return 0;
}



#include <iostream>
#include <fstream>
#include <cmath>
#include <cstring>
#include "apvector.h"

using namespace std;

int main(){
apvector<int> v(10);
 for(int i = 0; i<10; i++){
    cout << v[i] << endl;
 }
 cout <<v.length() << endl;
}

#include <iostream>
#include <string>
using namespace std;

    int main() {
       
         // initianilization and declaration of an array
        string arrayString[] =  {"B123", "C234", "A345", "B177", "G3003", "C235", "B179"};
       
         // check the size of the array
         int size = sizeof(arrayString) / sizeof(arrayString[0]);
          cout << "size of array: " << size <<endl;
         for (int n = 0; n < size; n++) {
            if (arrayString[n][0] == 'B') {
                cout << "The array string with starting B: " << arrayString[n] <<endl;

                return 0;
            }
         }
    }
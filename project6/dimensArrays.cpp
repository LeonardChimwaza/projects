#include <iostream>
using namespace std;

   int main() {

    // declare the values
      int rows, columns;


       // prompt a user to enter the values
      do {
        cout << "Enter the number of rows (1-3): ";
        cin >> rows;
        cin.ignore();    //  skip to newline 
         } while (rows < 1 || rows > 3);
 
     do {
        cout << "Enter the number of columns (1-3): ";
        cin >> columns; 
         } while (columns < 1 || columns > 3);

  // declare dynamic allocation
   double** ArrayDouble = new double*[rows];
   for(int i = 0; i < rows; ++i) {
    ArrayDouble[i] = new double[columns];
   }

     // assigning values
     cout << "Enter values: " << endl;
     for(int i = 0; i < rows; ++i) {
        for(int j = 0; j < columns; ++j) {
            cout << "Element[" << i <<"]["<< j << "]: ";
            cin >> ArrayDouble[i][j];
        }
     }
        cout << " double arrays values: " << endl;
        for(int i = 0; i < rows; ++i) {
            for(int j = 0; j < columns; ++j) {
                cout << ArrayDouble[i][j];
            }
        }
        return 0;
   }
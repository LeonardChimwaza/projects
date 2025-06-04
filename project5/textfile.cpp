#include <iostream>
#include <fstream>
using namespace std;

   int main() {
     // creating an output file
     ofstream myFirstFile;

      // create an opening text file
      myFirstFile.open("textFile.txt");

     if(myFirstFile.is_open()) {
        myFirstFile << "ios::in opens the file for reading \n";
     
     }
         
      myFirstFile << "This is Advanced Computer Programming Module" <<endl;

        // closing the file
      myFirstFile.close();

      return 0;
   }
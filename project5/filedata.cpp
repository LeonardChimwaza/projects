#include <iostream>
#include <string>
#include <fstream>
#include <cctype>

using namespace std;

 namespace textFunctions {
     //  function definition to reverse a string 
     string ReverseString(const string& text) {
        return string(text.rbegin(), text.rend());
     }
     // function definition capitalize letter
     string CapitalSecondLetter(const string text) {
        string newWord;
        bool secondLetter = true;
        int word = 0;
        for(char Char : text) {
            if(secondLetter) {
                word = false;
                
            }
            else if(secondLetter) {
                newWord += toupper(Char); 
                secondLetter = true;
                continue;
            }
            else {
                secondLetter = true;
                newWord = newWord + Char;
            }
            
        }
        return newWord;
     }  

     // counting vowels functions
      int coutVowels(const string& text) {
        string vowels = "aeiouAEIOU";
        int vowelscount = 0;
        for (char Char : text) {
            if(vowels.find(Char) !=string::npos) {
                vowelscount++;
            }
        }
        return vowelscount;
      }
     
      // counting the number of words
      int countWords(const string& text) {
        int wordCount = 0; 
        bool word = false;
        for(char Char : text) {
            if(isspace(Char) && !word) {
                wordCount++;
                word = true;
            }
            else if(!isspace(Char)) {
                word = false;
            }
        }
        return wordCount;
      }
     
 }


 int main() {

       // create read
       string fileData;
       ifstream myFirstFile("textFile.txt");
       if(!myFirstFile.is_open()) {
         getline(myFirstFile, fileData);
       }
        myFirstFile.close();
     
      
     cout << fileData <<"\n" <<endl;
    cout << "reversed function: " << textFunctions::ReverseString(fileData) <<endl;
    cout << "reversed function: " << textFunctions::coutVowels(fileData) <<endl;
    cout << "number of words: " << textFunctions::countWords(fileData);
    cout << "capitalize second letter function: " << textFunctions::CapitalSecondLetter(fileData) <<endl;
 }
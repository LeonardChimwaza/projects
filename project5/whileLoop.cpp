#include <iostream>
using namespace std;

  int main()  {

    int integer;

    while(true) {
        cout << "Enter an integer value between 5 & 10: " <<endl;
        cin >> integer;

        if(integer > 10) {
            cin.clear();
            cin.ignore(integer>10);
            cout <<"Invalid input. please enter a valid integer. " <<endl;
        }
        else if(integer >= 5 && integer <=10) {
            cout << "your input value ("<< integer <<") has been accepted." << endl;
            break;
        }
        else {
            cout << "sorry, you entered an invalid integer, please try again." <<endl;
        }
    }
    return 0;
  }
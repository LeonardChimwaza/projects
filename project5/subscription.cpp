#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

    int main() {
        // genarate random numbers
        srand(time(0));
        int dayUntilExpiration = rand() % 12;

        if(dayUntilExpiration <= 10) {
            cout << "Your subscription will expire soon.Renew now!" << endl;
        }
        else if(dayUntilExpiration <= 5) {
            cout << "Your subscription expire in  ("<< dayUntilExpiration <<") " <<endl;
            cout << "Renew now  and save 10%!" << endl;
        }
        else if(dayUntilExpiration == 1 ) {
            cout << "Your subscription expires within a day!" << endl;
            cout << "Renew now and save 20%!" << endl;
        }
        else if(dayUntilExpiration == 0) {
            cout << "Your subscription has expired." << endl;
        }   
        else if (dayUntilExpiration  >= 10) {
            cout << "You have an active subscription." << endl;
        }
      return 0;  
    }
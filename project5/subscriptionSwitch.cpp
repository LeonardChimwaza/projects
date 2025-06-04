#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

   int main() {
     // genarate random numbers
     srand(time(0));
     int  dayUntilExpiration = rand() % 12;

     switch (dayUntilExpiration) {
        case 0: 
        case 1: 
                cout << "your subscription will expire soon. Renew now!" << endl; 
                break;

        case 2:
        case 3:
        case 4:
              cout << "your subscription expire in("<< dayUntilExpiration  <<")" <<endl;
              cout << "Renew now and save 10%!" << endl;
              break;

        case 5:
        case 6:
        case 7:
              cout << "your subscription expires within a day!" << endl;
              cout << "Renew now and save 20%! " << endl;
              break;

        case 8:      
        case 9:
             cout << "Your subscription has expired. " << endl;
             break;

        case 10:
        case 11:
        case 12:
                cout << "you have an active subscription." << endl;
                break;
                
                default: cout << "";

       return 0;         
     }
   }
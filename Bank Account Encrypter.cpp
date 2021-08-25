// Bismillah - AbubakarQ
#include <iostream>
#include <string>
using namespace std;

int ROUT = 15;

int main() {

    // Variable decleration
    char routingNum[ROUT];
    char accountNum[ROUT];
    int i, x;

    // Entering Routing
    cout << endl << "Enter Routing Number: \n";
    cin >> routingNum;
    cout << "Enter Account Number: \n";
    cin >> accountNum;

    // Holding old variables before encyrpting/decyrpting
    string oldRoutingNumber = routingNum;
    string oldAccountNumber = accountNum;

    // Choice between Decrypt or Encrypt
    cout << endl << "Choose from the following: \n";
    cout << " 1 - Encrypt String\n";
    cout << " 2 - Decrypt String\n";
    cout << "Choice: ";
    cin >> x;
    cout << endl;

    // Switch Case between Decrypt/Encrypt
    switch(x) { 

        // case 1 - Encrypting
        case 1:
            for (i = 0; i < ROUT && routingNum[i] != '\0'; i++) {
                routingNum[i] = routingNum[i] + 7;
            }
            //cout << routingNum << endl;

            for (i = 0; i < ROUT && accountNum[i] != '\0'; i++) {
                accountNum[i] = accountNum[i] + 3;
            }
            //cout << accountNum << endl;

            cout << "Encypted:\n"
                 << " Routing Number - " << routingNum << "\n Account number - " << accountNum << endl << endl;
            break;

        // case 2 - Decrypting    
        case 2: 
            for (i = 0; i < ROUT && routingNum[i] != '\0'; i++) {
                routingNum[i] = routingNum[i] - 7;
            }
            //cout << routingNum << endl;

            for (i = 0; i < ROUT && accountNum[i] != '\0'; i++) {
                accountNum[i] = accountNum[i] - 3;
            }
            //cout << accountNum << endl;

            // print the 
            cout << "Decrypted:\n"
                 << " Routing Number - " << routingNum << "\n Account number - " << accountNum << endl << endl;
            break;

        default:
            cout << "Invalid Input Terminating System\n";

    }

    

    

}
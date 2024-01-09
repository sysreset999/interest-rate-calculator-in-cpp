#include <iostream>

using namespace std;

int main(){
    cout << "====SIMPLE INTEREST RATE CALCULATOR====" << endl << endl;

    cout << "Enter Principal Amount: ";
    double princialAmount;
    cin >> princialAmount;

    cout << "Enter Interest Rate (don't include %): ";
    double interestRate;
    cin >> interestRate;

    cout << "Enter Time Period (in years) ";
    double timePeriod;
    cin >> timePeriod;

    double interestAmnt = princialAmount * timePeriod * interestRate * 0.01;
    double totalAmnt = interestAmnt + princialAmount;
    cout << endl << "===INTEREST RATE SUCCESSFULLY CACLULATED===" << endl;
    cout << endl << "Interest to be paid: " << interestAmnt << endl;
    cout << "Total Amount to be paid: " << totalAmnt << endl;

    return 0;
}
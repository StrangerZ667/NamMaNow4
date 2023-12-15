#include<iostream>
#include<iomanip>
using namespace std;

int main(){	
    double loan,interest,sum,payment;
	cout << "Enter initial loan: ";
    cin >> loan;
	cout << "Enter interest rate per year (%): ";
    cin >> interest;
	cout << "Enter amount you can pay per year: ";
    cin >> payment;
    sum = loan;

	cout << setw(13) << left << "EndOfYear#"; 
	cout << setw(13) << left << "PrevBalance"; 
	cout << setw(13) << left << "Interest"; 
	cout << setw(13) << left << "Total";
	cout << setw(13) << left << "Payment";
	cout << setw(13) << left << "NewBalance";
	cout << "\n";

    for (int i=1;sum>0;i++){
	cout << fixed << setprecision(2); 
	cout << setw(13) << left << i; 
	cout << setw(13) << left << sum;
	cout << setw(13) << left << sum*(interest/100);
    sum = sum+(sum*(interest/100));
	cout << setw(13) << left << sum;
    if(payment>sum) payment = sum;
	cout << setw(13) << left << payment;
    sum = sum-payment;
    if(sum<=0) sum = 0;
	cout << setw(13) << left << sum;
	cout << "\n";	
    }
	return 0;
}

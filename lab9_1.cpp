#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double loan, interestRate, payment, interest, total, newBalance;
    int year = 1;

    cout << "Enter initial loan: ";
    cin >> loan;
    cout << "Enter interest rate per year (%): ";
    cin >> interestRate;
    cout << "Enter amount you can pay per year: ";
    cin >> payment;

    cout << setw(13) << left << "EndOfYear#"
         << setw(13) << left << "PrevBalance"
         << setw(13) << left << "Interest"
         << setw(13) << left << "Total"
         << setw(13) << left << "Payment"
         << setw(13) << left << "NewBalance" << "\n";

    cout << fixed << setprecision(2);

    while (loan > 0) {
        interest = loan * (interestRate / 100);
        total = loan + interest;
        if (total < payment) payment = total;
        newBalance = total - payment;

        cout << setw(13) << left << year
             << setw(13) << left << loan
             << setw(13) << left << interest
             << setw(13) << left << total
             << setw(13) << left << payment
             << setw(13) << left << newBalance << "\n";

        loan = newBalance;
        year++;
    }

    return 0;
}

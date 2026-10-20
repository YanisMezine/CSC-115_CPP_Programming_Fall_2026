// Coding Assignment 4 - Movie Theater Ticket Sales System

#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main() {
    // Constant and variable section
    const double CHILD_PRICE = 8.00;
    const double ADULT_PRICE = 12.00;
    const double SENIOR_PRICE = 9.00;
    string anotherSession = "Y";

    cout << fixed << setprecision(2);

    // Process another sales session section
    while (anotherSession == "Y" || anotherSession == "y") {
        // Variable section - reset totals for each new session
        int numberOfCustomers, ticketQuantity, category;
        int childTickets = 0, adultTickets = 0, seniorTickets = 0;
        int totalTickets = 0;
        double totalRevenue = 0.0, totalTransactions = 0.0;
        double ticketPrice, transactionTotal, averageTransaction;
        string ticketCategory;

        // Input section
        cout << "Enter the number of customers (1-50): ";
        cin >> numberOfCustomers;

        // Input validation section
        while (cin.fail() || numberOfCustomers < 1 ||
               numberOfCustomers > 50 || cin.peek() != '\n') {
            if (cin.eof()) return 0;
            cin.clear();
            cin.ignore(10000, '\n');
            cout << "Invalid number. Please enter a value between 1 and 50." << endl;
            cout << "Enter the number of customers (1-50): ";
            cin >> numberOfCustomers;
        }
        cin.ignore(10000, '\n');

        // Process section - one transaction for each customer
        for (int customer = 1; customer <= numberOfCustomers; customer++) {
            cout << "\nCustomer " << customer << endl;
            cout << "------------------------------" << endl;

            // Input section
            cout << "How many tickets would you like to purchase (1-10)? ";
            cin >> ticketQuantity;

            // Input validation section
            while (cin.fail() || ticketQuantity < 1 ||
                   ticketQuantity > 10 || cin.peek() != '\n') {
                if (cin.eof()) return 0;
                cin.clear();
                cin.ignore(10000, '\n');
                cout << "Invalid quantity. Please enter a value between 1 and 10." << endl;
                cout << "How many tickets would you like to purchase (1-10)? ";
                cin >> ticketQuantity;
            }
            cin.ignore(10000, '\n');

            // Ticket category menu section
            cout << "\nSelect Ticket Category" << endl;
            cout << "1. Child - $8.00" << endl;
            cout << "2. Adult - $12.00" << endl;
            cout << "3. Senior - $9.00" << endl;
            cout << "Enter your selection: ";
            cin >> category;

            // Input validation section
            while (cin.fail() || category < 1 || category > 3 ||
                   cin.peek() != '\n') {
                if (cin.eof()) return 0;
                cin.clear();
                cin.ignore(10000, '\n');
                cout << "Invalid selection. Please choose 1, 2, or 3." << endl;
                cout << "Enter your selection: ";
                cin >> category;
            }
            cin.ignore(10000, '\n');

            // Process section - calculate ticket price and count each category
            if (category == 1) {
                ticketPrice = CHILD_PRICE;
                ticketCategory = "Child";
                childTickets += ticketQuantity;
            }
            else if (category == 2) {
                ticketPrice = ADULT_PRICE;
                ticketCategory = "Adult";
                adultTickets += ticketQuantity;
            }
            else {
                ticketPrice = SENIOR_PRICE;
                ticketCategory = "Senior";
                seniorTickets += ticketQuantity;
            }

            transactionTotal = ticketQuantity * ticketPrice;
            totalTickets += ticketQuantity;
            totalRevenue += transactionTotal;
            totalTransactions += transactionTotal;

            // Output section - customer's purchase
            cout << "\nTickets Purchased: " << ticketQuantity << endl;
            cout << "Ticket Category: " << ticketCategory << endl;
            cout << "Price Per Ticket: $" << ticketPrice << endl;
            cout << "Transaction Total: $" << transactionTotal << endl;
        }

        // Process section - average for the sales session
        averageTransaction = totalTransactions / numberOfCustomers;

        // Output section - sales report
        cout << "\n========================================" << endl;
        cout << "       MOVIE THEATER SALES REPORT" << endl;
        cout << "========================================" << endl;
        cout << left << setw(27) << "Customers Processed:" << numberOfCustomers << endl;
        cout << endl;
        cout << left << setw(27) << "Child Tickets Sold:" << childTickets << endl;
        cout << left << setw(27) << "Adult Tickets Sold:" << adultTickets << endl;
        cout << left << setw(27) << "Senior Tickets Sold:" << seniorTickets << endl;
        cout << endl;
        cout << left << setw(27) << "Total Tickets Sold:" << totalTickets << endl;
        cout << left << setw(27) << "Total Revenue:" << "$" << totalRevenue << endl;
        cout << left << setw(27) << "Average Transaction:" << "$" << averageTransaction << endl;
        cout << "========================================" << endl;

        // Input section - start a new session or exit
        cout << "\nWould you like to process another sales session?" << endl;
        cout << "Enter Y for Yes or N for No: ";
        cin >> anotherSession;

        // Input validation section
        while (anotherSession != "Y" && anotherSession != "y" &&
               anotherSession != "N" && anotherSession != "n") {
            if (cin.eof()) return 0;
            cout << "Invalid choice. Please enter Y or N: ";
            cin >> anotherSession;
        }
        cout << endl;
    }

    // Output section
    cout << "Thank you for using the Movie Theater Ticket Sales System. Goodbye!" << endl;
    return 0;
}

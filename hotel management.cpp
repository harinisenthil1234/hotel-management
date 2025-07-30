#include <iostream>
using namespace std;

int main() {
    int quant;
    int choice;

    // Quantity
    int Qrooms = 0, Qpasta = 0, Qburger = 0, Qnoodles = 0, Qshake = 0, Qchicken = 0;

    // Items sold
    int Srooms = 0, Spasta = 0, Sburger = 0, Snoodles = 0, Sshake = 0, Schicken = 0;

    // Total price
    int Total_rooms = 0, Total_pasta = 0, Total_burger = 0, Total_noodles = 0, Total_shake = 0, Total_chicken = 0;

    cout << "\n\t Quantity of items we have";
    cout << "\n Rooms available: ";
    cin >> Qrooms;
    cout << " Quantity of Pasta: ";
    cin >> Qpasta;
    cout << " Quantity of Burger: ";
    cin >> Qburger;
    cout << " Quantity of Noodles: ";
    cin >> Qnoodles;
    cout << " Quantity of Shakes: ";
    cin >> Qshake;
    cout << " Quantity of Chicken-rolls: ";
    cin >> Qchicken;

m:
    cout << "\n\t\t\t Please select from the menu options ";
    cout << "\n1) Rooms";
    cout << "\n2) Pasta";
    cout << "\n3) Burger";
    cout << "\n4) Noodles";
    cout << "\n5) Shake";
    cout << "\n6) Chicken-roll";
    cout << "\n7) Sales and Collection Info";
    cout << "\n8) Exit";
    cout << "\n\n Please enter your choice: ";
    cin >> choice;

    switch (choice) {
        case 1:
            cout << "Enter the number of rooms you want: ";
            cin >> quant;
            if (Qrooms - Srooms >= quant) {
                Srooms += quant;
                Total_rooms += quant * 1200;
                cout << quant << " room(s) have been allotted to you!";
            } else {
                cout << "Only " << Qrooms - Srooms << " room(s) remaining!";
            }
            break;

        case 2:
            cout << "Enter Pasta Quantity: ";
            cin >> quant;
            if (Qpasta - Spasta >= quant) {
                Spasta += quant;
                Total_pasta += quant * 250;
                cout << quant << " pasta(s) ordered!";
            } else {
                cout << "Only " << Qpasta - Spasta << " pasta(s) remaining!";
            }
            break;

        case 3:
            cout << "Enter Burger Quantity: ";
            cin >> quant;
            if (Qburger - Sburger >= quant) {
                Sburger += quant;
                Total_burger += quant * 120;
                cout << quant << " burger(s) ordered!";
            } else {
                cout << "Only " << Qburger - Sburger << " burger(s) remaining!";
            }
            break;

        case 4:
            cout << "Enter Noodle Quantity: ";
            cin >> quant;
            if (Qnoodles - Snoodles >= quant) {
                Snoodles += quant;
                Total_noodles += quant * 140;
                cout << quant << " noodle(s) ordered!";
            } else {
                cout << "Only " << Qnoodles - Snoodles << " noodle(s) remaining!";
            }
            break;

        case 5:
            cout << "Enter Shake Quantity: ";
            cin >> quant;
            if (Qshake - Sshake >= quant) {
                Sshake += quant;
                Total_shake += quant * 120;
                cout << quant << " shake(s) ordered!";
            } else {
                cout << "Only " << Qshake - Sshake << " shake(s) remaining!";
            }
            break;

        case 6:
            cout << "Enter Chicken-roll Quantity: ";
            cin >> quant;
            if (Qchicken - Schicken >= quant) {
                Schicken += quant;
                Total_chicken += quant * 150;
                cout << quant << " chicken-roll(s) ordered!";
            } else {
                cout << "Only " << Qchicken - Schicken << " chicken-roll(s) remaining!";
            }
            break;

        case 7:
            cout << "\n\t\tSales and Collection Info:";
            cout << "\nRooms: Sold " << Srooms << ", Remaining " << Qrooms - Srooms << ", Total = Rs." << Total_rooms;
            cout << "\nPasta: Sold " << Spasta << ", Remaining " << Qpasta - Spasta << ", Total = Rs." << Total_pasta;
            cout << "\nBurger: Sold " << Sburger << ", Remaining " << Qburger - Sburger << ", Total = Rs." << Total_burger;
            cout << "\nNoodles: Sold " << Snoodles << ", Remaining " << Qnoodles - Snoodles << ", Total = Rs." << Total_noodles;
            cout << "\nShakes: Sold " << Sshake << ", Remaining " << Qshake - Sshake << ", Total = Rs." << Total_shake;
            cout << "\nChicken-rolls: Sold " << Schicken << ", Remaining " << Qchicken - Schicken << ", Total = Rs." << Total_chicken;
            break;

        case 8:
            cout << "\nThank you! Visit again.\n";
            return 0;

        default:
            cout << "\nInvalid choice. Please try again.";
    }

    goto m;
}


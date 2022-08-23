// Author: Fransiskus Agapa
// 8/23/22
// Practices make improvement - Have Fun !
// :)

// ===========================
// sport car database - user input type, color,
// year, and quantity of a sport car produced
// ===========================

#include <iostream>
#include "Car.h"
#include "ToUpper.h"
#include "CapitilizeWord.h"
#include "ValidateNumber.h"

using std::cout;
using std::cin;
using std::string;
using std::endl;
using std::stoi;
using std::getline;

int main()
{
    string choice;                                  // user choice
    cout << "\n== Sports Car ==" << endl;
    cout << "1. Input Data" << endl;
    cout << "e. Exit" << endl;
    cout << "choice: ";
    cin >> choice;

    while(choice != "E" and choice != "e")
    {
        if(choice == "1")
        {
            string carType;
            string carColor;
            string carYear;
            string carQuantity;
            bool validNumber;
            Car car;                                // class object

            // type
            cout << endl;
            cout << "Input the brand of the car: ";
            cin >> carType;
            ToUpper(carType);
            car.SetType(carType);
            cout << endl;

            // color
            cout << "Input the color of the car: ";
            cin >> carColor;
            Capitalize(carColor);
            car.SetColor(carColor);
            cout << endl;

            // year
            cout << "What year the car was made: ";
            cin >> carYear;
            validNumber = ValidateNumber(carYear);
            if(validNumber and carYear.size() == 4)           // year like 20xx form
            {
                car.SetYear(stoi(carYear));
            }
            else
            {
                cout << "\n[ Invalid year ]" << endl;
                car.SetYear(0);                  // set year to 0 if input is invalid
            }

            // quantity
            cout << endl;
            cout << "How many cars were made: ";
            cin >> carQuantity;
            validNumber = ValidateNumber(carQuantity);
            if(validNumber)
            {
                car.SetQuantity(stoi(carQuantity));
            }
            else
            {
                cout << "\n[ Invalid quantity ]" << endl;
                car.SetQuantity(0);
            }
            cout << endl;

            cout << "=============== Sports Car =====================" << endl;
            cout << "Brand: " << car.GetType() << endl;
            cout << "Color: " << car.GetColor() << endl;
            cout << "Year: " << car.GetYear() << endl;
            cout << "Quantity: " << car.GetQuantity() << endl;
            cout << endl << car.GetJSON() << endl;
            cout << "================================================" << endl;

        }
        else
        {
            cout << "\n[ Invalid choice ]" << endl;
        }

        cout << "\n== Sports Car ==" << endl;
        cout << "1. Input Data" << endl;
        cout << "e. Exit" << endl;
        cout << "choice: ";
        cin >> choice;
    }

    if(choice == "e" or choice == "E")
    {
        cout << "\n== Exit Program ==" << endl;
    }

    return 0;
}

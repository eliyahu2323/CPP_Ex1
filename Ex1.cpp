// 207904707.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{

    int menu;
    bool flag = true; //boolean variable for loop
    while (flag) {
        //Program shell
        cout << "Menu:" << endl;
        cout << "Press:" << endl;
        cout << "0 for exit" << endl;
        cout << "1 for change money" << endl;
        cout << "2 for calculator" << endl;
        cout << "3 for income tax" << endl;
        cout << "your choice:";
        //end Program shell
        cin >> menu; //get your choice from user

        switch (menu) {
        case 0: {//if menu == 0 you want exit
            cout << "Thank you for using the program" << endl;
            flag = false;
            break;
        }

        case 1: {//if menu == 1 you want change money
            int  sum; //A variable that saves me the original amount received from the user
            int oneNIS = 0, twoNIS = 0, fiveNIS = 0, tenNIS = 0, twentyNIS = 0, fiftyNIS = 0, hundredNIS = 0; //Varies for any type of money
            cout << "please enter sum of money" << endl;
            cin >> sum; //get Integer from user
            int ezer = sum % 10;//Auxiliary variable for not changing the original amount,Each time saves a different division remnant on which we do operations within the conditions
            if (ezer >= 5) {//Checking if variable ezer contain 5.
                fiveNIS = 1;//Updates the fiveNIS
                ezer -= 5;
            }
            if (ezer >= 2) {//Checking if variable ezer contain 2.
                twoNIS = ezer / 2;//Updates the twoNIS
                ezer = ezer % 2;
            }
            oneNIS = ezer;//Updates the oneNIS

            ezer = sum % 100;//Updates the variable to another partition
            if (ezer >= 50) {//Checking if variable ezer contain 50
                fiftyNIS = 1;//Updates the fiftyNIS
                ezer -= 50;
            }
            if (ezer >= 20) {//Checking if variable ezer contain 20
                twentyNIS = ezer / 20;//Updates the twentyNIS
                ezer = ezer % 20;
            }
            tenNIS = ezer / 10;//Updates the tenNIS
            hundredNIS = sum / 100;//Updates the hundredNIS
            cout << sum << " = 100*" << hundredNIS << "+50*" << fiftyNIS << "+20*" << twentyNIS << "+10*" << tenNIS << "+5*" << fiveNIS << "+2*" << twoNIS << "+1*" << oneNIS << " NIS" << endl;
            break;
        }

        case 2: { //if menu == 2 you want calculator
            int num1, num2;//Variables that store the numbers the user gives
            char op;//Variable that store the operation the user gives
            cout << "please enter number 1:" << endl;
            cin >> num1; //get first number from user
            cout << "please enter operation" << endl;
            cin >> op;//get operation from user
            cout << "please enter number 2:" << endl;
            cin >> num2;//get second number from user


            if (op == '/') {//Checks if an operator is a division
                cout << "num1 / num2 = " << (double)num1 / num2 << endl;
            }
            else if (op == '*') {//Checks if an operator is a multiplication
                cout << "num1 * num2 = " << num1 * num2 << endl;
            }
            else if (op == '-') {//Checks if an operator is a minus
                cout << "num1 - num2 = " << num1 - num2 << endl;
            }
            else if (op == '+') {//Checks if an operator is a plus
                cout << "num1 + num2 = " << num1 + num2 << endl;
            }
            else {//If an incorrect operator is inserted
                cout << "your operation illegal" << endl;
            }
            break;
        }


        case 3: { //if menu == 3 you want income tax
            double salary;//A variable that keeps the salary
            double pay = 0;//A variable that saves taxes
            cout << "please enter your salary" << endl;
            cin >> salary;//get salary
            if (salary <= 10000) {
                pay = salary * 0.1;//Calculate the amount of taxes you have to pay
            }
            else if (salary > 10000 && salary <= 20000) {
                pay = salary * 0.2;//Calculate the amount of taxes you have to pay
            }
            else if (salary > 20000 && salary <= 30000) {
                pay = salary * 0.3;//Calculate the amount of taxes you have to pay
            }
            else if (salary > 30000 && salary <= 40000) {
                pay = salary * 0.4;//Calculate the amount of taxes you have to pay
            }
            else if (salary > 40000) {
                pay = salary * 0.5;//Calculate the amount of taxes you have to pay
            }
            cout << "your salary:" << salary<<" NIS" << "  your need pay:" << pay <<" NIS"<< endl;
        }
        }
    }
}


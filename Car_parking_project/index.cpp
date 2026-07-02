#include <iostream>
#include <fstream>
// #include<string.h>
// #include<process.h>
// #include<stdio.h>
// #include<conio.h>
using namespace std;
void menu()
{
    cout << "!!!-----------------------------START OF MENU HERE-----------------------------!!!";
    cout << endl;
    cout << "                                        ";
    cout<<endl;
    cout << "\t\t\t====================================================================";
    cout << endl;
    cout << "\t\t\t====================================================================";
    cout << endl;
    cout << "\n\t\t\t  1. Arrival of a Bike\t\t\t  6. Departure of Bike";
    cout << endl;
    cout << "\n\t\t\t  2. Arrival of a Car\t\t\t  7. Departure of Car";
    cout << endl;
    cout << endl;
    cout << "\n\t\t\t  3. Arrival of a Bus\t\t\t  8. Departure of Bus";
    cout << endl;
    cout << endl;
    cout << "\n\t\t\t  4. Arrival of a Rishkaw\t\t\t  9. Departure of Rishkaw";
    cout << endl;
    cout << endl;
    cout << "\n\t\t\t  5. Arrival of a Bicycle\t\t\t  10. Departure of Bicycle";
    cout << endl;
    cout << endl;
    cout << "\t\t\t\t\t      ========================\n";
    cout << "\t\t\t\t\t      ========================";
    cout << endl;
    cout << "\n\t\t\t\t\t\t11. Show the record";
    cout << endl;
    cout << "\n\t\t\t\t\t\t12. Edit the record";
    cout << endl;
    cout << "\n\t\t\t\t\t\t13. Delete the record";
    cout << endl;
    cout << "\n\t\t\t\t\t\t14. Exit Program";
    cout << endl;
    cout << "\t\t\t=================================================";
    cout << endl;
    cout << endl;
    cout << "-----------------------------END OF MENU HERE-----------------------------";
}

int main()
{
    cout << "CAR PARKING SYSTEM!!!";
    int select;
    cout<<"Enter 1 to show menu.";
    cin>>select;
    if(select==1)
    {
        menu();
        int choice;
        cout<<"Enter your choice from menu: ";
        cin>>choice;
        if(choice==1)
        {
            cout<<"Bike arrive choosen"<<endl;
        }
        else if(choice==2)
        {
            cout<<"Car arrive choosen"<<endl;
        }
        
    }
    return 0;
}
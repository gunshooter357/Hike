#include "Interface.h"
#include <string>
#include <iostream>
using namespace std;

void chooseByDifficulty(HikeList& HList, MemberList& MList, Reservations& Reserve)
{
    cout << "Choose difficulty level:" <<
        "\te. easy" <<  "\tm. moderate" << "\ts. strenuous" << endl;
    cin >> choice;
    cout << "Your choice: " << choice << endl;
    HikeList::printByDifficulty(choice);
    cout << "Would you like to reserve? (y/n)" << endl;
    cin >> reserve;
    askToReserve(reserve);
}

void chooseByPrice(HikeList& HList, MemberList& MList, Reservations& Reserve)
{
    HikeList::printByPrice();
    cout << "Would you like to reserve? (y/n)" << endl;
    cin >> reserve;
    askToReserve(reserve);
}

int askIfMember(MemberList& MList)
{
    cout << "Are you a member? (y/n)" << endl;
    cin >> s;

    cout << "What is your Member ID number? " << endl;
    cin >> num;

    cout << "What is your last name? " << endl;
    cin >> name;

    if(s == y)
        MemberList::printMember(num, name);
    else
        addNewMember();
    return MemberId;
}

int addNewMember(MemberList& MList)
{
    cout << "Are you a member? (y/n)" << endl;
    cin >> s;
    
    cout << "Let's add you to the member lsit!" << endl;
    cout << "\tWhat is your first name? " << endl;
    cin >> fName; 
    cout << "\tWhat is your last name? " << endl;
    cin >> lName; 

    MemberList::addMember(fName, lName);
    cout << "Welcome to the Club!" << endl;
    cout << "Your member ID number is : " << MemberList::getLastID() << endl;

    return MemberList::getLastID();
}


void makeReservation(HikeList& HList, MemberList& MList, Reservations& Reserve)
{
    askIfMember();
    
    HikeList::printAllLocations();
    cout << "Please make a selection: " << endl;
    string n;
    cin >> n;
    
    HikeList::printByHikeName(n);
    HikeList::getPrice(n);
    MemberList::getPoints(n);
    Reservations::addReservation(memberId, n);
}

void viewReservation(HikeList& HList, MemberList& MList, Reservations& Reserve)
{
    int res = 0;
    cout << "Enter reservation #: ";
    cin >> res;
    
    Reservations::printReservation(res, HList, MList);
    
}

void cancelReservation(HikeList& HList, MemberList& MList, Reservations& Reserve)
{
    int res = 0;
    cout << "Enter reservation #: ";
    cin >> res;
    
    Reservations::printReservation(res, HList, MList);
    
    char sure;
    cout << "Are you sure you want to cancel this reservation? (y/n)"; << endl;
    cin >> sure;
    
    if(sure == 'y')
    {
        Reservations::cancelReservation(res);
        cout << "Reservation #" << res << "has been canceled." << endl;
    }
    
}


void askToReserve(HikeList& HList, MemberList& MList, Reservations& Reserve)
{
    char c;
    cout << "Would you like to make a reservation? (y/n)" ;
    cin >> c;
    
    if(c == 'y')
    {
        Reservations::makeReservation();   
    }
}

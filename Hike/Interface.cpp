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

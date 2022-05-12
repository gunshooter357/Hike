/*
    Team Morisaki

    Claude, Austin // member 1
    Morisaki, Shoto // member 2 
    Mustafa Atakan Tan // member 3 

    Spring 2022
    CS A250 - C++ 2
    Project: Hiking in the US    
*/

#include "Member.h"
#include <string>
#include <iostream>
using namespace std;

/*
Default constructor
Sets default value for member variables when needed. (Why is "when" underlined? Refer to the Standards about strings.)
*/

Member::Member()
{
    int memberID = 0;
    string fName;
    string lName;
    int points = 0;
}

Member::Member(string FirstName, string LastName)
{
    fName = FirstName;
    lName = LastName;
}

void Member::addPoints(int val)
{
    points += val;
}

void Member::setID(int id)
{
    memberID = id;
}

int Member::getMemberID() const
{
    return memberID;
}

string Member::getlName() const
{
    return lName;
}

int Member::getPoints() const
{
    return points;
}

void Member::print() const
{
    cout << fName << ", " << lName << endl;
    cout << "\t Points available: " << points << endl;
}

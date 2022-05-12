/*
    Team Morisaki

    Claude, Austin // member 1
    Morisaki, Shoto // member 2 
    Mustafa Atakan Tan // member 3 

    Spring 2022
    CS A250 - C++ 2
    Project: Hiking in the US    
*/

#ifndef HIKE_H
#define HIKE_H
#include <string>


class Member
{
public:
    Member();
    Member(std::string FIrstName, std::string LastName);
    void addPoints(int val);
    void setID(int id);
    int getMemberID() const;
    std::string getlName() const;
    int getPoints() const;
    void print() const;

private:
    int memberID = 0;
    std::string fName;
    std::string lName;
    int points = 0;
};

#endif

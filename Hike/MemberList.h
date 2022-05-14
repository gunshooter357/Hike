/*
    Team Morisaki
    Claude, Austin // member 1
    Morisaki, Shoto // member 2
    Mustafa Atakan Tan // member 3
    Spring 2022
    CS A250 - C++ 2
    Project: Hiking in the US
*/

#define MEMBERList_H
#include "Hike.h"
#include <string>
#include <map>
#include <set>
#include "Member.h"
class MemberList
{
public: 
    MemberList();
    
    void addMember(std::string firstName, std::string lastName);
    void addMember(std::string firstName, std::string lastName, int points);
    int getLastID();
    int getPoints(int memberId);
private:
   std::set<Member> *ptrToSet;
};

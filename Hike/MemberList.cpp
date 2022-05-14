/*
    Team Morisaki
    Claude, Austin // member 1
    Morisaki, Shoto // member 2
    Mustafa Atakan Tan // member 3
    Spring 2022
    CS A250 - C++ 2
    Project: Hiking in the US
*/

#include "MemberList.h"
#include "Hike.h"
#include <iostream>
#include <algorithm>
using namespace std;

MemberList::MemberList() {

}
void MemberList::addMember(string firstName, string lastName)
{
    ptrToSet->insert(make_pair(firstName, lastName));
}
void MemberList::addMember(string firstName, string lastName, int points)
{
    ptrToSet->insert(make_pair(firstName, lastName));

}

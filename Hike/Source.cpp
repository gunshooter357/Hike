/*
    Team Morisaki

    Claude, Austin // member 1
    Morisaki, Shoto // member 2 
    Mustafa Atakan Tan // member 3 

    Spring 2022
    CS A250 - C++ 2
    Project: Hiking in the US    
*/

#include <iostream>
#include "HikeList.h"
#include "Hike.h"
#include "Member.h"
#include "MemberList.h"
using namespace std;
int main() {
	HikeList newList;
	newList.addHike("Hawaii", "Egg", 50, 'H', 70);
	newList.addHike("white House", "Dog", 50, 'H', 0);
	newList.addHike("texas", "Box", 50, 'H', 7077);
	newList.addHike("texas", "jr", 50, 'H', 7077);
	newList.addHike("texas", "tim", 50, 'H', 7077);
	newList.addHike("oregen", "Aus", 50, 'H', 707);
	newList.addHike("Califonia", "Cali", 50, 'H', 7);
	newList.getPrice("Cali");
	newList.printAllLocations();

	
	return 0;
	system("pause");
}

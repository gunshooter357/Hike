/*
    Team Morisaki

    Claude, Austin // member 1
    Morisaki, Shoto // member 2 
    Mustafa Atakan Tan // member 3 

    Spring 2022
    CS A250 - C++ 2
    Project: Hiking in the US    
*/

#include "HikeList.h"
#include "Hike.h"
#include <iostream>
#include <algorithm>
using namespace std;
HikeList::HikeList() {

}

bool operator<(const Hike& leftHike, const Hike& rightHike) {
	return leftHike.getName() < rightHike.getName();
}



void HikeList::addHike(Hike newHike, double newPrice) {
	mapList.insert(make_pair(newHike, newPrice));
}

void HikeList::addHike(string newLocation, std::string newName, int newDuration, char newDifficulty, double newPrice) {
	Hike newHike(newLocation, newName, newDuration, newDifficulty);
	this->addHike(newHike, newPrice);
}

double HikeList::getPrice(string hikeName)const {
	auto iter = find_if(mapList.begin(), mapList.end(), [&hikeName](const pair<Hike,double>& elem){
		return elem.first.getName() == hikeName;
		});
	return iter->second;
}

void HikeList::printAllLocations() {
	auto iter = mapList.begin();
	iter++;
	for (auto it = mapList.begin(); iter != mapList.end(); ++it) {
		if (it->first.getLocation() == iter->first.getLocation()) {
			it++;
			iter++;
		}
		else {
			cout << it->first.getLocation() << endl;
			iter++;
		}
	}
}






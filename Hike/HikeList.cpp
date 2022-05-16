#include "HikeList.h"
#include "Hike.h"
#include <iomanip>
#include <iostream>
#include <algorithm>
using namespace std;
HikeList::HikeList() 
{

}

bool operator<(const Hike& leftHike, const Hike& rightHike) 
{
	return leftHike.getName() < rightHike.getName();
}



void HikeList::addHike(Hike newHike, double newPrice) 
{
	mapList.insert(make_pair(newHike, newPrice));
}

void HikeList::addHike(string newLocation, std::string newName, int newDuration, char newDifficulty, double newPrice) 
{
	Hike newHike(newLocation, newName, newDuration, newDifficulty);
	this->addHike(newHike, newPrice);
}

double HikeList::getPrice(string hikeName)const 
{
	auto iter = find_if(mapList.begin(), mapList.end(), [&hikeName](const pair<Hike,double>& elem)
	    {
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

void HikeList::printByLocation(string hikeLocation) {  
	for (auto findLocation = mapList.begin(); findLocation!= mapList.end(); findLocation++){

		findLocation = find_if(findLocation, mapList.end(), [hikeLocation](const pair<Hike, double>& elem) {
			return elem.first.getLocation() == hikeLocation;
			});

		cout << "\t" << findLocation->first.getName() << " (" << findLocation->first.getLocation() << ")" << endl;
		cout << "\t  Difficulty: " << findLocation->first.getDifficulty() << endl;
		cout << "\t  Duration: " << findLocation->first.getDuration() << endl;
		cout << "\t  Price (per person): $" << findLocation->second << endl << endl;
	}
	
}

void HikeList::printByDuration() 
{
	multimap<int,string>tempHike;
	for (auto iter = mapList.begin(); iter != mapList.end(); iter++){
		tempHike.insert(make_pair(iter->first.getDuration(), iter->first.getLocation()));

	}
	for_each(tempHike.begin(), tempHike.end(), [](const auto& elem){
		cout << "\t(" << elem.first << ") " << elem.second << endl;
		});
}

void HikeList::printByDifficulty(char hikeDifficulty) 
{
	for (auto iter : mapList) {
		if (iter.first.getDifficulty() == hikeDifficulty) 
		{
			cout << "\t(" << iter.first.getDifficulty() << ") " << iter.first.getName() << ", " << iter.first.getLocation() << endl;
		}
	}
}

void HikeList::printByPrice()
{
	multimap<double, pair<string, string>> byPrice;
	for (auto iter = mapList.begin(); iter != mapList.end(); iter++) 
	{
		pair<string, string>newPair(iter->first.getLocation(), iter->first.getName());
		byPrice.emplace(iter->second, newPair);
	}

	for (auto iter : byPrice) 
	{
		cout << "\t$ " << fixed << showpoint << setprecision(2) << iter.first << " - ";
		cout << iter.second.first << " (" << iter.second.first << ")" << endl;
	}
}

void HikeList::printByHikeName(string hikeName) 
{
	auto iter = find_if(mapList.begin(), mapList.end(), [hikeName](const pair<Hike, double>& elem){
	    return elem.first.getName() == hikeName;});
}
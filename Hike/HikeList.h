#ifndef HIKE_H
#define HIKEList_H
#include "Hike.h"
#include <string>
#include <map>
class HikeList:public Hike{
public:
	HikeList();

	friend bool operator<(const Hike& leftHike, const Hike& rightHike);	

	void addHike(Hike newHike, double newPrice);

	void addHike(std::string newLocation, std::string newName, int newDuration, char newDifficulty, double newPrice);

	double getPrice(std::string hikeName)const;

	void printAllLocations();

	void printByLocation(std::string hikeLocation);

	void printByDuration();

	void printByDifficulty(char hikeDifficulty);

	void printByPrice();

	void printByHikeName(std::string hikeName);

	void clearList();

private:
	std::multimap<Hike, double>mapList;
	double price = 0;
};

#endif

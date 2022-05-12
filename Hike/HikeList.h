#ifndef HIKEList_H
#define HIKEList_H
#include "Hike.h"
#include <string>
#include <map>
class HikeList:public Hike{
public:
	HikeList();

	friend bool operator<(const Hike& leftHike, const Hike& rightHike);	

	void addHike(Hike newHike, double newPrice);

	void printByDuration(int days);

private:
	


	std::multimap<Hike, double>mapList;
	double price = 0;


};

#endif

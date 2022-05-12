#include "HikeList.h"
#include "Hike.h"
#include <iostream>
using namespace std;
HikeList::HikeList() {

}

bool operator<(const Hike& leftHike, const Hike& rightHike) {
	return leftHike.getName() < rightHike.getName();
}


void HikeList::addHike(Hike newHike, double newPrice) {
	mapList.insert(make_pair(newHike, newPrice));
}

void printByDuration(int days)
{
	for(int i = 0, i < size; i ++)
	{
		if(i.file == days)
		{
			cout << "" << endl;
		}
	}
}
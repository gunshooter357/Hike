#include <iostream>
#include "Hike.h"
#include "HikeList.h"
#include "Member.h"
#include "MemberList.h"
#include "HikeReader.h"
using namespace std;

int main() {
	Hike myHike("Califonia", "Cali", 50, 'H');
	Hike myHike1("oregen", "Aus", 50, 'H');
	Hike myHike2("texas", "Box", 50, 'H');
	Hike myHike3("white House", "Dog", 50, 'H');
	Hike myHike4("Hawaii", "Egg", 50, 'H');
	HikeList newList;
	newList.addHike(myHike, 70);
	newList.addHike(myHike1, 0);
	newList.addHike(myHike2, 7077);
	newList.addHike(myHike3, 707);
	newList.addHike(myHike4, 7);

	return 0;
	system("pause");
}

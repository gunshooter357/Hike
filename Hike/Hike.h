#ifndef HIKE_H
#define HIKE_H
#include <string>
class Hike {
public:
	Hike();
	
	Hike(std::string newLocation, std::string newName, int newDuration, char newDiff);

	friend std::ostream& operator<<(std::ostream& out, const Hike& myHike);

	std::string getLocation();

	std::string getName();

	int getDuration();
	

	char getDifficulty();

	~Hike();




private:
	std::string location;
	std::string name;
	int duration = 0;
	char difficulty;

};

#endif
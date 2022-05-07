#include "Hike.h"
#include <iostream>
using namespace std;
Hike::Hike(string newLocation, string newName, int newDuration, char newDiff) {
	location = newLocation;
	name = newName;
	duration = newDuration;
	difficulty = newDiff;
}

ostream& operator<<(ostream& out, const Hike& myHike){
	out << myHike.name << " (" << myHike.location << ") /t";
	out << "Difficulty: " << myHike.difficulty << "/t";
	out << "Duration: " << myHike.duration << "/t";
	return out;
 }

string Hike::getLocation(){
	return location;
}

string Hike::getName() {
	return name;
}

int Hike::getDuration() {
	return duration;

}

char Hike::getDifficulty() {
	return difficulty;
}

Hike::~Hike() {

}



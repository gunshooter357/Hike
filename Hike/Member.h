#ifndef HIKE_H
#define HIKE_H
#include <string>


class Hike
{
    public:
        Member():memberID(0), points(0) {};
        Member(std::string FirstName, std::string LastName);
        void addPoints(int val);
        void setID(int id);
        int getMemberID() const;
        std::string getlName() const;
        int getPoints() const;
        void print() const;
        template <class T1>, <class T2>
        bool operator==(const &T1, const &T2);

    private:
        int memberID = 0;
        std::string fName;
        std::string lName;
        int points = 0;
};

#endif
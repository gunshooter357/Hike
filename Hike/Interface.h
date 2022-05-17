#ifndef INTERFACE_H
#define INTERFACE_H
#include <string>

/*
Note that all parameter objects 
(not primitive values) should be passed by reference 
(because they are objects), but not as constants
*/

class Interface:public Hike
{
    public:
        void chooseByDifficulty(HikeList& HList, MemberList& MList, Reservations& Reserve);
        void chooseByPrice(HikeList& HList, MemberList& MList, Reservations& Reserve);
        int askIfMember(MemberList& MList);
        int addNewMember(MemberList& MList);

    private:

}

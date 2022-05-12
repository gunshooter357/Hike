#ifndef RESERVATIONS_H
#define RESERVATIONS_H
#include <string>

class Hike
{
    public:
        Reservations()

    private:
        int reservNum;
        int memberId;
        std::string namHike;
        Node* next;
        Node* prev;
};

#endif
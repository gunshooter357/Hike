#ifndef RESERVATIONS_H
#define RESERVATIONS_H
#include <string>

class Hike
{
    public:
        Reservations();
        int addReservation(int memberID, std::string namHike);
        void cancelReservation(int reservation_number,DLLptr &L);

    private:
        int reservNum = 50001;
        int memberId;
        std::string namHike;
        Node* next;
        Node* prev;
        int * findReservation(int reservNum);
};



#endif

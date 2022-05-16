#include "Reservations.h"
#include <string>
#include <iostream>
using namespace std;

void Reservations()
{
    
}

int addReservation(int memberID, string namHike)
{
    if(first == nullptr)
    {
        first = new Node(memberID, nullptr, nullptr);
        last = first;
        ++count;
        return reservNum;
    }
    else
    {
        last->setNext(new Node(memberID, last, nullptr));    
        last = last->getNext();
        ++count;
        reservNum++;
        return reservNum;
    }
}

int * findReservation(int reservNum)
{
    
     for(int i = 0; i < sizeOfList; i++)
     {
         if(DoublyLinked[i] == reservNum)
        {
            return 
        }
     }
}

/*
Function findReservation
This is a private function, because it will be used only by its own class.
Write this function in the private section of the class, before the member variables.
Parameter:
An int storing a reservation number.
The function returns a pointer to the node that stores the reservation.
Assumptions:
The list is non-empty.
The reservation exists in the list.
*/
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

void cancelReservation(int reservNum,DLLptr &L)
{
   if(L->getNext()== nullptr)
      L = nullptr;
   else
   {
   DLLptr temp = findReservation(reserveNum);
   temp->getPrevious()->getNext() = temp->getNext();
   if(temp->getNext())
   temp->getNext()->getPrevious() = temp->getPrevious();
   temp->getNext() = nullptr;
   temp->getPrevious() = nullptr;
   temp = nullptr;
   }
}

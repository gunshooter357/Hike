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

void cancelReservation(int reservation_number,DLLptr &L)
{
   if(L->next==NULL)
      L=NULL;
   else
   {
   DLLptr temp=findReservation(reservation,L);
   temp->previous->next=temp->next;
   if(temp->next)
   temp->next->previous=temp->previous;
   temp->next=NULL;
   temp->previous=NULL;
   temp=NULL:
   }
}
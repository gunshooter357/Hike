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


void printReservation(int reservNum, HikeList newHikeList, MemberList newMemberList)
{
    Node *ptr = findReservation(reservNum);
    string hikeName = ptr.getData();
    HikeList::printByHikeName(hikeName);
    cout << endl;
    int memberID = ptr.getData();
    int points =  MemberList::getPoints(memberID);
    double price = HikeList::getPrice(memberID);
    price = price - (points / 100);
    cout << "Discounted price using points: " << price<<endl;



}

void clearList()
{
    Node* temp = new Node();
    while (first != nullptr) 
    {
        temp = first;
        first = first->getNext();
        free(temp);
    }
}

    
first = last = nullptr;

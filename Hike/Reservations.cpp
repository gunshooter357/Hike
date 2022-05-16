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

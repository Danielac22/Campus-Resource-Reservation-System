#ifndef RESERVATIONMANAGER_H
#define RESERVATIONMANAGER_H

#include "Reservation.h"

class ReservationManager {
private:

  struct Node {
    Reservation reservation;
    Node* next;
  };
  Node* head;

public:

  ReservationManager();

  void insertReservation(const Reservation& reservation);
  bool removeReservation(int reservationID);
  void displayReservations() const;
  void traverseReservations() const;

};


#endif

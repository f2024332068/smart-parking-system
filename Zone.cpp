#include "Zone.h"

Zone::Zone() {
    zoneID = 0;
    capacity = 0;
    occupied = 0;
}

Zone::Zone(int id, int cap) {
    zoneID = id;
    capacity = cap;
    occupied = 0;
}

bool Zone::isFull() {
    return occupied >= capacity;
}

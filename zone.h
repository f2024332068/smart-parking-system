#ifndef ZONE_H
#define ZONE_H
Class Zone {
  public:
int zoneID;
int capacity;
int occupied;
Zone();
Zone(int id, int cap);
bool isFull();
};
#endif

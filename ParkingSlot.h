#ifndef PARKINGSLOT_H
#define PARKINGSLOT_H
class ParkingSlot{
public:
int slotID;
int zoneID;
bool isAvailable;
int parkedVehicle;
parkimgSlot();
ParkingSlot(int s, int z);
};
#endif

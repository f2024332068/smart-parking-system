#include "ParkingSlot.h"
ParkingSlot :: ParkingSlot(){
slotID = 0;
zoneID = 0;
isAvailable = true;
parkedVehicle = -1;
}
ParkingSlot::ParkingSlot(int s, int z){
slotID = s;
zoneID = z;
isAvailable = true;
parkedVehicle= -1;
}

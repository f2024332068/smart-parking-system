#include<iostream>
#include<cstring>
#include"RollbackManager.h"
using namespace std;
RollbackManager::RollbackManager(){
head = NULL;
}
void RollbackManager :: log(int v, int z, const char* act )
{
HistoryNode* n = new HistoryNode;
n->vehicleID = v;
n->zoneID = z;
strcpy(n->action , act);
n->next = head;
head = n;
}
void RollbackManager::showHistory(){
if(!head){
cout<<"No History available\n";
return;
}
HistoryNode* t = head;
  cout<<"\n--- HISTORY---\n";
  while(t){
    cout<<"Vehicle" << t->vehicleID
      << "| Zone " << t->zoneID
      << "| " <<t->action<< endl;
    t =t->next;
  }
} 










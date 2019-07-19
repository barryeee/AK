#include <lib.h>
#include ROOMS_H

inherit LIB_ROOM;



void create() {
    room::create();
    SetAmbientLight(30);
    SetShort("Entrance to the Pit");
    SetLong("a sparsely furnished  room where the guard sergeant keeps track of high priority prisoners. ");
    SetInventory(([
     //   "/domains/AK/weap/sword" : 1,
     //   "/domains/AK/obj/barrel" : 1,
     //   "/domains/AK/npc/orc_sergeant" : 1,
      ]));
    SetExits( ([
        "west" : "/domains/AK/room/hall4",
       ]) );

    SetClimate("indoors");
   
}
void init(){
    ::init();
	
}



#include <lib.h>
#include ROOMS_H

inherit LIB_ROOM;



void create() {
    room::create();
    SetAmbientLight(30);
    SetShort("Entrance to the Pit");
    SetLong("a sparsely furnished  room where the guard keeps track of high priority prisoners. ");
    SetInventory(([     
        "/domains/AK/npc/orc1" : 1,
		"/domains/AK/npc/gargoyle" : 1,
		"/domains/AK/obj/bench" : 1,
      ]));
     
	SetExits( ([
        "west" : "/domains/AK/room/hall4",
		"east" : "/domains/Ak/room/pit_stairs",
		"north" : "/domains/AK/room/pit_storeroom",
		]) );


    SetClimate("indoors");
   
}
void init(){
    ::init();

}

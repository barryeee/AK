#include <lib.h>
#include ROOMS_H

inherit LIB_ROOM;



void create() {
    room::create();
    SetAmbientLight(30);
    SetShort("Jail");
    SetLong("This is the place where ordinary criminals are held.
	To the south are 3 jail cells, currently empty.
	On the north side of the room there is a bench,
	where visitors may sit while conversing with prisoners.");
    SetInventory(([     
      	"/domains/AK/obj/bench" : 1,
      ]));
     
	SetExits( ([
        "west" : "/domains/AK/room/townhall",
		"east" : "/domains/Ak/room/pit_stairs",
		"southeast" : "/domains/AK/room/jail1",
		"south" :   "/domains/AK/room/jail2",
		"southwest" : "/domains/AK/room/jail3",
		]) );


    SetClimate("indoors");
   
}
void init(){
    ::init();

}

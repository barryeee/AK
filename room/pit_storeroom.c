#include <lib.h>
#include ROOMS_H

inherit LIB_ROOM;



void create() {
    room::create();
    SetAmbientLight(30);
    SetShort("Store Room");
    SetLong("A small room where the quards can store extra food, armor, and weapons. ");
    SetInventory(([     
        "/domains/AK/obj/flask" : 4,
		"/domains/AK/weap/board" : 2,
		"/domains/AK/weap/paring_knife" : 2,
		"/domains/AK/meals/ham_sand" : 4,
      ]));
    
	SetExits( ([
        "west" : "/domains/AK/room/hall4",
		"east" : "/domains/Ak/room/pit_stairs",

		]) );


    SetClimate("indoors");
   
}
void init(){
    ::init();

}

#include <lib.h>
#include ROOMS_H

inherit LIB_ROOM;



void create() {
    room::create();
    SetAmbientLight(30);
    SetShort("Store Room");
    SetLong("A small room where the quards store extra food, armor, and weapons. ");
    SetInventory(([     
        "/domains/AK/obj/flask" : 4,
		"/domains/AK/weap/board" : 2,
		"/domains/AK/weap/paring_knife" : 2,
		"/domains/AK/meals/ham_sand" : 4,
		"/domains/AK/meals/potion_healing" : 1,
		
      ]));
    
	SetExits( ([
        "south" : "/domains/AK/room/pit_entrance",

		]) );


    SetClimate("indoors");
   
}
void init(){
    ::init();

}

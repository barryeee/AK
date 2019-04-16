#include <lib.h>
#include ROOMS_H

inherit LIB_ROOM;

void create() {
    room::create();
    SetAmbientLight(30);
    SetShort("guard room");
    SetLong("a dingy-looking room where the on duty guard can sit and keep an eye on the prisoners");
    SetInventory(([
        "/domains/AK/weap/sword" : 4,
        "/domains/AK/obj/barrel" : 1,
        "/domains/AK/npc/orc" : 1,
      ]));
    SetExits( ([
        "west" : "/domains/AK/room/start",
        "east" : "/domains/AK/room/hallway.c",
      ]) );

    SetClimate("indoors");
    SetDoor("west", "/domains/AK/doors/celldoor.c");
}
void init(){
    ::init();
}

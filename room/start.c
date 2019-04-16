#include <lib.h>
#include ROOMS_H

inherit LIB_ROOM;

void create() {
    room::create();
    SetAmbientLight(30);
    SetShort("The Pit of Despair");
    SetLong("a small, square stone room with no windows and only one door. A single torch provides meager illumination. However, there is not much to see.");
    SetInventory(([
        "/domains/AK/obj/notice" : 1,
        "/domains/AK/obj/gold_rock" : 4,
      ]));
    SetExits( ([
        "east" : "/domains/AK/room/guard_room.c",
      ]) );
    SetClimate("indoors");
    SetDoor("east", "/domains/AK/doors/celldoor.c");
}
void init(){
    ::init();
}

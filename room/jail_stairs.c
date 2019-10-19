#include <lib.h>
#include ROOMS_H

inherit LIB_ROOM;


void create() {
    room::create();
    SetAmbientLight(20);
    SetShort("stairs");
    SetLong("A steep stone stairway, covered in slime.");
    SetItems(([

      ]));
    SetExits( ([
        "west" : "/domains/AK/room/jail",
        "east" : "/domains/AK/room/townhall.c",
      ]) );




    SetInventory(([
      ]));

    SetClimate("indoors");
}
void init(){
    ::init();
}

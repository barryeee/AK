#include <lib.h>
#include ROOMS_H

inherit LIB_ROOM;

void create() {
    room::create();
    SetAmbientLight(20);
    SetShort("hallway");
    SetLong("a non-descript hallway built of granite blocks.");
    SetItems(([
        ({ "wall", "walls", "stone wall", "stone walls" }) : "These are slimy stone walls made of granite blocks. They are covered in algae.",
      ]));
    SetExits( ([
        "east" : "/domains/AK/room/hall4",
        "north" : "/domains/AK/room/hall5",
      ]) );

    SetInventory(([
      ]));

    SetClimate("indoors");
}
void init(){
    ::init();
}

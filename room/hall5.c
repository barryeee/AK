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
        "west" : "/domains/AK/room/hallway",
        //"east" : "/domains/AK/room/hall4",
        "south" : "/domains/AK/room/hall6",
      ]) );

    SetInventory(([
		"/domains/cave/armor/leather_armor" : 1,
      ]));

    SetClimate("indoors");
}
void init(){
    ::init();
}

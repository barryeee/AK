#include <lib.h>
#include ROOMS_H

inherit LIB_ROOM;

void create() {
    room::create();
    SetAmbientLight(30);
    SetShort("guard room");
    SetLong("This is where the guard on duty sits and keeps an eye on the prisoners who are locked up in the dungeon.");
    SetInventory(([
        "/domains/AK/npc/orc" : 1,
      ]));
    SetExits( ([
        "west" : "/domains/AK/room/start.c",
      ]) );

    SetClimate("indoors");
}
void init(){
    ::init();
}

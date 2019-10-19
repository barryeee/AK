#include <lib.h>
#include ROOMS_H

inherit LIB_ROOM;

void create() {
    room::create();
    SetAmbientLight(20);
    SetShort("Town Hall");
    SetLong("You see a typical, seedy-looking public office. \n Everything in it looks a hundred years old or more.\n The walls are dingy and in need of a new coat of paint. \n The windows have not been washed ... ever! \n To the west are a set of stone steps, leading down to the Jail.");
    SetItems(([
        ({ "wall", "walls", "blank wall", "blank walls" }) : "These are just blank walls.",
      ]));
    SetExits(([
        "west" : "/domains/AK/room/jail_stairs",
      ]));

    SetInventory(([
      ]));

    SetClimate("indoors");
}
void init(){
    ::init();
}

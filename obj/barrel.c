#include <lib.h>

inherit LIB_STORAGE;

void create() {
    ::create();
    SetKeyName("barrel");
    SetAdjectives( ({"wooden", "old"}) );
    SetId( ({"barrel", "wooden", "wooden barrel"}) );
    SetShort("a wooden barrel");
    SetLong("It s an ordinary wooden barrel, sitting in the corner of the room closest to you");
    SetInventory(([
        "/domains/AK/weap/sword" : 4,
      ]));
    SetCanClose(1);
    SetMass(274);
    SetBaseCost("silver",1);
    SetMaxCarry(1500);
}
void init(){
    ::init();
}

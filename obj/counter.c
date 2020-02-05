#include <lib.h>

inherit LIB_TABLE;


void create() {
    ::create();
    SetKeyName("counter");
    SetId( ({ "counter","wooden counter" }) );
    SetAdjectives( ({ "wooden"}) );
    SetShort("a wooden counter");
    SetLong("An old wooden counter of the type used in public offices everywhere, since the beginning of time.");
    SetBaseCost("silver",1);
    SetMaxCarry(500);
	

}
void init(){
    ::init();
}

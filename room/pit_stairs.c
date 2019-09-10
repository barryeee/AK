#include <lib.h>
#include <climb.h> // defines CLIMB_DOWN

inherit LIB_ITEM;
inherit LIB_CLIMB;

static void create() {
    ::create();
    SetKeyName("stairs");
    SetId("standard");
    SetAdjectives(({"steep","stone","narrow","slippery"}));
    SetShort("a ladder");
    SetLong("This is a narrow, stone stairway,which looks rather slippery.  Caution is advised!");
    SetMass(100);
    SetBaseCost("silver",10);
}

void init(){
    ::init();
}

#include <lib.h>

inherit LIB_DOOR;

static void create() {
    door::create();

    SetSide("east", ([ "id" : ({"door leading east", "cell door", "east door", "door"}),
                "short" : "a cell door leading east",
                "long" : "This is the west side of a door leading east.",
                "lockable" : 1 ]) );

    SetSide("west", ([ "id" : ({"door leading west", "door", "west door", "cell door"}),
                "short" : "a door leading west",
                "long" : "This is the east side of a door leading west.",
                "lockable" : 1 ]) );
   
    SetKeys("east", ({ "skeletonkey", "key","skeleton key" }));
    SetKeys("west", ({ "skeletonkey", "key","skeleton key" }));

    SetClosed(1);
    SetLocked(1);
}

void init(){
    ::init();
}

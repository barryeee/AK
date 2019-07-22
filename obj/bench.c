#include <lib.h>

inherit LIB_CHAIR;


static void create() {
    chair::create();
    SetKeyName("bench");
    SetId("bench");
    SetAdjectives( ({ "wooden" }) );
    SetShort("a wooden bench");
    SetLong("This is a wooden bench, big enough "+
            "to seat 3 prisoners at a time ");
    SetMass(150);
    SetDollarCost(15);
    SetMaxSitters(3);
    SetPreventGet("The bench does not budge.");
}

void init(){
    chair::init();
}

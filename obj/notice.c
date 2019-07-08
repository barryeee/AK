#include <lib.h>
#include <vendor_types.h>
inherit LIB_ITEM;

void create(){
    ::create();
    SetKeyName("notice");
    SetAdjectives( ({"old", "worn", "faded", "parchment"}) );
    SetId( ({"notice", "old", "old notice"}) );
    SetShort("An old notice");
    SetLong("a piece of old, discolored parchment. There is some kind of writing upon it. Perhaps you should read it?");
    SetDefaultRead("\n\n\033[36;1m Welcome to the Pit of Despair! We hope your stay here will be short! And it probably will be,since guests in this cell have already been sentenced to death. \n\033[36;1m No one has ever escaped from here, but we do hope you try! \n\033[36;1m There is a reward of 50 gold pieces for anyone who escapes this prison to freedom. \n\n\033[36;1m Have fun trying!!");
    SetMass(20);
    SetBaseCost("silver",10);
    SetVendorType(VT_TREASURE);
}
void init(){
    ::init();
}

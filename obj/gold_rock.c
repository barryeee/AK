#include <lib.h>
#include <vendor_types.h>
inherit LIB_ITEM;

void create(){
    ::create();
    SetKeyName("goldrock");
    SetId( ({"gold rock", "gold", "rock"}) );
    SetAdjectives( ({"generic","sample","template"}) );
    SetShort("a gold rock");
    SetLong("A small rock with a golden sheen to it. It may or may not be gold, but it could be used as a weapon in a pinch.");
    SetMass(20);
    SetBaseCost("silver",10);
    SetVendorType(VT_TREASURE);
}
void init(){
    ::init();
}

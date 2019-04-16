#include <lib.h>
#include <vendor_types.h>
inherit LIB_ITEM;

void create(){
    ::create();
    SetKeyName("skeletonkey");
    SetId( ({"skelton key", "key", "skeleton"}) );
    SetAdjectives( ({"generic","sample","template"}) );
    SetShort("a skeleton key");
    SetLong("An old key, well-worn with long use. It appears to be made out brass and has a hideous skull at the top.");
    SetMass(2);
    SetBaseCost("silver",10);
    SetVendorType(VT_TREASURE);
}
void init(){
    ::init();
}

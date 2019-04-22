#include <lib.h>

inherit LIB_NPC;

static void create() {
    npc::create();
    SetKeyName("orc guard");
    SetId(({"guard, orc, orc guard"}));
    SetAdjectives(({"dirty"}));
    SetShort("a dirty orc guard");
    SetLong("This orc is typical of its breed: nasty, brutish, and short. \n It appears to be a juvenile or adolescent, \n making it somewhat less dangerous but more hostile. ");
    SetLevel(1);
    SetRace("orc");
    SetGender("male");
    SetMaxHealthPoints(100);
    SetEncounter(0);
    SetInventory(([
        "/domains/default/weap/axe":"wield axe",
      ]) );
    SetGuard("east", "The guard blocks your travel in that direction.");

}
void init(){
    ::init();
}

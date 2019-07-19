#include <lib.h>
#include ROOMS_H

inherit LIB_ROOM;

int Got_Rock(string dir);

void create() {
    room::create();
    SetAmbientLight(20);
    SetShort("hallway");
    SetLong("a non-descript hallway built of granite blocks.");
    SetItems(([
        ({ "wall", "walls", "stone wall", "stone walls" }) : "These are slimy stone walls made of granite blocks. They are covered in algae.",
      ]));

    SetExits(([
        "west" : "/domains/AK/room/hall5",
        "north" : "/domains/AK/room/hall3",
        "south" : "/domains/AK/room/hall6",
		
		]));
	
	AddExit("east", "/domains/AK/room/pit_entrance", ( : Got_Rock :));
		
    SetInventory(([
      ]));

    SetClimate("indoors");
}
void init(){
    ::init();
}
//A test to detect the presence of a rock from the prison cell on the player.
//If the player has a rock, they may enter the room to the east.
//if not, they are tranported to the begining of the maze, concealing the exit to the pit entrance.
int Got_Rock(string dir) {
	object ob;
	string str;
	
	str = "rock";
	ob = present(str, this_player());
    if(!ob) {
      //write("You need a rock!");
	    this_player()->eventMoveLiving("/domains/AK/room/hallway");
        return 0;
    } 
	
	return 1;
	
}

#include <lib.h>
#include ROOMS_H

inherit LIB_ROOM;

int SlipnSlide();

void create() {
    room::create();
    SetAmbientLight(20);
    SetShort("stairs");
    SetLong("A steep stone stairway, covered in slime.");
    SetItems(([
        
      ]));

    SetExits(([
        "west" : "/domains/AK/room/Pit_entrance",
      	
		]));
	
	AddExit("east", "/domains/AK/room/pit_entrance", ( : SlipnSlide  :));
		
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
int SlipnSlide() {
	if ((random(10)+1) < 15) {
		write("You have slipped and fallen to the bottom of the stairs.");
		 this_player()->eventMoveLiving("/domains/AK/room/pit_entrance");
        return 0;
	}
	return 1;
 } 
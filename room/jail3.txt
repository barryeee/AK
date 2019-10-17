#include <lib.h>
#include ROOMS_H

inherit LIB_ROOM;



void create() {
    room::create();
    SetAmbientLight(20);
    SetShort("Jail Cell");
    SetLong("This is the place where ordinary criminals are held. Since you are here, you must be an ordinary criminal.
	There is nothing to write home about concerning this cell. Stone walls,damp, and dreary.");
         
	SetExits( ([
    	"northeast" : "/domains/AK/room/jail",
		]) );


    SetClimate("indoors");
   
}
void init(){
    ::init();

}

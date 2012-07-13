#ifndef MAPFILESTRUCTURES_HEADER
#define MAPFILESTRUCTURES_HEADER


//Note: Encapsulate all of these data members



typedef struct tag{
int scnenum; //scene to jump to (#)
int pressa; //if you need to press enter to to trigger its actrig (e.g., opening chests)
int item; //item you receive when triggered if it is a chest
int patch[4]; //bmp patch id, x, y, and layer number (used for animated objects like chests or doors that open)
int scne[2]; //scene jump coordinates (used if the tag warps to another scene (local map)) Note: not sure if this is depracated or not

//OVERWORLD IS DEPRECATED
int overworld; //overworld jump id (used if the tag warps to a world map location)


int actrig; //action/event trigger number (used to trigger fmvs, scripted events, and simple things like chests opening)
			//certain actrig numbers are conected to hard wired game events
			//others to hardwired script names, which are loaded and run
			//upon activation of the tag.
			//scripts are interpreted, functions within the script correlate
			//to functions in the exposed interface and are called alike


int tagjmp; //when jumping to another scene, the id of the tag in the new scene to jump to (appear at)
}tag;



//World Map Information

typedef struct tag_o{
int scnenum; //scene to jump to (#)
int pressa;
int scne[2]; //scne x,y start point after the jump
int overworld; //jump into overworld #
int actrig; //action/event trigger number
int tagjmp;
}tag_o;


//Sprite Information

typedef struct sprite{
int xpos; //used internally, may set spawn value in editor
int ypos; //used internally, may set spawn value in editor
int zpos; //NOTE: not currently used
int bmpid; //if bmpid = 1 then it is the main character if it is 0 it is inactive -- DEPRECATED --
int action; //used internally to represent current animation, may set spawn value in editor
int inventory[30]; //ids of items in inventory - used internally, not editable
int gp; //number of gp that sprite carries - used internally, not editable
int actrig; //used to represent if the character speaks and the id of his dialog upon trigger
int immobile; //if this bit is set, the AI will not cause the character to move around.
}sprite;

typedef struct enemy {
	int xpos; //used internally, may set spawn value in editor
	int ypos; //used internally, may set spawn value in editor
	int zpos; //NOTE: not currently used
	int bmpid; //if bmpid = 1 then it is the main character if it is 0 it is inactive -- DEPRECATED --
	int action; //used internally to represent current animation, may set spawn value in editor
	int inventory[30]; //ids of items in inventory - used internally, not editable
	int gp; //number of gp that sprite carries - used internally, not editable
	int actrig; //used to represent if the character speaks and the id of his dialog upon trigger
	int immobile; //if this bit is set, the AI will not cause the character to move around.

}enemy;

#endif

#ifndef EDITORUICONSTANTS_HEADER
#define EDITORUICONSTANTS_HEADER

#define NONE 0


//menu identifiers

	//root menus
	#define ROOT_MENU_NONE 0
	#define ROOT_MENU_FILE 1
	#define ROOT_MENU_VIEW 2
	#define ROOT_MENU_TILES 3
	#define ROOT_MENU_LAYERS 4
	#define ROOT_MENU_COLLISION 5
	#define ROOT_MENU_TAGS 6
	#define ROOT_MENU_SPRITES 7
	#define ROOT_MENU_BATTLES 8




//editor colors

#define NO_FOCUS_COLOR al_map_rgb(255,255,255)
#define HAS_FOCUS_COLOR al_map_rgb(0,255,255)
#define HOVER_COLOR al_map_rgb(255,0,0)

//menu positions

	//root menus
	#define FILE_ORIGIN 10
	#define VIEW_ORIGIN 70
	#define TILES_ORIGIN 130
	#define LAYERS_ORIGIN 190
	#define COLLISION_ORIGIN 275
	#define TAGS_ORIGIN 375
	#define SPRITES_ORIGIN 440
	#define BATTLES_ORIGIN 525
	#define ROOT_MENU_ORIGIN_Y 20


//menu boundaries

	#define ROOT_MENU_BOTTOM_BOUNDARY ROOT_MENU_ORIGIN_Y+20


//menu text
	//root menus
	#define FILE_TEXT "File"
	#define VIEW_TEXT "View"
	#define TILES_TEXT "Tiles"
	#define LAYERS_TEXT "Layers"
	#define COLLISION_TEXT "Collision"
	#define TAGS_TEXT "Tags"
	#define SPRITES_TEXT "Sprites"
	#define BATTLES_TEXT "Battles"


//moving cursor

#define CURSOR_SPEED 5


//visible screen max amounts
#define WIDTH_MAX 640
#define HEIGHT_MAX 480
#define WIDTH_MIN 0
#define HEIGHT_MIN 0


//grid constants

#define DEFAULT_GRID_WIDTH 20
#define DEFAULT_GRID_HEIGHT 20


//tile display

#define TILE_X 580
#define TILE_Y 60


//maximum number of tiles

#define TILEMAX 19
#define LAYERMAX 9
#define TOPBMPMAX 5

//

#define MAX_DIALOG_TEXT 20 //20 characters per line of dialog text
#define MAX_DIALOG_LINES 10 //4 lines of dialog per box

//

#define MAX_NUM_TAGS 20
#define MAX_NUM_MAPS 150
#define MAX_PATCH_BITMAPS 50
#define MAX_NUM_ACTIONTRIGGERS 30

#endif

#ifndef EDITORPROTOTYPES_HEADER
#define EDITORPROTOTYPES_HEADER

#include "editoruiconstants.h"
#include "allegroincludes.h"

void mainedit(void);




//INPUT ROUTINES
void key_down_up_input(int keycode);
void key_held_input(int keycode);


//RENDERING ROUTINES
void customrenderer(void); //a custom renderer built just for the map editor


void custom_rendertop(); //nonanimated version of rendertop.


void rendercollision();  //renders the collision block map

void rendertagmap();     //renderes the tag block map


void renderTopLayerDisplay(); //renders the top layer bitmap (clouds sometimes)


void flip_spritelayer();    //??

void rendersprites();        //renders the sprites in the sprite layer


void drawplayersprite_edit(ALLEGRO_BITMAP *bitmap, int xpos, int ypos); //actual drawing functino

void render_back_bmps();		//work together to
void renderbackbmp(int id);		//draw back bitmaps


//:interface rendering functions:

void rendercursor(void); //draws a simple cursor at cursor_xpos, cursor_ypos

void renderCursorData();//renders the location of the cursor

void renderBackgroundBitmapName(); //render background bitmap name for interface

void renderUI(void); //renders the map editor's UI

void renderCurrentLayerName(); //renders the name of the layer being worked on

void rendergrid(void);	//renders a grid over the screen

void renderborder();    //render the extremes ofthe map, the borders

void renderCurrentTileDisplay(); //renders an image of the current tile in the upper riht

void renderCurrentSpriteDisplay(); //renders an image of the current sprite in the top right

void drawspriteindexinfo(int id, int index, int x, int y); //draws the current sprite index

//menu rendering routines

ALLEGRO_COLOR root_change_colors(int menutype); //update the root menu's colors dependent upon 
												//menu flags

//CURSOR STATE ROUTINES

int relocate_gold_cursor(int c_x, int c_y);

int move_gold_cursor(int dx, int dy);

void snap_gold_cursor();


//SCREEN SCROLLING ROUTINES


void adjust_scroll(int x, int y);

void center_scrolling(int x, int y); //centers screen around input coordinates

void scroll_to(int x, int y);

void adjust_keyboard_scroll(int dx, int dy);


void scroll_up(int amt);
void scroll_down(int amt);
void scroll_left(int amt);
void scroll_right(int amt);


//COORDINATE UTILITY FUNCTIONS

int map_to_screen(int map, int flag);
int screen_to_map(int screen, int flag);


//METHODS FOR CYCLING THROUGH SELECTIONS


void cycle_layers();			//cycle through map layers


void cycle_tiles(int amt);		//cycle through tiles

void cycle_tags(int amt);		//cycle through tags

void cycle_background_image(int amt); //cycles through background images


void cycle_sprite_ids(int amt);	//cycle through sprite ids
void cycle_sprite_index(int amt);	//cycle through indices into sprite array


void cycle_background_image_index(int amt);  //cycles through background images


void cycle_top_bmps(int amt);			//cycles through top bitmaps


//MAP EDITING

void place_tiles();

void clear_tiles();

//clear bottom bitmap layer
void clear_tile_grids();
void clear_collision_grids();
void clear_tagmap_grids();
void clear_sprite_types();
void clear_tagmap_types();
void clearmap();



//MAP FILE LOAD/SAVE/CLEAR
void save_map_v2(char savefile[]);
void load_map_v2(char loadfile[]);



//DIALOG UTILITIES

void showdialogtext(char *dialogtext[MAX_DIALOG_LINES], int nlines, int x, int y);
void showdialogbackbox(int x, int y, int width, int height, ALLEGRO_COLOR color);
void end_render();



//DIALOGS
bool areyousurebox(); //an are you sure? box
	char getyesnodialoginput(); //used by the areyousure dialog

//save dialog
void save_dialog_handle_key_input(ALLEGRO_KEYBOARD_EVENT event);
void save_dialog_handle_rendering();

//load dialog
void load_dialog_handle_key_input(ALLEGRO_KEYBOARD_EVENT event);
void load_dialog_handle_rendering();

//utility functions used by save and load
void render_typewriter_text(int x, int y);
void render_typewriter_cursor(int x, int y);
void clear_bufffered_input_string();
bool is_empty_string(char *filename, int length);

//SELECT Tag Editor Dialogue

//master tag edit dialogue
void select_tag_dialog_handle_key_input(ALLEGRO_KEYBOARD_EVENT event);
void select_tag_dialog_handle_rendering();

void cycle_select_tag_id(int amt);  //?? I think this is deprecated
int cycle_tag_id(int amt);	//select tag id to edit


	//FIRST OPTION, Tag Editor
	void delete_tag(); //first option, delete tag info


	//SECOND OPTION, Scene Number Jump
	int render_scene_jump_select();// (just calls render_scene_options)
	void render_scene_options();
	int keyinput_scene_jump_select(ALLEGRO_KEYBOARD_EVENT event);

	void cycle_scene_tag_id(int amt); //changes the current scene name & id for the jmp

	//THIRD OPTION, Enter flag to activate/=
	int render_enter_flag_select();
	int keyinput_enter_flag_select(ALLEGRO_KEYBOARD_EVENT event);

	//FOUR OPTION - Items
	int render_item_select();
	int keyinput_item_select(ALLEGRO_KEYBOARD_EVENT event);

	int cycle_items(int amt);

	//FIVE OPTION - Patches


	int keyinput_patch_select(ALLEGRO_KEYBOARD_EVENT event);
	int render_patch_select();
	int cycle_patches(int amt);

	//SEVEN OPTION - Action Triggers

	int render_actiontrigger();
	int keyinput_actiontrigger(ALLEGRO_KEYBOARD_EVENT event);
	int cycle_actiontriggers(int amt);


	//NINE OPTION --DISPLAY ALL TAG INFO
	int keyinput_alltaginfo(ALLEGRO_KEYBOARD_EVENT event);
	int render_alltaginfo();




//


#endif




#ifndef CROSSEXECUTABLES_HEADER
#define CROSSEXECUTABLES_HEADER


//logging
void logger(const char * text); //writes to a log
void logint(int errcode); //write a code to a log

//display and bitmaps

void get_display(void); //gets the display bitmaps
void destroy_display(void);
void init_bitmaps(void); //create and clear bitmaps manipulated in-game
void destroy_bitmaps(void); //destroys the non-display bitmaps manipulated in-game
void load_bitmap_files(void);
void destroy_bitmap_files(void);

//fonts

void load_fonts(void);
void destroy_fonts(void);

//map related

int getstartx(void);
int getstarty(void);
int getstartmapaction(void);
void load_map(char mapname[], int maptype);
void load_map_file(char savefile[]);
//utility routines to save time interfacing with allegro
void clear(ALLEGRO_BITMAP *bitmap);
void load_magic_bitmap(ALLEGRO_BITMAP **bitmap, const char *path);
void load_alpha_bitmap(ALLEGRO_BITMAP **bitmap, const char *path);
//rendering routines
void set_render_to_map_buffer(void);
void renderer(void);
void center(void);
void blitter(void);
void drawtile(ALLEGRO_BITMAP *bitmap, int xcor, int ycor); //utility function to make drawing tiles easier
void drawplayersprite(ALLEGRO_BITMAP *bitmap, int xpos, int ypos); //utility function make drawing the player sprite easier
void drawnpcsprite(ALLEGRO_BITMAP *bitmap, int xpos, int ypos); //utility function to make drawing npc sprites easier
	//map rendering
	void renderbottom(void); //renders the bottom layer tiles of the map
	void rendermid(void); //renders the middle layer tiles of the map
	void renderhi(void); //renders the tiles above the player, such as ceiling tiles
	void rendertop(void); //renders the top layer, used for clouds or fog overlapping the scene

	//sprite rendering
	void render_player_sprite(void); //renders the player sprite
	void render_npc_sprite(void);

extern void renderInterfaceLayer(); //render a static, interface layer over the moving screen

void rendertiles(int a[], int x, int y);

void load_map_v2(char loadfile[]);

void change_dir_game_home();

#endif

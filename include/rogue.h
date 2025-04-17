# ifndef ROGUE_H
# define ROGUE_H

#include <stdlib.h>
#include <ncurses.h>
#include <time.h>
#include <math.h>


#define VISIBLE_COLOR 1
#define SEEN_COLOR 2


typedef struct
{
    int y;
    int x;
}   Position;


typedef struct 
{
    Position pos;
    char ch;
    int color;
}   Entity;


typedef struct
{
    char ch;
    int color;
    bool walkable;
    bool transparent;
    bool visible;
    bool seen;
}   Tile;


typedef struct
{
    int height;
    int width;
    Position pos;
    Position center;
}   Room;



// engine.c functions
bool cursesSetup(void);
void gameLoop(void);
void closeGame(void);

// map.c functions
Tile** createMapTiles(void);
void freeMap(void);
Position setupMap(void);

//player.c functions
Entity* createPlayer(Position start_pos);
void handleInput(int input);
void movePlayer(Position newPos);

// draw.c functions
void drawMap(void);
void drawEntity(Entity* entity);
void drawEverything(void);


// room.c functions
Room createRoom(int y, int x, int height, int width);
void addRoomToMap(Room room);
void connectRoomCenters(Position CenterOne, Position CenterTwo);


// fov.c functions
void makeFOV(Entity* player);
void clearFOV(Entity* player);
int getDistance(Position origin, Position target);
bool isInMap(int y, int x);
bool lineOfSight(Position origin, Position target);
int getSign(int a);


//externs (global variable - declare here, define at other places)
extern Entity* player;
extern const int MAP_HEIGHT;
extern const int MAP_WIDTH;
extern Tile** map;


#endif
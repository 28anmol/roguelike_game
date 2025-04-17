#include <rogue.h>



Room createRoom(int y, int x, int height, int width)
{

    Room newRoom;
    newRoom.pos.y = y;
    newRoom.pos.x = x;
    newRoom.height = height;
    newRoom.width = width;
    newRoom.center.y = y + (int)(height/2);
    newRoom.center.x = x + (int)(width/2);

    return newRoom;
}



void addRoomToMap(Room room)
{

    for(int y = room.pos.y; y < room.pos.y + room.height; y++)
    {
        for(int x = room.pos.x; x < room.pos.x + room.width; x++)
        {
            map[y][x].ch = '.';
            map[y][x].walkable = true;        
            map[y][x].transparent = true;
        }
    }
}


void connectRoomCenters(Position CenterOne, Position CenterTwo)
{

    Position temp;
    temp.x = CenterOne.x;
    temp.y = CenterOne.y;

    while(true)
    {
        if(abs((temp.x - 1) - CenterTwo.x) < abs(temp.x - CenterTwo.x))
        {
            temp.x--;
        }
        else if(abs((temp.x + 1) - CenterTwo.x) < abs(temp.x - CenterTwo.x))
        {
            temp.x++;
        }
        else if(abs((temp.y + 1) - CenterTwo.y) < abs(temp.y - CenterTwo.y))
        {
            temp.y++;
        }
        else if(abs((temp.y - 1) - CenterTwo.y) < abs(temp.y - CenterTwo.y))
        {
            temp.y--;
        }
        else
        {
            break;
        }

        map[temp.y][temp.x].ch = '.';
        map[temp.y][temp.x].walkable = true;
        map[temp.y][temp.x].transparent = true;
    }
}
# :mage: Terminal Roguelike Game in C

A simple yet powerful **roguelike game** built from scratch in **C** using **ncurses**.  
Explore procedurally generated dungeons, navigate through rooms, and move your character in a terminal-based game world.

## :rocket: Features

- 🧭 **Procedural dungeon generation**  
  - Rooms and corridors created randomly at each run.
  - Smooth connections between rooms.

- 🎮 **Player movement**
  - Navigate using `W A S D` keys.
  - Real-time updates with field of view (FOV).

- 🔦 **Line of sight + Fog of War**
  - Only nearby tiles are visible.
  - Previously seen tiles are dimmed (exploration-style).

- 📺 **Ncurses-based terminal rendering**
  - Fast, minimal graphics in the terminal.
  - Works on any Linux/macOS terminal with `ncurses` support.
 


## 🎮 Controls

`W`  &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;Move Up  
`A`  &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;Move Left  
`S`  &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;Move Down  
`D`  &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;Move Right  
`Q`  &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;Quit Game  


## 📁 Code Structure
project-root/  
├── include/  
│   └── rogue.h  
├── src/  
│   ├── main.c  
│   ├── engine.c  
│   ├── draw.c  
│   ├── player.c  
│   ├── map.c  
│   ├── room.c  
│   ├── fov.c  
├── makefile  

## Credits



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

- 🔦 **Line of sight + Fog of War + Field Of View**
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




## 📁 Code Base Structure
```
roguelike_game/
|-----include/
|       |--- rogue.h
|-----src/
|       |--- main.c
|       |--- draw.c
|       |--- engine.c
|       |--- player.c
|       |--- map.c
|       |--- room.c
|       |--- fov.c
|-----makefile
```



## 🧰 Requirements

- GCC (or any C compiler)
- `ncurses` library

## 🛠️ Build Instructions

```bash
git clone https://github.com/28anmol/roguelike_game.git
```
```bash
cd roguelike_game
```
```bash
make
```

## 📌 Key Concepts
- Manual memory management using `calloc`
- Procedural generation of dungeon rooms
- Terminal UI with `ncurses` library
- 2D arrays for tile based maps
- Use of pointers
- Visibility algorithms (field of view and line of sight)

## 📸 Screenshots & GIFs
*To be added*

## 💖 Credits

**Ignacio Oyarzabal**  
Followed the tutorial: [Visit Tutorial](https://dev.to/ignaoya/the-c-roguelike-tutorial-part-0-the-setup-1pfo)  
Please feel free to contribute, fork or use it as a learning project.



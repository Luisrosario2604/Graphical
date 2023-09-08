# My runner

This is a flappy bird remake

Try to go far away without touching the tunnels a score will be displayed when you cross one of them !

###### This was my second graphical project

## Requirement

Language : C

Library CSFML is needed [Installation](https://www.sfml-dev.org/download/csfml/index-fr.php)

###### Binary file can be also found if you don't want to install the CSFML and just try my "my_runner".

## Usage

How to run
```
USAGE
       NORMAL USAGE  ->   ./my_runner map.txt
       INFINITE MODE ->   ./my_runner map.txt -i
       USAGE         ->   ./my_runner -h
  
 
  > ./my_runner map_lvl1
```

Keybinds
```
KEYBOARD :
        SPACE         ->   Jump/Start
        RIGHT ARROW   ->   Play
        LEFT ARROW    ->   Pause
        KEY [R]       ->   Restart

```

## Compiling

###### Go in the project directory

Clean (*.o files)
```
> make clean
```

Full clean (*.o and binary file)
```
> make fclean
```

Compile
```
> make
```

Full clean and compile
```
> make re
```

Compile with gdb (debugging)
```
> make gdb
```

## Preview

A cool gif to show you a little preview !

![Gif](./images/my_runner.gif)


## Custom map

The map is based on a .txt file, you can create as many as you want !
```
These are the only symbols and letters that you can write in map.txt :

[l]         ->   Normal Tunel
[d]         ->   Down Tunel
[u]         ->   Up Tunel
[s]         ->   Speed Boost
[p]         ->   Point
[f]         ->   Flag (only on the 9th line)
[ ]         ->   Void
[_]         ->   Ground
[0]         ->   End of line

--------------------------------------------------------------------------------

Map.txt is based on 10 lines : You can only write [l] [d] [u] [f] [ ] [0]
                                   [s] on line numer 1,2,3,4,5,6,7,8 and 9

                                   The 10th line is reserved to points, write
				   [_] if you don't want that the player win a
				   point on this line or [p] if you don't.

--------------------------------------------------------------------------------

Don't forget to write [0] at the end of ALL the lines !

Try to put the flag [f] at 10 spaces [ ] of the last object!

All the maps that i created are possible (Trust me it is) !

--------------------------------------------------------------------------------

Exemple :

  l  l l ld   l            d  d             0
  l  d d d    l                             0
  l           l    u            u           0
  d       u   l    l   u      u l           0
     u   ul   d    l   l      l l           0
     l   ll        l   d   u  l l           0
  u  l u ll        l       l  l l           0
  l  l l ll        l       l  l l           0
  l  l l ll   u    l       l  l l          f0
__p__p_p_pp___p____p___p___p__p_p___________0
```

## Year

This project was done in 2018

## Authors

* **Luis Rosario** - *Member 1* - [Luisrosario2604](https://github.com/Luisrosario2604)

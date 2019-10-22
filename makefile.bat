@ECHO OFF
cd src
ECHO Compiling...
gcc main.c -o Snake -lwinmm
ECHO Moving File...
move "Snake.exe" "../"
PAUSE
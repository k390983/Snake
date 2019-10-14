/*
cd C:\Users\Kai\Desktop\programing\snake\
gcc main.c -o Snake

*/
#include <stdlib.h>
#include <stdio.h>
#include <windows.h>
#include <time.h>
#include <string.h>
#include <unistd.h>

#include "global.h"
#include "draw.h"
#include "spawner.h"
#include "player.h"
#include "decay.h"
#include "startup.h"
#include "clock.h"
#include "gameOver.h"
#include "countDown.h"
#include "gameLoop.h"
#include "menu.h"

#define GAMESPEED 0.1

int mode;

int main(void){

	while(1){
		mode = 0; // 0 = normal, 1 = dev

	    startup();

	    while(1){

	    	menu();

	        gameLoop(GAMESPEED, mode); 
	        
	        break;

	    }

	}

}
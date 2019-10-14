
int screen[23][23];
int head_x;
int head_y;
int length;
int direction_x;
int direction_y;
int score;
int signal;
float fps;
float tps;

void gameLoop(float gamespeed, int mode){
	float currentTime, previousDraw, previousTick;
	int i,j;

	signal = 0;
	score = 0;
	length = 4;
	head_x = 10;
	head_y = 10;
	direction_x = 1;
    direction_y = 0;
	previousDraw = timeFromStart();
	previousTick = timeFromStart();
	
	startup();

	for(i = 0; i < 23; i++){
        for(j = 0; j < 23; j++){
            screen[i][j] = 0;

        }

    }

	for(i = 0; i < 23; i++){
        for(j = 0; j < 23; j++){
            if(i == 0 || j == 0 || i == 22 || j == 22){
            	screen[i][j] = 1;

            }

        }

    }

	countDown();
	spawner();

	while(1){
        currentTime = timeFromStart();

        control();

        if(currentTime - previousDraw > gamespeed){
            signal = 0;

            collision();

            movement();

            screen[head_y][head_x] = length + 10;

            decay();

            if(signal == 1){
                gameOver();
                break;

            }

            if(mode == 0){
            	draw();

            }else{
            	debug();

            }

            fps = 1 / (currentTime - previousDraw);

            previousDraw = timeFromStart();

        }
		
		tps = 1 / (currentTime - previousTick);
		
		previousTick = timeFromStart();
		

    }

}
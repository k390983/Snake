
int screen[23][23];
int apple_x;
int apple_y;

void spawner(){
	while(1){
		play_pickup();

		apple_x = (rand() % 21) + 1;
		apple_y = (rand() % 21) + 1;

		if(screen[apple_y][apple_x] == 0){
			screen[apple_y][apple_x] = 2;
			break;

		}

	}
	

}
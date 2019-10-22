void play_main_theme(){
	mciSendString("close main_theme", NULL, 0, 0);
	mciSendString("open sounds//main_theme.mp3 type MPEGVideo alias main_theme", NULL, 0, 0);
	mciSendString("play main_theme repeat", NULL, 0, 0);
	
}

void play_pickup(){
	mciSendString("close pickup", NULL, 0, 0);
	mciSendString("open sounds//pickup.mp3 type MPEGVideo alias pickup", NULL, 0, 0);
	mciSendString("play pickup", NULL, 0, 0);
	
}

void play_input(){
	mciSendString("close input", NULL, 0, 0);
	mciSendString("open sounds//input.mp3 type MPEGVideo alias input", NULL, 0, 0);
	mciSendString("play input", NULL, 0, 0);
	
}

void play_game_over(){
	mciSendString("close game_over", NULL, 0, 0);
	mciSendString("open sounds//game_over.mp3 type MPEGVideo alias game_over", NULL, 0, 0);
	mciSendString("play game_over", NULL, 0, 0);
	
}
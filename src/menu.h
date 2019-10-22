
int mode;

void menu(){

	COORD coord;
    coord.X= 0;
    coord.Y = 0;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);

	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_GREEN | FOREGROUND_INTENSITY);
	printf("\n\n\n\n");
	printf("           ███            █        \n");
	printf("          █   █           █  █     \n");
	printf("          █     ███   ██  █ █   ██ \n");
	printf("           ███  █  █    █ ██   █  █\n");
	printf("              █ █  █  ███ █ █  ████\n");
	printf("          █   █ █  █ █  █ █  █ █   \n");
	printf("           ███  █  █  ███ █  █  ██ ");
	if(mode == 1){
		printf("dev");

	}
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_BLUE | FOREGROUND_GREEN | FOREGROUND_INTENSITY);

	printf("\n\n\n\n                ENTER: スタート\n");
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_RED | FOREGROUND_INTENSITY);
	printf("\n              BACK_SPACE: 閉じる\n");
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_RED | FOREGROUND_BLUE | FOREGROUND_GREEN | FOREGROUND_INTENSITY);
	printf("\n          矢印キーで操作してください");

	Sleep(500);

	while(1){

		if((GetKeyState(VK_RETURN) & 0x8000)){
			play_select();
				break;
	
			}else if((GetKeyState(VK_BACK) & 0x8000)){
				play_select();
				exit(0);
	
			}

	}

	
}
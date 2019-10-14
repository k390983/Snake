
void startup(){
	
	srand(time(NULL));
	
	system("cls");
	printf("\e[?25l");
	system("MODE 46,25");
	system("chcp 65001");
	system("cls");
    SetConsoleTitle("Snake");
	
}
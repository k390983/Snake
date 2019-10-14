
int score;

void gameOver(){
	FILE *fp;
	char highScoreS[100];
	int highScoreI;

	fp = fopen("score.txt","r");

	fgets(highScoreS,100,fp);

	highScoreI = atoi(highScoreS);

	system("cls");
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_RED | FOREGROUND_INTENSITY);
	printf("\n\n\n\n                  GAME OVER\n\n");
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_BLUE | FOREGROUND_GREEN | FOREGROUND_RED | FOREGROUND_INTENSITY);
	printf("                   スコア: %d\n\n", score);
	printf("                 ハイスコア : %d\n\n", highScoreI);
	printf("\n\n\n\n");
	printf("            ENTER: メニューに戻る ");

	if(score > highScoreI){
		fp = fopen("score.txt","w");
		fprintf(fp, "%d", score);

	}

	fclose(fp);

	Sleep(500);

	while(1){
		if((GetKeyState(VK_RETURN) & 0x8000)){
			break;

		}

	}

	system("cls");

	

}
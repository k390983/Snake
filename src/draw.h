
int screen[23][23];
int score;
int headHitBox_x;
int headHitBox_y;
int signal;
float fps;
float tps;

void draw(){
    int i,j;

    COORD coord;
    coord.X= 0;
    coord.Y = 0;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_BLUE | FOREGROUND_GREEN | FOREGROUND_RED | FOREGROUND_INTENSITY);

	printf("スコア: %d fps: %f/10\n", score, fps);
    //printf("スコア: %d fps: %f(%f)/10\n", score, fps, tps);
    
    for(i = 0; i < 23; i++){
        for(j = 0; j < 23; j++){
            if(screen[i][j] == 0){
                printf("  ");

            }else if(screen[i][j] > 10){
                if(signal == 0){
                    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_GREEN | FOREGROUND_INTENSITY);

                }else if (signal == 2){
                    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_BLUE | FOREGROUND_GREEN | FOREGROUND_INTENSITY);

                }
                
                printf("██");

            }else if(screen[i][j] == 1){
                if(signal == 0){
                    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_BLUE | FOREGROUND_GREEN | FOREGROUND_RED | FOREGROUND_INTENSITY);

                }else if (signal == 2){
                    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_BLUE | FOREGROUND_GREEN | FOREGROUND_INTENSITY);

                }
                
                printf("██");

            }else if(screen[i][j] == 2){
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_RED | FOREGROUND_INTENSITY);
                printf("██");

            }

            

        }
        printf("\n");


    }

}

void debug(){
    int i,j;

    COORD coord;
    coord.X= 0;
    coord.Y = 0;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
    
    printf("SCORE: %d fps: %2.2f/10\n", score, fps);
    
     for(i = 0; i < 23; i++){
        for(j = 0; j < 23; j++){
            if(screen[i][j] > 10){
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_GREEN | FOREGROUND_INTENSITY);

            }else if(screen[i][j] == 1){
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_BLUE | FOREGROUND_INTENSITY);

            }else if(screen[i][j] == 2){
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_RED | FOREGROUND_INTENSITY);

            }

            if(j == headHitBox_x && i == headHitBox_y){
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_BLUE | FOREGROUND_RED | FOREGROUND_INTENSITY);

            }
            printf("%02d", screen[i][j]);

            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_BLUE | FOREGROUND_GREEN | FOREGROUND_RED | FOREGROUND_INTENSITY);

        }
        printf("\n");


    }

}

int screen[23][23];

void decay(){

	int i,j;

	 for(i = 0; i < 23; i++){
            for(j = 0; j < 23; j++){
                if(screen[i][j] > 10){
                	screen[i][j] -= 1;

                }

                //cleanup

                if(screen[i][j] <= 10 && screen[i][j] != 1 && screen[i][j] != 2){
                	screen[i][j] = 0;

                }

            }

        }

}
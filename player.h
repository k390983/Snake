
int head_x;
int head_y;
int length;
int direction_x;
int direction_y;
int apple_x;
int apple_y;
int score;
int signal;
int headHitBox_x;
int headHitBox_y;
int previousDrection_x;
int previousDrection_y;

void control(){

    if((GetKeyState(VK_RIGHT) & 0x8000) && previousDrection_x != -1){
        direction_x = 1;
        direction_y = 0;

    }else if((GetKeyState(VK_LEFT) & 0x8000) && previousDrection_x != 1){
        direction_x = -1;
        direction_y = 0;

    }
    
    if((GetKeyState(VK_UP) & 0x8000) && previousDrection_y != 1){
        direction_y = -1;
        direction_x = 0;

    }else if((GetKeyState(VK_DOWN) & 0x8000) && previousDrection_y != -1){
        direction_y = 1;
        direction_x = 0;

    }

}

void movement(){

    previousDrection_x = direction_x;
    previousDrection_y = direction_y;

    if(direction_x == 1 && head_x < 22){
        head_x += 1;

    }else if(direction_x == -1 && head_x > 0){
        head_x -= 1;

    }

    if(direction_y == 1 && head_y < 22){
        head_y += 1;

    }else if(direction_y == -1 && head_y > 0){
        head_y -= 1;

    }

}

void collision(){
    headHitBox_x = head_x + direction_x;
    headHitBox_y = head_y + direction_y;

    if(headHitBox_x == 0 || headHitBox_x == 22 || headHitBox_y == 0 || headHitBox_y ==22 || screen[headHitBox_y][headHitBox_x] > 10){
        signal = 1;

    }else if(headHitBox_x == apple_x && headHitBox_y == apple_y){
        length++;
        score++;
        spawner();
        signal = 2;

    }

    

}
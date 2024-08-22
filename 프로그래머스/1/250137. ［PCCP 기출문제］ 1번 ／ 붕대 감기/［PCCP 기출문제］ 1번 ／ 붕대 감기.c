#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// bandage_len은 배열 bandage의 길이입니다.
// attacks_rows는 2차원 배열 attacks의 행 길이, attacks_cols는 2차원 배열 attacks의 열 길이입니다.
int solution(int bandage[], size_t bandage_len, int health, int** attacks, size_t attacks_rows, size_t attacks_cols) {
    int t = bandage[0], x = bandage[1], y = bandage[2];
    int hp = health, count = 0;
    int time = 0, a = 0;
    
    while(time != attacks[attacks_rows-1][0]+1) {
        if(time == attacks[a][0]) {
            if(hp<=0) return -1;
            else hp -= attacks[a][1];
            count = 0;
            
            a++;
        }
        else {
            if(hp<=0) return -1;
            else if(hp > 0) {
                count++;
                hp += x;
            }
            
            if(count == t) {
                count = 0;
                hp += y;
            }
        }
        
        if(hp <= 0) return -1;
        else if(hp >= health) hp = health;
        
        printf("%d ", hp);
        time++;
    }
    
    return hp;
}
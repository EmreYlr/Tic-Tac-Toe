#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <time.h>
int player=0;
char a[9] = {'1','2','3','4','5','6','7','8','9'};
void red(){
    printf("\033[1;31m");
}
void blue(){
    printf("\033[1;36m");
}
void yellow(){
    printf("\033[1;33m");
}
void green(){
    printf("\033[1;32m");
}
void white(){

    printf("\033[0m");
}
void purple(){
    printf("\033[1;34m");
}
void zar(char a[50], char b[50]){
    red();
    printf("Oyunun Başlaması İçin Zar Atılıyor\n");
    white();
    int i,j;
    git:
    srand(time(NULL));
    printf("%s Zar Atıyor: ",a);
    sleep(1);
    i=rand()%6+1;
    printf("%i\n",i);
    printf("%s Zar Atıyor: ",b);
    sleep(1);
    j=rand()%6+1;
    printf("%i\n",j);
    if(i>j){
        green();
        printf("Oyuna %s Başlıyor\n",a);
        white();
        sleep(1);
        player=0;
    }
    else if(i<j){
        green();
        printf("Oyuna %s Başlıyor\n",b);
        white();
        sleep(1);
        player=1;
    }
    else{
        yellow();
        printf("Zarlar Eşit Tekrar Ediliyor\n");
        sleep(1);
        white();
        goto git;
    }
}
void board(){
    printf("     |     |     \n");
    blue();
    printf("  %c  ",a[0]);
    white();
    printf("|");
    blue();
    printf("  %c  ",a[1]);
    white();
    printf("|");
    blue();
    printf("  %c  \n",a[2]);
    white();
    printf("_____|_____|_____\n");
    printf("     |     |     \n");
    printf("     |     |     \n");
    blue();
    printf("  %c  ",a[3]);
    white();
    printf("|");
    blue();
    printf("  %c  ",a[4]);
    white();
    printf("|");
    blue();
    printf("  %c  \n",a[5]);
    white();
    printf("_____|_____|_____\n");
    printf("     |     |     \n");
    printf("     |     |     \n");
    blue();
    printf("  %c  ",a[6]);
    white();
    printf("|");
    blue();
    printf("  %c  ",a[7]);
    white();
    printf("|");
    blue();
    printf("  %c  \n",a[8]);
    white();
    printf("     |     |     \n\n");
}
int check_win(){
    if(a[0]==a[1] && a[1]==a[2]){
        return 1;
    }
    else if(a[3]==a[4] && a[4]==a[5]){
        return 1;
    }
    else if(a[6]==a[7] && a[7]==a[8]){
        return 1;
    }
    else if(a[0]==a[3] && a[3]==a[6]){
        return 1;
    }
    else if(a[1]==a[4] && a[4]==a[7]){
        return 1;
    }
    else if(a[2]==a[5] && a[5]==a[8]){
        return 1;
    }
    else if(a[0]==a[4] && a[4]==a[8]){
        return 1;
    }
    else if(a[2]==a[4] && a[4]==a[6]){
        return 1;
    }
    else if (a[0] != '1' && a[1] != '2' && a[2] != '3' &&
             a[3] != '4' && a[4] != '5' && a[5] != '6' &&
             a[6]!= '7' && a[7] != '8' &&  a[8] != '9'){
        return 0;
    }
    else{
        return 2;
    }
}
int win_screen(){
    if(a[0]==a[1] && a[1]==a[2]){
        printf("     |     |     \n");
        purple();
        printf("  %c  ",a[0]);
        white();
        printf("|");
        purple();
        printf("  %c  ",a[1]);
        white();
        printf("|");
        purple();
        printf("  %c  \n",a[2]);
        white();
        printf("_____|_____|_____\n");
        printf("     |     |     \n");
        printf("     |     |     \n");
        blue();
        printf("  %c  ",a[3]);
        white();
        printf("|");
        blue();
        printf("  %c  ",a[4]);
        white();
        printf("|");
        blue();
        printf("  %c  \n",a[5]);
        white();
        printf("_____|_____|_____\n");
        printf("     |     |     \n");
        printf("     |     |     \n");
        blue();
        printf("  %c  ",a[6]);
        white();
        printf("|");
        blue();
        printf("  %c  ",a[7]);
        white();
        printf("|");
        blue();
        printf("  %c  \n",a[8]);
        white();
        printf("     |     |     \n\n");
    }
    else if(a[3]==a[4] && a[4]==a[5]){
        printf("     |     |     \n");
        blue();
        printf("  %c  ",a[0]);
        white();
        printf("|");
        blue();
        printf("  %c  ",a[1]);
        white();
        printf("|");
        blue();
        printf("  %c  \n",a[2]);
        white();
        printf("_____|_____|_____\n");
        printf("     |     |     \n");
        printf("     |     |     \n");
        purple();
        printf("  %c  ",a[3]);
        white();
        printf("|");
        purple();
        printf("  %c  ",a[4]);
        white();
        printf("|");
        purple();
        printf("  %c  \n",a[5]);
        white();
        printf("_____|_____|_____\n");
        printf("     |     |     \n");
        printf("     |     |     \n");
        blue();
        printf("  %c  ",a[6]);
        white();
        printf("|");
        blue();
        printf("  %c  ",a[7]);
        white();
        printf("|");
        blue();
        printf("  %c  \n",a[8]);
        white();
        printf("     |     |     \n\n");
    }
    else if(a[6]==a[7] && a[7]==a[8]){
        printf("     |     |     \n");
        blue();
        printf("  %c  ",a[0]);
        white();
        printf("|");
        blue();
        printf("  %c  ",a[1]);
        white();
        printf("|");
        blue();
        printf("  %c  \n",a[2]);
        white();
        printf("_____|_____|_____\n");
        printf("     |     |     \n");
        printf("     |     |     \n");
        blue();
        printf("  %c  ",a[3]);
        white();
        printf("|");
        blue();
        printf("  %c  ",a[4]);
        white();
        printf("|");
        blue();
        printf("  %c  \n",a[5]);
        white();
        printf("_____|_____|_____\n");
        printf("     |     |     \n");
        printf("     |     |     \n");
        purple();
        printf("  %c  ",a[6]);
        white();
        printf("|");
        purple();
        printf("  %c  ",a[7]);
        white();
        printf("|");
        purple();
        printf("  %c  \n",a[8]);
        white();
        printf("     |     |     \n\n");
    }
    else if(a[0]==a[3] && a[3]==a[6]){
        printf("     |     |     \n");
        purple();
        printf("  %c  ",a[0]);
        white();
        printf("|");
        blue();
        printf("  %c  ",a[1]);
        white();
        printf("|");
        blue();
        printf("  %c  \n",a[2]);
        white();
        printf("_____|_____|_____\n");
        printf("     |     |     \n");
        printf("     |     |     \n");
        purple();
        printf("  %c  ",a[3]);
        white();
        printf("|");
        blue();
        printf("  %c  ",a[4]);
        white();
        printf("|");
        blue();
        printf("  %c  \n",a[5]);
        white();
        printf("_____|_____|_____\n");
        printf("     |     |     \n");
        printf("     |     |     \n");
        purple();
        printf("  %c  ",a[6]);
        white();
        printf("|");
        blue();
        printf("  %c  ",a[7]);
        white();
        printf("|");
        blue();
        printf("  %c  \n",a[8]);
        white();
        printf("     |     |     \n\n");
    }
    else if(a[1]==a[4] && a[4]==a[7]){
        printf("     |     |     \n");
        blue();
        printf("  %c  ",a[0]);
        white();
        printf("|");
        purple();
        printf("  %c  ",a[1]);
        white();
        printf("|");
        blue();
        printf("  %c  \n",a[2]);
        white();
        printf("_____|_____|_____\n");
        printf("     |     |     \n");
        printf("     |     |     \n");
        blue();
        printf("  %c  ",a[3]);
        white();
        printf("|");
        purple();
        printf("  %c  ",a[4]);
        white();
        printf("|");
        blue();
        printf("  %c  \n",a[5]);
        white();
        printf("_____|_____|_____\n");
        printf("     |     |     \n");
        printf("     |     |     \n");
        blue();
        printf("  %c  ",a[6]);
        white();
        printf("|");
        purple();
        printf("  %c  ",a[7]);
        white();
        printf("|");
        blue();
        printf("  %c  \n",a[8]);
        white();
        printf("     |     |     \n\n");
    }
    else if(a[2]==a[5] && a[5]==a[8]){
        printf("     |     |     \n");
        blue();
        printf("  %c  ",a[0]);
        white();
        printf("|");
        blue();
        printf("  %c  ",a[1]);
        white();
        printf("|");
        purple();
        printf("  %c  \n",a[2]);
        white();
        printf("_____|_____|_____\n");
        printf("     |     |     \n");
        printf("     |     |     \n");
        blue();
        printf("  %c  ",a[3]);
        white();
        printf("|");
        blue();
        printf("  %c  ",a[4]);
        white();
        printf("|");
        purple();
        printf("  %c  \n",a[5]);
        white();
        printf("_____|_____|_____\n");
        printf("     |     |     \n");
        printf("     |     |     \n");
        blue();
        printf("  %c  ",a[6]);
        white();
        printf("|");
        blue();
        printf("  %c  ",a[7]);
        white();
        printf("|");
        purple();
        printf("  %c  \n",a[8]);
        white();
        printf("     |     |     \n\n");
    }
    else if(a[0]==a[4] && a[4]==a[8]){
        printf("     |     |     \n");
        purple();
        printf("  %c  ",a[0]);
        white();
        printf("|");
        blue();
        printf("  %c  ",a[1]);
        white();
        printf("|");
        blue();
        printf("  %c  \n",a[2]);
        white();
        printf("_____|_____|_____\n");
        printf("     |     |     \n");
        printf("     |     |     \n");
        blue();
        printf("  %c  ",a[3]);
        white();
        printf("|");
        purple();
        printf("  %c  ",a[4]);
        white();
        printf("|");
        blue();
        printf("  %c  \n",a[5]);
        white();
        printf("_____|_____|_____\n");
        printf("     |     |     \n");
        printf("     |     |     \n");
        blue();
        printf("  %c  ",a[6]);
        white();
        printf("|");
        blue();
        printf("  %c  ",a[7]);
        white();
        printf("|");
        purple();
        printf("  %c  \n",a[8]);
        white();
        printf("     |     |     \n\n");
    }
    else if(a[2]==a[4] && a[4]==a[6]){
        printf("     |     |     \n");
        blue();
        printf("  %c  ",a[0]);
        white();
        printf("|");
        blue();
        printf("  %c  ",a[1]);
        white();
        printf("|");
        purple();
        printf("  %c  \n",a[2]);
        white();
        printf("_____|_____|_____\n");
        printf("     |     |     \n");
        printf("     |     |     \n");
        blue();
        printf("  %c  ",a[3]);
        white();
        printf("|");
        purple();
        printf("  %c  ",a[4]);
        white();
        printf("|");
        blue();
        printf("  %c  \n",a[5]);
        white();
        printf("_____|_____|_____\n");
        printf("     |     |     \n");
        printf("     |     |     \n");
        purple();
        printf("  %c  ",a[6]);
        white();
        printf("|");
        blue();
        printf("  %c  ",a[7]);
        white();
        printf("|");
        blue();
        printf("  %c  \n",a[8]);
        white();
        printf("     |     |     \n\n");
    }
}
void reset(){
    a[0]='1';
    a[1]='2';
    a[2]='3';
    a[3]='4';
    a[4]='5';
    a[5]='6';
    a[6]='7';
    a[7]='8';
    a[8]='9';
}
int main() {
    int konum;
    char birinci[50],ikinci[50],sekil;
    char tekrar='Y';
    while(tekrar== 'Y' || tekrar=='y') {
        red();
        printf("Tic Tac Toe Hoşgeldiniz!\n");
        sleep(1);
        white();
        printf("Birinici Oyuncunun adını giriniz:");
        blue();
        scanf("%s", birinci);
        white();
        printf("İkinci Oyuncunun adını giriniz:");
        blue();
        scanf("%s", ikinci);
        white();
        zar(birinci, ikinci);
        printf("\n-------Oyun Başlıyor-------\n");
        sleep(2);
        system("clear");
        board();
        while (check_win() == 2) {
            gel:
            if (player == 0) {
                printf("%s Konum Seçiyor:", birinci);
                blue();
                scanf("%d", &konum);
                white();
                player = 0;
            } else if (player == 1) {
                printf("%s Konum Seçiyor:", ikinci);
                blue();
                scanf("%d", &konum);
                white();
                player = 1;
            }
            sekil = (player == 1) ? 'x' : 'o';
            if (konum == 1 && a[0] == '1') {
                a[0] = sekil;
            } else if (konum == 2 && a[1] == '2') {
                a[1] = sekil;
            } else if (konum == 3 && a[2] == '3') {
                a[2] = sekil;
            } else if (konum == 4 && a[3] == '4') {
                a[3] = sekil;
            } else if (konum == 5 && a[4] == '5') {
                a[4] = sekil;
            } else if (konum == 6 && a[5] == '6') {
                a[5] = sekil;
            } else if (konum == 7 && a[6] == '7') {
                a[6] = sekil;
            } else if (konum == 8 && a[7] == '8') {
                a[7] = sekil;
            } else if (konum == 9 && a[8] == '9') {
                a[8] = sekil;
            } else {
                red();
                printf("Geçersiz Hamle\n");
                white();
                goto gel;
            }
            if(check_win() == 1) {
                break;
            }
            else if (check_win() == 0) {
                break;
            }
            //clearscr();
            system("clear");
            board();
            if (player == 1) {
                player = 0;
            } else {
                player = 1;
            }
        }
        system("clear");
        win_screen();
        if (player == 0 && check_win() == 1) {
            green();
            printf("Oyunu ");
            blue();
            printf("%s ", birinci);
            green();
            printf("Kazandı!\n");
            white();
        } else if (player == 1 && check_win() == 1) {
            green();
            printf("Oyunu ");
            blue();
            printf("%s ", ikinci);
            green();
            printf("Kazandı!\n");
            white();
        } else {
            yellow();
            printf("Oyun Berabere\n");
            white();
        }
        player = 0;
        reset();
        printf("Tekrar Oynamak İster Misiniz?(Y/N):");
        scanf(" %c", &tekrar);
        system("clear");
    }
    exit(0);
}

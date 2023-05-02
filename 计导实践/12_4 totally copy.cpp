
#include<stdio.h>

void getFiveNum(int a[], FILE *fp);

void position(int a[], int num, FILE *fp);

int main() {
    FILE *fp = fopen("dict.dic", "r");
    int a[6];
    a[0] = 5;
    getFiveNum(a, fp);
    int num;
    scanf("%d", &num);
    position(a, num, fp);
    fclose(fp);
    return 0;
}


void getFiveNum(int a[], FILE *fp) {
    int ch;
    for (int i = 1; i <= 5; i++) {
        ch = fgetc(fp);
        a[i] = 0;
        while (ch != 10) {
            a[i] = a[i] * 10 + (ch - '0');
            ch = fgetc(fp);
        }
    }
}

//????
void position(int a[], int num, FILE *fp) {
    int ch, not1 = 0, not2 = 0, line = a[num], enter = 5, chNext;
    while (enter < a[num - 1]) {
        ch = fgetc(fp);
        if (ch == 10)
            enter++;
    }
    ch = fgetc(fp);
    chNext = fgetc(fp);
    while (enter < line) {
        if (not2 == 0 && ch == '/' && chNext == '/') {
            not1 = 1;
        }else if (not1 == 0 && ch == '/' && chNext == '*') {
            not2 = 1;
        }else if (not1 == 1 && chNext == 10) {
            not1 = 0;
            ch = chNext;
            chNext = fgetc(fp);
        }else if (not2 && ch == '*' && chNext == '/') {
            not2 = 0;
            ch = chNext;
            chNext = fgetc(fp);
            if (chNext == 10) {
                enter++;
            }
            ch = chNext;
            chNext = fgetc(fp);
            if (chNext == 10)
                enter++;
        }
        if (not1 == 0 && not2 == 0) {
            printf("%c", ch);
        }
        ch = chNext;
        chNext = fgetc(fp);
        if (chNext == 10) {
            enter++;
        }else if (chNext == EOF) {
            if (not1 == 0 && not2 == 0) {
                printf("%c", ch);
                break;
            } else {
                break;
            }
        }
    }
    if (not1 == 0 && not2 == 0 && chNext == 10) {
        printf("%c", ch);
    }
}

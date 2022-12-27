#include <stdio.h>
//身分證驗證器https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=30779
int main(){
    int n1, n2, n3, n4, n5, n6, n7, n8, n9;
    char alpha;
    int x1, x2;
    scanf("%c%1d%1d%1d%1d%1d%1d%1d%1d%1d", &alpha, &n1, &n2, &n3, &n4, &n5, &n6, &n7, &n8, &n9);
    if (alpha == 'A') {
        x1 = 1;
        x2 = 0;
    }
    else if (alpha == 'B') {
        x1 = 1;
        x2 = 1;
    }
    else if (alpha == 'C') {
        x1 = 1;
        x2 = 2;
    }
    else if (alpha == 'D') {
        x1 = 1;
        x2 = 3;
    }
    else if (alpha == 'E') {
        x1 = 1;
        x2 = 4;
    }
    else if (alpha == 'F') {
        x1 = 1;
        x2 = 5;
    }
    else if (alpha == 'G') {
        x1 = 1;
        x2 = 6;
    }
    else if (alpha == 'H') {
        x1 = 1;
        x2 = 7;
    }
    else if (alpha == 'J') {
        x1 = 1;
        x2 = 8;
    }
    else if (alpha == 'K') {
        x1 = 1;
        x2 = 9;
    }
    else if (alpha == 'L') {
        x1 = 2;
        x2 = 0;
    }
    else if (alpha == 'M') {
        x1 = 2;
        x2 = 1;
    }
    else if (alpha == 'N') {
        x1 = 2;
        x2 = 2;
    }
    else if (alpha == 'P') {
        x1 = 2;
        x2 = 3;
    }
    else if (alpha == 'Q') {
        x1 = 2;
        x2 = 4;
    }
    else if (alpha == 'R') {
        x1 = 2;
        x2 = 5;
    }
    else if (alpha == 'S') {
        x1 = 2;
        x2 = 6;
    }
    else if (alpha == 'T') {
        x1 = 2;
        x2 = 7;
    }
    else if (alpha == 'U') {
        x1 = 2;
        x2 = 8;
    }
    else if (alpha == 'V') {
        x1 = 2;
        x2 = 9;
    }
    else if (alpha == 'X') {
        x1 = 3;
        x2 = 0;
    }
    else if (alpha == 'Y') {
        x1 = 3;
        x2 = 1;
    }
    else if (alpha == 'W') {
        x1 = 3;
        x2 = 2;
    }
    else if (alpha == 'Z') {
        x1 = 3;
        x2 = 3;
    }
    else if (alpha == 'I') {
        x1 = 3;
        x2 = 4;
    }
    else {
        x1 = 3;
        x2 = 5;
    }
    
    int p = 0;
    p += x1;
    p += (9 * x2);
    p += (8 * n1);
    p += (7 * n2);
    p += (6 * n3);
    p += (5 * n4);
    p += (4 * n5);
    p += (3 * n6);
    p += (2 * n7);
    p += n8;
    p += n9;
    if (p % 10 == 0) {
        printf("CORRECT!!!\n");
    }
    else {
        printf("WRONG!!!\n");
    }
    return 0;
}

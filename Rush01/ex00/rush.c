#include <unistd.h>

void printCharArray(void);  // Removed unused parameter
void fillUp(char a[6][6], char *temp);
void fillDown(char a[6][6], char *temp);
void fillLeft(char a[6][6], char *temp);
void fillRight(char a[6][6], char *temp);
void fillCorner(char a[6][6]);

int main(int argc, char *argv[]) {
    if (argc != 2) {
        write(2, "ERROR\n", 1);
        return 1;
    }

    char myArray[6][6];
    char *temp = argv[1];

    // Diziyi sıfırla
    for (int i = 0; i < 6; i++) {
        for (int j = 0; j < 6; j++) {
            myArray[i][j] = '0'; // Diziye '0' karakterini atar
        }
    }

    fillUp(myArray, temp);
    fillDown(myArray, temp);
    fillLeft(myArray, temp);
    fillRight(myArray, temp);
    fillCorner(myArray);

    printCharArray();

    return 0;
}

void printCharArray(void) {
    for (int i = 0; i < 6; i++) {
        for (int j = 0; j < 6; j++) {
            char buffer[2] = {myArray[i][j], '\0'}; // Karakter ve null karakterden oluşan bir dizi
            write(1, buffer, 1); // Karakteri yazdır
        }
        write(1, "\n", 1); // Her satırdan sonra yeni satır
    }
}

void fillUp(char a[6][6], char *temp) {
    a[0][1] = *temp;
    a[0][2] = *(temp + 2);
    a[0][3] = *(temp + 4);
    a[0][4] = *(temp + 6);
}

void fillDown(char a[6][6], char *temp) {
    a[5][1] = *(temp + 8);
    a[5][2] = *(temp + 10);
    a[5][3] = *(temp + 12);
    a[5][4] = *(temp + 14);
}

void fillLeft(char a[6][6], char *temp) {
    a[1][0] = *(temp + 16);
    a[2][0] = *(temp + 18);
    a[3][0] = *(temp + 20);
    a[4][0] = *(temp + 22);
}

void fillRight(char a[6][6], char *temp) {
    a[1][5] = *(temp + 24);
    a[2][5] = *(temp + 26);
    a[3][5] = *(temp + 28);
    a[4][5] = *(temp + 30);
}

void fillCorner(char a[6][6]) {
    a[0][0] = 'X';
    a[0][5] = 'X';
    a[5][0] = 'X';
    a[5][5] = 'X';
}

#define _CRT_SECURE_NO_WARNINGS
#include <conio.h>
#include <stdio.h>
#include <iostream>

using namespace std;

int main() {
	int table[50];
	int rescar;
	int rescub=1;
	int inc = 0;
	for (int i = 0; i < 50; i++) {
		table[i] = i;
	}
	for (int i2 = 0; i2 < 50; i2++) {
		if (inc <= 10) {
			rescar = table[i2] * table[i2];
			for (int i3 = 1; i3 <= 3; i3++) {
				rescub = rescub * table[i2];
			}
			printf("%d     %d      %d\n", table[i2], rescar, rescub);
			rescub = 1;
			inc = inc + 1;
		}
		else {
			system("Pause");
			inc = 0;
		}
	}
}


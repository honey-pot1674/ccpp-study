#include <stdio.h>
typedef struct pokercard {
	char color;
	int num;
}p;
p poker[5];
int arr[5] = { 0 };
int j;
int row[10] = { 0 };

int straight() {	
	if (arr[0] + 1 == arr[1] && arr[1] + 1 == arr[2] && arr[2] + 1 == arr[3] && arr[3] + 1 == arr[4]) {
		return 1;
	}
	else {
		return 0;
	}
}

int flush() {
	if (poker[0].color == poker[1].color && poker[1].color == poker[2].color && poker[2].color == poker[3].color && poker[3].color == poker[4].color) {
		return 1;
	}
	else {
		return 0;
	}
}

int four() {
	for (int i = 0; i < 2; i++) {
		if (arr[i] == arr[i + 1] && arr[i] == arr[i + 2] && arr[i] == arr[i + 3]) {
			if (i == 0 && arr[i] != arr[i + 4]) {
				return arr[i];
			}
			if (i == 1 && arr[i - 1] != arr[i] ) {
				return arr[i];
			}
		}
	}
	return 0;
}

int three() {
	for (int i = 0; i < 3; i++) {
		if (arr[i] == arr[i + 1] && arr[i] == arr[i + 2]) {
			if (i == 0 && arr[i] != arr[i + 3]) {
				return arr[i];
			}
			if (i == 1 && arr[i - 1] != arr[i] && arr[i] != arr[i + 3]) {
				return arr[i];
			}
			if (i == 2 && arr[i - 1] != arr[i]) {
				return arr[i];
			}
		}
		
	}
	return 0;
}

int twopair() {
	for (int i = 0; i < 2; i++) {
		if (arr[i] == arr[i + 1]) {
			if (i == 0 && arr[i + 2] != arr[i]) {
				for (j = i + 2; j < 4; j++) {
					if (arr[j] == arr[j + 1]) {
						if (j == i + 1 && arr[j + 2] != arr[j]) {
							return arr[i];
						}
						else if (j == 3 && arr[j - 1] != arr[j]) {
							return arr[i];
						}
						else if (arr[j - 1] != arr[j] && arr[j + 2] != arr[j]) {
							return arr[i];
						}
					}
				}
			}
			if (i == 1 && arr[i - 1] != arr[i] && arr[i + 2] != arr[i]) {
				for (j = i + 2; j < 4; j++) {
					if (arr[j] == arr[j + 1]) {
						if (j == i + 1 && arr[j + 2] != arr[j]) {
							return arr[i];
						}
						else if (j == 3 && arr[j - 1] != arr[j]) {
							return arr[i];
						}
						else if (arr[j - 1] != arr[j] && arr[j + 2] != arr[j]) {
							return arr[i];
						}
					}
				}
			}
			if (i == 2 && arr[i - 1] != arr[i]) {
				for (j = i + 2; j < 4; j++) {
					if (arr[j] == arr[j + 1]) {
						if (j == i + 1 && arr[j + 2] != arr[j]) {
							return arr[i];
						}
						else if (j == 3 && arr[j - 1] != arr[j]) {
							return arr[i];
						}
						else if (arr[j - 1] != arr[j] && arr[j + 2] != arr[j]) {
							return arr[i];
						}
					}
				}
			}
		}
	}
	return 0;
}

int onepair() {
	for (int i = 0; i < 4; i++) {
		if (arr[i] == arr[i + 1]) {
			if (i == 0 && arr[i + 2] != arr[i]) {
				return arr[i];
			}
			else if (i == 3 && arr[i - 1] != arr[i]) {
				return arr[i];
			}
			else if (arr[i - 1] != arr[i] && arr[i + 2] != arr[i]) {
				return arr[i];
			}
		}
	}
	return 0;
}

int fullhouse() {	
	for (int i = 0; i < 5; i++) {
		++row[arr[i]];
	}
	for (int i = 0; i < 10; i++) {
		if (row[i] == 3) {
			for (j = 0; j < 10; j++) {
				if (row[j] == 2) {
					return 1;
				}
			}
		}
	}
}

int main() {	
	int i;
	int score;
	int large = 0;
	int small;
	int key;
	int push = 0;
	for (i = 0; i < 5; i++) {
		scanf(" %c %d", &poker[i].color, &poker[i].num);
		if (poker[i].num > large) {
			large = poker[i].num;
		}
	}


	arr[0] = poker[0].num;
	for (i = 1; i < 5; i++) {
		key = poker[i].num;
		small = 0;
		for (j = i - 1; j >= 0; j--) {
			if (arr[j] > key) {
				arr[j + 1] = arr[j];
				push++;
			}
			else {
				small = j + 1;
				break;
			}
		}
		arr[small] = key;
	}


	if (straight() == 1 && flush() == 1) {
		score = 900 + large;
	}
	else if (four() >= 1) {
		score = 800 + four();
	}
	else if(fullhouse() == 1) {
		for (i = 0; i < 10; i++) {
			if (row[i] == 3) {
				for (j = 0; j < 10; j++) {
					if (row[j] == 2) {
						score = 700 + (i * 10) + j;
					}
				}
			}
		}
	}
	else if (flush() == 1) {
		score = 600 + large;
	}
	else if (straight() == 1) {
		score = 500 + large;
	}
	else if (three() >= 1) {
		score = 400 + three();
	}
	else if (twopair() >= 1) {
		if (twopair() < arr[j]) {
			score = 300 + (arr[j] * 10) + twopair();
		}
		else {
			score = 300 + arr[j] + (twopair() * 10);
		}
	}
	else if (onepair() >= 1) {
		score = 200 + onepair();
	}
	else {
		score = 100 + large;
	}
	printf("%d",score);
}
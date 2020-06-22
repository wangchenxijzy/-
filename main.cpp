#include<iostream>
using namespace std;

bool judge(int arrays[10]);

int main() {
	int temp[10] = { 0,0,0,0,0,0,0,0,0,0 };
	for (int a = 1; a < 5; a++) {
		temp[0] = a;
		for (int b = 1; b < 5; b++) {
			temp[1] = b;
			for (int c = 1; c < 5; c++) {
				temp[2] = c;
				for (int d = 1; d < 5; d++) {
					temp[3] = d;
					for (int e = 1; e < 5; e++) {
						temp[4] = e;
						for (int f = 1; f < 5; f++) {
							temp[5] = f;
							for (int g = 1; g < 5; g++) {
								temp[6] = g;
								for (int h = 1; h < 5; h++) {
									temp[7] = h;
									for (int i = 1; i < 5; i++) {
										temp[8] = i;
										for (int j = 1; j < 5; j++) {
											temp[9] = j;
											if (judge(temp)) {
												for (int n = 0; n < 10; n++) {
													if (temp[n] == 1) {
														cout << "A";
													}
													if (temp[n] == 2) {
														cout << "B";
													}
													if (temp[n] == 3) {
														cout << "C";
													}													
													if (temp[n] == 4) {
														cout << "D";
													}
												}
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}
	return 0;
}

bool judge(int arrays[10]) {
	//第二题
	if (arrays[1] == 1 && arrays[4] == 3) {}
	else if (arrays[1] == 2 && arrays[4] == 4) {}
	else if (arrays[1] == 3 && arrays[4] == 1) {}
	else if (arrays[1] == 4 && arrays[4] == 2) {}
	else { return false; }

	//第三题
	if (arrays[2] == 1 && arrays[2] != arrays[5] && arrays[5] == arrays[1] && arrays[1] == arrays[3]) {}
	else if (arrays[2] == 2 && arrays[5] != arrays[2] && arrays[2] == arrays[1] && arrays[1] == arrays[3]) {}
	else if (arrays[2] == 3 && arrays[1] != arrays[2] && arrays[2] == arrays[5] && arrays[5] == arrays[3]) {}
	else if (arrays[2] == 4 && arrays[3] != arrays[2] && arrays[2] == arrays[5] && arrays[5] == arrays[1]) {}
	else { return false; }

	//第四题
	if (arrays[3] == 1 && arrays[0] == arrays[4]) {}
	else if (arrays[3] == 2 && arrays[1] == arrays[6]) {}
	else if (arrays[3] == 3 && arrays[0] == arrays[8]) {}
	else if (arrays[3] == 4 && arrays[5] == arrays[9]) {}
	else { return false; }

	//第五题
	if (arrays[4] == 1 && arrays[4] == arrays[7]) {}
	else if (arrays[4] == 2 && arrays[4] == arrays[3]) {}
	else if (arrays[4] == 3 && arrays[4] == arrays[8]) {}
	else if (arrays[4] == 4 && arrays[4] == arrays[6]) {}
	else { return false; }

	//第六题
	if (arrays[5] == 1 && arrays[7] == arrays[1] && arrays[7] == arrays[3]) {}
	else if (arrays[5] == 2 && arrays[7] == arrays[0] && arrays[7] == arrays[5]) {}
	else if (arrays[5] == 3 && arrays[7] == arrays[2] && arrays[7] == arrays[9]) {}
	else if (arrays[5] == 4 && arrays[7] == arrays[4] && arrays[7] == arrays[8]) {}
	else { return false; }

	//第七题
	int a = 0, b = 0, c = 0, d = 0;
	for (int i = 0; i < 10; i++) {
		if (arrays[i] == 1) {
			a++;
		}
		else if (arrays[i] == 2) {
			b++;
		}
		else if (arrays[i] == 3) {
			c++;
		}
		else if (arrays[i] == 4) {
			d++;
		}
	}
	if (arrays[6] == 1 && c <= a && c <= b && c <= d) {}
	else if (arrays[6] == 2 && b <= a && b <= c && b <= d) {}
	else if (arrays[6] == 3 && a <= c && a <= b && a <= d) {}
	else if (arrays[6] == 4 && d <= a && d <= b && d <= c) {}
	else { return false; }

	//第八题
	if (arrays[7] == 1 && ((arrays[6] - arrays[0]) == 1 || (arrays[6] - arrays[0]) == -1)) { return false; }
	else if (arrays[7] == 2 && ((arrays[4] - arrays[0]) == 1 || (arrays[4] - arrays[0]) == -1)) { return false; }
	else if (arrays[7] == 3 && ((arrays[1] - arrays[0]) == 1 || (arrays[1] - arrays[0]) == -1)) { return false; }
	else if (arrays[7] == 4 && ((arrays[9] - arrays[0]) == 1 || (arrays[9] - arrays[0]) == -1)) { return false; }

	//第九题
	if (arrays[8] == 1 && arrays[0] != arrays[4]) {}
	else if (arrays[8] == 2 && ((arrays[0] == arrays[5] && arrays[9] != arrays[4]) || (arrays[0] != arrays[5] && arrays[9] == arrays[4]))) {}
	else if (arrays[8] == 3 && ((arrays[0] == arrays[5] && arrays[1] != arrays[4]) || (arrays[0] != arrays[5] && arrays[1] == arrays[4]))) {}
	else if (arrays[8] == 4 && ((arrays[0] == arrays[5] && arrays[8] != arrays[4]) || (arrays[0] != arrays[5] && arrays[8] == arrays[4]))) {}
	else { return false; }

	//第十题
	int counter[4];
	counter[0] = a;
	counter[1] = b;
	counter[2] = c;
	counter[3] = d;
	int max = 0;
	int min = 10;
	for (int n = 0; n < 4; n++) {
		if (counter[n] < min) {
			min = counter[n];
		}
		if (counter[n] > max) {
			max = counter[n];
		}
	}
	if (arrays[9] == 1 && (max - min) == 3) {}
	else if (arrays[9] == 2 && (max - min) == 2) {}
	else if (arrays[9] == 3 && (max - min) == 4) {}
	else if (arrays[9] == 4 && (max - min) == 1) {}
	else { return false; }

	return true;
}
#include "Enemy.h"
#include <stdio.h>

int Enemy::aliveFlag;

int main() {
	Enemy* enemy1 = new Enemy();
	Enemy* enemy2 = new Enemy();
	Enemy* enemy3 = new Enemy();

	int input;

	while (true) {
		enemy1->Draw();
		enemy2->Draw();
		enemy3->Draw();
		//���͏���
		printf("0 : exit  1 : continue ==> ");
		scanf_s("%d", &input);
		//1�������ꂽ��G1���|���(�G2�A3���|���)
		if (input == 1) {
			enemy1->Update();
		}
		//0�������ꂽ�烋�[�v���甲����(�I��)
		if (input == 0) {
			break;
		}
	}
	delete enemy1;
	delete enemy2;
	delete enemy3;

	return 0;
}
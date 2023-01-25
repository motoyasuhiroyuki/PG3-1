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
		//入力処理
		printf("0 : exit  1 : continue ==> ");
		scanf_s("%d", &input);
		//1が押されたら敵1が倒れる(敵2、3も倒れる)
		if (input == 1) {
			enemy1->Update();
		}
		//0が押されたらループから抜ける(終了)
		if (input == 0) {
			break;
		}
	}
	delete enemy1;
	delete enemy2;
	delete enemy3;

	return 0;
}
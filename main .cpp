#include "SceneManager.h"
#include <stdio.h>

int main() {
	SceneManager* sceneManager = nullptr;
	sceneManager = SceneManager::GetInstance();
	int input;
	int sceneNum = 0;

	while (true) {
		//���͏���
		printf("Press to 1 Change ==> ");
		scanf_s("%d", &input);
		//1�������ƃV�[�����i��
		if (input == 1) {
			sceneManager->ChangeScene(sceneNum);
		}
		//0�������ƃ��[�v���甲����(�I��)
		if (input == 0) {
			break;
		}
	}

	return 0;
}
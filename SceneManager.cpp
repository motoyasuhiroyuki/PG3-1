#include "SceneManager.h"
#include <stdio.h>

SceneManager::SceneManager() {}

SceneManager::~SceneManager() {}

SceneManager* SceneManager::GetInstance() {
	//�֐���static�ϐ��Ƃ��Đ錾����
	static SceneManager instance;
	//�|�C���^��Ԃ�
	return &instance;
}

void SceneManager::ChangeScene(int &sceneNo) {
	if (sceneNo < 3) { //�V�[��3�܂Ői�߂�
		sceneNo += 1;
	}
	else {//3�ȍ~�ɂȂ����烋�[�v
		sceneNo = 0;
	}
	//�f�o�b�O�p
	printf("sceneNo : %d\n", sceneNo);
}

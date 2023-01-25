#pragma once
class SceneManager final{
private:
	//�R���X�g���N�^��private�ɂ���
	SceneManager();
	//�f�X�g���N�^��private�ɂ���
	~SceneManager();

public://�����o�֐�

	/// <summary>
	/// �V�[����ς���֐�
	/// </summary>
	/// <param name="sceneNo">�V�[���ԍ�</param>
	void ChangeScene(int &sceneNo);

	//�R�s�[�R���X�g���N�^�𖳌��ɂ���
	SceneManager(const SceneManager& obj) = delete;
	//������Z�q�𖳌��ɂ���
	SceneManager& operator=(const SceneManager& obj) = delete;

	/// <summary>
	/// �V���O���g���C���X�^���X�̎擾
	/// </summary>
	/// <returns>�V���O���g���C���X�^���X</returns>
	static SceneManager* GetInstance();
};


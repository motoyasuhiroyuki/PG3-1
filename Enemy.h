#pragma once
class Enemy{
public:

	Enemy();
	~Enemy();

	void Approach();
	void Shoot();
	void GetAway();


	//�X�V
	void Update();

	//�`��
	void Draw();

public:
	static void(Enemy::* pFuncTable[])();

	int phase_;
	
};


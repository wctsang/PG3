#pragma once
#include <iostream>

//Status List
enum class Status
{
	Approach,
	Shoot,
	Withdraw
};

class Enemy
{
public:

	Enemy();
	~Enemy();
	void Update();
	void Approach();
	void Shoot();
	void Withdraw();

private:
	static void (Enemy::* StatusFunction[])();

	Status nowStatus;

};
#include "Enemy.h"

Enemy::Enemy() {
    nowStatus = Status::Approach;
};
Enemy::~Enemy() {};


//Status テーブル
void(Enemy::* Enemy::StatusFunction[])() = {
&Enemy::Approach,
&Enemy::Shoot,
&Enemy::Withdraw
};

// Approach status
void Enemy::Approach() {
    std::cout << "Approaching" << std::endl;
}

// Shoot status
void Enemy::Shoot() {
    std::cout << "Shooting" << std::endl;
   
}

// Withdrawal status
void Enemy::Withdraw() {
    std::cout << "Withdrawing" << std::endl;
}

void Enemy::Update() {
    // 現在のフェーズを実行する　　（メンバ関数テーブルの呼び出し）
    (this->*StatusFunction[static_cast<size_t>(nowStatus)])();

    //status更新
    if (nowStatus == Status::Approach) {

        nowStatus = Status::Shoot;
    }
    else if (nowStatus == Status::Shoot) {

        nowStatus = Status::Withdraw;
    }
    else if (nowStatus == Status::Withdraw)
    {
        nowStatus = Status::Approach;
    }
};
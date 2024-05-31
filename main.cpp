#include <stdio.h>
#include "Enemy.h"
#include <windows.h>
int main() {

	Enemy enemy;

	for (int i = 0; i < 3; ++i) {
		enemy.Update();
		Sleep(1000);  //次の状態に変更する時間
	}

	return 0;
}
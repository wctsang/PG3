#include <stdio.h>
#include <iostream>
#include <list>
using namespace std;

int main() {

	list<const char*> yamanoteLineStation;
	//1970年山手線の駅一覧
	yamanoteLineStation.push_back("Tokyo");
	yamanoteLineStation.push_back("Kanda");
	yamanoteLineStation.push_back("Akihabara");
	yamanoteLineStation.push_back("Okachimachi");
	yamanoteLineStation.push_back("Ueno");
	yamanoteLineStation.push_back("Uguisudani");
	yamanoteLineStation.push_back("Nippori");
	yamanoteLineStation.push_back("Tabata");
	yamanoteLineStation.push_back("Komagome");
	yamanoteLineStation.push_back("Sugamo");
	yamanoteLineStation.push_back("Otsuka");
	yamanoteLineStation.push_back("Ikebukuro");
	yamanoteLineStation.push_back("Mejiro");
	yamanoteLineStation.push_back("Takadanobaba");
	yamanoteLineStation.push_back("Shin-Okubo");
	yamanoteLineStation.push_back("Shinjuku");
	yamanoteLineStation.push_back("Yoyogi");
	yamanoteLineStation.push_back("Harajuku");
	yamanoteLineStation.push_back("Shibuya");
	yamanoteLineStation.push_back("Ebisu");
	yamanoteLineStation.push_back("Meguro");
	yamanoteLineStation.push_back("Gotanda");
	yamanoteLineStation.push_back("Osaki");
	yamanoteLineStation.push_back("Shinagawa");
	yamanoteLineStation.push_back("Tamachi");
	yamanoteLineStation.push_back("Hamamatsucho");
	yamanoteLineStation.push_back("Shimbashi");
	yamanoteLineStation.push_back("Yurakucho");


	//1970年山手線の駅を出力する
	cout << "1970年山手線の駅:" << endl;
	for (auto station = yamanoteLineStation.begin(); station != yamanoteLineStation.end(); station++) {
		cout << *station << "\n";
	}
	cout << endl;

	//田端の前に西日暮里を追加する
	for (list<const char*>::iterator station = yamanoteLineStation.begin(); station != yamanoteLineStation.end(); station++) {
		if (*station == "Tabata") {
			station = yamanoteLineStation.insert(station, "Nishi-Nippori");
			++station;
		}
	}
	//2019年山手線の駅を出力する（西日暮里を追加した）
	cout << "2019年山手線の駅:" << endl;
	for (auto station = yamanoteLineStation.begin(); station != yamanoteLineStation.end(); station++) {
		cout << *station << "\n";
	}
	cout << endl;

	//田町の前に高輪ゲートウェイを追加する
	for (list<const char*>::iterator station = yamanoteLineStation.begin(); station != yamanoteLineStation.end(); station++) {
		if (*station == "Tamachi") {
			station = yamanoteLineStation.insert(station, "Takanawa Gateway");
			++station;
		}
	}

	//2020年山手線の駅を出力する（高輪ゲートウェイを追加した）
	cout << "2020年山手線の駅:" << endl;
	for (auto station = yamanoteLineStation.begin(); station != yamanoteLineStation.end(); station++) {
		cout << *station << "\n";
	}
	cout << endl;

	return 0;
}
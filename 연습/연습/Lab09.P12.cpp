#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>
using namespace std;

class Pokemon {
public:
	Pokemon(string name, int level, int attack);
	~Pokemon();
	void setHP(int hp);
	string getName() const;
	int getHP() const;
	void attackOther(Pokemon& other);
private:
	string _name;
	int _level, _attack, _hp;
};

Pokemon::Pokemon(string name, int level, int attack)
	:_name{ name }, _level{ level }, _attack{ attack }, _hp{ level * 50 } {
}
Pokemon::~Pokemon() {
	cout << _name << " 포켓몬이 소멸합니다." << endl;
}
void Pokemon::setHP(int hp) {
	if (hp > 0) {
		_hp = hp;
	}
	else {
		_hp = 0;
	}
}
string Pokemon::getName() const {
	return _name;
}
int Pokemon::getHP() const {
	return _hp;
}
void Pokemon::attackOther(Pokemon& other) {
	cout << _name << "이(가) " << other._name << "을(를) 공격합니다." << endl;
	int damage = _attack * (1 + rand() % 10);
	other.setHP(other.getHP() - damage);
	cout << other.getName() << "의 남은 체력: " << other.getHP() << endl;
}

int main() {
	srand(time(0));
	
	Pokemon pokemon1{ "피카츄", 10, 20 };
	Pokemon pokemon2{ "꼬부기", 15, 15 };

	while (pokemon1.getHP() > 0 && pokemon2.getHP() > 0) {
		pokemon1.attackOther(pokemon2);
		if (pokemon2.getHP() <= 0) {
			cout << pokemon2.getName() << "(이)가 쓰러졌습니다." << endl;
			break;
		}
		pokemon2.attackOther(pokemon1);
		if (pokemon1.getHP() <= 0) {
			cout << pokemon1.getName() << "(이)가 쓰러졌습니다." << endl;
			break;
		}
	}
}
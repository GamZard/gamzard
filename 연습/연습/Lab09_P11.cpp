#include <iostream>
using namespace std;

class ShadowPartner {
private:
	double _attack;
	double _hp;
	double _mana;
public:
	ShadowPartner(int attack, int hp, int mana);
	ShadowPartner(const ShadowPartner& p1);
	void getInfo() const;
	~ShadowPartner();
};

class NightLord {
private:
	int _attack;
	int _hp;
	int _mana;
public:
	NightLord(int attack, int hp, int mana);
	ShadowPartner createShadowPartner() const;
};

ShadowPartner::ShadowPartner(int attack, int hp, int mana)
	: _attack{ attack * 0.7 }, _hp{ hp * 0.7 }, _mana{ mana * 0.7 } {
}
ShadowPartner::ShadowPartner(const ShadowPartner& p1)
	: _attack{ p1._attack }, _hp{ p1._hp }, _mana{ p1._mana } {
}
void ShadowPartner::getInfo() const {
	cout << "쉐도우 파트너의 정보입니다. 공격력: " << _attack << ", 체력: " << _hp;
	cout << ", 마나: " << _mana << endl;
}
ShadowPartner::~ShadowPartner() {
	cout << "쉐도우 파트너가 소멸되었습니다." << endl;
}

ShadowPartner NightLord::createShadowPartner() const{
	cout << "쉐도우 파트너가 생성되었습니다." << endl;
	return ShadowPartner{ _attack, _hp, _mana };
}
NightLord::NightLord(int attack, int hp, int mana)
	:_attack{ attack }, _hp{ hp }, _mana{ mana } {
}

int main() {
	int atk;
	int hp;
	int mana;

	cout << "나이트로드의 공격력을 입력하세요: ";
	cin >> atk;
	cout << "나이트로드의 체력을 입력하세요: ";
	cin >> hp;
	cout << "나이트로드의 마나를 입력하세요: ";
	cin >> mana;
	NightLord nightLord(atk, hp, mana);
	cout << endl;
	ShadowPartner shadowPartner = nightLord.createShadowPartner();

	shadowPartner.getInfo();
}
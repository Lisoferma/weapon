#pragma once


#include <string>


class Weapon {
  public:

	Weapon();

	// задать название
	void setName(const std::string& name);

	// прочитать название
	std::string& getName();

	// задать урон
	void setDamage(float damage);

	// прочитать урон
	float getDamage();

	// воспроизвести эффект выстрела
	virtual void shotEffect() = 0;


  protected:
	std::string _name;
	float _damage;
};
#pragma once


#include <string>


class Weapon {
  public:
	unsigned maxAmmo;


	Weapon();

	// задать название
	void setName(const std::string& name);

	// прочитать название
	std::string& getName();

	// задать урон
	void setDamage(float damage);

	// прочитать урон
	float getDamage();

	// мгновенная перезарядка; возвращает 0 если нет боезопаса
	virtual bool instantReload() = 0;

	// воспроизвести эффект выстрела
	virtual void shotEffect() = 0;

	// задать текущий боезопас
	void setCurrentAmmo(unsigned number);

	// прочитать текущий боезопас
	unsigned getCurrentAmmo();


  private:
	std::string _name;
	float       _damage;
	unsigned    _currentAmmo;
};
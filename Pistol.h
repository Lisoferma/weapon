// описывает общий функционал для пистолетов, 
// в частности перезарядку и тип используемых патронов -- pistolAmmo 
// @author Пилипейко А.А.


#pragma once


#include "Weapon.h"


class Pistol : public Weapon {
  public:
	//Pistol();

	// мгновенная перезарядка; тратит pistolAmmo из Inventory.h
	// возвращает 0 если нет боезапаса
	bool instantReload() override final;
};
// ��������� ���������� ��������� Colt
// @author ��������� �.�.


#pragma once


#include "Pistol.h"


class Colt : public Pistol {
  public:
	Colt();

	// ������������� ������ ��������
	void shotEffect() override;
};


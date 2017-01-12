#pragma once
#include "DrawAPI.h"

class DrawImpl : public DrawAPI
{
public:
	void Draw() {
		cout << "Draw Impl" << endl;
	}
};


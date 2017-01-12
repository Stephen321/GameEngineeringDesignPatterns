#pragma once
#include "CharacterBridge2.h"
#include "DrawAPI.h"

class PlayerBridge : public CharacterBridge2
{
public:
	PlayerBridge(DrawAPI* api) { 
		this->api = api; 
	}
	~PlayerBridge(){
		delete api;
	}
	void Draw() { api->Draw(); }
private:
	DrawAPI* api;
};

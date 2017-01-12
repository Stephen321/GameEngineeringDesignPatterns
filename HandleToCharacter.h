#pragma once
#include "CharacterBridge.h"

class HandleToCharacter
{
public:
	HandleToCharacter() : character(new CharacterBridge()) {  }
	~HandleToCharacter() {
		delete character;
	}
	CharacterBridge* operator->() {//overloaded ->
		return character; 
	} 

private:
	CharacterBridge* character;
};

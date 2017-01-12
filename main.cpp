#include <vector>
#include "CharacterFactory.h"
#include "HandleToCharacter.h"
#include "DrawImp.h"
#include "PlayerBridge.h"
#include "GraphicProxy.h"

int main(int argc, char** argv)
{
	cout << "abstract design pattern------------------------" << endl;
	Factory* factory = new CharacterFactory;
	vector<Character*> characters;
	characters.push_back(factory->CreatePlayer());
	characters.push_back(factory->CreateOpponents());

	for (int i = 0; i < characters.size(); i++)
	{
		characters[i]->draw();
	}
	for (int i = 0; i < characters.size(); i++)
	{
		delete characters[i];
	}
	delete factory;
	characters.clear();

	cout << endl;

	cout << "bridge design pattern------------------------" << endl;
	HandleToCharacter handle; 
	handle->Print();

	DrawAPI* api = new DrawImpl(); 
	CharacterBridge2* character = new PlayerBridge(api);
	character->Draw();
	delete character;

	cout << endl;

	cout << "proxy design pattern------------------------" << endl;
	GraphicProxy gp;
	gp.Draw();


	cin.get();
	return 0;
}



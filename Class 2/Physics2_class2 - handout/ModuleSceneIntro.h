#pragma once
#include "Module.h"
#include "p2List.h"
#include "Globals.h"

class physBody;

class ModuleSceneIntro : public Module
{
public:
	ModuleSceneIntro(Application* app, bool start_enabled = true);
	~ModuleSceneIntro();

	bool Start();
	update_status Update();
	bool CleanUp();
	p2List<physBody*> formas;
	

public:

	SDL_Texture* circle;
	SDL_Texture* box;
	SDL_Texture* rick;
};

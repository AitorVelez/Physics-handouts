#pragma once

//#define METERS_TO_PIXELS()
//#define PIXEL_TO_METER()


#include "Module.h"
#include "Globals.h"

class b2World;			//forward declaration 
class b2body;
 
class ModulePhysics : public Module
{
public:
	ModulePhysics(Application* app, bool start_enabled = true);
	~ModulePhysics();

	bool Start();
	update_status PreUpdate();
	update_status PostUpdate();
	
	bool CleanUp();

private:

	bool debug;
	
	b2World *world;
	//b2Body *body;
};
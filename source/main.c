#include <Arkas/engine.h>
#include "scene.h"

int main(void) {
	Engine_Init("Arkas Template");

	// usually you would add the first scene here, instead i'm just enabling
	// the console
	engine.console = true;

	// here's how you would add a scene:
	// SceneManager_AddScene(TemplateScene());

	while (engine.running) {
		Engine_Update();
	}
	Engine_Free();
}

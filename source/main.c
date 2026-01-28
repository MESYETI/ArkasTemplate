#include <Arkas/engine.h>

int main(void) {
	Engine_Init("Arkas Template");

	// usually you would add the first scene here, instead i'm just enabling
	// the console
	engine.console = true;

	while (engine.running) {
		Engine_Update();
	}
	Engine_Free();
}

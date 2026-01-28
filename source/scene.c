#include "scene.h"

static void Init(Scene* scene) {
	
}

static void Free(Scene* scene) {
	
}

static bool HandleEvent(Scene* scene, Event* e) {
	return false; // return true if you want to block an event from other handlers
}

static void Update(Scene* scene, bool top) {
	
}

static void Render(Scene* scene) {
	
}

Scene TemplateScene(void) {
	return (Scene) {
		.init        = &Init,
		.free        = &Free,
		.handleEvent = &HandleEvent,
		.update      = &Update,
		.render      = &Render
	};
}

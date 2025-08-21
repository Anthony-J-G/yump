#include "minimal_default.hpp"

#include <godot_cpp/core/class_db.hpp>


using namespace godot;

void Level_MinimalDefault::_bind_methods() {
}

Level_MinimalDefault::Level_MinimalDefault() {
	// Initialize any variables here.
	time_passed = 0.0;
}

Level_MinimalDefault::~Level_MinimalDefault() {
	// Add your cleanup here.
}

void Level_MinimalDefault::_process(double delta) {
	time_passed += delta;

	Vector3 new_position = Vector3(
        10.0 + (10.0 * sin(time_passed * 2.0)),
        10.0 + (10.0 * cos(time_passed * 1.5)),
        0
    );

	set_position(new_position);
}

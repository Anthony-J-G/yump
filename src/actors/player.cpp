#include "player.hpp"

#include <godot_cpp/core/class_db.hpp>



using namespace godot;

void Actor_Player::_bind_methods() {
}

Actor_Player::Actor_Player() {
	// Initialize any variables here.
	time_passed = 0.0;
}

Actor_Player::~Actor_Player() {
	// Add your cleanup here.
}

void Actor_Player::_process(double delta) {
	time_passed += delta;

	Vector3 new_position = Vector3(
        10.0 + (10.0 * sin(time_passed * 2.0)),
        10.0 + (10.0 * cos(time_passed * 1.5)),
        0
    );

	set_position(new_position);
}

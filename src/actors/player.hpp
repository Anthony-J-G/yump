#ifndef PLAYER_HPP
#define PLAYER_HPP

#include <godot_cpp/classes/node3d.hpp>
#include <godot_cpp/classes/sprite2d.hpp>

namespace godot {

class Actor_Player : public Node3D {
	GDCLASS(Actor_Player, Node3D)

private:
	double time_passed;

protected:
	static void _bind_methods();

public:
	Actor_Player();
	~Actor_Player();

	void _process(double delta) override;
};

}

#endif // PLAYER_HPP





#ifndef MINIMAL_DEFAULT_HPP
#define MINIMAL_DEFAULT_HPP

#include <godot_cpp/classes/node3d.hpp>
#include <godot_cpp/classes/sprite2d.hpp>

namespace godot {

class Level_MinimalDefault : public Node3D {
	GDCLASS(Level_MinimalDefault, Node3D)

private:
	double time_passed;

protected:
	static void _bind_methods();

public:
	Level_MinimalDefault();
	~Level_MinimalDefault();

	void _process(double delta) override;
};

}

#endif // MINIMAL_DEFAULT_HPP





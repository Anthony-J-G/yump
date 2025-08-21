#ifndef ABSTRACT_LEVEL_HPP
#define ABSTRACT_LEVEL_HPP

#include "godot_cpp/classes/node3d.hpp"
#include <godot_cpp/classes/sprite2d.hpp>


namespace godot {

class Level_Abstract : public Node3D {
	GDCLASS(Level_Abstract, Node3D)

private:
	double time_passed;

protected:
	static void _bind_methods();

public:
	Level_Abstract();
	~Level_Abstract();

	void _process(double delta) override;
};

}

#endif // end ABSTRACT_LEVEL_HPP

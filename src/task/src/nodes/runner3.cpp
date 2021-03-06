#include "../helper/runner.h"
#include <cmath>

task::position f(double t) {
	task::position result;

	double amplitude = 5.0;

	result.object_name = "runner3";
	result.x = sin(t) * amplitude;
	result.y = 0.0;
	result.z = 0.0;
	
	return result;
}

int main(int argc, char ** argv) {
	Runner runner(argc, argv, "runner3", f);
}

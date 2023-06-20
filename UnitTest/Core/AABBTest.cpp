#include "Core/AABB.h"

#include "fmt/format.h"

#include <iostream>

using namespace Arctic;

inline std::string to_string(const AABB& Box) {
	return fmt::format("({}, {}, {}), ({}, {}, {})", Box.Min.x, Box.Min.y, Box.Min.z, Box.Max.x, Box.Max.y, Box.Max.z);
}

int main() {
	AABB AABB({-1, -1, -1}, {1, 1, 1});
	auto NewAABB = AABB.Transform({
		1, 1, 1, 0,
		1, 1, 1, 0,
		1, 1, 1, 0,
		1, 1, 1, 1,
	});
	assert(to_string(NewAABB) == "(-2, -2, -2), (4, 4, 4)");
	std::cout << to_string(NewAABB) << std::endl;
}

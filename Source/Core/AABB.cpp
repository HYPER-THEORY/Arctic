/**
 * Copyright (C) 2021-2023 Hypertheory
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in all
 * copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE                                       
 * SOFTWARE.
 */

#include "AABB.h"

namespace Arctic {

AABB::AABB(const Vector3& Min, const Vector3& Max) : Min(Min), Max(Max) {}

bool AABB::IsValid() const {
	return Max.x >= Min.x && Max.y >= Min.y && Max.z >= Min.z;
}

void AABB::Union(const Vector3& Point) {
	Min = min(Min, Point);
	Max = max(Max, Point);
}

void AABB::Union(const AABB& Box) {
	Min = min(Min, Box.Min);
	Max = max(Max, Box.Max);
}

void AABB::Intersection(const AABB& Box) {
	Min = max(Min, Box.Min);
	Max = min(Max, Box.Max);
}

bool AABB::Contains(const Vector3& Point) const {
	return Point.x >= Min.x && Point.x <= Max.x &&
		Point.y >= Min.y && Point.y <= Max.y &&
		Point.z >= Min.z && Point.z <= Max.z;
}

bool AABB::Contains(const AABB& Box) const {
	return Box.Min.x >= Min.x && Box.Max.x <= Max.x &&
		Box.Min.y >= Min.y && Box.Max.y <= Max.y &&
		Box.Min.z >= Min.z && Box.Max.z <= Max.z;
}

bool AABB::Intersects(const AABB& Box) const {
	return Box.Max.x >= Min.x && Box.Min.x >= Max.x &&
		Box.Max.y >= Min.y && Box.Min.y >= Max.y &&
		Box.Max.z >= Min.z && Box.Min.z >= Max.z;
}

AABB AABB::Transform(const Matrix4& Matrix) const {

}

}

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

#pragma once

#include "Vector.h"
#include "Matrix.h"

#include <limits>

namespace Arctic {

class AABB {
public:
	Vector3 Min = Vector3(std::numeric_limits<float>::infinity());     ///< the lower boundary of the box
	Vector3 Max = Vector3(-std::numeric_limits<float>::infinity());    ///< the upper boundary of the box
	
	/**
	 * Creates a new axis-aligned bounding box (AABB) object.
	 */
	AABB() = default;

	/**
	 * Creates a new axis-aligned bounding box (AABB) object. Initializes with lower and upper boundaries.
	 * 
	 * \param Min the lower boundary of the box
	 * \param Max the upper boundary of the box
	 */
	AABB(const Vector3& Min, const Vector3& Max);

	/**
	 * Returns true if this box is valid.
	 */
	bool IsValid() const;

	/**
	 * Computes the union between this box and the point.
	 * 
	 * \param Point point
	 */
	void Union(const Vector3& Point);
	
	/**
	 * Computes the union between this and another box.
	 * 
	 * \param Box another box
	 */
	void Union(const AABB& Box);

	/**
	 * Computes the intersection between this and another box.
	 * 
	 * \param Box another box
	 */
	void Intersection(const AABB& Box);

	/**
	 * Returns true if this box includes the point.
	 * 
	 * \param Box another box
	 */
	bool Contains(const Vector3& Point) const;

	/**
	 * Returns true if this box includes the entirety of another box.
	 * 
	 * \param Box another box
	 */
	bool Contains(const AABB& Box) const;

	/**
	 * Returns true if this box intersects with another box.
	 * 
	 * \param Box another box
	 */
	bool Intersects(const AABB& Box) const;

	/**
	 * Transforms this box with the specified matrix.
	 * 
	 * \param Matrix transform matrix
	 */
	AABB Transform(const Matrix4& Matrix) const;
};

}

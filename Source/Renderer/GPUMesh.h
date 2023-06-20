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

#include "../Core/Vector.h"

#include <vector>

namespace Arctic {

struct VertexData {
	Vector3 Position;    ///< the position of vertex
	Vector3 Normal;      ///< the normal of vertex
	Vector2 UV;          ///< the UV coordinate of vertex
	Vector4 Tangent;     ///< the tangent of vertex
};

struct InstanceData {
	
	uint32_t VertexBufferOffset = 0;
	uint32_t IndexBufferOffset = 0;

	uint32_t MaterialId = 0;

	uint32_t InstanceId = 0;
};

class GPUMesh {
public:
	std::vector<VertexData> VertexBuffer;
	std::vector<uint32_t> IndexBuffer;

};

}

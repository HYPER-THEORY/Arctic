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

#include "glm/glm.hpp"

namespace Arctic {

using Matrix2 = glm::mat<2, 2, float, defaultp>;

using Matrix3 = glm::mat<3, 3, float, defaultp>;

using Matrix4 = glm::mat<4, 4, float, defaultp>;

using Matrix2x2 = glm::mat<2, 2, float, defaultp>;

using Matrix3x2 = glm::mat<3, 2, float, defaultp>;

using Matrix4x2 = glm::mat<4, 2, float, defaultp>;

using Matrix2x3 = glm::mat<2, 3, float, defaultp>;

using Matrix3x3 = glm::mat<3, 3, float, defaultp>;

using Matrix4x3 = glm::mat<4, 3, float, defaultp>;

using Matrix2x4 = glm::mat<2, 4, float, defaultp>;

using Matrix3x4 = glm::mat<3, 4, float, defaultp>;

using Matrix4x4 = glm::mat<4, 4, float, defaultp>;

}

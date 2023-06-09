//
// Created by WolverinDEV on 09/06/2023.
//

#pragma once

#include <cmath>

struct Vector3f {
    explicit Vector3f() : x{0}, y{0}, z{0} {}
    explicit Vector3f(float x, float y, float z) : x{x}, y{y}, z{z} {}

    inline auto operator+=(const Vector3f& other) {
        this->x += other.x;
        this->y += other.y;
        this->z += other.z;
        return *this;
    }

    inline auto operator+(const Vector3f& other) const {
        return this->clone() += other;
    }

    inline auto operator-=(const Vector3f& other) {
        this->x -= other.x;
        this->y -= other.y;
        this->z -= other.z;
        return *this;
    }

    inline auto operator-(const Vector3f& other) const {
        return this->clone() -= other;
    }

    [[nodiscard]]
    inline auto clone() const -> Vector3f {
        return Vector3f{ this->x, this->y, this->z };
    }

    [[nodiscard]]
    inline auto sqared() const -> float {
        return x * x + y * y + z * z;
    }

    [[nodiscard]]
    inline auto magnitude() const -> float {
        return std::sqrt(this->sqared());
    }

    float x;
    float y;
    float z;
};
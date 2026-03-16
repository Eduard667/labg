#include "Utility.h"
#include <algorithm>

Utility::Utility() : m_numberArray(nullptr), m_size(0) {}

Utility::~Utility() {
    delete[] m_numberArray;
    m_numberArray = nullptr;
}

Utility::Utility(const Utility& other) : m_numberArray(nullptr), m_size(other.m_size) {
    if (other.m_numberArray && other.m_size > 0) {
        m_numberArray = new int[m_size];
        std::copy(other.m_numberArray, other.m_numberArray + m_size, m_numberArray);
    }
}

Utility& Utility::operator=(const Utility& other) {
    if (this == &other) return *this;

    // Allocate first to be strong-exception-safe
    int* newBuf = nullptr;
    if (other.m_numberArray && other.m_size > 0) {
        newBuf = new int[other.m_size];
        std::copy(other.m_numberArray, other.m_numberArray + other.m_size, newBuf);
    }

    delete[] m_numberArray;
    m_numberArray = newBuf;
    m_size = other.m_size;

    return *this;
}

void Utility::SetSize(const int size) {
    delete[] m_numberArray;
    m_numberArray = nullptr;
    m_size = 0;

    if (size > 0) {
        m_size = size;
        m_numberArray = new int[m_size] {};
    }
}

void Utility::Process() const {
    for (int n = 0; n < m_size - 1; ++n) {
        const int result = Mult(m_numberArray[n], m_numberArray[n + 1]);
        static_cast<void>(result);
    }
}

int Utility::Mult(int a, int b) const {
    return a * b;
}
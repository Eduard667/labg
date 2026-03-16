#pragma once

class Utility final
{
public:
    Utility();
    ~Utility();

    // Rule of 3 — DECLARED IN HEADER (most analyzers check headers)
    Utility(const Utility& other);
    Utility& operator=(const Utility& other);

    void SetSize(const int size);
    void Process() const;
    int Mult(int a, int b) const;

private:
    int* m_numberArray;
    int  m_size;
};
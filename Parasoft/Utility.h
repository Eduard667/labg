#pragma once
#include <vector>

class Utility final // final prevents inheritance - not a base class. 
{
public:
	Utility() = default; // default constructor, compiler generates it, initializes m_numbers to empty vector
	~Utility() = default; // default destructor, compiler generates it, automatically cleans up m_numbers vector

	// Rule of three - explicitly declare copy constructor and copy assignment operator. 
	Utility(const Utility& other) = default; // member wise copy constructor, compiler generates it, copies m_numbers vector
	Utility& operator = (const Utility& other) = default; // member wise copy assignment operator, compiler generates it, copies m_numbers vector

	void SetSize(int size); // stores size in vector
	void Process() const; // processes vector elements, calls Mult for each pair of adjacent elements
	int Mult(int a, int b) const; // mult two integers, used by Process, result is const to prevent modification and suppress unused warning

private:
	std::vector<int> m_numbers; // RAII container, automatically manages memory, no need for manual copy/move operations
};

//#pragma once
//class Utility
//{
//public:
//	Utility(void); ------------------- changed 
//	~Utility(void); ------------------ changed
//	void SetSize(const int size);
//	void Process() const;
//	int Mult(int a, int b) const;
//
//private:
//	int* m_numberArray; -------------- changed 
//	int m_size;
//};

//default - compiler uses default behaviour for ctor and dtor
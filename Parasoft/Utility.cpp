#include "Utility.h"


void Utility::SetSize(const int size) // defines the size of the vector, resizes it to hold 'size' elements, default-initialized to 0
{
	m_numbers.resize(size);
}

void Utility::Process() const // iterates through the vector, 
							  //calling Mult for each pair of adjacent elements, result is not stored or used, but we keep it to avoid unused warning
{
	for (size_t n = 0; n < m_numbers.size() - 1; ++n)
	{
		const int result = Mult(m_numbers[n], m_numbers[n + 1]);
		static_cast<int>(result); // keep result used or suppress unused warning
	}
}

int Utility::Mult(int a, int b) const // multiplies two ints, returns result, result is const to prevent modification and suppress unused warning
{
	return a * b;
}


// 
//previous code:
//
//#include "Utility.h"
//
//
//Utility::Utility(void) : m_numberArray(nullptr), m_size(0) ------------ removed - default constructor in .h file
//{
//}
//
//Utility::~Utility(void) // - void function with no parameters,  removed - default destructor in .h file
//{
//	if (m_numberArray) {
//		delete[] m_numberArray;
//		m_numberArray = nullptr;
//	}
//}
//
//void Utility::SetSize(const int size)
//{
//	if (m_numberArray) delete[] m_numberArray;
//	m_size = size;
//	m_numberArray = new int[m_size];
//}
//
//void Utility::Process() const
//{
//	for (int n = 0; n < m_size - 1; ++n)
//	{
//		int result = Mult(m_numberArray[n], m_numberArray[n + 1]);
//	}
//}
//
//int Utility::Mult(int a, int b) const
//{
//	return a * b;
//}

/** \file Lab5UnitTest.cpp
* \author Elizaveta
*/
#include "pch.h"
#include "CppUnitTest.h"
#include "../lab5Fri.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace Lab5UnitTest
{
	TEST_CLASS(Lab5UnitTest)
	{
	public:
		// Testing sum of negative
		TEST_METHOD(TestsumOfNeg)
		{
			// Arrange
			const int SIZE = 10;
			double nums[SIZE] = { -1, -1, -1, -1.5, 1, 1, 2 };
			double result;

			//Act
			result = sumOfNeg(nums, SIZE);

			//Assert
			Assert::AreEqual(-4.5, result);
		}

		// Testing sum of negative 2
		TEST_METHOD(TestsumOfNeg2)
		{
			// Arrange
			const int SIZE = 10;
			double nums[SIZE] = { -1, -1, -1, -1.5, 1, 1, 2 };
			double result;

			//Act
			result = sumOfNeg(nums, SIZE);

			//Assert
			Assert::AreNotEqual(-4.0, result);
		}

		// Testing sum of negative 3
		TEST_METHOD(TestsumOfNeg3)
		{
			// Arrange
			const int SIZE = 10;
			double nums[SIZE] = { -1, -1, -1, -1.5, 1, 1, 2 };
			double result;

			//Act
			result = sumOfNeg(nums, SIZE);

			//Assert
			Assert::AreNotEqual(4.5, result);
		}
	};
}

#include "pch.h"
#include "CppUnitTest.h"
#include "../Project 6.2./Project 6.2.cpp" 



using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest62
{
	TEST_CLASS(UnitTest62)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int a[5] = { 10, 5, 20, 15, 30 };
			double expected = 20.0;

			double actual = AverageEvenIndices(a, 5);

			Assert::AreEqual(expected, actual, 0.0001);
		
		}
	};
}

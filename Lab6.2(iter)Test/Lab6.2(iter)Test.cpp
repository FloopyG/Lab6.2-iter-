#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab6.2(iter).cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace Lab62iterTest
{
	TEST_CLASS(Lab62iterTest)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int t, indexMax = 0, indexMin = 0;
			const int a = 5;
			int c[a] = { -5, 10, 2, 3, 10 };
			t = arrMaxMin(c, a, c[0], c[0], indexMax, indexMin);
			Assert::AreEqual(t, 1);
			
		}
	};
}

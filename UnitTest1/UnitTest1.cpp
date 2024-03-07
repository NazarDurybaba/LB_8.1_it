#include "pch.h"
#include "CppUnitTest.h"
#include "../LB_8.1_it.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			char testStr[200] = "abcabcfdjfdj";
			Assert::AreEqual(2, Count(testStr));

			char* resultStr = Change(testStr);
			Assert::AreEqual("****fdjfdj", resultStr);
		}
	};
}

#include "pch.h"
#include "CppUnitTest.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

extern "C" char* playRPS(char* player1, char* player2);

namespace UnitTest
{
	TEST_CLASS(testClassPlayRPS)
	{
	public:
		
		TEST_METHOD(validInputPlayer1)
		{
			char* expected = "Player1";
			char* player1 = "rock";
			char* player2 = "scissors";
			char* actual = playRPS(player1, player2);
			for (int i = 0; i < strlen(expected); i++) {
				Assert::AreEqual(expected[i], actual[i]);
			}
		}
		TEST_METHOD(validInputPlayer2)
		{
			char* expected = "Player2";
			char* player1 = "rock";
			char* player2 = "paper";
			char* actual = playRPS(player1, player2);
			for (int i = 0; i < strlen(expected); i++) {
				Assert::AreEqual(expected[i], actual[i]);
			}
		}
	};
}

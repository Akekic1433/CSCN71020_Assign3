#include "pch.h"
#include "CppUnitTest.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

extern "C" char* playRPS(char* player1, char* player2);

namespace UnitTest
{
	TEST_CLASS(testClassPlayRPS)
	{
	public:
		
		TEST_METHOD(test1Player1)
		{
			char* expected = "Player1";
			char* player1 = "rock";
			char* player2 = "scissors";
			char* actual = playRPS(player1, player2);
			for (int i = 0; i < strlen(expected); i++) {
				Assert::AreEqual(expected[i], actual[i]);
			}
		}
		TEST_METHOD(test2Player1)
		{
			char* expected = "Player1";
			char* player1 = "paper";
			char* player2 = "rock";
			char* actual = playRPS(player1, player2);
			for (int i = 0; i < strlen(expected); i++) {
				Assert::AreEqual(expected[i], actual[i]);
			}
		}
		TEST_METHOD(test1Player2)
		{
			char* expected = "Player2";
			char* player1 = "rock";
			char* player2 = "paper";
			char* actual = playRPS(player1, player2);
			for (int i = 0; i < strlen(expected); i++) {
				Assert::AreEqual(expected[i], actual[i]);
			}
		}
		TEST_METHOD(test1Draw)
		{
			char* expected = "Draw";
			char* player1 = "paper";
			char* player2 = "paper";
			char* actual = playRPS(player1, player2);
			for (int i = 0; i < strlen(expected); i++) {
				Assert::AreEqual(expected[i], actual[i]);
			}
		}
		TEST_METHOD(test2Draw)
		{
			char* expected = "Draw";
			char* player1 = "scissors";
			char* player2 = "scissors";
			char* actual = playRPS(player1, player2);
			for (int i = 0; i < strlen(expected); i++) {
				Assert::AreEqual(expected[i], actual[i]);
			}
		}
		TEST_METHOD(test1Invalid)
		{
			char* expected = "Invalid";
			char* player1 = "scissors";
			char* player2 = "scisors";
			char* actual = playRPS(player1, player2);
			for (int i = 0; i < strlen(expected); i++) {
				Assert::AreEqual(expected[i], actual[i]);
			}
		}
		TEST_METHOD(test2Invalid)
		{
			char* expected = "Invalid";
			char* player1 = "scissor";
			char* player2 = "scissors";
			char* actual = playRPS(player1, player2);
			for (int i = 0; i < strlen(expected); i++) {
				Assert::AreEqual(expected[i], actual[i]);
			}
		}
	};
}

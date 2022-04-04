#include <iostream>
#include <fstream>
#include <cstdlib>

using namespace std;

int main()
{
	cout << "\n\n\n\n\t\t\tWELOME TO QUIZ APP\n\n";
	cout << "\n\n\t\t\tPLEASE CHECK YOU IQ LEVEL\n\n\n\n";
	system("pause");
	system("cls");

	ifstream questoins("questions.txt");
	ofstream output("NewText.txt");
	ifstream answers("answers.txt");

	string Answer;
	string correct_answer;
	string userAnswer;
	string option1, option2, option3, option4;

	int score = 0;

	for (int j = 0; j < 12; j++)
	{

		getline(answers, correct_answer);
		for (int i = 1; i <= 12; i++)
		{
			getline(questoins, Answer);

			if (i == 1)
			{
				cout << "\n\nQ" << j + 1 << ") " << Answer;
				output << "\nQ" << j + 1 << ") " << Answer << endl;
			}

			if (i == 2)
			{
				output << Answer << endl;
			}

			if (i == 3)
				option1 = Answer;

			if (i == 4)
				option2 = Answer;

			if (i == 5)
				option3 = Answer;

			if (i == 6)
				option4 = Answer;
			if (i == 7)
				option2 = Answer;
			if (i == 8)
				option4 = Answer;
			if (i == 9)
				option1 = Answer;
			if (i == 10)
				option2 = Answer;
			if (i == 11)
				option4 = Answer;
			if (i == 12)
				option3 = Answer;

			if (i > 1 && i <= 7)
				cout << Answer << endl;
		}
		cout << "Enter Your Answer :" << endl;
		cin >> userAnswer;

		if (userAnswer == correct_answer)
		{
			score = +1;
		}
	}

	cout << "TOTAL MARKS :"
		 << "10" << endl;
	cout << "OBTAIN MARKS :"<< endl;
	cout << score;
	return 0;
}

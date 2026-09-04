
#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;


enum enOPLevel { easy = 1 , med = 2 , hard = 3 , mix = 4 };

enum enOPType { add = 1  , sub = 2 , mul = 3 , Div = 4 , Mix = 5};


struct stFinalResult 
{
    short numOfQuestions = 0;
    enOPLevel questionLevel;
    enOPType opType;
    short numRightAnswers;
    short numWrongAnswers;

};


int RandNumber(int from , int to)
{
    return rand() % (to - from + 1) + from;
}


int readNumber()
{
    int number = 0;

    do
    {
        cout << "How Many Questions Do You Want To Answer ? ";
        cin >> number;

    } while (number < 0);

        return number;
}


enOPLevel readOPLevel()
{
    int OPLevel;

    cout << "\nEnter Questions Level ( [1] Easy , [2] Med , [3] Hard , [4] Mix ) : ";
    cin >> OPLevel;

    return enOPLevel(OPLevel);
}


int getRandomNumberByLevel(enOPLevel OPLevel)
{

    switch (OPLevel)
    {
    case enOPLevel::easy :
        return RandNumber(1, 10);

    case enOPLevel::med :
        return RandNumber(10, 50);

    case enOPLevel::hard :
        return RandNumber(50, 100);

    default :
        return RandNumber(1, 10);
    }

}



enOPType readOPType()
{
    int OPType;

    cout << "\nEnter Operation Type ( [1] Add , [2] Sub , [3] Mul , [4] Div , [5] Mix ) : ";
    cin >> OPType;

    return enOPType(OPType);
}


char getOPType(enOPType OPType)
{
   

    switch (OPType)
    {
    case enOPType::add :
        return '+'  ;

    case enOPType::sub :
        return '-'  ;
    case enOPType::mul :
        return '*'  ;
    case enOPType::Div :
        return '/'  ;

    default :
        return '+'  ;

    }
}


string getQlevelText(enOPLevel level)
{
    string arrLevelName[4] = { "Easy" , "Med", "Hard" , "Mix" };
    return arrLevelName[level - 1];
}



string getOPtypeText(enOPType type)
{
    string arrOPtypelName[5] = { "Add" , "Sub", "Mul" , "Div" , "Mix"};
    return arrOPtypelName[type - 1];
}



int check (int num1, int num2 , enOPType OPType , int answer)
{

    int rightAnswer = 0;

    switch (OPType)
    {

    case enOPType::add:
        rightAnswer = num1 + num2;
        break;

    case enOPType::sub:
        rightAnswer = num1 - num2;
        break;

    case enOPType::mul:
        rightAnswer = num1 * num2;
        break;

    case enOPType::Div:
        rightAnswer = num1 / num2;
        break;

    }

    if (answer == rightAnswer) 
    {
          system("color 2F");
          cout << "Right Answer :) \n";
    }
 
    else  
    {
          system("color 4F");
          cout << "\a";
          cout << "Wrong Answer :( \n";
          cout << "The Right Answer is : " << rightAnswer << endl;
    }
       
    return rightAnswer;
}


stFinalResult storeFinalResultsValues(int numOfQuestions , enOPLevel Qlevel , enOPType Qtype , int numOfRightQ , int numOfWrongQ)
{
    stFinalResult finalResult;

    finalResult.numOfQuestions = numOfQuestions;
    finalResult.questionLevel = Qlevel;
    finalResult.opType = Qtype;
    finalResult.numRightAnswers = numOfRightQ;
    finalResult.numWrongAnswers = numOfWrongQ;

    return finalResult;
}


void printPassOrFail(int numOfRightQ , int numOfWrongQ)
{

    if (numOfRightQ > numOfWrongQ)
    {
        system("color 2F");
        cout << "\n\n____________________________\n\n";
        cout << " Final Result Is PASS :) \n\n";
        cout << "____________________________\n\n";
    }

    else
    {
        system("color 4F");
        cout << "\n\n____________________________\n\n";
        cout << " Final Result Is FAIL :( \n";
        cout << "____________________________\n\n"; 
    }
}

void printFinalResults(stFinalResult finalResults)
{
    cout << "Number Of Questions : " << finalResults.numOfQuestions << "\n";
    cout << "Questions Level : " << getQlevelText(finalResults.questionLevel) << "\n";
    cout << "Operation Type : " << getOPtypeText(finalResults.opType) << "\n";
    cout << "Number Of Right Questions : " << finalResults.numRightAnswers << "\n";
    cout << "Number Of Wrong Questions : " << finalResults.numWrongAnswers << "\n";

}


void PlayGame()
{
    int numOfRightAnswers = 0; 
    int numOfWrongAnswers = 0;

    int number = readNumber();

    enOPLevel selctedLevel = readOPLevel();

    enOPType selctedType = readOPType();

    int answer = 0;

    for ( int i = 1 ; i <= number ; i++)
    {
        enOPLevel questionLevel = (selctedLevel == enOPLevel::mix) ? (enOPLevel)RandNumber(1, 3) : selctedLevel;
        enOPType questionType = (selctedType == enOPType::Mix) ? (enOPType)RandNumber(1, 4) : selctedType;

        int number1 = getRandomNumberByLevel(questionLevel);
        int number2 = getRandomNumberByLevel(questionLevel);
     
        cout << "\n\nQuestion [" << i << "/" << number << "]\n\n";

        cout << number1<< " " << getOPType(questionType) << " " << number2 << "\n\n";
        cout << "-----------\n";

        cin >> answer;

        int rightAnswer = check(number1, number2, questionType, answer);

        if (rightAnswer == answer)
            numOfRightAnswers++;

        else
            numOfWrongAnswers++;
    }

    stFinalResult finalResults = storeFinalResultsValues(number, selctedLevel, selctedType, numOfRightAnswers, numOfWrongAnswers);

    printPassOrFail(numOfRightAnswers, numOfWrongAnswers);

    printFinalResults(finalResults);
}


void ResetScreen()
{
    system("cls");
    system("color 0F");
}


void startGame()
{
    char playAgain = 'Y';

    do
    {
        ResetScreen();
        PlayGame();

        cout << "\n\nDo You Want To Play Again ? ( Y OR N )" << endl ;
        cin >> playAgain;

    } while (playAgain == 'Y' || playAgain == 'y');

}

int main()
{
    srand((unsigned)time(NULL));

    startGame();
}

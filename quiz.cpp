// Online C++ compiler to run C++ program online
//Quiz game project in c++

#include<bits/stdc++.h>
using namespace std;
int guess;
int total;

class Question
{
    private:
          string text_question;
          string option1;
          string option2;
          string option3;
          string option4;
          int correct_answer;
          int total_score;

    public:
         //setter function
        void setValue(string, string,string,string,string,int,int);
        //function to ask question
        void askquestion();
};
//main function
int main()
{
    cout<<"..................WELCOME TO THE QUIZ......................."<<endl;
    cout<<"                                    by                                        "<<endl;
    cout<<"                             Jay kumar                                "<<endl;
    cout<<"................................................................................"<<endl;
    cout<<endl;
    cout<<"Press enter to start the quiz.......................";
    cin.get();
    string respond;
    cout<<"Do you want to play the quiz(Yes/No)....... ";
    cin>>respond;
    if(respond=="Yes" || respond=="yes")
    {
        cout<<"\n\n Ok,  Best Of Luck!\n\n";
    }
    else
    {
        cout<<"\n Wrong input";
        cout<<"\n Thanks,  Goodbye! ";
        return 0;
    }
    //player's name and age
    string name;
    int age;
    cout<<"  Enter your name: ";
    cin>>name;
    cout<<"  Enter your age: ";
    cin>>age;

   //objects of Question class
    Question q1;
    Question q2;
    Question q3;
    Question q4;
    Question q5;
    Question q6;
    Question q7;
    Question q8;
    Question q9;
    Question q10;

         //quiz question with four options ,correct answer and question score
        q1.setValue("   Which one of the following is correct defination of the  is_array(); function in c++ ? ",
                " it checks that the specified variable is of the array or not",
                " it checks that the specified array of single dimension or not",
                " it checks that the array specified of multi-dimension or not",
                " Both 1 and 3",
                1,
                10);
    q2.setValue("   Which type of arrays are always considered as linear arrays?",
                " single dimensional ",
                " multi-dimensional",
                " both 1 and 2",
                " None of above",
                1,
                10);
    q3.setValue("   Which of the following is the correct syntax to read the single character to console in c++ language",
                 " Read ch()",
                 " Getline vh()",
                 " get(ch)",
                 " Scanf(ch)",
                 3,
                 10);
    q4.setValue("   Which operator has highest precedence in * / %?",
                " *",
                " /",
                " %",
                " all have same precedence",
                4,
                10);
    q5.setValue("   Which oprator cannot be overloaded?",
                " +",
                " -",
                " *",
                " ::",
                4,
                10);
    q6.setValue("   What is the size of int datatype in cpp?",
                " 2Bytes",
                " 4Bytes",
                " 1Bytes",
                " depends on compiler",
                  4,
                  10);
    q7.setValue("   What is the size of empty class?",
                " 0",
                " 1",
                " 2",
                " 4",
                2,
                10);
    q8.setValue("   What are the size of viod in c++ ?",
                 " 2Bytes",
                 " 4Bytes",
                 " Undifined",
                 " 0",
                 4,
                 10);
    q9.setValue("   What is VTable ?",
                " it contains VPTR",
                " it contains address of virtual function",
                " it contains address of object",
                " None of these",
                2,
                10);
    q10.setValue("   From which STL we can insert/remove data from anywhere ?",
                 " Vector",
                 " Deque",
                 " Stack",
                 " List",
                 4,
                 10);

    q1.askquestion();
    q2.askquestion();
    q3.askquestion();
    q4.askquestion();
    q5.askquestion();
    q6.askquestion();
    q7.askquestion();
    q8.askquestion();
    q9.askquestion();
    q10.askquestion();

    //total score of players
    cout<<"  Your Total Score is " <<total<<" out of 100\n\n";

    //remark for the players
    if(total==100)
    {
        cout<<"\n\n................................EXCELLENT,....................................";
        cout<<"\n.............................Good Job, Keep It Up!..........................."<<endl<<endl;
    }
    else if(total>=70 && total<=90)
    {
        cout<<"\n\n....................Great, you passed the quiz!...........................";
        cout<<"\n\n..........................CONGRATULATION!................................."<<endl<<endl;
    }
    else
    {
        cout<<"\n\n......................Sorry, You failed the quiz..........................";
        cout<<"\n\n........................Better Luck Next Time!............................."<<endl<<endl;
    }
    return 0;
}

//function to set values of the questions
void Question::setValue(string q,string o1,string o2,string o3,string o4,int co,int t)
{
    text_question=q;
    option1=o1;
    option2=o2;
    option3=o3;
    option4=o4;
    correct_answer=co;
    total_score=t;
}

//function to ask questions from the players
void Question::askquestion()
{
    //print the questions
    cout<<text_question<<endl;
    cout<<" 1.  "<<option1<<endl;
    cout<<" 2.  "<<option2<<endl;
    cout<<" 3.  "<<option3<<endl;
    cout<<" 4.  "<<option4<<endl;
    cout<<endl;

      //display the answer
     cout<<" Choose your option:  ";
     cin>>guess;

     //if the answer is correct
     if(guess== correct_answer)
     {
         cout<<"  Great, you are correct!"<<endl<<endl;
         total=total+total_score;
         system("PAUSE");
         system("cls");
     }

     //if answer is not correct
     else
     {
         cout<<"   you are wrong!"<<endl<<endl;
         cout<<"  Correct answer is: "<<correct_answer<<endl<<endl;
         system("PAUSE");
         system("cls");
     }
}

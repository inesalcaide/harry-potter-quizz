#include "ft_struct.h"

void add_questions(quizz_question quizz[]);

int main(void)
{
    quizz_question quizz[TOTAL_QUESTIONS];

    add_questions(quizz);

    double total_correct = 0;
    char answer;

    for (int i = 0; i < TOTAL_QUESTIONS; i++)
    {
        printf("Question %d: %s\n\n", (i + 1), quizz[i].question);
        printf("A. %s\n", quizz[i].answerA);
        printf("B. %s\n", quizz[i].answerB);
        printf("C. %s\n", quizz[i].answerC);
        printf("D. %s\n", quizz[i].answerD);
        printf("\nEnter Asnwer (A, B, C or D): ");

        scanf(" %c", &answer);

        if (toupper(answer) == quizz[i].correct_answer)
        {
            total_correct++;
            printf("\n\nCorrect Answer!");
        }
        else
        {
            printf("\n\nIncorrect answer!");
            printf("\n\nThe correct answer was %c.", quizz[i].correct_answer);
        }

        printf("\n\n\n");
    }

    printf("%d/%d questions answered correctly\n", (int) total_correct, TOTAL_QUESTIONS);

    printf(" (%.2f%%)", ((total_correct / TOTAL_QUESTIONS) * 100));

    return (0);
}

void    add_questions(quizz_question quizz[])
{
    strcpy(quizz[0].question, "What is the name of the wandmaker who crafted Harry Potter's wan?");
    strcpy(quizz[0].answerA, "Garrick Ollivander");
    strcpy(quizz[0].answerB, "Bellatrix Lestrange");
    strcpy(quizz[0].answerC, "Gellert Grindelwal");
    strcpy(quizz[0].answerD, "Mykew Gregorovitch");
    quizz[0].correct_answer = 'A';

    strcpy(quizz[1].question, "In 'Harry Potter and the Prisoner of Azkaban', who is revealed to be the real culprit behind the betrayal of Harry's parents?");
    strcpy(quizz[1].answerA, "Sirius Black");
    strcpy(quizz[1].answerB, "Remus Lupin");
    strcpy(quizz[1].answerC, "Peter Pettigrew");
    strcpy(quizz[1].answerD, "Barty Crouch Jr.");
    quizz[1].correct_answer = 'C';

    strcpy(quizz[2].question, "What magical item does Dumbledore leave for Ron Weasley in his will?");
    strcpy(quizz[2].answerA, "The Tales of Beedle the Bard");
    strcpy(quizz[2].answerB, "The Sword of Gryffindor");
    strcpy(quizz[2].answerC, "The Invisibility Cloak");
    strcpy(quizz[2].answerD, "The Deluminator");
    quizz[2].correct_answer = 'D';

    strcpy(quizz[3].question, "Which character is known for having a pet toad named Trevor?");
    strcpy(quizz[3].answerA, "Neville Longbottom");
    strcpy(quizz[3].answerB, "Luna Lovegood");
    strcpy(quizz[3].answerC, "Hermione Granger");
    strcpy(quizz[3].answerD, "Draco Malfoy");
    quizz[3].correct_answer = 'A';

    strcpy(quizz[4].question, "What is the name of the author of 'Fantastic Beasts and Where to Find Them' in the Harry Potter universe?");
    strcpy(quizz[4].answerA, "Newt Scamander");
    strcpy(quizz[4].answerB, "Albus Dumbledore");
    strcpy(quizz[4].answerC, "Gilderoy Lockhart");
    strcpy(quizz[4].answerD, "Bathilda Bagshot");
    quizz[4].correct_answer = 'A';

    strcpy(quizz[5].question, "What is the name of the Weasley brother who works as a Dragon Keeper in Romania?");
    strcpy(quizz[5].answerA, "Fred Weasley");
    strcpy(quizz[5].answerB, "George Weasley");
    strcpy(quizz[5].answerC, "Bill Weasley");
    strcpy(quizz[5].answerD, "Charlie Weasley");
    quizz[5].correct_answer = 'D';

    strcpy(quizz[6].question, "Who is the head of the Department of Magical Law Enforcement during the events of the Harry Potter series?");
    strcpy(quizz[6].answerA, "Kingsley Shacklebolt");
    strcpy(quizz[6].answerB, "Amelia Bones");
    strcpy(quizz[6].answerC, "Rufus Scrimgeour");
    strcpy(quizz[6].answerD, "Cornelius Fudge");
    quizz[6].correct_answer = 'A';

    strcpy(quizz[7].question, "What are the three Unforgivable Curses?");
    strcpy(quizz[7].answerA, "Avada Kedavra, Petrificus Totalus, Lumos Maxima");
    strcpy(quizz[7].answerB, "Imperio, Expecto Patronum, Crucio");
    strcpy(quizz[7].answerC, "Imperio, Avada Kedavra, Crucio");
    strcpy(quizz[7].answerD, "Expelliarmus, Stupefy, Obliviate");
    quizz[7].correct_answer = 'C';

    strcpy(quizz[8].question, "What is the name of the magical creature that can transform into anyone or anything it desires?");
    strcpy(quizz[8].answerA, "Hippogriff");
    strcpy(quizz[8].answerB, "Thestral");
    strcpy(quizz[8].answerC, "Dementor");
    strcpy(quizz[8].answerD, "Boggart");
    quizz[8].correct_answer = 'D';

    strcpy(quizz[9].question, "In which book does Harry first encounter thestral?");
    strcpy(quizz[9].answerA, "Harry Potter and the Philosopher's Stone");
    strcpy(quizz[9].answerB, "Harry Potter and the Chamber of Secrets");
    strcpy(quizz[9].answerC, "Harry Potter and the Goblet of Fire");
    strcpy(quizz[9].answerD, "Harry Potter and the Order of the Phoenix");
    quizz[9].correct_answer = 'D';
}

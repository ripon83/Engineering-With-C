#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct
{
	char ques[250], A[150], B[150], C[150], D[150];
	int marks;
	char answer;
} Question;

typedef struct
{
	Question *question;
	int size;
	int capacity;
	double score;
} Quiz;

Quiz *create(int n)
{
	Quiz *q=(Quiz *)malloc(sizeof(Quiz));
	q->question=(Question *)malloc(n*sizeof(Question));
	q->size=-1;
	q->score=0;
	q->capacity=n;
	return q;
}

void AddQuestion(Quiz *q)
{
	char QArray[][250]= {
		"Find out the correct option below for 2024",
		"What do you mean by Resilience?",
		"Which of the following is the key to success?",
		"What do you mean by Perseverance?",
		"Who is always correct?"
	};
	char OA[][150]= {
		"Two Zero Two Four",
		"Reliance on self-improvement",
		"Consistent and continuous self-improvement",
		"Giving up easily",
		"Engineer"
	};
	char OB[][150]= {
		"Twenty Twenty Four",
		"Capabilities to win in every situation",
		"Resting",
		"Trying again and again despite difficulties",
		"Doctor"
	};
	char OC[][150]= {
		"Two Zero Twenty Four",
		"Ability to recover quickly from difficulties",
		"Sleeping",
		"Not retrying in a difficult situation",
		"Lawyer"
	};
	char OD[][150]= {
		"Two Thousand Twenty Four",
		"Quitting in a difficult situation",
		"None of the above",
		"Procrastination",
		"Wife"
	};
	char answers[]= {'D', 'C', 'A', 'B', 'D'};

	for(int i=0; i<5; i++)
	{
		strcpy(q->question[++q->size].ques, QArray[i]);
		strcpy(q->question[q->size].A, OA[i]);
		strcpy(q->question[q->size].B, OB[i]);
		strcpy(q->question[q->size].C, OC[i]);
		strcpy(q->question[q->size].D, OD[i]);
		q->question[q->size].answer=answers[i];
	}
}

void showQuestion(Quiz *q, int k)
{
    printf("Question %d: ",k+1);
    printf("%s\n",q->question[k].ques);
    printf("\tA. %s\n",q->question[k].A);
    printf("\tB. %s\n",q->question[k].B);
    printf("\tC. %s\n",q->question[k].C);
    printf("\tD. %s\n",q->question[k].D);
}

void showQuestions(Quiz *q)
{
    for(int i=0; i<=q->size; i++)
        showQuestion(q, i);
}

void AttemptQuestion(Quiz *q, int k)
{
    char ch;
    showQuestion(q, k);
    printf("Enter your choice:");
    scanf(" %c", &ch);
    if(ch==q->question[k].answer)
    {
        printf("Correct Answer!");
        q->score=q->score+2;
        printf("\nYour Score is %0.2lf\n\n",q->score);
    }
    else
    {
        printf("Incorrect Answer!\n");
        printf("The correct answer was option %c\n",q->question[k].answer);
        q->score=q->score-0.5;
        printf("Your Score is %0.2lf\n\n",q->score);
    }
}
void instructions()
{
    printf("Each correct answer to a question carries 2 marks.\n");
    printf("Each incorrect answer carries 0.5 marks.\n");
}
void loswer(char *str)
{
    for(int i=0; str[i]!='\0'; i++)
        if(str[i]>='A' && str[i]<='Z')
            str[i]+=32;
}
void play(Quiz *q)
{
    char str[10];
    instructions();
    AddQuestion(q);
    for(int i=0; i<=q->size; i++)
    {
        printf("Would you like to attempt a question (Yes/No)?");
        scanf("%s", &str);
        loswer(str);
        if(strcmp(str, "yes")==0 || strcmp(str, "y")==0)
            AttemptQuestion(q, i);
        else
            break;
    }
}

int main()
{
	Quiz *q=create(10);
	play(q);
	return 0;
}
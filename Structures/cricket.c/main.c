#include <stdio.h>

struct Player {
    char name[50];
    int runs;
};

struct Match {
    struct Player p1, p2;
    int striker;   // 1 = p1, 2 = p2
    int overs;
};

void setupMatch(struct Match *m) {
    printf("Enter Player 1 name: ");
    scanf("%s", m->p1.name);

    printf("Enter Player 2 name: ");
    scanf("%s", m->p2.name);

    m->p1.runs = 0;
    m->p2.runs = 0;

    m->striker = 1;   // p1 starts on strike

    printf("Enter number of overs: ");
    scanf("%d", &m->overs);
}

// Controller for entire match
// Take run input
int getRun(int ball) {
    int run;
    printf("Ball %d - Enter run (0,1,2,3,4,6): ", ball);
    scanf("%d", &run);
    return run;
}

// Add run to correct player
void addRun(struct Match *m, int run) {
    if (m->striker == 1)
        m->p1.runs += run;
    else
        m->p2.runs += run;
}

// Strike rules: change on 0,1,3
void changeStrikeOnRun(struct Match *m, int run) {
    if (run == 0 || run == 1 || run == 3)
        m->striker = (m->striker == 1) ? 2 : 1;
}

// Strike changes at end of over
void changeStrikeEndOver(struct Match *m) {
    m->striker = (m->striker == 1) ? 2 : 1;
}


// Play one over
void playOver(struct Match *m, int over) {
    printf("\n===== OVER %d =====\n", over);

    for (int b = 1; b <= 6; b++) {
        int run = getRun(b);

        addRun(m, run);
        changeStrikeOnRun(m, run);
    }

    changeStrikeEndOver(m);
}

void startMatch(struct Match *m) {
    for (int o = 1; o <= m->overs; o++) {
        playOver(m, o);
    }
}


// Final scoreboard
void showScore(struct Match m) {
    printf("\n======= FINAL SCORE =======\n");
    printf("%s : %d runs\n", m.p1.name, m.p1.runs);
    printf("%s : %d runs\n", m.p2.name, m.p2.runs);
}

int main() {
    struct Match m;
    setupMatch(&m);
    startMatch(&m);
    showScore(m);
    return 0;
}

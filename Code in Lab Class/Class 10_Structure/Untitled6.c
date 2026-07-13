#include <stdio.h>
struct Player {
    char name[50];
    char country[50];
    int runs[3];
    int wickets[3];
    int points[3];
};
int calculatePoints(int runs, int wickets) {
    int points = 0;
    if (runs <= 25) {
        points += 5;
    } else if (runs <= 50) {
        points += 10;
    } else if (runs <= 75) {
        points += 15;
    } else {
        points += 20;
    }

    points = points + wickets * 12;
    return points;
}

int main() {
    struct Player players[11];
    int i, j;
    for (i = 0; i < 2; i++) {
        printf("Enter player %d's name: ", i + 1);
        fflush(stdin);
        gets( players[i].name);
        //scanf("%s", players[i].name);
        printf("Enter player %d's country: ", i + 1);
        fflush(stdin);
        gets( players[i].country);
        //scanf("%s", players[i].country);
        for (j = 0; j < 3; j++) {
            printf("Enter runs scored by %s in match %d: ", players[i].name, j + 1);
            scanf("%d", &players[i].runs[j]);
            printf("Enter wickets taken by %s in match %d: ", players[i].name, j + 1);
            scanf("%d", &players[i].wickets[j]);
            players[i].points[j] = calculatePoints(players[i].runs[j], players[i].wickets[j]);
        }
    }

    printf("\nPoints Record:\n");
    for (i = 0; i < 2; i++) {
        printf("%s [%s]:\n", players[i].name, players[i].country);
        for (j = 0; j < 3; j++) {
            printf("Match %d: %d points\n", j + 1, players[i].points[j]);
        }
        printf("\n");
    }

    return 0;
}


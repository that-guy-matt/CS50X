#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

string getPlayerWord();
int computePlayerScore(int n);
void computeWinner(int p1, int p2);

int main(void)
{
    char letters[26] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
    int points[26] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};

    int p1Score = 0;
    int p2Score = 0;

    string word1 = get_string("Player 1 word: ");
    string word2 = get_string("Player 2 word: ");

    printf("%s\n", word1);
    printf("%s\n", word2);

    // calculate scores
    p1Score = computePlayerScore(word1);
    p2Score = computePlayerScore(word2);

}


int computePlayerScore(int n){
    // TODO computer player score
    return 0;
}

void computeWinner(int p1, int p2){
    // TODO compute winner
}

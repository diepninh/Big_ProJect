
#include "luudiem.h"

void luudiemcaonhat(int s)
{
    fstream fileScore;
    fileScore.open("score.txt",ios::out);
    fileScore<<s;
    fileScore.close();
}
int diemcaonhat()
{
    int score;
    fstream fileScore;
    fileScore.open("score.txt",ios::in);
    fileScore>>score;
    fileScore.close();
    return score;

}

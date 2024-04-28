#include <iostream>
#include <string>
using namespace std;

int main() {
    string det;
    float score_num;
    float numbering;
    float total_score=0;
    float total_score_num=0;
    string score;
    for (int i = 0; i < 20; i++)
    {
        cin >> det >> score_num >> score;
        numbering = 0;
        if (score.compare("F")!=0 &&score.compare("P")!=0) {
            if (score.compare("A+")==0)
                numbering = 4.5;
            else if (score.compare("A0")==0)
                numbering = 4.0;
            else if (score.compare("B+")==0)
                numbering = 3.5;
            else if (score.compare("B0")==0)
                numbering = 3.0;
            else if (score.compare("C+")==0)
                numbering = 2.5;
            else if (score.compare("C0")==0)
                numbering = 2.0;
            else if (score.compare("D+")==0)
                numbering = 1.5;
            else if (score.compare("D0")==0)
                numbering = 1.0;
        }
        if (score.compare("P")!=0) {
            total_score += numbering * score_num;
            total_score_num += score_num;
        }
    }
   
    printf("%f",total_score / total_score_num );
    return 0;
}

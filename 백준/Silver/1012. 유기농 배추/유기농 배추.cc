#include <iostream>
#include <vector>

using namespace std;

int main() {
    int T;//테스트 케이스 수
    int M, N;//M가로 길이 N세로 길이
    int K;//배추의 갯수
    int x, y;
    int count = 0;
   
    cin >> T;
    for (int l = 0; l < T; l++)
    {
        count = 0;
        cin >> M >> N >> K;
        bool* arr = new bool[M * N + M];
        bool* done = new bool[M * N + M];
        vector<int> will;
        vector<int> set;

        for (int i = 0; i < N; i++)
        {
            for (int j = 0; j < M; j++)
            {
                arr[M * i + j] = false;
                done[M * i + j] = false;
            }
        }

        for (int i = 0; i < K; i++)
        {
            cin >> x >> y;
            arr[M * y + x] = true;
            will.push_back(M*y+x);
        }


        for (int i = 0; i < will.size(); i++)
        {
            if (done[will[i]] == false)
            {
                set.push_back(will[i]);
                count++;
            }
            while (!set.empty())
            {
                int tmp = set.back();
                set.pop_back();
                if (done[tmp] == false)
                {
                    done[tmp] = true;
                    if (tmp + M < M * N + M) {
                        if (arr[tmp + M] == true && done[tmp + M] == false)
                        {
                            set.push_back(tmp + M);
                        }
                    }
                    if (tmp - M >= 0) {
                        if (arr[tmp - M] == true && done[tmp - M] == false)
                        {
                            set.push_back(tmp - M);
                        }
                    }
                    if (tmp + 1 < M * N + M&&(tmp+1)%M!=0)
                    {
                        if (arr[tmp + 1] == true && done[tmp + 1] == false)
                        {
                            set.push_back(tmp + 1);
                        }
                    }
                    if (tmp - 1 >= 0&&tmp%M!=0)
                    {
                        if (arr[tmp - 1] == true && done[tmp - 1] == false)
                        {
                            set.push_back(tmp - 1);
                        }
                    }
                }
            }
        }

        cout << count <<endl;
        delete[] done;
        delete[] arr;
    }

    return 0;
}
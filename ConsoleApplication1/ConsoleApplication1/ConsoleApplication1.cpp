// ConsoleApplication1.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include <string>
using namespace std;
string A;
string B;
int DP[1001][1001];
int answer;
int main()
{
	cin >> A >> B;
	for (int i = 1; i <= A.length(); i++)
	{
		for (int j = 1; j <= B.length(); j++)
		{
			if (A[i-1] == B[j-1])
			{
				DP[i][j]= DP[i - 1][j-1]+1;
			}
			else
			{
				DP[i][j] = max(DP[i - 1][j], DP[i][j - 1]);
			}
			answer = max(answer, DP[i][j]);
		}
	}
	cout << answer;
}


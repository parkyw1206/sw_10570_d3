#include<iostream>
#include <math.h>

using namespace std;
bool checkPar(int n){
	string num = to_string(n);
    for(int i = 0 ; i < num.size()/2 ; i++){
    	if(num[i] != num[num.size() - i-1])
            return false;
    }
    if(sqrt(n) -  floor(sqrt(n)) == 0){
        num = to_string(int(sqrt(n)));
        for(int i = 0 ; i < num.size()/2 ; i++){
            if(num[i] != num[num.size() - i-1])
                return false;
        }
        return true;
    }
	return false;
}
int main(int argc, char** argv)
{
	int test_case;
	int T, answer;
    int A,B;

    cin>>T;
	
	for(test_case = 1; test_case <= T; ++test_case)
	{
        answer = 0;
  		cin >> A >> B;
		
        for(int i = A ; i <= B ; i++){
        	if(checkPar(i) == true){
                answer++;
            }        
        }
        cout << "#" << test_case << " " << answer <<endl;
	}
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}
#include <iostream>
#include <ctime>

void getChe1(int num);

int main(void) {

    clock_t start, end;

    

    start = clock();

    getChe1(50000);

    end = clock();

    

    double time = (double)(end - start) / CLOCKS_PER_SEC; 

    std::cout << "Time : " << time;

}

void getChe1(int num) {

    int *arr;

    arr = (int *) malloc(sizeof(int) * num);

    

    // 입력받은 수 만큼 배열에 모두 초기화 해둔다

    for (int i = 2; i <= num; i++) {

        arr[i] = i;

    }

    

    for (int i = 2; i <= num; i++) {  // 나누는 값 : i

        for (int j = 2; j <= num; j++) {

            if (arr[j] != i && arr[j] % i == 0) {  // 자신과 같지않고 0으로 떨어지면 소수아님

                arr[j] = 0; // 소수가 아닌 경우 0을 넣어둔다

            }

        }

    }

    

    // 출력

    for (int i = 2; i<= num; i++) {

        if (arr[i] != 0)   
            std::cout << arr[i] << " ";

    }

}

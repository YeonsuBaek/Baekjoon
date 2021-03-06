// 문제
// 두 정수 A와 B를 입력받은 다음, A+B를 출력하는 프로그램을 작성하시오.
// 첫째 줄에 테스트 케이스의 개수 T가 주어진다.
// 각 테스트 케이스는 한 줄로 이루어져 있으며, 각 줄에 A와 B가 주어진다. (0 < A, B < 10)
// 각 테스트 케이스마다 A+B를 출력한다.

// 생각
// 1. 테스트 케이스 개수 입력
// 2. 테스트 케이스 개수만큼 반복문
// 2-1. 두 정수를 받아 합을 출력

#include <stdio.h>

int main() {
    int t, a, b;
    
    scanf("%d", &t);
    
    for (int i=0; i<t; i++) {
        scanf("%d %d", &a, &b);
        printf("%d\n", a+b);
    }
    
    return 0;
}
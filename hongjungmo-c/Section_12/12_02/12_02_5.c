// 12.2 객체와 식별자, lvalue와 rvalue
/*
    L-value
    객체(object)를 가리키는 표현식
    “L-value is an expression ‘referring’ to an object.” (K&R p.197)

    - L-value : 대입 연산의 왼쪽 부분
    “left side of an assignment.” (K.N.K p.197)

    - R-value : 대입 연산의 오른쪽 부분 (변수, 상수, 표현식)
    “right side, variable, constant, expression.” (K.N.K p.67)
*/

#include <stdio.h>
int main(void)
{
    // L-value와 R-value 예제

    // 주소 형태의 R-value는 역참조 연산을 통해 L-value로 사용할 수 있다.
    int var_name = 3;
    int arr[100];

    // 주소 형태의 R-value
    int* ptr = arr + 2 * var_name;
    *(arr + 2 * var_name) = 456; // 역참조 연산을 통해 L-value로 사용할 수 있다.

    return 0;
}
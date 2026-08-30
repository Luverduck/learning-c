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

    // 문자열은 L-value로 사용할 수 없다.
    // 문자열 R-value
    const char* str_ptr = "Constant string";
    char str_arr[] = "String in an array";

    // 문자열 L-value
    // "Constant string" = "Second string"; // Error

    return 0;
}
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
 
    // 수정 가능한 L-value 표현식 (modifiable L-value expression)
    int var_name;
    int* ptr = &var_name;

    var_name = 3; // modifiable L-value expression
    *ptr = 7;     // modifiable L-value expression

    return 0;
}
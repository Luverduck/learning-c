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
    // L-value와 R-value의 관계
    // L-value가 가리키는(referring) 메모리 공간에 R-value의 값을 복사한다.

    // 'var_name'이라는 식별자의 객체 생성
    int var_name;

    // 식별자 'var_name'이 가리키는 객체에 3을 저장 
    var_name = 3;

    // *ptr가 가리키는 메모리 공간에 val이 가리키는 객체에 저장된 값 5를 복사
    int val = 5;
    int* ptr = &var_name;
    *ptr = val;
    // *ptr : L-value
    //  val : R-value

    return 0;
}
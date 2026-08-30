// 12.2 객체와 식별자, lvalue와 rvalue
/*
    객체 (Object)
    - 값을 저장할 수 있는 메모리 공간
    - “An object is simply a block of memory that can store a value.” (K.N.K p.487)

    식별자 (Identifier)
    - 변수, 함수, 매크로 등의 이름
    - “Name for variables, functions, macro, and other entities.” (K.N.K p.25)
*/

#include <stdio.h>
int main(void)
{
    // 객체와 식별자 예제

    // 일반적인 경우
    int var_name = 3;      // var_name은 식별자이다.
    int* ptr = &var_name;  // ptr은 식별자이다.
    *ptr = 5;              // *ptr은 표현식이지만 객체를 가리킨다(designate).

    // 배열의 경우
    int arr[100];          // arr은 식별자이다.
    arr[0] = 7;            // arr[0]은 표현식이지만 객체를 가리킨다(designate).

    return 0;
}
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
    // 객체와 식별자의 관계
    // 식별자를 통해 객체의 값에 접근할 수 있다.
    
    // 'var_name'이라는 식별자의 객체 생성
    int var_name;

    // 식별자 'var_name'이 가리키는 객체에 3을 저장
    var_name = 3;

	return 0;
}
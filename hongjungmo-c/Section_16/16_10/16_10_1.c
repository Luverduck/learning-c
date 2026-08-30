// 16.10 _Generic 표현식
/*
    _Generic 키워드
    표현식의 자료형에 따라 다른 문장을 실행한다. (Visual Studio에서는 지원하지 않는다.)
    _Generic( (expression),
        type_1: statements,
        type_2: statements,
        .
        .
        default: statements
    )
*/

#include <stdio.h>

int main()
{
    printf("%d\n", 
        // 1.0L이 float일 경우 1, double일 경우 2, long double일 경우 3, 그 외 0을 반환
        _Generic(1.0L, float : 1, double : 2, long double : 3, default: 0)
    );

    printf("%d\n", 
        // 1L이 float일 경우 1, double일 경우 2, long double일 경우 3, 그 외 0을 반환
        _Generic(1L, float : 1, double : 2, long double : 3, default: 0)
    );

    printf("%d\n", 
        // 1.0L이 float일 경우 1, double일 경우 2, long double일 경우 3을 반환
        _Generic(1.0L, float : 1, double : 2, long double : 3)
    );

    return 0;
}
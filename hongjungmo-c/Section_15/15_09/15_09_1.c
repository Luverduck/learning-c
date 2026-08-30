// 15.9 구조체 안의 비트 필드
/*
    비트 필드 (Bit Field)
    - 비트가 나열되어 있는 필드
        K&R (The C Programming Language, 2nd Edition)
        - p149, A bit-field, or field for short, is a set of adjacent bits …

        K.N.K (C Programming A Modern Approach, 2nd Edition)
        - p513, Dealing with a group of several consecutive bits (a bit-field) is …
        - p516, C provides an alternative: declaring structures whose members represent bit-fields.

        S.Prata (C Primer Plus, 6th Edition)
        - p690, A bit field is set up with a structure declaration …
*/

#include <stdio.h>
#include <stdbool.h>
int main(void)
{
    // 비트 필드 선언
    struct
    {
        bool has_sword : 1;
        bool has_shield : 1;
        bool has_potion : 1;
        bool has_guntlet : 1;
        bool has_hammer : 1;
        bool has_key : 1;
        bool has_ring : 1;
        bool has_amulet : 1;
    } items_flag;

    // 비트 마스킹
    // 대입 연산으로 간단하게 비트를 ON/OFF 시킬 수 있다.
    items_flag.has_sword = 1; // <-> flags = flags | MASK_SWORD;

	return 0;
}
#ifndef _FUN_H_
#define _FUN_H_

#include <stdbool.h>
#include <stdio.h>

#define ADDITION 1
#define SUBTRACTION 2
#define MULTIPLICATION 3
#define DIVISION 4
#define EXIT 5

/**
 * @brief 사용자에게 메뉴를 출력하는 함수
 */
void print_menu();

/**
 * @brief 사용자가 입력한 옵션이 종료 옵션인지 확인하는 함수
 *
 * @param option 사용자가 입력한 옵션
 * @return true 종료 옵션인 경우
 * @return false 종료 옵션이 아닌 경우
 */
bool is_exit(int option);

/**
 * @brief 두 정수를 더하는 함수
 *
 * @param a 첫번째 정수
 * @param b 두번째 정수
 * @return int 더한 결과
 */
int add(int a, int b);

/**
 * @brief 두 정수를 빼는 함수
 *
 * @param a 첫번째 정수
 * @param b 두번째 정수
 * @return int 뺀 결과
 */
int subtract(int a, int b);

/**
 * @brief 두 정수를 곱하는 함수
 *
 * @param a 첫번째 정수
 * @param b 두번째 정수
 * @return int 곱한 결과
 */
int multiply(int a, int b);

/**
 * @brief 두 정수를 나누는 함수
 *
 * @param a 첫번째 정수
 * @param b 두번째 정수
 * @return int 나눈 결과
 */
int divide(int a, int b);

#endif
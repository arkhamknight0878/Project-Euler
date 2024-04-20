#include <stdbool.h>

/**
 * @brief : Проверка числа на простоту
 * @param divisor_ : Проверяемое число
 * @return : true, если число простое; false иначе
*/
bool Is_Prime(unsigned long long divisor_);

/**
 * @brief : Ищет наибольший простой делитель заданного числа
 * @param number_ : Число
 * @return : Наибольший простой делитель заданного числа
*/
unsigned long long Max_Divisor(const unsigned long long number_);
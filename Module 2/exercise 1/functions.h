#pragma once
/**
* @brief Отсчитывет количество символов в строке
* @param str_ : Строка
* @return Количество символов в строке
*/
unsigned int my_strlen(const char* str_);


/**
* @brief Удаляет символ на выбранной строке
* @param str_ : Строка
* @param pos_ : Позиция символа
* @return Строку без символа на выбранной позиции
*/
void remCharAt(char* str_, int pos_);


/**
* @brief Удаляет символ на выбранной строке
* @param str_ : Строка
* @param pos_ : Позиция символа
* @return Строку без символа на выбранной позиции
*/
int lastPosOfSymb(char* str_, char char_);
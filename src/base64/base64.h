//
// Created by jin on 20-6-29.
//

#ifndef CPP_TEST_BASH64_H
#define CPP_TEST_BASH64_H

#include <cstdint>
#include <zconf.h>

namespace base64
{
	void Base64Encode(const int8_t * _data, size_t _size, char* _base64);
}

#endif //CPP_TEST_BASH64_H

﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct String_t;
struct Type_t;

#include "t3542137334.h"
#include "IntPtr_t.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t1488000239  : public t3542137334
{
public:
	IntPtr_t f2;
	String_t* f3;
	Type_t * f4;

public:
	inline static int32_t fog2() { return static_cast<int32_t>(offsetof(t1488000239, f2)); }
	inline IntPtr_t fg2() const { return f2; }
	inline IntPtr_t* fag2() { return &f2; }
	inline void fs2(IntPtr_t value)
	{
		f2 = value;
	}

	inline static int32_t fog3() { return static_cast<int32_t>(offsetof(t1488000239, f3)); }
	inline String_t* fg3() const { return f3; }
	inline String_t** fag3() { return &f3; }
	inline void fs3(String_t* value)
	{
		f3 = value;
		Il2CppCodeGenWriteBarrier(&f3, value);
	}

	inline static int32_t fog4() { return static_cast<int32_t>(offsetof(t1488000239, f4)); }
	inline Type_t * fg4() const { return f4; }
	inline Type_t ** fag4() { return &f4; }
	inline void fs4(Type_t * value)
	{
		f4 = value;
		Il2CppCodeGenWriteBarrier(&f4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct t1551247802;
struct MethodInfo_t;

#include "Il2CppObject.h"
#include "t2302558261.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t3890879930  : public Il2CppObject
{
public:
	t1551247802 * f0;
	MethodInfo_t * f1;
	t2302558261  f2;
	t2302558261  f3;
	t2302558261  f4;

public:
	inline static int32_t fog0() { return static_cast<int32_t>(offsetof(t3890879930, f0)); }
	inline t1551247802 * fg0() const { return f0; }
	inline t1551247802 ** fag0() { return &f0; }
	inline void fs0(t1551247802 * value)
	{
		f0 = value;
		Il2CppCodeGenWriteBarrier(&f0, value);
	}

	inline static int32_t fog1() { return static_cast<int32_t>(offsetof(t3890879930, f1)); }
	inline MethodInfo_t * fg1() const { return f1; }
	inline MethodInfo_t ** fag1() { return &f1; }
	inline void fs1(MethodInfo_t * value)
	{
		f1 = value;
		Il2CppCodeGenWriteBarrier(&f1, value);
	}

	inline static int32_t fog2() { return static_cast<int32_t>(offsetof(t3890879930, f2)); }
	inline t2302558261  fg2() const { return f2; }
	inline t2302558261 * fag2() { return &f2; }
	inline void fs2(t2302558261  value)
	{
		f2 = value;
	}

	inline static int32_t fog3() { return static_cast<int32_t>(offsetof(t3890879930, f3)); }
	inline t2302558261  fg3() const { return f3; }
	inline t2302558261 * fag3() { return &f3; }
	inline void fs3(t2302558261  value)
	{
		f3 = value;
	}

	inline static int32_t fog4() { return static_cast<int32_t>(offsetof(t3890879930, f4)); }
	inline t2302558261  fg4() const { return f4; }
	inline t2302558261 * fag4() { return &f4; }
	inline void fs4(t2302558261  value)
	{
		f4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct t1557565273;
struct t24372250;

#include "t77133537.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t370309777  : public t77133537
{
public:
	t1557565273 * f0;
	t24372250 * f1;

public:
	inline static int32_t fog0() { return static_cast<int32_t>(offsetof(t370309777, f0)); }
	inline t1557565273 * fg0() const { return f0; }
	inline t1557565273 ** fag0() { return &f0; }
	inline void fs0(t1557565273 * value)
	{
		f0 = value;
		Il2CppCodeGenWriteBarrier(&f0, value);
	}

	inline static int32_t fog1() { return static_cast<int32_t>(offsetof(t370309777, f1)); }
	inline t24372250 * fg1() const { return f1; }
	inline t24372250 ** fag1() { return &f1; }
	inline void fs1(t24372250 * value)
	{
		f1 = value;
		Il2CppCodeGenWriteBarrier(&f1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

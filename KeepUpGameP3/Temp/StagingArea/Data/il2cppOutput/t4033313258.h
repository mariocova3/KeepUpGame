﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct t4033313258;

#include "Il2CppObject.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t4033313258  : public Il2CppObject
{
public:

public:
};

struct t4033313258_SFs
{
public:
	t4033313258 * f0;
	t4033313258 * f1;
	t4033313258 * f2;

public:
	inline static int32_t fog0() { return static_cast<int32_t>(offsetof(t4033313258_SFs, f0)); }
	inline t4033313258 * fg0() const { return f0; }
	inline t4033313258 ** fag0() { return &f0; }
	inline void fs0(t4033313258 * value)
	{
		f0 = value;
		Il2CppCodeGenWriteBarrier(&f0, value);
	}

	inline static int32_t fog1() { return static_cast<int32_t>(offsetof(t4033313258_SFs, f1)); }
	inline t4033313258 * fg1() const { return f1; }
	inline t4033313258 ** fag1() { return &f1; }
	inline void fs1(t4033313258 * value)
	{
		f1 = value;
		Il2CppCodeGenWriteBarrier(&f1, value);
	}

	inline static int32_t fog2() { return static_cast<int32_t>(offsetof(t4033313258_SFs, f2)); }
	inline t4033313258 * fg2() const { return f2; }
	inline t4033313258 ** fag2() { return &f2; }
	inline void fs2(t4033313258 * value)
	{
		f2 = value;
		Il2CppCodeGenWriteBarrier(&f2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

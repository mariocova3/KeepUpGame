﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct t370358365;
struct t49946189;
struct Il2CppObject;

#include "t2055500882.h"
#include "t2597042204.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t3488810021  : public t2055500882
{
public:
	int32_t f4;

public:
	inline static int32_t fog4() { return static_cast<int32_t>(offsetof(t3488810021, f4)); }
	inline int32_t fg4() const { return f4; }
	inline int32_t* fag4() { return &f4; }
	inline void fs4(int32_t value)
	{
		f4 = value;
	}
};

struct t3488810021_SFs
{
public:
	t370358365 * f1;
	bool f2;
	Il2CppObject * f3;
	Il2CppObject * f5;

public:
	inline static int32_t fog1() { return static_cast<int32_t>(offsetof(t3488810021_SFs, f1)); }
	inline t370358365 * fg1() const { return f1; }
	inline t370358365 ** fag1() { return &f1; }
	inline void fs1(t370358365 * value)
	{
		f1 = value;
		Il2CppCodeGenWriteBarrier(&f1, value);
	}

	inline static int32_t fog2() { return static_cast<int32_t>(offsetof(t3488810021_SFs, f2)); }
	inline bool fg2() const { return f2; }
	inline bool* fag2() { return &f2; }
	inline void fs2(bool value)
	{
		f2 = value;
	}

	inline static int32_t fog3() { return static_cast<int32_t>(offsetof(t3488810021_SFs, f3)); }
	inline Il2CppObject * fg3() const { return f3; }
	inline Il2CppObject ** fag3() { return &f3; }
	inline void fs3(Il2CppObject * value)
	{
		f3 = value;
		Il2CppCodeGenWriteBarrier(&f3, value);
	}

	inline static int32_t fog5() { return static_cast<int32_t>(offsetof(t3488810021_SFs, f5)); }
	inline Il2CppObject * fg5() const { return f5; }
	inline Il2CppObject ** fag5() { return &f5; }
	inline void fs5(Il2CppObject * value)
	{
		f5 = value;
		Il2CppCodeGenWriteBarrier(&f5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

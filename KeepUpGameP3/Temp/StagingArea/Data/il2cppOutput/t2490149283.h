﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct t3030088988;
struct t458432999;

#include "Il2CppObject.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t2490149283  : public Il2CppObject
{
public:

public:
};

struct t2490149283_SFs
{
public:
	bool f0;
	t3030088988* f1;
	t3030088988* f2;
	t3030088988* f3;
	t458432999* f4;

public:
	inline static int32_t fog0() { return static_cast<int32_t>(offsetof(t2490149283_SFs, f0)); }
	inline bool fg0() const { return f0; }
	inline bool* fag0() { return &f0; }
	inline void fs0(bool value)
	{
		f0 = value;
	}

	inline static int32_t fog1() { return static_cast<int32_t>(offsetof(t2490149283_SFs, f1)); }
	inline t3030088988* fg1() const { return f1; }
	inline t3030088988** fag1() { return &f1; }
	inline void fs1(t3030088988* value)
	{
		f1 = value;
		Il2CppCodeGenWriteBarrier(&f1, value);
	}

	inline static int32_t fog2() { return static_cast<int32_t>(offsetof(t2490149283_SFs, f2)); }
	inline t3030088988* fg2() const { return f2; }
	inline t3030088988** fag2() { return &f2; }
	inline void fs2(t3030088988* value)
	{
		f2 = value;
		Il2CppCodeGenWriteBarrier(&f2, value);
	}

	inline static int32_t fog3() { return static_cast<int32_t>(offsetof(t2490149283_SFs, f3)); }
	inline t3030088988* fg3() const { return f3; }
	inline t3030088988** fag3() { return &f3; }
	inline void fs3(t3030088988* value)
	{
		f3 = value;
		Il2CppCodeGenWriteBarrier(&f3, value);
	}

	inline static int32_t fog4() { return static_cast<int32_t>(offsetof(t2490149283_SFs, f4)); }
	inline t458432999* fg4() const { return f4; }
	inline t458432999** fag4() { return &f4; }
	inline void fs4(t458432999* value)
	{
		f4 = value;
		Il2CppCodeGenWriteBarrier(&f4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

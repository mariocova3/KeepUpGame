﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct t1006925219;

#include "Il2CppObject.h"
#include "t1525428817.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t1011928986  : public Il2CppObject
{
public:
	float f0;
	float f1;
	float f2;
	float f3;
	t1525428817  f4;
	int32_t f5;
	int32_t f6;
	t1006925219 * f7;

public:
	inline static int32_t fog0() { return static_cast<int32_t>(offsetof(t1011928986, f0)); }
	inline float fg0() const { return f0; }
	inline float* fag0() { return &f0; }
	inline void fs0(float value)
	{
		f0 = value;
	}

	inline static int32_t fog1() { return static_cast<int32_t>(offsetof(t1011928986, f1)); }
	inline float fg1() const { return f1; }
	inline float* fag1() { return &f1; }
	inline void fs1(float value)
	{
		f1 = value;
	}

	inline static int32_t fog2() { return static_cast<int32_t>(offsetof(t1011928986, f2)); }
	inline float fg2() const { return f2; }
	inline float* fag2() { return &f2; }
	inline void fs2(float value)
	{
		f2 = value;
	}

	inline static int32_t fog3() { return static_cast<int32_t>(offsetof(t1011928986, f3)); }
	inline float fg3() const { return f3; }
	inline float* fag3() { return &f3; }
	inline void fs3(float value)
	{
		f3 = value;
	}

	inline static int32_t fog4() { return static_cast<int32_t>(offsetof(t1011928986, f4)); }
	inline t1525428817  fg4() const { return f4; }
	inline t1525428817 * fag4() { return &f4; }
	inline void fs4(t1525428817  value)
	{
		f4 = value;
	}

	inline static int32_t fog5() { return static_cast<int32_t>(offsetof(t1011928986, f5)); }
	inline int32_t fg5() const { return f5; }
	inline int32_t* fag5() { return &f5; }
	inline void fs5(int32_t value)
	{
		f5 = value;
	}

	inline static int32_t fog6() { return static_cast<int32_t>(offsetof(t1011928986, f6)); }
	inline int32_t fg6() const { return f6; }
	inline int32_t* fag6() { return &f6; }
	inline void fs6(int32_t value)
	{
		f6 = value;
	}

	inline static int32_t fog7() { return static_cast<int32_t>(offsetof(t1011928986, f7)); }
	inline t1006925219 * fg7() const { return f7; }
	inline t1006925219 ** fag7() { return &f7; }
	inline void fs7(t1006925219 * value)
	{
		f7 = value;
		Il2CppCodeGenWriteBarrier(&f7, value);
	}
};

struct t1011928986_SFs
{
public:
	t1525428817  f8;
	int32_t f9;

public:
	inline static int32_t fog8() { return static_cast<int32_t>(offsetof(t1011928986_SFs, f8)); }
	inline t1525428817  fg8() const { return f8; }
	inline t1525428817 * fag8() { return &f8; }
	inline void fs8(t1525428817  value)
	{
		f8 = value;
	}

	inline static int32_t fog9() { return static_cast<int32_t>(offsetof(t1011928986_SFs, f9)); }
	inline int32_t fg9() const { return f9; }
	inline int32_t* fag9() { return &f9; }
	inline void fs9(int32_t value)
	{
		f9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

struct Il2CppObject;
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "t3525329790.h"
#include "Il2CppObject.h"

extern "C"  void m2441427762 (t3525329790 * __this, float p0, float p1, float p2, float p3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C"  int32_t m3402333527 (t3525329790 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C"  bool m3270185343 (t3525329790 * __this, Il2CppObject * p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C"  String_t* m3272970053 (t3525329790 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;

struct t3525329790;
struct t3525329790_marshaled_pinvoke;

extern "C" void t3525329790_marshal_pinvoke(const t3525329790& unmarshaled, t3525329790_marshaled_pinvoke& marshaled);
extern "C" void t3525329790_marshal_pinvoke_back(const t3525329790_marshaled_pinvoke& marshaled, t3525329790& unmarshaled);
extern "C" void t3525329790_marshal_pinvoke_cleanup(t3525329790_marshaled_pinvoke& marshaled);

struct t3525329790;
struct t3525329790_marshaled_com;

extern "C" void t3525329790_marshal_com(const t3525329790& unmarshaled, t3525329790_marshaled_com& marshaled);
extern "C" void t3525329790_marshal_com_back(const t3525329790_marshaled_com& marshaled, t3525329790& unmarshaled);
extern "C" void t3525329790_marshal_com_cleanup(t3525329790_marshaled_com& marshaled);

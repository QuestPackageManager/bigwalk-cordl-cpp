#pragma once
// IWYU pragma private; include "MA/Flora/MaterialPropertyBlockPool.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "MA/Flora/zzzz__MaterialPropertyBlockPool_def.hpp"
#include "MA/Flora/zzzz__MaterialPropertyBlockPool_def.hpp"
#include "UnityEngine/Pool/zzzz__ObjectPool_1_def.hpp"
#include "UnityEngine/Pool/zzzz__PooledObject_1_def.hpp"
#include "UnityEngine/zzzz__MaterialPropertyBlock_def.hpp"
//  Writing Method size for method: ::MA::Flora::MaterialPropertyBlockPool___c._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::MaterialPropertyBlockPool___c::*)()>(&::MA::Flora::MaterialPropertyBlockPool___c::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::MaterialPropertyBlockPool___c*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::MaterialPropertyBlockPool___c.__cctor_b__4_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::MaterialPropertyBlock* (::MA::Flora::MaterialPropertyBlockPool___c::*)()>(&::MA::Flora::MaterialPropertyBlockPool___c::__cctor_b__4_0)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1803eebe0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::MaterialPropertyBlockPool___c*>(),
                        {"<.cctor>b__4_0", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::MaterialPropertyBlockPool___c.__cctor_b__4_1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::MaterialPropertyBlockPool___c::*)(::UnityEngine::MaterialPropertyBlock*)>(&::MA::Flora::MaterialPropertyBlockPool___c::__cctor_b__4_1)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1814c1660;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::MaterialPropertyBlockPool___c*>(),
                        {"<.cctor>b__4_1", {}, {::i2c::type_of<::UnityEngine::MaterialPropertyBlock*>()}}
                    )));
    return ___internal_method;
  }
};
inline void MA::Flora::MaterialPropertyBlockPool___c::setStaticF___9(::MA::Flora::MaterialPropertyBlockPool___c*  value)  {
::cordl_internals::setStaticField<::MA::Flora::MaterialPropertyBlockPool___c*, "<>9", ::MA::Flora::MaterialPropertyBlockPool___c*>(std::forward<::MA::Flora::MaterialPropertyBlockPool___c*>(value));
}
inline ::MA::Flora::MaterialPropertyBlockPool___c* MA::Flora::MaterialPropertyBlockPool___c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::MA::Flora::MaterialPropertyBlockPool___c*, "<>9", ::MA::Flora::MaterialPropertyBlockPool___c*>();
}
inline void MA::Flora::MaterialPropertyBlockPool___c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::MaterialPropertyBlockPool___c*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::MaterialPropertyBlock* MA::Flora::MaterialPropertyBlockPool___c::__cctor_b__4_0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::MaterialPropertyBlockPool___c*>(),
                        {"<.cctor>b__4_0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::MaterialPropertyBlock*>(this, ___internal_method);
}
inline void MA::Flora::MaterialPropertyBlockPool___c::__cctor_b__4_1(::UnityEngine::MaterialPropertyBlock*  p)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::MaterialPropertyBlockPool___c*>(),
                        {"<.cctor>b__4_1", {}, {::i2c::type_of<::UnityEngine::MaterialPropertyBlock*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, p);
}
inline ::MA::Flora::MaterialPropertyBlockPool___c* MA::Flora::MaterialPropertyBlockPool___c::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::MA::Flora::MaterialPropertyBlockPool___c*>());
}
// Ctor Parameters []
constexpr ::MA::Flora::MaterialPropertyBlockPool___c::MaterialPropertyBlockPool___c()   {
}
//  Writing Method size for method: ::MA::Flora::MaterialPropertyBlockPool.Get
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Pool::PooledObject_1<::UnityEngine::MaterialPropertyBlock*> (*)(::by_ref<::UnityEngine::MaterialPropertyBlock*>)>(&::MA::Flora::MaterialPropertyBlockPool::Get)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1814c0240;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::MaterialPropertyBlockPool*>(),
                        {"Get", {}, {::i2c::type_of<::by_ref<::UnityEngine::MaterialPropertyBlock*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::MaterialPropertyBlockPool.Get
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::MaterialPropertyBlock* (*)()>(&::MA::Flora::MaterialPropertyBlockPool::Get)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x1814c02a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::MaterialPropertyBlockPool*>(),
                        {"Get", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::MaterialPropertyBlockPool.Release
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::MaterialPropertyBlock*)>(&::MA::Flora::MaterialPropertyBlockPool::Release)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x1814c0360;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::MaterialPropertyBlockPool*>(),
                        {"Release", {}, {::i2c::type_of<::UnityEngine::MaterialPropertyBlock*>()}}
                    )));
    return ___internal_method;
  }
};
inline void MA::Flora::MaterialPropertyBlockPool::setStaticF_s_Instance(::UnityEngine::Pool::ObjectPool_1<::UnityEngine::MaterialPropertyBlock*>*  value)  {
::cordl_internals::setStaticField<::UnityEngine::Pool::ObjectPool_1<::UnityEngine::MaterialPropertyBlock*>*, "s_Instance", ::MA::Flora::MaterialPropertyBlockPool*>(std::forward<::UnityEngine::Pool::ObjectPool_1<::UnityEngine::MaterialPropertyBlock*>*>(value));
}
inline ::UnityEngine::Pool::ObjectPool_1<::UnityEngine::MaterialPropertyBlock*>* MA::Flora::MaterialPropertyBlockPool::getStaticF_s_Instance()  {
return ::cordl_internals::getStaticField<::UnityEngine::Pool::ObjectPool_1<::UnityEngine::MaterialPropertyBlock*>*, "s_Instance", ::MA::Flora::MaterialPropertyBlockPool*>();
}
inline ::UnityEngine::Pool::PooledObject_1<::UnityEngine::MaterialPropertyBlock*> MA::Flora::MaterialPropertyBlockPool::Get(::by_ref<::UnityEngine::MaterialPropertyBlock*>  mpb)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::MaterialPropertyBlockPool*>(),
                        {"Get", {}, {::i2c::type_of<::by_ref<::UnityEngine::MaterialPropertyBlock*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Pool::PooledObject_1<::UnityEngine::MaterialPropertyBlock*>>(nullptr, ___internal_method, mpb);
}
inline ::UnityEngine::MaterialPropertyBlock* MA::Flora::MaterialPropertyBlockPool::Get()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::MaterialPropertyBlockPool*>(),
                        {"Get", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::MaterialPropertyBlock*>(nullptr, ___internal_method);
}
inline void MA::Flora::MaterialPropertyBlockPool::Release(::UnityEngine::MaterialPropertyBlock*  mpb)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::MaterialPropertyBlockPool*>(),
                        {"Release", {}, {::i2c::type_of<::UnityEngine::MaterialPropertyBlock*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, mpb);
}
// Ctor Parameters []
constexpr ::MA::Flora::MaterialPropertyBlockPool::MaterialPropertyBlockPool()   {
}

#pragma once
// IWYU pragma private; include "Unity/Burst/SharedStatic.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Burst/zzzz__SharedStatic_def.hpp"
#include "Unity/Burst/zzzz__SharedStatic_def.hpp"
//  Writing Method size for method: ::Unity::Burst::SharedStatic_PreserveAttribute._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Burst::SharedStatic_PreserveAttribute::*)()>(&::Unity::Burst::SharedStatic_PreserveAttribute::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Burst::SharedStatic_PreserveAttribute*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Unity::Burst::SharedStatic_PreserveAttribute::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Burst::SharedStatic_PreserveAttribute*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Unity::Burst::SharedStatic_PreserveAttribute* Unity::Burst::SharedStatic_PreserveAttribute::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Unity::Burst::SharedStatic_PreserveAttribute*>());
}
// Ctor Parameters []
constexpr ::Unity::Burst::SharedStatic_PreserveAttribute::SharedStatic_PreserveAttribute()   {
}
//  Writing Method size for method: ::Unity::Burst::SharedStatic.CheckSizeOf
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(uint32_t)>(&::Unity::Burst::SharedStatic::CheckSizeOf)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x181e923b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Burst::SharedStatic*>(),
                        {"CheckSizeOf", {}, {::i2c::type_of<uint32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Burst::SharedStatic.CheckResult
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(void*)>(&::Unity::Burst::SharedStatic::CheckResult)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x181e92390;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Burst::SharedStatic*>(),
                        {"CheckResult", {}, {::i2c::type_of<void*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Burst::SharedStatic.GetOrCreateSharedStaticInternal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void* (*)(int64_t, int64_t, uint32_t, uint32_t)>(&::Unity::Burst::SharedStatic::GetOrCreateSharedStaticInternal)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x181e923e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Burst::SharedStatic*>(),
                        {"GetOrCreateSharedStaticInternal", {}, {::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>()}}
                    )));
    return ___internal_method;
  }
};
inline void Unity::Burst::SharedStatic::CheckSizeOf(uint32_t  sizeOf)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Burst::SharedStatic*>(),
                        {"CheckSizeOf", {}, {::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, sizeOf);
}
inline void Unity::Burst::SharedStatic::CheckResult(void*  result)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Burst::SharedStatic*>(),
                        {"CheckResult", {}, {::i2c::type_of<void*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, result);
}
inline void* Unity::Burst::SharedStatic::GetOrCreateSharedStaticInternal(int64_t  getHashCode64, int64_t  getSubHashCode64, uint32_t  sizeOf, uint32_t  alignment)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Burst::SharedStatic*>(),
                        {"GetOrCreateSharedStaticInternal", {}, {::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void*>(nullptr, ___internal_method, getHashCode64, getSubHashCode64, sizeOf, alignment);
}
// Ctor Parameters []
constexpr ::Unity::Burst::SharedStatic::SharedStatic()   {
}

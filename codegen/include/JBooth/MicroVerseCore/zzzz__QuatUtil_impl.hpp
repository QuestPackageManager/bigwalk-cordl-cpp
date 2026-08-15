#pragma once
// IWYU pragma private; include "JBooth/MicroVerseCore/QuatUtil.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "JBooth/MicroVerseCore/zzzz__QuatUtil_def.hpp"
#include "Unity/Mathematics/zzzz__float3_def.hpp"
#include "Unity/Mathematics/zzzz__quaternion_def.hpp"
//  Writing Method size for method: ::JBooth::MicroVerseCore::QuatUtil.ExtractForward
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::float3 (*)(::Unity::Mathematics::quaternion)>(&::JBooth::MicroVerseCore::QuatUtil::ExtractForward)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x18141e590;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::QuatUtil*>(),
                        {"ExtractForward", {}, {::i2c::type_of<::Unity::Mathematics::quaternion>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::QuatUtil.ExtractUp
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::float3 (*)(::Unity::Mathematics::quaternion)>(&::JBooth::MicroVerseCore::QuatUtil::ExtractUp)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x18141e680;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::QuatUtil*>(),
                        {"ExtractUp", {}, {::i2c::type_of<::Unity::Mathematics::quaternion>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::QuatUtil.ExtractLeft
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::float3 (*)(::Unity::Mathematics::quaternion)>(&::JBooth::MicroVerseCore::QuatUtil::ExtractLeft)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x18141e600;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::QuatUtil*>(),
                        {"ExtractLeft", {}, {::i2c::type_of<::Unity::Mathematics::quaternion>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::QuatUtil._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::JBooth::MicroVerseCore::QuatUtil::*)()>(&::JBooth::MicroVerseCore::QuatUtil::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::QuatUtil*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline ::Unity::Mathematics::float3 JBooth::MicroVerseCore::QuatUtil::ExtractForward(::Unity::Mathematics::quaternion  q)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::QuatUtil*>(),
                        {"ExtractForward", {}, {::i2c::type_of<::Unity::Mathematics::quaternion>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float3>(nullptr, ___internal_method, q);
}
inline ::Unity::Mathematics::float3 JBooth::MicroVerseCore::QuatUtil::ExtractUp(::Unity::Mathematics::quaternion  q)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::QuatUtil*>(),
                        {"ExtractUp", {}, {::i2c::type_of<::Unity::Mathematics::quaternion>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float3>(nullptr, ___internal_method, q);
}
inline ::Unity::Mathematics::float3 JBooth::MicroVerseCore::QuatUtil::ExtractLeft(::Unity::Mathematics::quaternion  q)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::QuatUtil*>(),
                        {"ExtractLeft", {}, {::i2c::type_of<::Unity::Mathematics::quaternion>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float3>(nullptr, ___internal_method, q);
}
inline void JBooth::MicroVerseCore::QuatUtil::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::QuatUtil*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::JBooth::MicroVerseCore::QuatUtil* JBooth::MicroVerseCore::QuatUtil::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::JBooth::MicroVerseCore::QuatUtil*>());
}
// Ctor Parameters []
constexpr ::JBooth::MicroVerseCore::QuatUtil::QuatUtil()   {
}

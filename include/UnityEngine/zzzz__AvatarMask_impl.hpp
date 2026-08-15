#pragma once
// IWYU pragma private; include "UnityEngine/AvatarMask.hpp"
#include "UnityEngine/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__AvatarMask_def.hpp"
//  Writing Method size for method: ::UnityEngine::AvatarMask._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AvatarMask::*)()>(&::UnityEngine::AvatarMask::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x182236ed0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AvatarMask*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AvatarMask.Internal_Create
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::AvatarMask*)>(&::UnityEngine::AvatarMask::Internal_Create)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x182236ed0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AvatarMask*>(),
                        {"Internal_Create", {}, {::i2c::type_of<::UnityEngine::AvatarMask*>()}}
                    )));
    return ___internal_method;
  }
};
inline void UnityEngine::AvatarMask::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AvatarMask*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::AvatarMask::Internal_Create(::UnityEngine::AvatarMask*  self)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AvatarMask*>(),
                        {"Internal_Create", {}, {::i2c::type_of<::UnityEngine::AvatarMask*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, self);
}
inline ::UnityEngine::AvatarMask* UnityEngine::AvatarMask::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::AvatarMask*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::AvatarMask::AvatarMask()   {
}

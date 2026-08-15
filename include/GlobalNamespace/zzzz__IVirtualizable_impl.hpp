#pragma once
// IWYU pragma private; include "GlobalNamespace/IVirtualizable.hpp"
#include "GlobalNamespace/zzzz__IVirtualizable_def.hpp"
#include "GlobalNamespace/zzzz__VoiceLimitBehaviorType_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::IVirtualizable.get_VoiceLimit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::IVirtualizable::*)()>(&::GlobalNamespace::IVirtualizable::get_VoiceLimit)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::IVirtualizable*>(),
                    {::i2c::class_of<::GlobalNamespace::IVirtualizable*>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::IVirtualizable.get_VoiceLimitBehavior
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::VoiceLimitBehaviorType (::GlobalNamespace::IVirtualizable::*)()>(&::GlobalNamespace::IVirtualizable::get_VoiceLimitBehavior)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::IVirtualizable*>(),
                    {::i2c::class_of<::GlobalNamespace::IVirtualizable*>(), 1}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::IVirtualizable.get_Cooldown
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::IVirtualizable::*)()>(&::GlobalNamespace::IVirtualizable::get_Cooldown)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::IVirtualizable*>(),
                    {::i2c::class_of<::GlobalNamespace::IVirtualizable*>(), 2}
                ));
    return ___internal_method;
  }
};
inline int32_t GlobalNamespace::IVirtualizable::get_VoiceLimit()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::IVirtualizable*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::GlobalNamespace::VoiceLimitBehaviorType GlobalNamespace::IVirtualizable::get_VoiceLimitBehavior()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::IVirtualizable*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::VoiceLimitBehaviorType>(this, ___internal_method);
}
inline float_t GlobalNamespace::IVirtualizable::get_Cooldown()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::IVirtualizable*>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}

#pragma once
// IWYU pragma private; include "UnityEngine/Subsystem.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Subsystem_def.hpp"
#include "UnityEngine/zzzz__ISubsystem_def.hpp"
//  Writing Method size for method: ::UnityEngine::Subsystem._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Subsystem::*)()>(&::UnityEngine::Subsystem::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Subsystem*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void UnityEngine::Subsystem::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Subsystem*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Subsystem* UnityEngine::Subsystem::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Subsystem*>());
}
/// @brief Convert operator to "::UnityEngine::ISubsystem"
constexpr  UnityEngine::Subsystem::operator ::UnityEngine::ISubsystem*() noexcept {
return static_cast<::UnityEngine::ISubsystem*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::ISubsystem"
constexpr ::UnityEngine::ISubsystem* UnityEngine::Subsystem::i___UnityEngine__ISubsystem() noexcept {
return static_cast<::UnityEngine::ISubsystem*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::Subsystem::Subsystem()   {
}

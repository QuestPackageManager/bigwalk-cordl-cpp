#pragma once
// IWYU pragma private; include "UnityEngine/SystemClock.hpp"
#include "System/zzzz__DateTime_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__SystemClock_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
//  Writing Method size for method: ::UnityEngine::SystemClock.get_now
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::DateTime (*)()>(&::UnityEngine::SystemClock::get_now)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1822877e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::SystemClock*>(),
                        {"get_now", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void UnityEngine::SystemClock::setStaticF_s_Epoch(::System::DateTime  value)  {
::cordl_internals::setStaticField<::System::DateTime, "s_Epoch", ::UnityEngine::SystemClock*>(std::forward<::System::DateTime>(value));
}
inline ::System::DateTime UnityEngine::SystemClock::getStaticF_s_Epoch()  {
return ::cordl_internals::getStaticField<::System::DateTime, "s_Epoch", ::UnityEngine::SystemClock*>();
}
inline ::System::DateTime UnityEngine::SystemClock::get_now()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::SystemClock*>(),
                        {"get_now", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::DateTime>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::SystemClock::SystemClock()   {
}

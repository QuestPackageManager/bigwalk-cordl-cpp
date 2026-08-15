#pragma once
// IWYU pragma private; include "AmplifyImpostors/Preferences.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "AmplifyImpostors/zzzz__Preferences_def.hpp"
//  Writing Method size for method: ::AmplifyImpostors::Preferences._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::AmplifyImpostors::Preferences::*)()>(&::AmplifyImpostors::Preferences::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::AmplifyImpostors::Preferences*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void AmplifyImpostors::Preferences::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::AmplifyImpostors::Preferences*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::AmplifyImpostors::Preferences* AmplifyImpostors::Preferences::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::AmplifyImpostors::Preferences*>());
}
// Ctor Parameters []
constexpr ::AmplifyImpostors::Preferences::Preferences()   {
}

#pragma once
// IWYU pragma private; include "GlobalNamespace/RemoteConfig.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__RemoteConfig_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::RemoteConfig._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RemoteConfig::*)()>(&::GlobalNamespace::RemoteConfig::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RemoteConfig*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& GlobalNamespace::RemoteConfig::__cordl_internal_get_GlobalCrossplay()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___GlobalCrossplay;
}
constexpr bool const& GlobalNamespace::RemoteConfig::__cordl_internal_get_GlobalCrossplay() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___GlobalCrossplay;
}
constexpr void GlobalNamespace::RemoteConfig::__cordl_internal_set_GlobalCrossplay(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___GlobalCrossplay = value;
}
inline void GlobalNamespace::RemoteConfig::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RemoteConfig*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::RemoteConfig* GlobalNamespace::RemoteConfig::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::RemoteConfig*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::RemoteConfig::RemoteConfig()   {
}

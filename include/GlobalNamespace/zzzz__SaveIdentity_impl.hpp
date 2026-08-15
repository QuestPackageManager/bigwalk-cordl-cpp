#pragma once
// IWYU pragma private; include "GlobalNamespace/SaveIdentity.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__SaveIdentity_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::SaveIdentity._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SaveIdentity::*)()>(&::GlobalNamespace::SaveIdentity::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802dd7c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SaveIdentity*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& GlobalNamespace::SaveIdentity::__cordl_internal_get_saveGuid()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___saveGuid;
}
constexpr ::StringW const& GlobalNamespace::SaveIdentity::__cordl_internal_get_saveGuid() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___saveGuid;
}
constexpr void GlobalNamespace::SaveIdentity::__cordl_internal_set_saveGuid(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___saveGuid = value;
}
inline void GlobalNamespace::SaveIdentity::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SaveIdentity*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::SaveIdentity* GlobalNamespace::SaveIdentity::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::SaveIdentity*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SaveIdentity::SaveIdentity()   {
}

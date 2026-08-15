#pragma once
// IWYU pragma private; include "GlobalNamespace/RemoteSnapAnchor.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__RemoteSnapAnchor_def.hpp"
#include "GlobalNamespace/zzzz__RemoteSnapGroup_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::RemoteSnapAnchor._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RemoteSnapAnchor::*)()>(&::GlobalNamespace::RemoteSnapAnchor::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802dd7c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RemoteSnapAnchor*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::RemoteSnapGroup>& GlobalNamespace::RemoteSnapAnchor::__cordl_internal_get_snapGroup()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___snapGroup;
}
constexpr ::UnityW<::GlobalNamespace::RemoteSnapGroup> const& GlobalNamespace::RemoteSnapAnchor::__cordl_internal_get_snapGroup() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___snapGroup;
}
constexpr void GlobalNamespace::RemoteSnapAnchor::__cordl_internal_set_snapGroup(::UnityW<::GlobalNamespace::RemoteSnapGroup>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___snapGroup = value;
}
inline void GlobalNamespace::RemoteSnapAnchor::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RemoteSnapAnchor*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::RemoteSnapAnchor* GlobalNamespace::RemoteSnapAnchor::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::RemoteSnapAnchor*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::RemoteSnapAnchor::RemoteSnapAnchor()   {
}

#pragma once
// IWYU pragma private; include "GlobalNamespace/ChairliftMap.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__ChairliftMap_def.hpp"
#include "GlobalNamespace/zzzz__ChairLiftWireMinder_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::ChairliftMap._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ChairliftMap::*)()>(&::GlobalNamespace::ChairliftMap::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802dd7c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ChairliftMap*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::ChairLiftWireMinder>& GlobalNamespace::ChairliftMap::__cordl_internal_get_chairLiftWireMinderireMinder()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___chairLiftWireMinderireMinder;
}
constexpr ::UnityW<::GlobalNamespace::ChairLiftWireMinder> const& GlobalNamespace::ChairliftMap::__cordl_internal_get_chairLiftWireMinderireMinder() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___chairLiftWireMinderireMinder;
}
constexpr void GlobalNamespace::ChairliftMap::__cordl_internal_set_chairLiftWireMinderireMinder(::UnityW<::GlobalNamespace::ChairLiftWireMinder>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___chairLiftWireMinderireMinder = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::ChairliftMap::__cordl_internal_get_chairliftMapPolePrefab()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___chairliftMapPolePrefab;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::ChairliftMap::__cordl_internal_get_chairliftMapPolePrefab() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___chairliftMapPolePrefab;
}
constexpr void GlobalNamespace::ChairliftMap::__cordl_internal_set_chairliftMapPolePrefab(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___chairliftMapPolePrefab = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::ChairliftMap::__cordl_internal_get_polesParent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___polesParent;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::ChairliftMap::__cordl_internal_get_polesParent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___polesParent;
}
constexpr void GlobalNamespace::ChairliftMap::__cordl_internal_set_polesParent(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___polesParent = value;
}
inline void GlobalNamespace::ChairliftMap::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ChairliftMap*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::ChairliftMap* GlobalNamespace::ChairliftMap::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::ChairliftMap*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ChairliftMap::ChairliftMap()   {
}

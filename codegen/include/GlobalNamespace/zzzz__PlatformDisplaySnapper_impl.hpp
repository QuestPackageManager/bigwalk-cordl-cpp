#pragma once
// IWYU pragma private; include "GlobalNamespace/PlatformDisplaySnapper.hpp"
#include "UnityEngine/zzzz__LayerMask_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__PlatformDisplaySnapper_def.hpp"
#include "GlobalNamespace/zzzz__PlatformDisplayMap_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::PlatformDisplaySnapper._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlatformDisplaySnapper::*)()>(&::GlobalNamespace::PlatformDisplaySnapper::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802dd7c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlatformDisplaySnapper*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::PlatformDisplayMap>& GlobalNamespace::PlatformDisplaySnapper::__cordl_internal_get_platformDisplayMap()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___platformDisplayMap;
}
constexpr ::UnityW<::GlobalNamespace::PlatformDisplayMap> const& GlobalNamespace::PlatformDisplaySnapper::__cordl_internal_get_platformDisplayMap() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___platformDisplayMap;
}
constexpr void GlobalNamespace::PlatformDisplaySnapper::__cordl_internal_set_platformDisplayMap(::UnityW<::GlobalNamespace::PlatformDisplayMap>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___platformDisplayMap = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::PlatformDisplaySnapper::__cordl_internal_get_direction()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___direction;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::PlatformDisplaySnapper::__cordl_internal_get_direction() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___direction;
}
constexpr void GlobalNamespace::PlatformDisplaySnapper::__cordl_internal_set_direction(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___direction = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::PlatformDisplaySnapper::__cordl_internal_get_offset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___offset;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::PlatformDisplaySnapper::__cordl_internal_get_offset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___offset;
}
constexpr void GlobalNamespace::PlatformDisplaySnapper::__cordl_internal_set_offset(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___offset = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::PlatformDisplaySnapper::__cordl_internal_get_mapOffset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mapOffset;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::PlatformDisplaySnapper::__cordl_internal_get_mapOffset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mapOffset;
}
constexpr void GlobalNamespace::PlatformDisplaySnapper::__cordl_internal_set_mapOffset(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___mapOffset = value;
}
constexpr ::UnityEngine::LayerMask& GlobalNamespace::PlatformDisplaySnapper::__cordl_internal_get_layerMask()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___layerMask;
}
constexpr ::UnityEngine::LayerMask const& GlobalNamespace::PlatformDisplaySnapper::__cordl_internal_get_layerMask() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___layerMask;
}
constexpr void GlobalNamespace::PlatformDisplaySnapper::__cordl_internal_set_layerMask(::UnityEngine::LayerMask  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___layerMask = value;
}
inline void GlobalNamespace::PlatformDisplaySnapper::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlatformDisplaySnapper*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::PlatformDisplaySnapper* GlobalNamespace::PlatformDisplaySnapper::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::PlatformDisplaySnapper*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PlatformDisplaySnapper::PlatformDisplaySnapper()   {
}

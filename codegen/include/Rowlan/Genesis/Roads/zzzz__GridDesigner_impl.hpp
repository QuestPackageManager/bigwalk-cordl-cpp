#pragma once
// IWYU pragma private; include "Rowlan/Genesis/Roads/GridDesigner.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__LayerMask_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Vector2_impl.hpp"
#include "Rowlan/Genesis/Roads/zzzz__GridDesigner_def.hpp"
#include "Rowlan/Genesis/Roads/zzzz__GridDesigner_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
//  Writing Method size for method: ::Rowlan::Genesis::Roads::GridDesigner_JitterSettings._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rowlan::Genesis::Roads::GridDesigner_JitterSettings::*)()>(&::Rowlan::Genesis::Roads::GridDesigner_JitterSettings::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x181abead0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rowlan::Genesis::Roads::GridDesigner_JitterSettings*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Vector2& Rowlan::Genesis::Roads::GridDesigner_JitterSettings::__cordl_internal_get_rotationOffset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rotationOffset;
}
constexpr ::UnityEngine::Vector2 const& Rowlan::Genesis::Roads::GridDesigner_JitterSettings::__cordl_internal_get_rotationOffset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rotationOffset;
}
constexpr void Rowlan::Genesis::Roads::GridDesigner_JitterSettings::__cordl_internal_set_rotationOffset(::UnityEngine::Vector2  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rotationOffset = value;
}
constexpr ::UnityEngine::Vector2& Rowlan::Genesis::Roads::GridDesigner_JitterSettings::__cordl_internal_get_heightOffset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___heightOffset;
}
constexpr ::UnityEngine::Vector2 const& Rowlan::Genesis::Roads::GridDesigner_JitterSettings::__cordl_internal_get_heightOffset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___heightOffset;
}
constexpr void Rowlan::Genesis::Roads::GridDesigner_JitterSettings::__cordl_internal_set_heightOffset(::UnityEngine::Vector2  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___heightOffset = value;
}
constexpr ::UnityEngine::Vector2& Rowlan::Genesis::Roads::GridDesigner_JitterSettings::__cordl_internal_get_positionOffset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___positionOffset;
}
constexpr ::UnityEngine::Vector2 const& Rowlan::Genesis::Roads::GridDesigner_JitterSettings::__cordl_internal_get_positionOffset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___positionOffset;
}
constexpr void Rowlan::Genesis::Roads::GridDesigner_JitterSettings::__cordl_internal_set_positionOffset(::UnityEngine::Vector2  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___positionOffset = value;
}
inline void Rowlan::Genesis::Roads::GridDesigner_JitterSettings::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rowlan::Genesis::Roads::GridDesigner_JitterSettings*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Rowlan::Genesis::Roads::GridDesigner_JitterSettings* Rowlan::Genesis::Roads::GridDesigner_JitterSettings::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Rowlan::Genesis::Roads::GridDesigner_JitterSettings*>());
}
// Ctor Parameters []
constexpr ::Rowlan::Genesis::Roads::GridDesigner_JitterSettings::GridDesigner_JitterSettings()   {
}
//  Writing Method size for method: ::Rowlan::Genesis::Roads::GridDesigner._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rowlan::Genesis::Roads::GridDesigner::*)()>(&::Rowlan::Genesis::Roads::GridDesigner::_ctor)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x181abe890;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rowlan::Genesis::Roads::GridDesigner*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& Rowlan::Genesis::Roads::GridDesigner::__cordl_internal_get_countX()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___countX;
}
constexpr int32_t const& Rowlan::Genesis::Roads::GridDesigner::__cordl_internal_get_countX() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___countX;
}
constexpr void Rowlan::Genesis::Roads::GridDesigner::__cordl_internal_set_countX(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___countX = value;
}
constexpr int32_t& Rowlan::Genesis::Roads::GridDesigner::__cordl_internal_get_countZ()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___countZ;
}
constexpr int32_t const& Rowlan::Genesis::Roads::GridDesigner::__cordl_internal_get_countZ() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___countZ;
}
constexpr void Rowlan::Genesis::Roads::GridDesigner::__cordl_internal_set_countZ(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___countZ = value;
}
constexpr float_t& Rowlan::Genesis::Roads::GridDesigner::__cordl_internal_get_distanceX()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___distanceX;
}
constexpr float_t const& Rowlan::Genesis::Roads::GridDesigner::__cordl_internal_get_distanceX() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___distanceX;
}
constexpr void Rowlan::Genesis::Roads::GridDesigner::__cordl_internal_set_distanceX(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___distanceX = value;
}
constexpr float_t& Rowlan::Genesis::Roads::GridDesigner::__cordl_internal_get_distanceZ()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___distanceZ;
}
constexpr float_t const& Rowlan::Genesis::Roads::GridDesigner::__cordl_internal_get_distanceZ() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___distanceZ;
}
constexpr void Rowlan::Genesis::Roads::GridDesigner::__cordl_internal_set_distanceZ(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___distanceZ = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& Rowlan::Genesis::Roads::GridDesigner::__cordl_internal_get_intersectionCross()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___intersectionCross;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& Rowlan::Genesis::Roads::GridDesigner::__cordl_internal_get_intersectionCross() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___intersectionCross;
}
constexpr void Rowlan::Genesis::Roads::GridDesigner::__cordl_internal_set_intersectionCross(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___intersectionCross = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& Rowlan::Genesis::Roads::GridDesigner::__cordl_internal_get_intersectionT()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___intersectionT;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& Rowlan::Genesis::Roads::GridDesigner::__cordl_internal_get_intersectionT() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___intersectionT;
}
constexpr void Rowlan::Genesis::Roads::GridDesigner::__cordl_internal_set_intersectionT(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___intersectionT = value;
}
constexpr ::UnityEngine::LayerMask& Rowlan::Genesis::Roads::GridDesigner::__cordl_internal_get_layer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___layer;
}
constexpr ::UnityEngine::LayerMask const& Rowlan::Genesis::Roads::GridDesigner::__cordl_internal_get_layer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___layer;
}
constexpr void Rowlan::Genesis::Roads::GridDesigner::__cordl_internal_set_layer(::UnityEngine::LayerMask  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___layer = value;
}
constexpr float_t& Rowlan::Genesis::Roads::GridDesigner::__cordl_internal_get_positionOffsetY()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___positionOffsetY;
}
constexpr float_t const& Rowlan::Genesis::Roads::GridDesigner::__cordl_internal_get_positionOffsetY() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___positionOffsetY;
}
constexpr void Rowlan::Genesis::Roads::GridDesigner::__cordl_internal_set_positionOffsetY(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___positionOffsetY = value;
}
constexpr ::Rowlan::Genesis::Roads::GridDesigner_JitterSettings*& Rowlan::Genesis::Roads::GridDesigner::__cordl_internal_get_jitterSettings()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___jitterSettings;
}
constexpr ::Rowlan::Genesis::Roads::GridDesigner_JitterSettings* const& Rowlan::Genesis::Roads::GridDesigner::__cordl_internal_get_jitterSettings() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___jitterSettings;
}
constexpr void Rowlan::Genesis::Roads::GridDesigner::__cordl_internal_set_jitterSettings(::Rowlan::Genesis::Roads::GridDesigner_JitterSettings*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___jitterSettings = value;
}
inline void Rowlan::Genesis::Roads::GridDesigner::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rowlan::Genesis::Roads::GridDesigner*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Rowlan::Genesis::Roads::GridDesigner* Rowlan::Genesis::Roads::GridDesigner::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Rowlan::Genesis::Roads::GridDesigner*>());
}
// Ctor Parameters []
constexpr ::Rowlan::Genesis::Roads::GridDesigner::GridDesigner()   {
}

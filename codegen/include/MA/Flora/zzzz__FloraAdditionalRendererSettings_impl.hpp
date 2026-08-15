#pragma once
// IWYU pragma private; include "MA/Flora/FloraAdditionalRendererSettings.hpp"
#include "MA/Flora/zzzz__FloraAdditionalPerInstanceData_impl.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "MA/Flora/zzzz__FloraAdditionalRendererSettings_def.hpp"
#include "UnityEngine/zzzz__ISerializationCallbackReceiver_def.hpp"
//  Writing Method size for method: ::MA::Flora::FloraAdditionalRendererSettings.UnityEngine_ISerializationCallbackReceiver_OnBeforeSerialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::FloraAdditionalRendererSettings::*)()>(&::MA::Flora::FloraAdditionalRendererSettings::UnityEngine_ISerializationCallbackReceiver_OnBeforeSerialize)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraAdditionalRendererSettings*>(),
                        {"UnityEngine.ISerializationCallbackReceiver.OnBeforeSerialize", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraAdditionalRendererSettings.UnityEngine_ISerializationCallbackReceiver_OnAfterDeserialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::FloraAdditionalRendererSettings::*)()>(&::MA::Flora::FloraAdditionalRendererSettings::UnityEngine_ISerializationCallbackReceiver_OnAfterDeserialize)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1814c5c50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraAdditionalRendererSettings*>(),
                        {"UnityEngine.ISerializationCallbackReceiver.OnAfterDeserialize", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraAdditionalRendererSettings._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::FloraAdditionalRendererSettings::*)()>(&::MA::Flora::FloraAdditionalRendererSettings::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1814c5c60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraAdditionalRendererSettings*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::MA::Flora::FloraAdditionalPerInstanceData& MA::Flora::FloraAdditionalRendererSettings::__cordl_internal_get_AdditionalPerInstanceData()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___AdditionalPerInstanceData;
}
constexpr ::MA::Flora::FloraAdditionalPerInstanceData const& MA::Flora::FloraAdditionalRendererSettings::__cordl_internal_get_AdditionalPerInstanceData() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___AdditionalPerInstanceData;
}
constexpr void MA::Flora::FloraAdditionalRendererSettings::__cordl_internal_set_AdditionalPerInstanceData(::MA::Flora::FloraAdditionalPerInstanceData  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___AdditionalPerInstanceData = value;
}
constexpr ::UnityEngine::Color& MA::Flora::FloraAdditionalRendererSettings::__cordl_internal_get_InitialVariationColor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___InitialVariationColor;
}
constexpr ::UnityEngine::Color const& MA::Flora::FloraAdditionalRendererSettings::__cordl_internal_get_InitialVariationColor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___InitialVariationColor;
}
constexpr void MA::Flora::FloraAdditionalRendererSettings::__cordl_internal_set_InitialVariationColor(::UnityEngine::Color  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___InitialVariationColor = value;
}
constexpr float_t& MA::Flora::FloraAdditionalRendererSettings::__cordl_internal_get_MaxRenderDistance()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MaxRenderDistance;
}
constexpr float_t const& MA::Flora::FloraAdditionalRendererSettings::__cordl_internal_get_MaxRenderDistance() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MaxRenderDistance;
}
constexpr void MA::Flora::FloraAdditionalRendererSettings::__cordl_internal_set_MaxRenderDistance(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___MaxRenderDistance = value;
}
constexpr float_t& MA::Flora::FloraAdditionalRendererSettings::__cordl_internal_get_MaxShadowDistance()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MaxShadowDistance;
}
constexpr float_t const& MA::Flora::FloraAdditionalRendererSettings::__cordl_internal_get_MaxShadowDistance() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MaxShadowDistance;
}
constexpr void MA::Flora::FloraAdditionalRendererSettings::__cordl_internal_set_MaxShadowDistance(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___MaxShadowDistance = value;
}
constexpr int32_t& MA::Flora::FloraAdditionalRendererSettings::__cordl_internal_get_MinShadowLOD()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MinShadowLOD;
}
constexpr int32_t const& MA::Flora::FloraAdditionalRendererSettings::__cordl_internal_get_MinShadowLOD() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MinShadowLOD;
}
constexpr void MA::Flora::FloraAdditionalRendererSettings::__cordl_internal_set_MinShadowLOD(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___MinShadowLOD = value;
}
constexpr bool& MA::Flora::FloraAdditionalRendererSettings::__cordl_internal_get_AffectedByGlobalDensity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___AffectedByGlobalDensity;
}
constexpr bool const& MA::Flora::FloraAdditionalRendererSettings::__cordl_internal_get_AffectedByGlobalDensity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___AffectedByGlobalDensity;
}
constexpr void MA::Flora::FloraAdditionalRendererSettings::__cordl_internal_set_AffectedByGlobalDensity(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___AffectedByGlobalDensity = value;
}
constexpr bool& MA::Flora::FloraAdditionalRendererSettings::__cordl_internal_get_AffectedByRangeDensity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___AffectedByRangeDensity;
}
constexpr bool const& MA::Flora::FloraAdditionalRendererSettings::__cordl_internal_get_AffectedByRangeDensity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___AffectedByRangeDensity;
}
constexpr void MA::Flora::FloraAdditionalRendererSettings::__cordl_internal_set_AffectedByRangeDensity(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___AffectedByRangeDensity = value;
}
constexpr bool& MA::Flora::FloraAdditionalRendererSettings::__cordl_internal_get_AffectedByMinimumScreenSize()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___AffectedByMinimumScreenSize;
}
constexpr bool const& MA::Flora::FloraAdditionalRendererSettings::__cordl_internal_get_AffectedByMinimumScreenSize() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___AffectedByMinimumScreenSize;
}
constexpr void MA::Flora::FloraAdditionalRendererSettings::__cordl_internal_set_AffectedByMinimumScreenSize(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___AffectedByMinimumScreenSize = value;
}
constexpr bool& MA::Flora::FloraAdditionalRendererSettings::__cordl_internal_get_RequiresPerInstanceRandomID()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RequiresPerInstanceRandomID;
}
constexpr bool const& MA::Flora::FloraAdditionalRendererSettings::__cordl_internal_get_RequiresPerInstanceRandomID() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RequiresPerInstanceRandomID;
}
constexpr void MA::Flora::FloraAdditionalRendererSettings::__cordl_internal_set_RequiresPerInstanceRandomID(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___RequiresPerInstanceRandomID = value;
}
inline void MA::Flora::FloraAdditionalRendererSettings::UnityEngine_ISerializationCallbackReceiver_OnBeforeSerialize()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraAdditionalRendererSettings*>(),
                        {"UnityEngine.ISerializationCallbackReceiver.OnBeforeSerialize", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void MA::Flora::FloraAdditionalRendererSettings::UnityEngine_ISerializationCallbackReceiver_OnAfterDeserialize()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraAdditionalRendererSettings*>(),
                        {"UnityEngine.ISerializationCallbackReceiver.OnAfterDeserialize", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void MA::Flora::FloraAdditionalRendererSettings::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraAdditionalRendererSettings*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::MA::Flora::FloraAdditionalRendererSettings* MA::Flora::FloraAdditionalRendererSettings::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::MA::Flora::FloraAdditionalRendererSettings*>());
}
/// @brief Convert operator to "::UnityEngine::ISerializationCallbackReceiver"
constexpr  MA::Flora::FloraAdditionalRendererSettings::operator ::UnityEngine::ISerializationCallbackReceiver*() noexcept {
return static_cast<::UnityEngine::ISerializationCallbackReceiver*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::ISerializationCallbackReceiver"
constexpr ::UnityEngine::ISerializationCallbackReceiver* MA::Flora::FloraAdditionalRendererSettings::i___UnityEngine__ISerializationCallbackReceiver() noexcept {
return static_cast<::UnityEngine::ISerializationCallbackReceiver*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::MA::Flora::FloraAdditionalRendererSettings::FloraAdditionalRendererSettings()   {
}

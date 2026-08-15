#pragma once
// IWYU pragma private; include "GlobalNamespace/DevBakeHelper.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__DevBakeHelper_def.hpp"
#include "GlobalNamespace/zzzz__DevBakeHelper_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::DevBakeHelper_BakeType::DevBakeHelper_BakeType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::DevBakeHelper_BakeType::DevBakeHelper_BakeType()   {
}
constexpr ::GlobalNamespace::DevBakeHelper_BakeType  GlobalNamespace::DevBakeHelper_BakeType::None{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::DevBakeHelper_BakeType  GlobalNamespace::DevBakeHelper_BakeType::Rock{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::DevBakeHelper_BakeType  GlobalNamespace::DevBakeHelper_BakeType::Ocean{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::DevBakeHelper_BakeType  GlobalNamespace::DevBakeHelper_BakeType::MVOff{static_cast<int32_t>(0x3)};
constexpr ::GlobalNamespace::DevBakeHelper_BakeType  GlobalNamespace::DevBakeHelper_BakeType::BiomesOff{static_cast<int32_t>(0x4)};
constexpr ::GlobalNamespace::DevBakeHelper_BakeType  GlobalNamespace::DevBakeHelper_BakeType::VegMap{static_cast<int32_t>(0x5)};
constexpr ::GlobalNamespace::DevBakeHelper_BakeType  GlobalNamespace::DevBakeHelper_BakeType::PaperMap{static_cast<int32_t>(0x6)};
constexpr ::GlobalNamespace::DevBakeHelper_BakeType  GlobalNamespace::DevBakeHelper_BakeType::ReliefMap{static_cast<int32_t>(0x7)};
// Ctor Parameters [CppParam { name: "bakeType", ty: "::GlobalNamespace::DevBakeHelper_BakeType", modifiers: "", def_value: Some("{}") }, CppParam { name: "activeMask", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "activeValue", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "localPositionOffsetMask", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "localPositionOffset", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}") }, CppParam { name: "enabledMask", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "enabledTarget", ty: "::UnityW<::UnityEngine::MonoBehaviour>", modifiers: "", def_value: Some("{}") }, CppParam { name: "enabledValue", ty: "bool", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::DevBakeHelper_Preset::DevBakeHelper_Preset(::GlobalNamespace::DevBakeHelper_BakeType  bakeType, bool  activeMask, bool  activeValue, bool  localPositionOffsetMask, ::UnityEngine::Vector3  localPositionOffset, bool  enabledMask, ::UnityW<::UnityEngine::MonoBehaviour>  enabledTarget, bool  enabledValue) noexcept  {
this->bakeType = bakeType;
this->activeMask = activeMask;
this->activeValue = activeValue;
this->localPositionOffsetMask = localPositionOffsetMask;
this->localPositionOffset = localPositionOffset;
this->enabledMask = enabledMask;
this->enabledTarget = enabledTarget;
this->enabledValue = enabledValue;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::DevBakeHelper_Preset::DevBakeHelper_Preset()   {
}
//  Writing Method size for method: ::GlobalNamespace::DevBakeHelper._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::DevBakeHelper::*)()>(&::GlobalNamespace::DevBakeHelper::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802dd7c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DevBakeHelper*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::GlobalNamespace::DevBakeHelper_Preset>& GlobalNamespace::DevBakeHelper::__cordl_internal_get_presets()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___presets;
}
constexpr ::ArrayW<::GlobalNamespace::DevBakeHelper_Preset> const& GlobalNamespace::DevBakeHelper::__cordl_internal_get_presets() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___presets;
}
constexpr void GlobalNamespace::DevBakeHelper::__cordl_internal_set_presets(::ArrayW<::GlobalNamespace::DevBakeHelper_Preset>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___presets = value;
}
constexpr ::GlobalNamespace::DevBakeHelper_BakeType& GlobalNamespace::DevBakeHelper::__cordl_internal_get_applyButton()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___applyButton;
}
constexpr ::GlobalNamespace::DevBakeHelper_BakeType const& GlobalNamespace::DevBakeHelper::__cordl_internal_get_applyButton() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___applyButton;
}
constexpr void GlobalNamespace::DevBakeHelper::__cordl_internal_set_applyButton(::GlobalNamespace::DevBakeHelper_BakeType  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___applyButton = value;
}
inline void GlobalNamespace::DevBakeHelper::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DevBakeHelper*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::DevBakeHelper* GlobalNamespace::DevBakeHelper::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::DevBakeHelper*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::DevBakeHelper::DevBakeHelper()   {
}

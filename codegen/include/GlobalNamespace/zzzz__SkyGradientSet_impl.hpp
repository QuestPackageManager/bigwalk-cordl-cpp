#pragma once
// IWYU pragma private; include "GlobalNamespace/SkyGradientSet.hpp"
#include "UnityEngine/zzzz__ScriptableObject_impl.hpp"
#include "GlobalNamespace/zzzz__SkyGradientSet_def.hpp"
#include "GlobalNamespace/zzzz__SkyGradientSet_def.hpp"
#include "UnityEngine/zzzz__Gradient_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::SkyGradientSet_SkyColorGroup.SetActive
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SkyGradientSet_SkyColorGroup::*)()>(&::GlobalNamespace::SkyGradientSet_SkyColorGroup::SetActive)> {
  constexpr static std::size_t size = 0x890;
  constexpr static std::size_t addrs = 0x180428a40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SkyGradientSet_SkyColorGroup>(),
                        {"SetActive", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::SkyGradientSet_SkyColorGroup::SetActive()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SkyGradientSet_SkyColorGroup>(),
                        {"SetActive", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "frontColorGradient0", ty: "::UnityEngine::Gradient*", modifiers: "", def_value: Some("{}") }, CppParam { name: "backColorGradient0", ty: "::UnityEngine::Gradient*", modifiers: "", def_value: Some("{}") }, CppParam { name: "frontColorGradient1", ty: "::UnityEngine::Gradient*", modifiers: "", def_value: Some("{}") }, CppParam { name: "backColorGradient1", ty: "::UnityEngine::Gradient*", modifiers: "", def_value: Some("{}") }, CppParam { name: "frontColorGradient2", ty: "::UnityEngine::Gradient*", modifiers: "", def_value: Some("{}") }, CppParam { name: "backColorGradient2", ty: "::UnityEngine::Gradient*", modifiers: "", def_value: Some("{}") }, CppParam { name: "frontColorGradient3", ty: "::UnityEngine::Gradient*", modifiers: "", def_value: Some("{}") }, CppParam { name: "backColorGradient3", ty: "::UnityEngine::Gradient*", modifiers: "", def_value: Some("{}") }, CppParam { name: "frontColorGradient4", ty: "::UnityEngine::Gradient*", modifiers: "", def_value: Some("{}") }, CppParam { name: "backColorGradient4", ty: "::UnityEngine::Gradient*", modifiers: "", def_value: Some("{}") }, CppParam { name: "frontColorGradient5", ty: "::UnityEngine::Gradient*", modifiers: "", def_value: Some("{}") }, CppParam { name: "backColorGradient5", ty: "::UnityEngine::Gradient*", modifiers: "", def_value: Some("{}") }, CppParam { name: "ambientSkyColorGradient", ty: "::UnityEngine::Gradient*", modifiers: "", def_value: Some("{}") }, CppParam { name: "ambientEquatorColorGradient", ty: "::UnityEngine::Gradient*", modifiers: "", def_value: Some("{}") }, CppParam { name: "ambientGroundColorGradient", ty: "::UnityEngine::Gradient*", modifiers: "", def_value: Some("{}") }, CppParam { name: "fogColorGradient", ty: "::UnityEngine::Gradient*", modifiers: "", def_value: Some("{}") }, CppParam { name: "cloudSunLightColorGradient", ty: "::UnityEngine::Gradient*", modifiers: "", def_value: Some("{}") }, CppParam { name: "cloudAmbientColorGradient", ty: "::UnityEngine::Gradient*", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::SkyGradientSet_SkyColorGroup::SkyGradientSet_SkyColorGroup(::UnityEngine::Gradient*  frontColorGradient0, ::UnityEngine::Gradient*  backColorGradient0, ::UnityEngine::Gradient*  frontColorGradient1, ::UnityEngine::Gradient*  backColorGradient1, ::UnityEngine::Gradient*  frontColorGradient2, ::UnityEngine::Gradient*  backColorGradient2, ::UnityEngine::Gradient*  frontColorGradient3, ::UnityEngine::Gradient*  backColorGradient3, ::UnityEngine::Gradient*  frontColorGradient4, ::UnityEngine::Gradient*  backColorGradient4, ::UnityEngine::Gradient*  frontColorGradient5, ::UnityEngine::Gradient*  backColorGradient5, ::UnityEngine::Gradient*  ambientSkyColorGradient, ::UnityEngine::Gradient*  ambientEquatorColorGradient, ::UnityEngine::Gradient*  ambientGroundColorGradient, ::UnityEngine::Gradient*  fogColorGradient, ::UnityEngine::Gradient*  cloudSunLightColorGradient, ::UnityEngine::Gradient*  cloudAmbientColorGradient) noexcept  {
this->frontColorGradient0 = frontColorGradient0;
this->backColorGradient0 = backColorGradient0;
this->frontColorGradient1 = frontColorGradient1;
this->backColorGradient1 = backColorGradient1;
this->frontColorGradient2 = frontColorGradient2;
this->backColorGradient2 = backColorGradient2;
this->frontColorGradient3 = frontColorGradient3;
this->backColorGradient3 = backColorGradient3;
this->frontColorGradient4 = frontColorGradient4;
this->backColorGradient4 = backColorGradient4;
this->frontColorGradient5 = frontColorGradient5;
this->backColorGradient5 = backColorGradient5;
this->ambientSkyColorGradient = ambientSkyColorGradient;
this->ambientEquatorColorGradient = ambientEquatorColorGradient;
this->ambientGroundColorGradient = ambientGroundColorGradient;
this->fogColorGradient = fogColorGradient;
this->cloudSunLightColorGradient = cloudSunLightColorGradient;
this->cloudAmbientColorGradient = cloudAmbientColorGradient;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SkyGradientSet_SkyColorGroup::SkyGradientSet_SkyColorGroup()   {
}
//  Writing Method size for method: ::GlobalNamespace::SkyGradientSet._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SkyGradientSet::*)()>(&::GlobalNamespace::SkyGradientSet::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180303cd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SkyGradientSet*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::SkyGradientSet_SkyColorGroup& GlobalNamespace::SkyGradientSet::__cordl_internal_get_am()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___am;
}
constexpr ::GlobalNamespace::SkyGradientSet_SkyColorGroup const& GlobalNamespace::SkyGradientSet::__cordl_internal_get_am() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___am;
}
constexpr void GlobalNamespace::SkyGradientSet::__cordl_internal_set_am(::GlobalNamespace::SkyGradientSet_SkyColorGroup  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___am = value;
}
constexpr ::GlobalNamespace::SkyGradientSet_SkyColorGroup& GlobalNamespace::SkyGradientSet::__cordl_internal_get_pm()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pm;
}
constexpr ::GlobalNamespace::SkyGradientSet_SkyColorGroup const& GlobalNamespace::SkyGradientSet::__cordl_internal_get_pm() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pm;
}
constexpr void GlobalNamespace::SkyGradientSet::__cordl_internal_set_pm(::GlobalNamespace::SkyGradientSet_SkyColorGroup  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___pm = value;
}
inline void GlobalNamespace::SkyGradientSet::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SkyGradientSet*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::SkyGradientSet* GlobalNamespace::SkyGradientSet::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::SkyGradientSet*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SkyGradientSet::SkyGradientSet()   {
}

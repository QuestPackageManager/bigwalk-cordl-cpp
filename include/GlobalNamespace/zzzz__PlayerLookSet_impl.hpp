#pragma once
// IWYU pragma private; include "GlobalNamespace/PlayerLookSet.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "UnityEngine/zzzz__ScriptableObject_impl.hpp"
#include "GlobalNamespace/zzzz__PlayerLookSet_def.hpp"
#include "GlobalNamespace/zzzz__PlayerLookSet_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::PlayerLookSet_FontStyle::PlayerLookSet_FontStyle(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PlayerLookSet_FontStyle::PlayerLookSet_FontStyle()   {
}
constexpr ::GlobalNamespace::PlayerLookSet_FontStyle  GlobalNamespace::PlayerLookSet_FontStyle::Light{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::PlayerLookSet_FontStyle  GlobalNamespace::PlayerLookSet_FontStyle::Dark{static_cast<int32_t>(0x1)};
// Ctor Parameters [CppParam { name: "color", ty: "::UnityEngine::Color", modifiers: "", def_value: Some("{}") }, CppParam { name: "fontStyle", ty: "::GlobalNamespace::PlayerLookSet_FontStyle", modifiers: "", def_value: Some("{}") }, CppParam { name: "rewardOnly", ty: "bool", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::PlayerLookSet_LookColor::PlayerLookSet_LookColor(::UnityEngine::Color  color, ::GlobalNamespace::PlayerLookSet_FontStyle  fontStyle, bool  rewardOnly) noexcept  {
this->color = color;
this->fontStyle = fontStyle;
this->rewardOnly = rewardOnly;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PlayerLookSet_LookColor::PlayerLookSet_LookColor()   {
}
//  Writing Method size for method: ::GlobalNamespace::PlayerLookSet.GetMaterial
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Material> (::GlobalNamespace::PlayerLookSet::*)(::UnityEngine::Color)>(&::GlobalNamespace::PlayerLookSet::GetMaterial)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1803609a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerLookSet*>(),
                        {"GetMaterial", {}, {::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerLookSet.GetColor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Color (::GlobalNamespace::PlayerLookSet::*)(int32_t)>(&::GlobalNamespace::PlayerLookSet::GetColor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x180360970;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerLookSet*>(),
                        {"GetColor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerLookSet._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerLookSet::*)()>(&::GlobalNamespace::PlayerLookSet::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180303cd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerLookSet*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::GlobalNamespace::PlayerLookSet_LookColor>& GlobalNamespace::PlayerLookSet::__cordl_internal_get_colors()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___colors;
}
constexpr ::ArrayW<::GlobalNamespace::PlayerLookSet_LookColor> const& GlobalNamespace::PlayerLookSet::__cordl_internal_get_colors() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___colors;
}
constexpr void GlobalNamespace::PlayerLookSet::__cordl_internal_set_colors(::ArrayW<::GlobalNamespace::PlayerLookSet_LookColor>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___colors = value;
}
constexpr ::UnityW<::UnityEngine::Material>& GlobalNamespace::PlayerLookSet::__cordl_internal_get_defaultMaterial()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___defaultMaterial;
}
constexpr ::UnityW<::UnityEngine::Material> const& GlobalNamespace::PlayerLookSet::__cordl_internal_get_defaultMaterial() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___defaultMaterial;
}
constexpr void GlobalNamespace::PlayerLookSet::__cordl_internal_set_defaultMaterial(::UnityW<::UnityEngine::Material>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___defaultMaterial = value;
}
constexpr ::StringW& GlobalNamespace::PlayerLookSet::__cordl_internal_get_colorPropertyName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___colorPropertyName;
}
constexpr ::StringW const& GlobalNamespace::PlayerLookSet::__cordl_internal_get_colorPropertyName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___colorPropertyName;
}
constexpr void GlobalNamespace::PlayerLookSet::__cordl_internal_set_colorPropertyName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___colorPropertyName = value;
}
inline ::UnityW<::UnityEngine::Material> GlobalNamespace::PlayerLookSet::GetMaterial(::UnityEngine::Color  color)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerLookSet*>(),
                        {"GetMaterial", {}, {::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Material>>(this, ___internal_method, color);
}
inline ::UnityEngine::Color GlobalNamespace::PlayerLookSet::GetColor(int32_t  lookId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerLookSet*>(),
                        {"GetColor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color>(this, ___internal_method, lookId);
}
inline void GlobalNamespace::PlayerLookSet::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerLookSet*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::PlayerLookSet* GlobalNamespace::PlayerLookSet::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::PlayerLookSet*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PlayerLookSet::PlayerLookSet()   {
}

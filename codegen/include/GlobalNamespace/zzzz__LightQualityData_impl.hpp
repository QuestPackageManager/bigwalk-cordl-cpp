#pragma once
// IWYU pragma private; include "GlobalNamespace/LightQualityData.hpp"
#include "UnityEngine/zzzz__LayerMask_impl.hpp"
#include "UnityEngine/zzzz__ScriptableObject_impl.hpp"
#include "GlobalNamespace/zzzz__LightQualityData_def.hpp"
#include "GlobalNamespace/zzzz__LightQualityData_def.hpp"
#include "UnityEngine/zzzz__Light_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::LightQualityData_LightPriority::LightQualityData_LightPriority(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::LightQualityData_LightPriority::LightQualityData_LightPriority()   {
}
constexpr ::GlobalNamespace::LightQualityData_LightPriority  GlobalNamespace::LightQualityData_LightPriority::Default{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::LightQualityData_LightPriority  GlobalNamespace::LightQualityData_LightPriority::Priority{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::LightQualityData_LightPriority  GlobalNamespace::LightQualityData_LightPriority::Static{static_cast<int32_t>(0x2)};
//  Writing Method size for method: ::GlobalNamespace::LightQualityData_LightQuality.ApplyToLight
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LightQualityData_LightQuality::*)(::UnityEngine::Light*)>(&::GlobalNamespace::LightQualityData_LightQuality::ApplyToLight)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x1803ec9c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LightQualityData_LightQuality>(),
                        {"ApplyToLight", {}, {::i2c::type_of<::UnityEngine::Light*>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::LightQualityData_LightQuality::ApplyToLight(::UnityEngine::Light*  light)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LightQualityData_LightQuality>(),
                        {"ApplyToLight", {}, {::i2c::type_of<::UnityEngine::Light*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, light);
}
// Ctor Parameters [CppParam { name: "shadowMask", ty: "::UnityEngine::LayerMask", modifiers: "", def_value: Some("{}") }, CppParam { name: "priority", ty: "::GlobalNamespace::LightQualityData_LightPriority", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::LightQualityData_LightQuality::LightQualityData_LightQuality(::UnityEngine::LayerMask  shadowMask, ::GlobalNamespace::LightQualityData_LightPriority  priority) noexcept  {
this->shadowMask = shadowMask;
this->priority = priority;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::LightQualityData_LightQuality::LightQualityData_LightQuality()   {
}
//  Writing Method size for method: ::GlobalNamespace::LightQualityData.GetQuality
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::LightQualityData_LightQuality (::GlobalNamespace::LightQualityData::*)(int32_t)>(&::GlobalNamespace::LightQualityData::GetQuality)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x1803ec8f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LightQualityData*>(),
                        {"GetQuality", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LightQualityData.ApplyToLight
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LightQualityData::*)(::UnityEngine::Light*, int32_t)>(&::GlobalNamespace::LightQualityData::ApplyToLight)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x1803ec820;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LightQualityData*>(),
                        {"ApplyToLight", {}, {::i2c::type_of<::UnityEngine::Light*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LightQualityData._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LightQualityData::*)()>(&::GlobalNamespace::LightQualityData::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180303cd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LightQualityData*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::LightQualityData_LightQuality& GlobalNamespace::LightQualityData::__cordl_internal_get_pc0()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pc0;
}
constexpr ::GlobalNamespace::LightQualityData_LightQuality const& GlobalNamespace::LightQualityData::__cordl_internal_get_pc0() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pc0;
}
constexpr void GlobalNamespace::LightQualityData::__cordl_internal_set_pc0(::GlobalNamespace::LightQualityData_LightQuality  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___pc0 = value;
}
constexpr ::GlobalNamespace::LightQualityData_LightQuality& GlobalNamespace::LightQualityData::__cordl_internal_get_pc1()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pc1;
}
constexpr ::GlobalNamespace::LightQualityData_LightQuality const& GlobalNamespace::LightQualityData::__cordl_internal_get_pc1() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pc1;
}
constexpr void GlobalNamespace::LightQualityData::__cordl_internal_set_pc1(::GlobalNamespace::LightQualityData_LightQuality  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___pc1 = value;
}
constexpr ::GlobalNamespace::LightQualityData_LightQuality& GlobalNamespace::LightQualityData::__cordl_internal_get_pc2()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pc2;
}
constexpr ::GlobalNamespace::LightQualityData_LightQuality const& GlobalNamespace::LightQualityData::__cordl_internal_get_pc2() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pc2;
}
constexpr void GlobalNamespace::LightQualityData::__cordl_internal_set_pc2(::GlobalNamespace::LightQualityData_LightQuality  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___pc2 = value;
}
constexpr ::GlobalNamespace::LightQualityData_LightQuality& GlobalNamespace::LightQualityData::__cordl_internal_get_pc3()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pc3;
}
constexpr ::GlobalNamespace::LightQualityData_LightQuality const& GlobalNamespace::LightQualityData::__cordl_internal_get_pc3() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pc3;
}
constexpr void GlobalNamespace::LightQualityData::__cordl_internal_set_pc3(::GlobalNamespace::LightQualityData_LightQuality  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___pc3 = value;
}
constexpr ::GlobalNamespace::LightQualityData_LightQuality& GlobalNamespace::LightQualityData::__cordl_internal_get_pc4()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pc4;
}
constexpr ::GlobalNamespace::LightQualityData_LightQuality const& GlobalNamespace::LightQualityData::__cordl_internal_get_pc4() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pc4;
}
constexpr void GlobalNamespace::LightQualityData::__cordl_internal_set_pc4(::GlobalNamespace::LightQualityData_LightQuality  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___pc4 = value;
}
constexpr ::GlobalNamespace::LightQualityData_LightQuality& GlobalNamespace::LightQualityData::__cordl_internal_get_pc5()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pc5;
}
constexpr ::GlobalNamespace::LightQualityData_LightQuality const& GlobalNamespace::LightQualityData::__cordl_internal_get_pc5() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pc5;
}
constexpr void GlobalNamespace::LightQualityData::__cordl_internal_set_pc5(::GlobalNamespace::LightQualityData_LightQuality  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___pc5 = value;
}
constexpr ::GlobalNamespace::LightQualityData_LightQuality& GlobalNamespace::LightQualityData::__cordl_internal_get_switch2()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___switch2;
}
constexpr ::GlobalNamespace::LightQualityData_LightQuality const& GlobalNamespace::LightQualityData::__cordl_internal_get_switch2() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___switch2;
}
constexpr void GlobalNamespace::LightQualityData::__cordl_internal_set_switch2(::GlobalNamespace::LightQualityData_LightQuality  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___switch2 = value;
}
constexpr ::GlobalNamespace::LightQualityData_LightQuality& GlobalNamespace::LightQualityData::__cordl_internal_get_ps5()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ps5;
}
constexpr ::GlobalNamespace::LightQualityData_LightQuality const& GlobalNamespace::LightQualityData::__cordl_internal_get_ps5() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ps5;
}
constexpr void GlobalNamespace::LightQualityData::__cordl_internal_set_ps5(::GlobalNamespace::LightQualityData_LightQuality  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ps5 = value;
}
inline ::GlobalNamespace::LightQualityData_LightQuality GlobalNamespace::LightQualityData::GetQuality(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LightQualityData*>(),
                        {"GetQuality", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::LightQualityData_LightQuality>(this, ___internal_method, index);
}
inline void GlobalNamespace::LightQualityData::ApplyToLight(::UnityEngine::Light*  light, int32_t  qualityIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LightQualityData*>(),
                        {"ApplyToLight", {}, {::i2c::type_of<::UnityEngine::Light*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, light, qualityIndex);
}
inline void GlobalNamespace::LightQualityData::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LightQualityData*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::LightQualityData* GlobalNamespace::LightQualityData::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::LightQualityData*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::LightQualityData::LightQualityData()   {
}

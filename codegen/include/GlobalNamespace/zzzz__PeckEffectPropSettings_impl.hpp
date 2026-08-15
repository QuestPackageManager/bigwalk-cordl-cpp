#pragma once
// IWYU pragma private; include "GlobalNamespace/PeckEffectPropSettings.hpp"
#include "GlobalNamespace/zzzz__PeckPropReference_impl.hpp"
#include "GlobalNamespace/zzzz__PeckSystemReference_impl.hpp"
#include "GlobalNamespace/zzzz__PropGroup_impl.hpp"
#include "GlobalNamespace/zzzz__PropSaveType_impl.hpp"
#include "GlobalNamespace/zzzz__Prop_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__PeckEffectPropSettings_def.hpp"
#include "GlobalNamespace/zzzz__PeckContext_def.hpp"
#include "GlobalNamespace/zzzz__PeckEffectPropSettings_def.hpp"
#include "GlobalNamespace/zzzz__PropGroup_def.hpp"
#include "GlobalNamespace/zzzz__Prop_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::PeckEffectPropSettings_PropSetting.Apply
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PeckEffectPropSettings_PropSetting::*)(::GlobalNamespace::Prop*)>(&::GlobalNamespace::PeckEffectPropSettings_PropSetting::Apply)> {
  constexpr static std::size_t size = 0x3f0;
  constexpr static std::size_t addrs = 0x1804543e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckEffectPropSettings_PropSetting>(),
                        {"Apply", {}, {::i2c::type_of<::GlobalNamespace::Prop*>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::PeckEffectPropSettings_PropSetting::Apply(::GlobalNamespace::Prop*  prop)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckEffectPropSettings_PropSetting>(),
                        {"Apply", {}, {::i2c::type_of<::GlobalNamespace::Prop*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, prop);
}
// Ctor Parameters [CppParam { name: "blockRemovingFromHomesMask", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "blockRemovingFromHomesValue", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "blockRaisingMask", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "blockRaisingValue", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "removePropGroups", ty: "::ArrayW<::GlobalNamespace::PropGroup>", modifiers: "", def_value: Some("{}") }, CppParam { name: "addPropGroups", ty: "::ArrayW<::GlobalNamespace::PropGroup>", modifiers: "", def_value: Some("{}") }, CppParam { name: "saveTypeMask", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "saveTypeValue", ty: "::GlobalNamespace::PropSaveType", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::PeckEffectPropSettings_PropSetting::PeckEffectPropSettings_PropSetting(bool  blockRemovingFromHomesMask, bool  blockRemovingFromHomesValue, bool  blockRaisingMask, bool  blockRaisingValue, ::ArrayW<::GlobalNamespace::PropGroup>  removePropGroups, ::ArrayW<::GlobalNamespace::PropGroup>  addPropGroups, bool  saveTypeMask, ::GlobalNamespace::PropSaveType  saveTypeValue) noexcept  {
this->blockRemovingFromHomesMask = blockRemovingFromHomesMask;
this->blockRemovingFromHomesValue = blockRemovingFromHomesValue;
this->blockRaisingMask = blockRaisingMask;
this->blockRaisingValue = blockRaisingValue;
this->removePropGroups = removePropGroups;
this->addPropGroups = addPropGroups;
this->saveTypeMask = saveTypeMask;
this->saveTypeValue = saveTypeValue;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PeckEffectPropSettings_PropSetting::PeckEffectPropSettings_PropSetting()   {
}
//  Writing Method size for method: ::GlobalNamespace::PeckEffectPropSettings.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PeckEffectPropSettings::*)()>(&::GlobalNamespace::PeckEffectPropSettings::Awake)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x18044c0c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckEffectPropSettings*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PeckEffectPropSettings.OnPeck
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PeckEffectPropSettings::*)(::GlobalNamespace::PeckContext)>(&::GlobalNamespace::PeckEffectPropSettings::OnPeck)> {
  constexpr static std::size_t size = 0x3f0;
  constexpr static std::size_t addrs = 0x18044c160;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckEffectPropSettings*>(),
                        {"OnPeck", {}, {::i2c::type_of<::GlobalNamespace::PeckContext>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PeckEffectPropSettings._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PeckEffectPropSettings::*)()>(&::GlobalNamespace::PeckEffectPropSettings::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802dd7c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckEffectPropSettings*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::PeckPropReference& GlobalNamespace::PeckEffectPropSettings::__cordl_internal_get_propReference()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___propReference;
}
constexpr ::GlobalNamespace::PeckPropReference const& GlobalNamespace::PeckEffectPropSettings::__cordl_internal_get_propReference() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___propReference;
}
constexpr void GlobalNamespace::PeckEffectPropSettings::__cordl_internal_set_propReference(::GlobalNamespace::PeckPropReference  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___propReference = value;
}
constexpr ::ArrayW<::UnityW<::GlobalNamespace::Prop>>& GlobalNamespace::PeckEffectPropSettings::__cordl_internal_get_additionalProps()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___additionalProps;
}
constexpr ::ArrayW<::UnityW<::GlobalNamespace::Prop>> const& GlobalNamespace::PeckEffectPropSettings::__cordl_internal_get_additionalProps() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___additionalProps;
}
constexpr void GlobalNamespace::PeckEffectPropSettings::__cordl_internal_set_additionalProps(::ArrayW<::UnityW<::GlobalNamespace::Prop>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___additionalProps = value;
}
constexpr ::GlobalNamespace::PeckSystemReference& GlobalNamespace::PeckEffectPropSettings::__cordl_internal_get_systemReference()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___systemReference;
}
constexpr ::GlobalNamespace::PeckSystemReference const& GlobalNamespace::PeckEffectPropSettings::__cordl_internal_get_systemReference() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___systemReference;
}
constexpr void GlobalNamespace::PeckEffectPropSettings::__cordl_internal_set_systemReference(::GlobalNamespace::PeckSystemReference  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___systemReference = value;
}
constexpr ::ArrayW<::GlobalNamespace::PeckEffectPropSettings_PropSetting>& GlobalNamespace::PeckEffectPropSettings::__cordl_internal_get_settingsPerState()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___settingsPerState;
}
constexpr ::ArrayW<::GlobalNamespace::PeckEffectPropSettings_PropSetting> const& GlobalNamespace::PeckEffectPropSettings::__cordl_internal_get_settingsPerState() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___settingsPerState;
}
constexpr void GlobalNamespace::PeckEffectPropSettings::__cordl_internal_set_settingsPerState(::ArrayW<::GlobalNamespace::PeckEffectPropSettings_PropSetting>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___settingsPerState = value;
}
inline void GlobalNamespace::PeckEffectPropSettings::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckEffectPropSettings*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PeckEffectPropSettings::OnPeck(::GlobalNamespace::PeckContext  peckContext)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckEffectPropSettings*>(),
                        {"OnPeck", {}, {::i2c::type_of<::GlobalNamespace::PeckContext>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, peckContext);
}
inline void GlobalNamespace::PeckEffectPropSettings::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckEffectPropSettings*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::PeckEffectPropSettings* GlobalNamespace::PeckEffectPropSettings::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::PeckEffectPropSettings*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PeckEffectPropSettings::PeckEffectPropSettings()   {
}

#pragma once
// IWYU pragma private; include "GlobalNamespace/PeckEffectPropHomeSettings.hpp"
#include "GlobalNamespace/zzzz__PeckSystemReference_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__PeckEffectPropHomeSettings_def.hpp"
#include "GlobalNamespace/zzzz__PeckContext_def.hpp"
#include "GlobalNamespace/zzzz__PeckEffectPropHomeSettings_def.hpp"
#include "GlobalNamespace/zzzz__PropHomeBlock_def.hpp"
#include "GlobalNamespace/zzzz__PropHome_def.hpp"
// Ctor Parameters [CppParam { name: "blockPlacingMask", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "blockPlacingValue", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "blockGrabbingMask", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "blockGrabbingValue", ty: "bool", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::PeckEffectPropHomeSettings_PropHomeSetting::PeckEffectPropHomeSettings_PropHomeSetting(bool  blockPlacingMask, bool  blockPlacingValue, bool  blockGrabbingMask, bool  blockGrabbingValue) noexcept  {
this->blockPlacingMask = blockPlacingMask;
this->blockPlacingValue = blockPlacingValue;
this->blockGrabbingMask = blockGrabbingMask;
this->blockGrabbingValue = blockGrabbingValue;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PeckEffectPropHomeSettings_PropHomeSetting::PeckEffectPropHomeSettings_PropHomeSetting()   {
}
//  Writing Method size for method: ::GlobalNamespace::PeckEffectPropHomeSettings.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PeckEffectPropHomeSettings::*)()>(&::GlobalNamespace::PeckEffectPropHomeSettings::Awake)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x18044bf10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckEffectPropHomeSettings*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PeckEffectPropHomeSettings.OnPeck
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PeckEffectPropHomeSettings::*)(::GlobalNamespace::PeckContext)>(&::GlobalNamespace::PeckEffectPropHomeSettings::OnPeck)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x18044bfb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckEffectPropHomeSettings*>(),
                        {"OnPeck", {}, {::i2c::type_of<::GlobalNamespace::PeckContext>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PeckEffectPropHomeSettings.Apply
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PeckEffectPropHomeSettings::*)(::GlobalNamespace::PeckEffectPropHomeSettings_PropHomeSetting, ::GlobalNamespace::PropHome*)>(&::GlobalNamespace::PeckEffectPropHomeSettings::Apply)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x18044bed0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckEffectPropHomeSettings*>(),
                        {"Apply", {}, {::i2c::type_of<::GlobalNamespace::PeckEffectPropHomeSettings_PropHomeSetting>(), ::i2c::type_of<::GlobalNamespace::PropHome*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PeckEffectPropHomeSettings._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PeckEffectPropHomeSettings::*)()>(&::GlobalNamespace::PeckEffectPropHomeSettings::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802dd7c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckEffectPropHomeSettings*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::PropHome>& GlobalNamespace::PeckEffectPropHomeSettings::__cordl_internal_get_propHome()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___propHome;
}
constexpr ::UnityW<::GlobalNamespace::PropHome> const& GlobalNamespace::PeckEffectPropHomeSettings::__cordl_internal_get_propHome() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___propHome;
}
constexpr void GlobalNamespace::PeckEffectPropHomeSettings::__cordl_internal_set_propHome(::UnityW<::GlobalNamespace::PropHome>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___propHome = value;
}
constexpr ::UnityW<::GlobalNamespace::PropHomeBlock>& GlobalNamespace::PeckEffectPropHomeSettings::__cordl_internal_get_propHomeBlock()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___propHomeBlock;
}
constexpr ::UnityW<::GlobalNamespace::PropHomeBlock> const& GlobalNamespace::PeckEffectPropHomeSettings::__cordl_internal_get_propHomeBlock() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___propHomeBlock;
}
constexpr void GlobalNamespace::PeckEffectPropHomeSettings::__cordl_internal_set_propHomeBlock(::UnityW<::GlobalNamespace::PropHomeBlock>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___propHomeBlock = value;
}
constexpr ::GlobalNamespace::PeckSystemReference& GlobalNamespace::PeckEffectPropHomeSettings::__cordl_internal_get_systemReference()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___systemReference;
}
constexpr ::GlobalNamespace::PeckSystemReference const& GlobalNamespace::PeckEffectPropHomeSettings::__cordl_internal_get_systemReference() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___systemReference;
}
constexpr void GlobalNamespace::PeckEffectPropHomeSettings::__cordl_internal_set_systemReference(::GlobalNamespace::PeckSystemReference  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___systemReference = value;
}
constexpr ::ArrayW<::GlobalNamespace::PeckEffectPropHomeSettings_PropHomeSetting>& GlobalNamespace::PeckEffectPropHomeSettings::__cordl_internal_get_settingsPerState()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___settingsPerState;
}
constexpr ::ArrayW<::GlobalNamespace::PeckEffectPropHomeSettings_PropHomeSetting> const& GlobalNamespace::PeckEffectPropHomeSettings::__cordl_internal_get_settingsPerState() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___settingsPerState;
}
constexpr void GlobalNamespace::PeckEffectPropHomeSettings::__cordl_internal_set_settingsPerState(::ArrayW<::GlobalNamespace::PeckEffectPropHomeSettings_PropHomeSetting>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___settingsPerState = value;
}
inline void GlobalNamespace::PeckEffectPropHomeSettings::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckEffectPropHomeSettings*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PeckEffectPropHomeSettings::OnPeck(::GlobalNamespace::PeckContext  peckContext)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckEffectPropHomeSettings*>(),
                        {"OnPeck", {}, {::i2c::type_of<::GlobalNamespace::PeckContext>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, peckContext);
}
inline void GlobalNamespace::PeckEffectPropHomeSettings::Apply(::GlobalNamespace::PeckEffectPropHomeSettings_PropHomeSetting  setting, ::GlobalNamespace::PropHome*  propHome)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckEffectPropHomeSettings*>(),
                        {"Apply", {}, {::i2c::type_of<::GlobalNamespace::PeckEffectPropHomeSettings_PropHomeSetting>(), ::i2c::type_of<::GlobalNamespace::PropHome*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, setting, propHome);
}
inline void GlobalNamespace::PeckEffectPropHomeSettings::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckEffectPropHomeSettings*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::PeckEffectPropHomeSettings* GlobalNamespace::PeckEffectPropHomeSettings::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::PeckEffectPropHomeSettings*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PeckEffectPropHomeSettings::PeckEffectPropHomeSettings()   {
}

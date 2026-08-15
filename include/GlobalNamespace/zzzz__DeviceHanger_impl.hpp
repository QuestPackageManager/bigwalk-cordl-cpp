#pragma once
// IWYU pragma private; include "GlobalNamespace/DeviceHanger.hpp"
#include "GlobalNamespace/zzzz__SettingsType_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__DeviceHanger_def.hpp"
#include "GlobalNamespace/zzzz__ISettingsHanger_def.hpp"
#include "GlobalNamespace/zzzz__LocalizedText_def.hpp"
#include "GlobalNamespace/zzzz__SettingsType_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::DeviceHanger._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::DeviceHanger::*)()>(&::GlobalNamespace::DeviceHanger::_ctor)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x180392f80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DeviceHanger*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DeviceHanger.get_settingsType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::SettingsType (::GlobalNamespace::DeviceHanger::*)()>(&::GlobalNamespace::DeviceHanger::get_settingsType)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e2ba0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DeviceHanger*>(),
                        {"get_settingsType", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DeviceHanger.set_settingsType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::DeviceHanger::*)(::GlobalNamespace::SettingsType)>(&::GlobalNamespace::DeviceHanger::set_settingsType)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e2f70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DeviceHanger*>(),
                        {"set_settingsType", {}, {::i2c::type_of<::GlobalNamespace::SettingsType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DeviceHanger.IsAtMaxValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::DeviceHanger::*)()>(&::GlobalNamespace::DeviceHanger::IsAtMaxValue)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e2bd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DeviceHanger*>(),
                        {"IsAtMaxValue", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DeviceHanger.IsAtMinValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::DeviceHanger::*)()>(&::GlobalNamespace::DeviceHanger::IsAtMinValue)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e2bd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DeviceHanger*>(),
                        {"IsAtMinValue", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DeviceHanger.Cycle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::DeviceHanger::*)(int32_t)>(&::GlobalNamespace::DeviceHanger::Cycle)> {
  constexpr static std::size_t size = 0x4b0;
  constexpr static std::size_t addrs = 0x180392880;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DeviceHanger*>(),
                        {"Cycle", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DeviceHanger.Apply
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::DeviceHanger::*)()>(&::GlobalNamespace::DeviceHanger::Apply)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x180392810;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DeviceHanger*>(),
                        {"Apply", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DeviceHanger.GetLabel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::DeviceHanger::*)(::by_ref<::GlobalNamespace::LocalizedText_DisplayType>)>(&::GlobalNamespace::DeviceHanger::GetLabel)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x180392d30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DeviceHanger*>(),
                        {"GetLabel", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::LocalizedText_DisplayType>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DeviceHanger.ResetToDefault
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::DeviceHanger::*)()>(&::GlobalNamespace::DeviceHanger::ResetToDefault)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x180392eb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DeviceHanger*>(),
                        {"ResetToDefault", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DeviceHanger.Save
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::DeviceHanger::*)()>(&::GlobalNamespace::DeviceHanger::Save)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x180392f30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DeviceHanger*>(),
                        {"Save", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DeviceHanger.Load
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::DeviceHanger::*)()>(&::GlobalNamespace::DeviceHanger::Load)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x180392d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DeviceHanger*>(),
                        {"Load", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DeviceHanger.SetValueByIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::DeviceHanger::*)(int32_t)>(&::GlobalNamespace::DeviceHanger::SetValueByIndex)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DeviceHanger*>(),
                        {"SetValueByIndex", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DeviceHanger.get_value
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::DeviceHanger::*)()>(&::GlobalNamespace::DeviceHanger::get_value)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180392ff0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DeviceHanger*>(),
                        {"get_value", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DeviceHanger.set_value
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::DeviceHanger::*)(int32_t)>(&::GlobalNamespace::DeviceHanger::set_value)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180393010;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DeviceHanger*>(),
                        {"set_value", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DeviceHanger.get_valueIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::DeviceHanger::*)()>(&::GlobalNamespace::DeviceHanger::get_valueIndex)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180392fe0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DeviceHanger*>(),
                        {"get_valueIndex", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DeviceHanger.set_valueIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::DeviceHanger::*)(int32_t)>(&::GlobalNamespace::DeviceHanger::set_valueIndex)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180393000;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DeviceHanger*>(),
                        {"set_valueIndex", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DeviceHanger.get_deviceName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::DeviceHanger::*)()>(&::GlobalNamespace::DeviceHanger::get_deviceName)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9810;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DeviceHanger*>(),
                        {"get_deviceName", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& GlobalNamespace::DeviceHanger::__cordl_internal_get_saveKey()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___saveKey;
}
constexpr ::StringW const& GlobalNamespace::DeviceHanger::__cordl_internal_get_saveKey() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___saveKey;
}
constexpr void GlobalNamespace::DeviceHanger::__cordl_internal_set_saveKey(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___saveKey = value;
}
constexpr ::StringW& GlobalNamespace::DeviceHanger::__cordl_internal_get_nullValueString()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nullValueString;
}
constexpr ::StringW const& GlobalNamespace::DeviceHanger::__cordl_internal_get_nullValueString() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nullValueString;
}
constexpr void GlobalNamespace::DeviceHanger::__cordl_internal_set_nullValueString(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___nullValueString = value;
}
constexpr ::StringW& GlobalNamespace::DeviceHanger::__cordl_internal_get_lastSavedValue()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastSavedValue;
}
constexpr ::StringW const& GlobalNamespace::DeviceHanger::__cordl_internal_get_lastSavedValue() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastSavedValue;
}
constexpr void GlobalNamespace::DeviceHanger::__cordl_internal_set_lastSavedValue(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lastSavedValue = value;
}
constexpr ::StringW& GlobalNamespace::DeviceHanger::__cordl_internal_get_selectedDeviceName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___selectedDeviceName;
}
constexpr ::StringW const& GlobalNamespace::DeviceHanger::__cordl_internal_get_selectedDeviceName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___selectedDeviceName;
}
constexpr void GlobalNamespace::DeviceHanger::__cordl_internal_set_selectedDeviceName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___selectedDeviceName = value;
}
constexpr ::GlobalNamespace::SettingsType& GlobalNamespace::DeviceHanger::__cordl_internal_get__settingsType_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____settingsType_k__BackingField;
}
constexpr ::GlobalNamespace::SettingsType const& GlobalNamespace::DeviceHanger::__cordl_internal_get__settingsType_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____settingsType_k__BackingField;
}
constexpr void GlobalNamespace::DeviceHanger::__cordl_internal_set__settingsType_k__BackingField(::GlobalNamespace::SettingsType  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____settingsType_k__BackingField = value;
}
constexpr int32_t& GlobalNamespace::DeviceHanger::__cordl_internal_get__value_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____value_k__BackingField;
}
constexpr int32_t const& GlobalNamespace::DeviceHanger::__cordl_internal_get__value_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____value_k__BackingField;
}
constexpr void GlobalNamespace::DeviceHanger::__cordl_internal_set__value_k__BackingField(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____value_k__BackingField = value;
}
constexpr int32_t& GlobalNamespace::DeviceHanger::__cordl_internal_get__valueIndex_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____valueIndex_k__BackingField;
}
constexpr int32_t const& GlobalNamespace::DeviceHanger::__cordl_internal_get__valueIndex_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____valueIndex_k__BackingField;
}
constexpr void GlobalNamespace::DeviceHanger::__cordl_internal_set__valueIndex_k__BackingField(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____valueIndex_k__BackingField = value;
}
inline void GlobalNamespace::DeviceHanger::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DeviceHanger*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::SettingsType GlobalNamespace::DeviceHanger::get_settingsType()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DeviceHanger*>(),
                        {"get_settingsType", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::SettingsType>(this, ___internal_method);
}
inline void GlobalNamespace::DeviceHanger::set_settingsType(::GlobalNamespace::SettingsType  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DeviceHanger*>(),
                        {"set_settingsType", {}, {::i2c::type_of<::GlobalNamespace::SettingsType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool GlobalNamespace::DeviceHanger::IsAtMaxValue()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DeviceHanger*>(),
                        {"IsAtMaxValue", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool GlobalNamespace::DeviceHanger::IsAtMinValue()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DeviceHanger*>(),
                        {"IsAtMinValue", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::DeviceHanger::Cycle(int32_t  delta)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DeviceHanger*>(),
                        {"Cycle", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, delta);
}
inline void GlobalNamespace::DeviceHanger::Apply()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DeviceHanger*>(),
                        {"Apply", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::DeviceHanger::GetLabel(::by_ref<::GlobalNamespace::LocalizedText_DisplayType>  displayType)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DeviceHanger*>(),
                        {"GetLabel", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::LocalizedText_DisplayType>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, displayType);
}
inline void GlobalNamespace::DeviceHanger::ResetToDefault()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DeviceHanger*>(),
                        {"ResetToDefault", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::DeviceHanger::Save()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DeviceHanger*>(),
                        {"Save", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::DeviceHanger::Load()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DeviceHanger*>(),
                        {"Load", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::DeviceHanger::SetValueByIndex(int32_t  valueIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DeviceHanger*>(),
                        {"SetValueByIndex", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, valueIndex);
}
inline int32_t GlobalNamespace::DeviceHanger::get_value()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DeviceHanger*>(),
                        {"get_value", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void GlobalNamespace::DeviceHanger::set_value(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DeviceHanger*>(),
                        {"set_value", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t GlobalNamespace::DeviceHanger::get_valueIndex()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DeviceHanger*>(),
                        {"get_valueIndex", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void GlobalNamespace::DeviceHanger::set_valueIndex(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DeviceHanger*>(),
                        {"set_valueIndex", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW GlobalNamespace::DeviceHanger::get_deviceName()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DeviceHanger*>(),
                        {"get_deviceName", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::GlobalNamespace::DeviceHanger* GlobalNamespace::DeviceHanger::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::DeviceHanger*>());
}
/// @brief Convert operator to "::GlobalNamespace::ISettingsHanger"
constexpr  GlobalNamespace::DeviceHanger::operator ::GlobalNamespace::ISettingsHanger*() noexcept {
return static_cast<::GlobalNamespace::ISettingsHanger*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::ISettingsHanger"
constexpr ::GlobalNamespace::ISettingsHanger* GlobalNamespace::DeviceHanger::i___GlobalNamespace__ISettingsHanger() noexcept {
return static_cast<::GlobalNamespace::ISettingsHanger*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::DeviceHanger::DeviceHanger()   {
}

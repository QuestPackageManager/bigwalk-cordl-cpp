#pragma once
// IWYU pragma private; include "GlobalNamespace/SettingsHanger.hpp"
#include "GlobalNamespace/zzzz__SettingsType_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__SettingsHanger_def.hpp"
#include "GlobalNamespace/zzzz__ISettingsHanger_def.hpp"
#include "GlobalNamespace/zzzz__SettingsType_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::SettingsHanger.get_value
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::SettingsHanger::*)()>(&::GlobalNamespace::SettingsHanger::get_value)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802f42c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SettingsHanger*>(),
                        {"get_value", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SettingsHanger.set_value
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SettingsHanger::*)(int32_t)>(&::GlobalNamespace::SettingsHanger::set_value)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802f43d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SettingsHanger*>(),
                        {"set_value", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SettingsHanger.get_settingsType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::SettingsType (::GlobalNamespace::SettingsHanger::*)()>(&::GlobalNamespace::SettingsHanger::get_settingsType)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180392fe0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SettingsHanger*>(),
                        {"get_settingsType", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SettingsHanger.set_settingsType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SettingsHanger::*)(::GlobalNamespace::SettingsType)>(&::GlobalNamespace::SettingsHanger::set_settingsType)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180393000;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SettingsHanger*>(),
                        {"set_settingsType", {}, {::i2c::type_of<::GlobalNamespace::SettingsType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SettingsHanger.IsAtMaxValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::SettingsHanger::*)()>(&::GlobalNamespace::SettingsHanger::IsAtMaxValue)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1803990f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SettingsHanger*>(),
                        {"IsAtMaxValue", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SettingsHanger.IsAtMinValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::SettingsHanger::*)()>(&::GlobalNamespace::SettingsHanger::IsAtMinValue)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x180399120;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SettingsHanger*>(),
                        {"IsAtMinValue", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SettingsHanger.get_valueIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::SettingsHanger::*)()>(&::GlobalNamespace::SettingsHanger::get_valueIndex)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1803992e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SettingsHanger*>(),
                        {"get_valueIndex", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SettingsHanger.set_valueIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SettingsHanger::*)(int32_t)>(&::GlobalNamespace::SettingsHanger::set_valueIndex)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SettingsHanger*>(),
                        {"set_valueIndex", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SettingsHanger.Load
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SettingsHanger::*)()>(&::GlobalNamespace::SettingsHanger::Load)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x180399150;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SettingsHanger*>(),
                        {"Load", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SettingsHanger.Apply
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SettingsHanger::*)()>(&::GlobalNamespace::SettingsHanger::Apply)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x180399040;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SettingsHanger*>(),
                        {"Apply", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SettingsHanger.Save
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SettingsHanger::*)()>(&::GlobalNamespace::SettingsHanger::Save)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1803991d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SettingsHanger*>(),
                        {"Save", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SettingsHanger._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SettingsHanger::*)(::StringW, int32_t, ::System::Action_1<int32_t>*)>(&::GlobalNamespace::SettingsHanger::_ctor)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x180399290;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SettingsHanger*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Action_1<int32_t>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SettingsHanger.Cycle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SettingsHanger::*)(int32_t)>(&::GlobalNamespace::SettingsHanger::Cycle)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x180399070;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SettingsHanger*>(),
                        {"Cycle", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SettingsHanger.SetValueByIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SettingsHanger::*)(int32_t)>(&::GlobalNamespace::SettingsHanger::SetValueByIndex)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x180399210;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SettingsHanger*>(),
                        {"SetValueByIndex", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SettingsHanger.ResetToDefault
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SettingsHanger::*)()>(&::GlobalNamespace::SettingsHanger::ResetToDefault)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1803991a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SettingsHanger*>(),
                        {"ResetToDefault", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& GlobalNamespace::SettingsHanger::__cordl_internal_get_saveKey()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___saveKey;
}
constexpr ::StringW const& GlobalNamespace::SettingsHanger::__cordl_internal_get_saveKey() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___saveKey;
}
constexpr void GlobalNamespace::SettingsHanger::__cordl_internal_set_saveKey(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___saveKey = value;
}
constexpr int32_t& GlobalNamespace::SettingsHanger::__cordl_internal_get_defaultValue()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___defaultValue;
}
constexpr int32_t const& GlobalNamespace::SettingsHanger::__cordl_internal_get_defaultValue() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___defaultValue;
}
constexpr void GlobalNamespace::SettingsHanger::__cordl_internal_set_defaultValue(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___defaultValue = value;
}
constexpr int32_t& GlobalNamespace::SettingsHanger::__cordl_internal_get__value_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____value_k__BackingField;
}
constexpr int32_t const& GlobalNamespace::SettingsHanger::__cordl_internal_get__value_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____value_k__BackingField;
}
constexpr void GlobalNamespace::SettingsHanger::__cordl_internal_set__value_k__BackingField(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____value_k__BackingField = value;
}
constexpr int32_t& GlobalNamespace::SettingsHanger::__cordl_internal_get_lastSavedValue()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastSavedValue;
}
constexpr int32_t const& GlobalNamespace::SettingsHanger::__cordl_internal_get_lastSavedValue() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastSavedValue;
}
constexpr void GlobalNamespace::SettingsHanger::__cordl_internal_set_lastSavedValue(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lastSavedValue = value;
}
constexpr ::System::Action_1<int32_t>*& GlobalNamespace::SettingsHanger::__cordl_internal_get_onApply()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onApply;
}
constexpr ::System::Action_1<int32_t>* const& GlobalNamespace::SettingsHanger::__cordl_internal_get_onApply() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onApply;
}
constexpr void GlobalNamespace::SettingsHanger::__cordl_internal_set_onApply(::System::Action_1<int32_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___onApply = value;
}
constexpr ::System::Collections::Generic::List_1<int32_t>*& GlobalNamespace::SettingsHanger::__cordl_internal_get_possibleValues()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___possibleValues;
}
constexpr ::System::Collections::Generic::List_1<int32_t>* const& GlobalNamespace::SettingsHanger::__cordl_internal_get_possibleValues() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___possibleValues;
}
constexpr void GlobalNamespace::SettingsHanger::__cordl_internal_set_possibleValues(::System::Collections::Generic::List_1<int32_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___possibleValues = value;
}
constexpr ::GlobalNamespace::SettingsType& GlobalNamespace::SettingsHanger::__cordl_internal_get__settingsType_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____settingsType_k__BackingField;
}
constexpr ::GlobalNamespace::SettingsType const& GlobalNamespace::SettingsHanger::__cordl_internal_get__settingsType_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____settingsType_k__BackingField;
}
constexpr void GlobalNamespace::SettingsHanger::__cordl_internal_set__settingsType_k__BackingField(::GlobalNamespace::SettingsType  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____settingsType_k__BackingField = value;
}
inline int32_t GlobalNamespace::SettingsHanger::get_value()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SettingsHanger*>(),
                        {"get_value", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void GlobalNamespace::SettingsHanger::set_value(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SettingsHanger*>(),
                        {"set_value", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::GlobalNamespace::SettingsType GlobalNamespace::SettingsHanger::get_settingsType()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SettingsHanger*>(),
                        {"get_settingsType", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::SettingsType>(this, ___internal_method);
}
inline void GlobalNamespace::SettingsHanger::set_settingsType(::GlobalNamespace::SettingsType  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SettingsHanger*>(),
                        {"set_settingsType", {}, {::i2c::type_of<::GlobalNamespace::SettingsType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool GlobalNamespace::SettingsHanger::IsAtMaxValue()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SettingsHanger*>(),
                        {"IsAtMaxValue", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool GlobalNamespace::SettingsHanger::IsAtMinValue()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SettingsHanger*>(),
                        {"IsAtMinValue", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline int32_t GlobalNamespace::SettingsHanger::get_valueIndex()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SettingsHanger*>(),
                        {"get_valueIndex", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void GlobalNamespace::SettingsHanger::set_valueIndex(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SettingsHanger*>(),
                        {"set_valueIndex", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::SettingsHanger::Load()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SettingsHanger*>(),
                        {"Load", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SettingsHanger::Apply()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SettingsHanger*>(),
                        {"Apply", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SettingsHanger::Save()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SettingsHanger*>(),
                        {"Save", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SettingsHanger::_ctor(::StringW  saveKey, int32_t  defaultValue, ::System::Action_1<int32_t>*  onApply)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SettingsHanger*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Action_1<int32_t>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, saveKey, defaultValue, onApply);
}
inline void GlobalNamespace::SettingsHanger::Cycle(int32_t  delta)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SettingsHanger*>(),
                        {"Cycle", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, delta);
}
inline void GlobalNamespace::SettingsHanger::SetValueByIndex(int32_t  valueIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SettingsHanger*>(),
                        {"SetValueByIndex", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, valueIndex);
}
inline void GlobalNamespace::SettingsHanger::ResetToDefault()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SettingsHanger*>(),
                        {"ResetToDefault", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::SettingsHanger* GlobalNamespace::SettingsHanger::New_ctor(::StringW  saveKey, int32_t  defaultValue, ::System::Action_1<int32_t>*  onApply)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::SettingsHanger*>(saveKey, defaultValue, onApply));
}
/// @brief Convert operator to "::GlobalNamespace::ISettingsHanger"
constexpr  GlobalNamespace::SettingsHanger::operator ::GlobalNamespace::ISettingsHanger*() noexcept {
return static_cast<::GlobalNamespace::ISettingsHanger*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::ISettingsHanger"
constexpr ::GlobalNamespace::ISettingsHanger* GlobalNamespace::SettingsHanger::i___GlobalNamespace__ISettingsHanger() noexcept {
return static_cast<::GlobalNamespace::ISettingsHanger*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SettingsHanger::SettingsHanger()   {
}

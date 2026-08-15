#pragma once
// IWYU pragma private; include "GlobalNamespace/SettingItemIdentifier.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__SettingItemIdentifier_def.hpp"
#include "GlobalNamespace/zzzz__SettingsRow_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::SettingItemIdentifier.get_SettingRow
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::SettingsRow> (::GlobalNamespace::SettingItemIdentifier::*)()>(&::GlobalNamespace::SettingItemIdentifier::get_SettingRow)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d97e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SettingItemIdentifier*>(),
                        {"get_SettingRow", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SettingItemIdentifier.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SettingItemIdentifier::*)()>(&::GlobalNamespace::SettingItemIdentifier::Awake)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x1803898f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SettingItemIdentifier*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SettingItemIdentifier._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SettingItemIdentifier::*)()>(&::GlobalNamespace::SettingItemIdentifier::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802dd7c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SettingItemIdentifier*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::SettingsRow>& GlobalNamespace::SettingItemIdentifier::__cordl_internal_get_settingRow()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___settingRow;
}
constexpr ::UnityW<::GlobalNamespace::SettingsRow> const& GlobalNamespace::SettingItemIdentifier::__cordl_internal_get_settingRow() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___settingRow;
}
constexpr void GlobalNamespace::SettingItemIdentifier::__cordl_internal_set_settingRow(::UnityW<::GlobalNamespace::SettingsRow>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___settingRow = value;
}
inline ::UnityW<::GlobalNamespace::SettingsRow> GlobalNamespace::SettingItemIdentifier::get_SettingRow()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SettingItemIdentifier*>(),
                        {"get_SettingRow", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::SettingsRow>>(this, ___internal_method);
}
inline void GlobalNamespace::SettingItemIdentifier::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SettingItemIdentifier*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SettingItemIdentifier::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SettingItemIdentifier*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::SettingItemIdentifier* GlobalNamespace::SettingItemIdentifier::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::SettingItemIdentifier*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SettingItemIdentifier::SettingItemIdentifier()   {
}

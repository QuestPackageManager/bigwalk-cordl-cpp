#pragma once
// IWYU pragma private; include "GlobalNamespace/SettingsCatagory.hpp"
#include "GlobalNamespace/zzzz__SettingsRow_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__SettingsCatagory_def.hpp"
#include "GlobalNamespace/zzzz__SettingsRow_def.hpp"
#include "UnityEngine/UI/zzzz__Selectable_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::SettingsCatagory.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SettingsCatagory::*)()>(&::GlobalNamespace::SettingsCatagory::Start)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x18043d880;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SettingsCatagory*>(),
                        {"Start", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SettingsCatagory.get_firstRow
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::SettingsRow> (::GlobalNamespace::SettingsCatagory::*)()>(&::GlobalNamespace::SettingsCatagory::get_firstRow)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x18043da00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SettingsCatagory*>(),
                        {"get_firstRow", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SettingsCatagory._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SettingsCatagory::*)()>(&::GlobalNamespace::SettingsCatagory::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802dd7c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SettingsCatagory*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::UI::Selectable>& GlobalNamespace::SettingsCatagory::__cordl_internal_get_catagoryButton()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___catagoryButton;
}
constexpr ::UnityW<::UnityEngine::UI::Selectable> const& GlobalNamespace::SettingsCatagory::__cordl_internal_get_catagoryButton() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___catagoryButton;
}
constexpr void GlobalNamespace::SettingsCatagory::__cordl_internal_set_catagoryButton(::UnityW<::UnityEngine::UI::Selectable>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___catagoryButton = value;
}
constexpr ::ArrayW<::UnityW<::GlobalNamespace::SettingsRow>>& GlobalNamespace::SettingsCatagory::__cordl_internal_get_rows()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rows;
}
constexpr ::ArrayW<::UnityW<::GlobalNamespace::SettingsRow>> const& GlobalNamespace::SettingsCatagory::__cordl_internal_get_rows() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rows;
}
constexpr void GlobalNamespace::SettingsCatagory::__cordl_internal_set_rows(::ArrayW<::UnityW<::GlobalNamespace::SettingsRow>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rows = value;
}
inline void GlobalNamespace::SettingsCatagory::Start()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SettingsCatagory*>(),
                        {"Start", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityW<::GlobalNamespace::SettingsRow> GlobalNamespace::SettingsCatagory::get_firstRow()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SettingsCatagory*>(),
                        {"get_firstRow", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::SettingsRow>>(this, ___internal_method);
}
inline void GlobalNamespace::SettingsCatagory::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SettingsCatagory*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::SettingsCatagory* GlobalNamespace::SettingsCatagory::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::SettingsCatagory*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SettingsCatagory::SettingsCatagory()   {
}

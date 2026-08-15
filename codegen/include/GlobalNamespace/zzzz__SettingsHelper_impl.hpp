#pragma once
// IWYU pragma private; include "GlobalNamespace/SettingsHelper.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__SettingsHelper_def.hpp"
#include "GlobalNamespace/zzzz__LocalizedText_def.hpp"
#include "GlobalNamespace/zzzz__SettingsType_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::SettingsHelper.GetQualityLevel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)()>(&::GlobalNamespace::SettingsHelper::GetQualityLevel)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180399800;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SettingsHelper*>(),
                        {"GetQualityLevel", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SettingsHelper.IsSteamDeck
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::GlobalNamespace::SettingsHelper::IsSteamDeck)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x180399830;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SettingsHelper*>(),
                        {"IsSteamDeck", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SettingsHelper.GetDefaultQualityLevel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)()>(&::GlobalNamespace::SettingsHelper::GetDefaultQualityLevel)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x180399690;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SettingsHelper*>(),
                        {"GetDefaultQualityLevel", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SettingsHelper.get_crouchIsAToggle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::GlobalNamespace::SettingsHelper::get_crouchIsAToggle)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1803998b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SettingsHelper*>(),
                        {"get_crouchIsAToggle", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SettingsHelper.get_armsIsAToggle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::GlobalNamespace::SettingsHelper::get_armsIsAToggle)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x180399860;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SettingsHelper*>(),
                        {"get_armsIsAToggle", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SettingsHelper.get_invertLookScalar
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)()>(&::GlobalNamespace::SettingsHelper::get_invertLookScalar)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x180399910;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SettingsHelper*>(),
                        {"get_invertLookScalar", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SettingsHelper.get_lookSpeedScalar
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)()>(&::GlobalNamespace::SettingsHelper::get_lookSpeedScalar)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x180399960;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SettingsHelper*>(),
                        {"get_lookSpeedScalar", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SettingsHelper.get_pushToTalkModeActive
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::GlobalNamespace::SettingsHelper::get_pushToTalkModeActive)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1803999a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SettingsHelper*>(),
                        {"get_pushToTalkModeActive", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SettingsHelper.get_crossPlayModeActive
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::GlobalNamespace::SettingsHelper::get_crossPlayModeActive)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x180399890;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SettingsHelper*>(),
                        {"get_crossPlayModeActive", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SettingsHelper.get_hudIsHidden
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::GlobalNamespace::SettingsHelper::get_hudIsHidden)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1803998e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SettingsHelper*>(),
                        {"get_hudIsHidden", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SettingsHelper.GetArrayLabelValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::GlobalNamespace::SettingsType, int32_t, ::by_ref<::GlobalNamespace::LocalizedText_DisplayType>)>(&::GlobalNamespace::SettingsHelper::GetArrayLabelValue)> {
  constexpr static std::size_t size = 0x380;
  constexpr static std::size_t addrs = 0x180399310;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SettingsHelper*>(),
                        {"GetArrayLabelValue", {}, {::i2c::type_of<::GlobalNamespace::SettingsType>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::GlobalNamespace::LocalizedText_DisplayType>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SettingsHelper.IsQualityLevelSwitch2
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(int32_t)>(&::GlobalNamespace::SettingsHelper::IsQualityLevelSwitch2)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180399820;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SettingsHelper*>(),
                        {"IsQualityLevelSwitch2", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SettingsHelper.IsQualityLevelPS5
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(int32_t)>(&::GlobalNamespace::SettingsHelper::IsQualityLevelPS5)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180399810;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SettingsHelper*>(),
                        {"IsQualityLevelPS5", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SettingsHelper.GetDefaultRenderScaleValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)()>(&::GlobalNamespace::SettingsHelper::GetDefaultRenderScaleValue)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x180399700;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SettingsHelper*>(),
                        {"GetDefaultRenderScaleValue", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::SettingsHelper::setStaticF_onQualityLevelChanged(::System::Action_1<int32_t>*  value)  {
::cordl_internals::setStaticField<::System::Action_1<int32_t>*, "onQualityLevelChanged", ::GlobalNamespace::SettingsHelper*>(std::forward<::System::Action_1<int32_t>*>(value));
}
inline ::System::Action_1<int32_t>* GlobalNamespace::SettingsHelper::getStaticF_onQualityLevelChanged()  {
return ::cordl_internals::getStaticField<::System::Action_1<int32_t>*, "onQualityLevelChanged", ::GlobalNamespace::SettingsHelper*>();
}
inline void GlobalNamespace::SettingsHelper::setStaticF_onCrossplayChanged(::System::Action_1<int32_t>*  value)  {
::cordl_internals::setStaticField<::System::Action_1<int32_t>*, "onCrossplayChanged", ::GlobalNamespace::SettingsHelper*>(std::forward<::System::Action_1<int32_t>*>(value));
}
inline ::System::Action_1<int32_t>* GlobalNamespace::SettingsHelper::getStaticF_onCrossplayChanged()  {
return ::cordl_internals::getStaticField<::System::Action_1<int32_t>*, "onCrossplayChanged", ::GlobalNamespace::SettingsHelper*>();
}
inline int32_t GlobalNamespace::SettingsHelper::GetQualityLevel()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SettingsHelper*>(),
                        {"GetQualityLevel", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method);
}
inline bool GlobalNamespace::SettingsHelper::IsSteamDeck()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SettingsHelper*>(),
                        {"IsSteamDeck", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline int32_t GlobalNamespace::SettingsHelper::GetDefaultQualityLevel()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SettingsHelper*>(),
                        {"GetDefaultQualityLevel", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method);
}
inline bool GlobalNamespace::SettingsHelper::get_crouchIsAToggle()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SettingsHelper*>(),
                        {"get_crouchIsAToggle", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline bool GlobalNamespace::SettingsHelper::get_armsIsAToggle()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SettingsHelper*>(),
                        {"get_armsIsAToggle", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline float_t GlobalNamespace::SettingsHelper::get_invertLookScalar()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SettingsHelper*>(),
                        {"get_invertLookScalar", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method);
}
inline float_t GlobalNamespace::SettingsHelper::get_lookSpeedScalar()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SettingsHelper*>(),
                        {"get_lookSpeedScalar", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method);
}
inline bool GlobalNamespace::SettingsHelper::get_pushToTalkModeActive()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SettingsHelper*>(),
                        {"get_pushToTalkModeActive", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline bool GlobalNamespace::SettingsHelper::get_crossPlayModeActive()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SettingsHelper*>(),
                        {"get_crossPlayModeActive", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline bool GlobalNamespace::SettingsHelper::get_hudIsHidden()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SettingsHelper*>(),
                        {"get_hudIsHidden", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline ::StringW GlobalNamespace::SettingsHelper::GetArrayLabelValue(::GlobalNamespace::SettingsType  settingsType, int32_t  value, ::by_ref<::GlobalNamespace::LocalizedText_DisplayType>  displayType)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SettingsHelper*>(),
                        {"GetArrayLabelValue", {}, {::i2c::type_of<::GlobalNamespace::SettingsType>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::GlobalNamespace::LocalizedText_DisplayType>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, settingsType, value, displayType);
}
inline bool GlobalNamespace::SettingsHelper::IsQualityLevelSwitch2(int32_t  level)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SettingsHelper*>(),
                        {"IsQualityLevelSwitch2", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, level);
}
inline bool GlobalNamespace::SettingsHelper::IsQualityLevelPS5(int32_t  level)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SettingsHelper*>(),
                        {"IsQualityLevelPS5", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, level);
}
inline int32_t GlobalNamespace::SettingsHelper::GetDefaultRenderScaleValue()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SettingsHelper*>(),
                        {"GetDefaultRenderScaleValue", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SettingsHelper::SettingsHelper()   {
}

#pragma once
// IWYU pragma private; include "MA/Flora/DebugDisplayFlora.hpp"
#include "MA/Flora/zzzz__FloraDebugDisplayProperties_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Rendering/zzzz__DebugDisplaySettingsPanel_1_impl.hpp"
#include "UnityEngine/Rendering/zzzz__DebugUI_impl.hpp"
#include "UnityEngine/zzzz__GUIContent_impl.hpp"
#include "MA/Flora/zzzz__DebugDisplayFlora_def.hpp"
#include "MA/Flora/zzzz__DebugDisplayFlora_def.hpp"
#include "MA/Flora/zzzz__FloraDebugDisplayProperties_def.hpp"
#include "MA/Flora/zzzz__GPUCullingStats_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Enum_def.hpp"
#include "System/zzzz__Func_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Rendering/zzzz__DebugUI_def.hpp"
#include "UnityEngine/Rendering/zzzz__IDebugDisplaySettingsData_def.hpp"
#include "UnityEngine/Rendering/zzzz__IDebugDisplaySettingsPanelDisposable_def.hpp"
#include "UnityEngine/Rendering/zzzz__IDebugDisplaySettingsQuery_def.hpp"
#include "UnityEngine/zzzz__Camera_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
inline void MA::Flora::DebugDisplayFlora_Strings::setStaticF_GeneralSettingsContainerName(::UnityEngine::Rendering::Widget_DebugUI_NameAndTooltip  value)  {
::cordl_internals::setStaticField<::UnityEngine::Rendering::Widget_DebugUI_NameAndTooltip, "GeneralSettingsContainerName", ::MA::Flora::DebugDisplayFlora_Strings*>(std::forward<::UnityEngine::Rendering::Widget_DebugUI_NameAndTooltip>(value));
}
inline ::UnityEngine::Rendering::Widget_DebugUI_NameAndTooltip MA::Flora::DebugDisplayFlora_Strings::getStaticF_GeneralSettingsContainerName()  {
return ::cordl_internals::getStaticField<::UnityEngine::Rendering::Widget_DebugUI_NameAndTooltip, "GeneralSettingsContainerName", ::MA::Flora::DebugDisplayFlora_Strings*>();
}
inline void MA::Flora::DebugDisplayFlora_Strings::setStaticF_CullingStats(::UnityEngine::Rendering::Widget_DebugUI_NameAndTooltip  value)  {
::cordl_internals::setStaticField<::UnityEngine::Rendering::Widget_DebugUI_NameAndTooltip, "CullingStats", ::MA::Flora::DebugDisplayFlora_Strings*>(std::forward<::UnityEngine::Rendering::Widget_DebugUI_NameAndTooltip>(value));
}
inline ::UnityEngine::Rendering::Widget_DebugUI_NameAndTooltip MA::Flora::DebugDisplayFlora_Strings::getStaticF_CullingStats()  {
return ::cordl_internals::getStaticField<::UnityEngine::Rendering::Widget_DebugUI_NameAndTooltip, "CullingStats", ::MA::Flora::DebugDisplayFlora_Strings*>();
}
inline void MA::Flora::DebugDisplayFlora_Strings::setStaticF_EnableGPUChecks(::UnityEngine::Rendering::Widget_DebugUI_NameAndTooltip  value)  {
::cordl_internals::setStaticField<::UnityEngine::Rendering::Widget_DebugUI_NameAndTooltip, "EnableGPUChecks", ::MA::Flora::DebugDisplayFlora_Strings*>(std::forward<::UnityEngine::Rendering::Widget_DebugUI_NameAndTooltip>(value));
}
inline ::UnityEngine::Rendering::Widget_DebugUI_NameAndTooltip MA::Flora::DebugDisplayFlora_Strings::getStaticF_EnableGPUChecks()  {
return ::cordl_internals::getStaticField<::UnityEngine::Rendering::Widget_DebugUI_NameAndTooltip, "EnableGPUChecks", ::MA::Flora::DebugDisplayFlora_Strings*>();
}
// Ctor Parameters []
constexpr ::MA::Flora::DebugDisplayFlora_Strings::DebugDisplayFlora_Strings()   {
}
//  Writing Method size for method: ::MA::Flora::SettingsPanel_DebugDisplayFlora___c._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::SettingsPanel_DebugDisplayFlora___c::*)()>(&::MA::Flora::SettingsPanel_DebugDisplayFlora___c::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::SettingsPanel_DebugDisplayFlora___c*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::SettingsPanel_DebugDisplayFlora___c.__ctor_b__19_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::MA::Flora::SettingsPanel_DebugDisplayFlora___c::*)()>(&::MA::Flora::SettingsPanel_DebugDisplayFlora___c::__ctor_b__19_0)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1814d90e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::SettingsPanel_DebugDisplayFlora___c*>(),
                        {"<.ctor>b__19_0", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::SettingsPanel_DebugDisplayFlora___c.__ctor_b__19_1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::MA::Flora::SettingsPanel_DebugDisplayFlora___c::*)()>(&::MA::Flora::SettingsPanel_DebugDisplayFlora___c::__ctor_b__19_1)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1814d9120;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::SettingsPanel_DebugDisplayFlora___c*>(),
                        {"<.ctor>b__19_1", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::SettingsPanel_DebugDisplayFlora___c._CreateGeneralSettings_b__24_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::MA::Flora::SettingsPanel_DebugDisplayFlora___c::*)()>(&::MA::Flora::SettingsPanel_DebugDisplayFlora___c::_CreateGeneralSettings_b__24_0)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1814d8620;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::SettingsPanel_DebugDisplayFlora___c*>(),
                        {"<CreateGeneralSettings>b__24_0", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::SettingsPanel_DebugDisplayFlora___c._CreateGeneralSettings_b__24_1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::MA::Flora::SettingsPanel_DebugDisplayFlora___c::*)()>(&::MA::Flora::SettingsPanel_DebugDisplayFlora___c::_CreateGeneralSettings_b__24_1)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1814d8bc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::SettingsPanel_DebugDisplayFlora___c*>(),
                        {"<CreateGeneralSettings>b__24_1", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::SettingsPanel_DebugDisplayFlora___c._CreateGeneralSettings_b__24_2
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::SettingsPanel_DebugDisplayFlora___c::*)(int32_t)>(&::MA::Flora::SettingsPanel_DebugDisplayFlora___c::_CreateGeneralSettings_b__24_2)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1814d8c00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::SettingsPanel_DebugDisplayFlora___c*>(),
                        {"<CreateGeneralSettings>b__24_2", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::SettingsPanel_DebugDisplayFlora___c._CreateGeneralSettings_b__24_3
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::MA::Flora::SettingsPanel_DebugDisplayFlora___c::*)()>(&::MA::Flora::SettingsPanel_DebugDisplayFlora___c::_CreateGeneralSettings_b__24_3)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1814d8bc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::SettingsPanel_DebugDisplayFlora___c*>(),
                        {"<CreateGeneralSettings>b__24_3", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::SettingsPanel_DebugDisplayFlora___c._CreateGeneralSettings_b__24_4
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::SettingsPanel_DebugDisplayFlora___c::*)(int32_t)>(&::MA::Flora::SettingsPanel_DebugDisplayFlora___c::_CreateGeneralSettings_b__24_4)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1814d8c00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::SettingsPanel_DebugDisplayFlora___c*>(),
                        {"<CreateGeneralSettings>b__24_4", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::SettingsPanel_DebugDisplayFlora___c._CreateGeneralSettings_b__24_5
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::MA::Flora::SettingsPanel_DebugDisplayFlora___c::*)()>(&::MA::Flora::SettingsPanel_DebugDisplayFlora___c::_CreateGeneralSettings_b__24_5)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1814d8c50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::SettingsPanel_DebugDisplayFlora___c*>(),
                        {"<CreateGeneralSettings>b__24_5", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::SettingsPanel_DebugDisplayFlora___c._CreateGeneralSettings_b__24_6
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::SettingsPanel_DebugDisplayFlora___c::*)(bool)>(&::MA::Flora::SettingsPanel_DebugDisplayFlora___c::_CreateGeneralSettings_b__24_6)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1814d8c90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::SettingsPanel_DebugDisplayFlora___c*>(),
                        {"<CreateGeneralSettings>b__24_6", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::SettingsPanel_DebugDisplayFlora___c._CreateGeneralSettings_b__24_7
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::MA::Flora::SettingsPanel_DebugDisplayFlora___c::*)()>(&::MA::Flora::SettingsPanel_DebugDisplayFlora___c::_CreateGeneralSettings_b__24_7)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1814d8ce0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::SettingsPanel_DebugDisplayFlora___c*>(),
                        {"<CreateGeneralSettings>b__24_7", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::SettingsPanel_DebugDisplayFlora___c._CreateGeneralSettings_b__24_8
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::SettingsPanel_DebugDisplayFlora___c::*)(bool)>(&::MA::Flora::SettingsPanel_DebugDisplayFlora___c::_CreateGeneralSettings_b__24_8)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1814d8d20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::SettingsPanel_DebugDisplayFlora___c*>(),
                        {"<CreateGeneralSettings>b__24_8", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::SettingsPanel_DebugDisplayFlora___c._CreateLODSettings_b__25_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::MA::Flora::SettingsPanel_DebugDisplayFlora___c::*)()>(&::MA::Flora::SettingsPanel_DebugDisplayFlora___c::_CreateLODSettings_b__25_0)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1814d8620;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::SettingsPanel_DebugDisplayFlora___c*>(),
                        {"<CreateLODSettings>b__25_0", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::SettingsPanel_DebugDisplayFlora___c._CreateLODSettings_b__25_1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::MA::Flora::SettingsPanel_DebugDisplayFlora___c::*)()>(&::MA::Flora::SettingsPanel_DebugDisplayFlora___c::_CreateLODSettings_b__25_1)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1814d8d70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::SettingsPanel_DebugDisplayFlora___c*>(),
                        {"<CreateLODSettings>b__25_1", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::SettingsPanel_DebugDisplayFlora___c._CreateLODSettings_b__25_2
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::SettingsPanel_DebugDisplayFlora___c::*)(int32_t)>(&::MA::Flora::SettingsPanel_DebugDisplayFlora___c::_CreateLODSettings_b__25_2)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1814d8db0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::SettingsPanel_DebugDisplayFlora___c*>(),
                        {"<CreateLODSettings>b__25_2", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::SettingsPanel_DebugDisplayFlora___c._CreateLODSettings_b__25_3
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::MA::Flora::SettingsPanel_DebugDisplayFlora___c::*)()>(&::MA::Flora::SettingsPanel_DebugDisplayFlora___c::_CreateLODSettings_b__25_3)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1814d8d70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::SettingsPanel_DebugDisplayFlora___c*>(),
                        {"<CreateLODSettings>b__25_3", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::SettingsPanel_DebugDisplayFlora___c._CreateLODSettings_b__25_4
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::SettingsPanel_DebugDisplayFlora___c::*)(int32_t)>(&::MA::Flora::SettingsPanel_DebugDisplayFlora___c::_CreateLODSettings_b__25_4)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1814d8db0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::SettingsPanel_DebugDisplayFlora___c*>(),
                        {"<CreateLODSettings>b__25_4", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::SettingsPanel_DebugDisplayFlora___c._CreateLODSettings_b__25_5
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::MA::Flora::SettingsPanel_DebugDisplayFlora___c::*)()>(&::MA::Flora::SettingsPanel_DebugDisplayFlora___c::_CreateLODSettings_b__25_5)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1814d8e00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::SettingsPanel_DebugDisplayFlora___c*>(),
                        {"<CreateLODSettings>b__25_5", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::SettingsPanel_DebugDisplayFlora___c._CreateLODSettings_b__25_6
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::MA::Flora::SettingsPanel_DebugDisplayFlora___c::*)()>(&::MA::Flora::SettingsPanel_DebugDisplayFlora___c::_CreateLODSettings_b__25_6)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1814d8e40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::SettingsPanel_DebugDisplayFlora___c*>(),
                        {"<CreateLODSettings>b__25_6", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::SettingsPanel_DebugDisplayFlora___c._CreateLODSettings_b__25_7
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::SettingsPanel_DebugDisplayFlora___c::*)(int32_t)>(&::MA::Flora::SettingsPanel_DebugDisplayFlora___c::_CreateLODSettings_b__25_7)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1814d8e80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::SettingsPanel_DebugDisplayFlora___c*>(),
                        {"<CreateLODSettings>b__25_7", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::SettingsPanel_DebugDisplayFlora___c._CreateLODSettings_b__25_8
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::MA::Flora::SettingsPanel_DebugDisplayFlora___c::*)()>(&::MA::Flora::SettingsPanel_DebugDisplayFlora___c::_CreateLODSettings_b__25_8)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802dd520;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::SettingsPanel_DebugDisplayFlora___c*>(),
                        {"<CreateLODSettings>b__25_8", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::SettingsPanel_DebugDisplayFlora___c._CreateLODSettings_b__25_9
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::MA::Flora::SettingsPanel_DebugDisplayFlora___c::*)()>(&::MA::Flora::SettingsPanel_DebugDisplayFlora___c::_CreateLODSettings_b__25_9)> {
  constexpr static std::size_t size = 0x28d50;
  constexpr static std::size_t addrs = 0x180feb5f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::SettingsPanel_DebugDisplayFlora___c*>(),
                        {"<CreateLODSettings>b__25_9", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::SettingsPanel_DebugDisplayFlora___c._CreateSpatialHashSettings_b__26_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::MA::Flora::SettingsPanel_DebugDisplayFlora___c::*)()>(&::MA::Flora::SettingsPanel_DebugDisplayFlora___c::_CreateSpatialHashSettings_b__26_0)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1814d8620;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::SettingsPanel_DebugDisplayFlora___c*>(),
                        {"<CreateSpatialHashSettings>b__26_0", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::SettingsPanel_DebugDisplayFlora___c._CreateSpatialHashSettings_b__26_1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::MA::Flora::SettingsPanel_DebugDisplayFlora___c::*)()>(&::MA::Flora::SettingsPanel_DebugDisplayFlora___c::_CreateSpatialHashSettings_b__26_1)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1814d8ed0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::SettingsPanel_DebugDisplayFlora___c*>(),
                        {"<CreateSpatialHashSettings>b__26_1", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::SettingsPanel_DebugDisplayFlora___c._CreateSpatialHashSettings_b__26_2
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::SettingsPanel_DebugDisplayFlora___c::*)(int32_t)>(&::MA::Flora::SettingsPanel_DebugDisplayFlora___c::_CreateSpatialHashSettings_b__26_2)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1814d8f10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::SettingsPanel_DebugDisplayFlora___c*>(),
                        {"<CreateSpatialHashSettings>b__26_2", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::SettingsPanel_DebugDisplayFlora___c._CreateSpatialHashSettings_b__26_3
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::MA::Flora::SettingsPanel_DebugDisplayFlora___c::*)()>(&::MA::Flora::SettingsPanel_DebugDisplayFlora___c::_CreateSpatialHashSettings_b__26_3)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1814d8ed0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::SettingsPanel_DebugDisplayFlora___c*>(),
                        {"<CreateSpatialHashSettings>b__26_3", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::SettingsPanel_DebugDisplayFlora___c._CreateSpatialHashSettings_b__26_4
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::SettingsPanel_DebugDisplayFlora___c::*)(int32_t)>(&::MA::Flora::SettingsPanel_DebugDisplayFlora___c::_CreateSpatialHashSettings_b__26_4)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1814d8f10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::SettingsPanel_DebugDisplayFlora___c*>(),
                        {"<CreateSpatialHashSettings>b__26_4", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::SettingsPanel_DebugDisplayFlora___c._CreateSpatialHashSettings_b__26_5
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Enum* (::MA::Flora::SettingsPanel_DebugDisplayFlora___c::*)()>(&::MA::Flora::SettingsPanel_DebugDisplayFlora___c::_CreateSpatialHashSettings_b__26_5)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1814d8f60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::SettingsPanel_DebugDisplayFlora___c*>(),
                        {"<CreateSpatialHashSettings>b__26_5", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::SettingsPanel_DebugDisplayFlora___c._CreateSpatialHashSettings_b__26_6
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::SettingsPanel_DebugDisplayFlora___c::*)(::System::Enum*)>(&::MA::Flora::SettingsPanel_DebugDisplayFlora___c::_CreateSpatialHashSettings_b__26_6)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1814d8fb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::SettingsPanel_DebugDisplayFlora___c*>(),
                        {"<CreateSpatialHashSettings>b__26_6", {}, {::i2c::type_of<::System::Enum*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::SettingsPanel_DebugDisplayFlora___c._CreateSpatialHashSettings_b__26_7
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::MA::Flora::SettingsPanel_DebugDisplayFlora___c::*)()>(&::MA::Flora::SettingsPanel_DebugDisplayFlora___c::_CreateSpatialHashSettings_b__26_7)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1814d9020;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::SettingsPanel_DebugDisplayFlora___c*>(),
                        {"<CreateSpatialHashSettings>b__26_7", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::SettingsPanel_DebugDisplayFlora___c._CreateSpatialHashSettings_b__26_8
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::SettingsPanel_DebugDisplayFlora___c::*)(float_t)>(&::MA::Flora::SettingsPanel_DebugDisplayFlora___c::_CreateSpatialHashSettings_b__26_8)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1814d9070;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::SettingsPanel_DebugDisplayFlora___c*>(),
                        {"<CreateSpatialHashSettings>b__26_8", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::SettingsPanel_DebugDisplayFlora___c._CreateSpatialHashSettings_b__26_9
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::MA::Flora::SettingsPanel_DebugDisplayFlora___c::*)()>(&::MA::Flora::SettingsPanel_DebugDisplayFlora___c::_CreateSpatialHashSettings_b__26_9)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1814d90d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::SettingsPanel_DebugDisplayFlora___c*>(),
                        {"<CreateSpatialHashSettings>b__26_9", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::SettingsPanel_DebugDisplayFlora___c._CreateGPUOcclusionSettings_b__27_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::MA::Flora::SettingsPanel_DebugDisplayFlora___c::*)()>(&::MA::Flora::SettingsPanel_DebugDisplayFlora___c::_CreateGPUOcclusionSettings_b__27_0)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1814d8620;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::SettingsPanel_DebugDisplayFlora___c*>(),
                        {"<CreateGPUOcclusionSettings>b__27_0", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::SettingsPanel_DebugDisplayFlora___c._CreateGPUOcclusionSettings_b__27_1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::MA::Flora::SettingsPanel_DebugDisplayFlora___c::*)()>(&::MA::Flora::SettingsPanel_DebugDisplayFlora___c::_CreateGPUOcclusionSettings_b__27_1)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1814d8850;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::SettingsPanel_DebugDisplayFlora___c*>(),
                        {"<CreateGPUOcclusionSettings>b__27_1", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::SettingsPanel_DebugDisplayFlora___c._CreateGPUOcclusionSettings_b__27_2
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::MA::Flora::SettingsPanel_DebugDisplayFlora___c::*)()>(&::MA::Flora::SettingsPanel_DebugDisplayFlora___c::_CreateGPUOcclusionSettings_b__27_2)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1814d89c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::SettingsPanel_DebugDisplayFlora___c*>(),
                        {"<CreateGPUOcclusionSettings>b__27_2", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::SettingsPanel_DebugDisplayFlora___c._CreateGPUOcclusionSettings_b__27_3
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::MA::Flora::SettingsPanel_DebugDisplayFlora___c::*)()>(&::MA::Flora::SettingsPanel_DebugDisplayFlora___c::_CreateGPUOcclusionSettings_b__27_3)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1814d8aa0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::SettingsPanel_DebugDisplayFlora___c*>(),
                        {"<CreateGPUOcclusionSettings>b__27_3", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::SettingsPanel_DebugDisplayFlora___c._CreateGPUOcclusionSettings_b__27_4
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::SettingsPanel_DebugDisplayFlora___c::*)(bool)>(&::MA::Flora::SettingsPanel_DebugDisplayFlora___c::_CreateGPUOcclusionSettings_b__27_4)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1814d8ae0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::SettingsPanel_DebugDisplayFlora___c*>(),
                        {"<CreateGPUOcclusionSettings>b__27_4", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::SettingsPanel_DebugDisplayFlora___c._CreateGPUOcclusionSettings_b__27_5
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::MA::Flora::SettingsPanel_DebugDisplayFlora___c::*)()>(&::MA::Flora::SettingsPanel_DebugDisplayFlora___c::_CreateGPUOcclusionSettings_b__27_5)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1814d88a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::SettingsPanel_DebugDisplayFlora___c*>(),
                        {"<CreateGPUOcclusionSettings>b__27_5", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::SettingsPanel_DebugDisplayFlora___c._CreateGPUOcclusionSettings_b__27_6
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::MA::Flora::SettingsPanel_DebugDisplayFlora___c::*)()>(&::MA::Flora::SettingsPanel_DebugDisplayFlora___c::_CreateGPUOcclusionSettings_b__27_6)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1814d8b30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::SettingsPanel_DebugDisplayFlora___c*>(),
                        {"<CreateGPUOcclusionSettings>b__27_6", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::SettingsPanel_DebugDisplayFlora___c._CreateGPUOcclusionSettings_b__27_7
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::SettingsPanel_DebugDisplayFlora___c::*)(bool)>(&::MA::Flora::SettingsPanel_DebugDisplayFlora___c::_CreateGPUOcclusionSettings_b__27_7)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1814d8b70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::SettingsPanel_DebugDisplayFlora___c*>(),
                        {"<CreateGPUOcclusionSettings>b__27_7", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::SettingsPanel_DebugDisplayFlora___c._CreateGPUOcclusionSettings_b__27_8
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::MA::Flora::SettingsPanel_DebugDisplayFlora___c::*)()>(&::MA::Flora::SettingsPanel_DebugDisplayFlora___c::_CreateGPUOcclusionSettings_b__27_8)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1814d88a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::SettingsPanel_DebugDisplayFlora___c*>(),
                        {"<CreateGPUOcclusionSettings>b__27_8", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::SettingsPanel_DebugDisplayFlora___c._CreateGPUOcclusionSettings_b__27_10
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::MA::Flora::SettingsPanel_DebugDisplayFlora___c::*)()>(&::MA::Flora::SettingsPanel_DebugDisplayFlora___c::_CreateGPUOcclusionSettings_b__27_10)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803e0b50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::SettingsPanel_DebugDisplayFlora___c*>(),
                        {"<CreateGPUOcclusionSettings>b__27_10", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::SettingsPanel_DebugDisplayFlora___c._CreateGPUOcclusionSettings_b__27_11
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::MA::Flora::SettingsPanel_DebugDisplayFlora___c::*)()>(&::MA::Flora::SettingsPanel_DebugDisplayFlora___c::_CreateGPUOcclusionSettings_b__27_11)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e30f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::SettingsPanel_DebugDisplayFlora___c*>(),
                        {"<CreateGPUOcclusionSettings>b__27_11", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::SettingsPanel_DebugDisplayFlora___c._CreateGPUOcclusionSettings_b__27_12
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::MA::Flora::SettingsPanel_DebugDisplayFlora___c::*)()>(&::MA::Flora::SettingsPanel_DebugDisplayFlora___c::_CreateGPUOcclusionSettings_b__27_12)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1814d8640;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::SettingsPanel_DebugDisplayFlora___c*>(),
                        {"<CreateGPUOcclusionSettings>b__27_12", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::SettingsPanel_DebugDisplayFlora___c._CreateGPUOcclusionSettings_b__27_13
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::SettingsPanel_DebugDisplayFlora___c::*)(float_t)>(&::MA::Flora::SettingsPanel_DebugDisplayFlora___c::_CreateGPUOcclusionSettings_b__27_13)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1814d8690;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::SettingsPanel_DebugDisplayFlora___c*>(),
                        {"<CreateGPUOcclusionSettings>b__27_13", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::SettingsPanel_DebugDisplayFlora___c._CreateGPUOcclusionSettings_b__27_14
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::MA::Flora::SettingsPanel_DebugDisplayFlora___c::*)()>(&::MA::Flora::SettingsPanel_DebugDisplayFlora___c::_CreateGPUOcclusionSettings_b__27_14)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1814d86f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::SettingsPanel_DebugDisplayFlora___c*>(),
                        {"<CreateGPUOcclusionSettings>b__27_14", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::SettingsPanel_DebugDisplayFlora___c._CreateGPUOcclusionSettings_b__27_15
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::MA::Flora::SettingsPanel_DebugDisplayFlora___c::*)()>(&::MA::Flora::SettingsPanel_DebugDisplayFlora___c::_CreateGPUOcclusionSettings_b__27_15)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1814d8730;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::SettingsPanel_DebugDisplayFlora___c*>(),
                        {"<CreateGPUOcclusionSettings>b__27_15", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::SettingsPanel_DebugDisplayFlora___c._CreateGPUOcclusionSettings_b__27_16
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::SettingsPanel_DebugDisplayFlora___c::*)(bool)>(&::MA::Flora::SettingsPanel_DebugDisplayFlora___c::_CreateGPUOcclusionSettings_b__27_16)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1814d8770;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::SettingsPanel_DebugDisplayFlora___c*>(),
                        {"<CreateGPUOcclusionSettings>b__27_16", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::SettingsPanel_DebugDisplayFlora___c._CreateGPUOcclusionSettings_b__27_17
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::MA::Flora::SettingsPanel_DebugDisplayFlora___c::*)()>(&::MA::Flora::SettingsPanel_DebugDisplayFlora___c::_CreateGPUOcclusionSettings_b__27_17)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1814d86f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::SettingsPanel_DebugDisplayFlora___c*>(),
                        {"<CreateGPUOcclusionSettings>b__27_17", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::SettingsPanel_DebugDisplayFlora___c._CreateGPUOcclusionSettings_b__27_9
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::MA::Flora::SettingsPanel_DebugDisplayFlora___c::*)()>(&::MA::Flora::SettingsPanel_DebugDisplayFlora___c::_CreateGPUOcclusionSettings_b__27_9)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1814d88a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::SettingsPanel_DebugDisplayFlora___c*>(),
                        {"<CreateGPUOcclusionSettings>b__27_9", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::SettingsPanel_DebugDisplayFlora___c._CreateGPUOcclusionSettings_b__27_18
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::MA::Flora::SettingsPanel_DebugDisplayFlora___c::*)()>(&::MA::Flora::SettingsPanel_DebugDisplayFlora___c::_CreateGPUOcclusionSettings_b__27_18)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1814d87c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::SettingsPanel_DebugDisplayFlora___c*>(),
                        {"<CreateGPUOcclusionSettings>b__27_18", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::SettingsPanel_DebugDisplayFlora___c._CreateGPUOcclusionSettings_b__27_19
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::SettingsPanel_DebugDisplayFlora___c::*)(bool)>(&::MA::Flora::SettingsPanel_DebugDisplayFlora___c::_CreateGPUOcclusionSettings_b__27_19)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1814d8800;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::SettingsPanel_DebugDisplayFlora___c*>(),
                        {"<CreateGPUOcclusionSettings>b__27_19", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::SettingsPanel_DebugDisplayFlora___c._CreateGPUOcclusionSettings_b__27_20
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::MA::Flora::SettingsPanel_DebugDisplayFlora___c::*)()>(&::MA::Flora::SettingsPanel_DebugDisplayFlora___c::_CreateGPUOcclusionSettings_b__27_20)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1814d88a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::SettingsPanel_DebugDisplayFlora___c*>(),
                        {"<CreateGPUOcclusionSettings>b__27_20", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::SettingsPanel_DebugDisplayFlora___c._CreateGPUOcclusionSettings_b__27_22
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::MA::Flora::SettingsPanel_DebugDisplayFlora___c::*)()>(&::MA::Flora::SettingsPanel_DebugDisplayFlora___c::_CreateGPUOcclusionSettings_b__27_22)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1814d88d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::SettingsPanel_DebugDisplayFlora___c*>(),
                        {"<CreateGPUOcclusionSettings>b__27_22", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::SettingsPanel_DebugDisplayFlora___c._CreateGPUOcclusionSettings_b__27_23
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::MA::Flora::SettingsPanel_DebugDisplayFlora___c::*)()>(&::MA::Flora::SettingsPanel_DebugDisplayFlora___c::_CreateGPUOcclusionSettings_b__27_23)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803e0b50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::SettingsPanel_DebugDisplayFlora___c*>(),
                        {"<CreateGPUOcclusionSettings>b__27_23", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::SettingsPanel_DebugDisplayFlora___c._CreateGPUOcclusionSettings_b__27_24
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::MA::Flora::SettingsPanel_DebugDisplayFlora___c::*)()>(&::MA::Flora::SettingsPanel_DebugDisplayFlora___c::_CreateGPUOcclusionSettings_b__27_24)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e30f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::SettingsPanel_DebugDisplayFlora___c*>(),
                        {"<CreateGPUOcclusionSettings>b__27_24", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::SettingsPanel_DebugDisplayFlora___c._CreateGPUOcclusionSettings_b__27_25
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::MA::Flora::SettingsPanel_DebugDisplayFlora___c::*)()>(&::MA::Flora::SettingsPanel_DebugDisplayFlora___c::_CreateGPUOcclusionSettings_b__27_25)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1814d8910;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::SettingsPanel_DebugDisplayFlora___c*>(),
                        {"<CreateGPUOcclusionSettings>b__27_25", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::SettingsPanel_DebugDisplayFlora___c._CreateGPUOcclusionSettings_b__27_26
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::SettingsPanel_DebugDisplayFlora___c::*)(float_t)>(&::MA::Flora::SettingsPanel_DebugDisplayFlora___c::_CreateGPUOcclusionSettings_b__27_26)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1814d8960;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::SettingsPanel_DebugDisplayFlora___c*>(),
                        {"<CreateGPUOcclusionSettings>b__27_26", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::SettingsPanel_DebugDisplayFlora___c._CreateGPUOcclusionSettings_b__27_27
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::MA::Flora::SettingsPanel_DebugDisplayFlora___c::*)()>(&::MA::Flora::SettingsPanel_DebugDisplayFlora___c::_CreateGPUOcclusionSettings_b__27_27)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1814d88d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::SettingsPanel_DebugDisplayFlora___c*>(),
                        {"<CreateGPUOcclusionSettings>b__27_27", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::SettingsPanel_DebugDisplayFlora___c._CreateGPUOcclusionSettings_b__27_28
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::MA::Flora::SettingsPanel_DebugDisplayFlora___c::*)()>(&::MA::Flora::SettingsPanel_DebugDisplayFlora___c::_CreateGPUOcclusionSettings_b__27_28)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803e0b50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::SettingsPanel_DebugDisplayFlora___c*>(),
                        {"<CreateGPUOcclusionSettings>b__27_28", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::SettingsPanel_DebugDisplayFlora___c._CreateGPUOcclusionSettings_b__27_29
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::MA::Flora::SettingsPanel_DebugDisplayFlora___c::*)()>(&::MA::Flora::SettingsPanel_DebugDisplayFlora___c::_CreateGPUOcclusionSettings_b__27_29)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e30f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::SettingsPanel_DebugDisplayFlora___c*>(),
                        {"<CreateGPUOcclusionSettings>b__27_29", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::SettingsPanel_DebugDisplayFlora___c._CreateGPUOcclusionSettings_b__27_30
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::MA::Flora::SettingsPanel_DebugDisplayFlora___c::*)()>(&::MA::Flora::SettingsPanel_DebugDisplayFlora___c::_CreateGPUOcclusionSettings_b__27_30)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1814d89f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::SettingsPanel_DebugDisplayFlora___c*>(),
                        {"<CreateGPUOcclusionSettings>b__27_30", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::SettingsPanel_DebugDisplayFlora___c._CreateGPUOcclusionSettings_b__27_31
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::SettingsPanel_DebugDisplayFlora___c::*)(float_t)>(&::MA::Flora::SettingsPanel_DebugDisplayFlora___c::_CreateGPUOcclusionSettings_b__27_31)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1814d8a40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::SettingsPanel_DebugDisplayFlora___c*>(),
                        {"<CreateGPUOcclusionSettings>b__27_31", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::SettingsPanel_DebugDisplayFlora___c._CreateGPUOcclusionSettings_b__27_21
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::MA::Flora::SettingsPanel_DebugDisplayFlora___c::*)()>(&::MA::Flora::SettingsPanel_DebugDisplayFlora___c::_CreateGPUOcclusionSettings_b__27_21)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1814d88a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::SettingsPanel_DebugDisplayFlora___c*>(),
                        {"<CreateGPUOcclusionSettings>b__27_21", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::SettingsPanel_DebugDisplayFlora___c._CreateCullingStats_b__28_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::MA::Flora::SettingsPanel_DebugDisplayFlora___c::*)()>(&::MA::Flora::SettingsPanel_DebugDisplayFlora___c::_CreateCullingStats_b__28_0)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1814d8580;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::SettingsPanel_DebugDisplayFlora___c*>(),
                        {"<CreateCullingStats>b__28_0", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::SettingsPanel_DebugDisplayFlora___c._CreateCullingStats_b__28_1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::MA::Flora::SettingsPanel_DebugDisplayFlora___c::*)()>(&::MA::Flora::SettingsPanel_DebugDisplayFlora___c::_CreateCullingStats_b__28_1)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1814d85c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::SettingsPanel_DebugDisplayFlora___c*>(),
                        {"<CreateCullingStats>b__28_1", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::SettingsPanel_DebugDisplayFlora___c._CreateCullingStats_b__28_2
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::MA::Flora::SettingsPanel_DebugDisplayFlora___c::*)()>(&::MA::Flora::SettingsPanel_DebugDisplayFlora___c::_CreateCullingStats_b__28_2)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1814d8580;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::SettingsPanel_DebugDisplayFlora___c*>(),
                        {"<CreateCullingStats>b__28_2", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void MA::Flora::SettingsPanel_DebugDisplayFlora___c::setStaticF___9(::MA::Flora::SettingsPanel_DebugDisplayFlora___c*  value)  {
::cordl_internals::setStaticField<::MA::Flora::SettingsPanel_DebugDisplayFlora___c*, "<>9", ::MA::Flora::SettingsPanel_DebugDisplayFlora___c*>(std::forward<::MA::Flora::SettingsPanel_DebugDisplayFlora___c*>(value));
}
inline ::MA::Flora::SettingsPanel_DebugDisplayFlora___c* MA::Flora::SettingsPanel_DebugDisplayFlora___c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::MA::Flora::SettingsPanel_DebugDisplayFlora___c*, "<>9", ::MA::Flora::SettingsPanel_DebugDisplayFlora___c*>();
}
inline void MA::Flora::SettingsPanel_DebugDisplayFlora___c::setStaticF___9__19_0(::System::Func_1<::StringW>*  value)  {
::cordl_internals::setStaticField<::System::Func_1<::StringW>*, "<>9__19_0", ::MA::Flora::SettingsPanel_DebugDisplayFlora___c*>(std::forward<::System::Func_1<::StringW>*>(value));
}
inline ::System::Func_1<::StringW>* MA::Flora::SettingsPanel_DebugDisplayFlora___c::getStaticF___9__19_0()  {
return ::cordl_internals::getStaticField<::System::Func_1<::StringW>*, "<>9__19_0", ::MA::Flora::SettingsPanel_DebugDisplayFlora___c*>();
}
inline void MA::Flora::SettingsPanel_DebugDisplayFlora___c::setStaticF___9__19_1(::System::Func_1<bool>*  value)  {
::cordl_internals::setStaticField<::System::Func_1<bool>*, "<>9__19_1", ::MA::Flora::SettingsPanel_DebugDisplayFlora___c*>(std::forward<::System::Func_1<bool>*>(value));
}
inline ::System::Func_1<bool>* MA::Flora::SettingsPanel_DebugDisplayFlora___c::getStaticF___9__19_1()  {
return ::cordl_internals::getStaticField<::System::Func_1<bool>*, "<>9__19_1", ::MA::Flora::SettingsPanel_DebugDisplayFlora___c*>();
}
inline void MA::Flora::SettingsPanel_DebugDisplayFlora___c::setStaticF___9__24_0(::System::Func_1<bool>*  value)  {
::cordl_internals::setStaticField<::System::Func_1<bool>*, "<>9__24_0", ::MA::Flora::SettingsPanel_DebugDisplayFlora___c*>(std::forward<::System::Func_1<bool>*>(value));
}
inline ::System::Func_1<bool>* MA::Flora::SettingsPanel_DebugDisplayFlora___c::getStaticF___9__24_0()  {
return ::cordl_internals::getStaticField<::System::Func_1<bool>*, "<>9__24_0", ::MA::Flora::SettingsPanel_DebugDisplayFlora___c*>();
}
inline void MA::Flora::SettingsPanel_DebugDisplayFlora___c::setStaticF___9__24_1(::System::Func_1<int32_t>*  value)  {
::cordl_internals::setStaticField<::System::Func_1<int32_t>*, "<>9__24_1", ::MA::Flora::SettingsPanel_DebugDisplayFlora___c*>(std::forward<::System::Func_1<int32_t>*>(value));
}
inline ::System::Func_1<int32_t>* MA::Flora::SettingsPanel_DebugDisplayFlora___c::getStaticF___9__24_1()  {
return ::cordl_internals::getStaticField<::System::Func_1<int32_t>*, "<>9__24_1", ::MA::Flora::SettingsPanel_DebugDisplayFlora___c*>();
}
inline void MA::Flora::SettingsPanel_DebugDisplayFlora___c::setStaticF___9__24_2(::System::Action_1<int32_t>*  value)  {
::cordl_internals::setStaticField<::System::Action_1<int32_t>*, "<>9__24_2", ::MA::Flora::SettingsPanel_DebugDisplayFlora___c*>(std::forward<::System::Action_1<int32_t>*>(value));
}
inline ::System::Action_1<int32_t>* MA::Flora::SettingsPanel_DebugDisplayFlora___c::getStaticF___9__24_2()  {
return ::cordl_internals::getStaticField<::System::Action_1<int32_t>*, "<>9__24_2", ::MA::Flora::SettingsPanel_DebugDisplayFlora___c*>();
}
inline void MA::Flora::SettingsPanel_DebugDisplayFlora___c::setStaticF___9__24_3(::System::Func_1<int32_t>*  value)  {
::cordl_internals::setStaticField<::System::Func_1<int32_t>*, "<>9__24_3", ::MA::Flora::SettingsPanel_DebugDisplayFlora___c*>(std::forward<::System::Func_1<int32_t>*>(value));
}
inline ::System::Func_1<int32_t>* MA::Flora::SettingsPanel_DebugDisplayFlora___c::getStaticF___9__24_3()  {
return ::cordl_internals::getStaticField<::System::Func_1<int32_t>*, "<>9__24_3", ::MA::Flora::SettingsPanel_DebugDisplayFlora___c*>();
}
inline void MA::Flora::SettingsPanel_DebugDisplayFlora___c::setStaticF___9__24_4(::System::Action_1<int32_t>*  value)  {
::cordl_internals::setStaticField<::System::Action_1<int32_t>*, "<>9__24_4", ::MA::Flora::SettingsPanel_DebugDisplayFlora___c*>(std::forward<::System::Action_1<int32_t>*>(value));
}
inline ::System::Action_1<int32_t>* MA::Flora::SettingsPanel_DebugDisplayFlora___c::getStaticF___9__24_4()  {
return ::cordl_internals::getStaticField<::System::Action_1<int32_t>*, "<>9__24_4", ::MA::Flora::SettingsPanel_DebugDisplayFlora___c*>();
}
inline void MA::Flora::SettingsPanel_DebugDisplayFlora___c::setStaticF___9__24_5(::System::Func_1<bool>*  value)  {
::cordl_internals::setStaticField<::System::Func_1<bool>*, "<>9__24_5", ::MA::Flora::SettingsPanel_DebugDisplayFlora___c*>(std::forward<::System::Func_1<bool>*>(value));
}
inline ::System::Func_1<bool>* MA::Flora::SettingsPanel_DebugDisplayFlora___c::getStaticF___9__24_5()  {
return ::cordl_internals::getStaticField<::System::Func_1<bool>*, "<>9__24_5", ::MA::Flora::SettingsPanel_DebugDisplayFlora___c*>();
}
inline void MA::Flora::SettingsPanel_DebugDisplayFlora___c::setStaticF___9__24_6(::System::Action_1<bool>*  value)  {
::cordl_internals::setStaticField<::System::Action_1<bool>*, "<>9__24_6", ::MA::Flora::SettingsPanel_DebugDisplayFlora___c*>(std::forward<::System::Action_1<bool>*>(value));
}
inline ::System::Action_1<bool>* MA::Flora::SettingsPanel_DebugDisplayFlora___c::getStaticF___9__24_6()  {
return ::cordl_internals::getStaticField<::System::Action_1<bool>*, "<>9__24_6", ::MA::Flora::SettingsPanel_DebugDisplayFlora___c*>();
}
inline void MA::Flora::SettingsPanel_DebugDisplayFlora___c::setStaticF___9__24_7(::System::Func_1<bool>*  value)  {
::cordl_internals::setStaticField<::System::Func_1<bool>*, "<>9__24_7", ::MA::Flora::SettingsPanel_DebugDisplayFlora___c*>(std::forward<::System::Func_1<bool>*>(value));
}
inline ::System::Func_1<bool>* MA::Flora::SettingsPanel_DebugDisplayFlora___c::getStaticF___9__24_7()  {
return ::cordl_internals::getStaticField<::System::Func_1<bool>*, "<>9__24_7", ::MA::Flora::SettingsPanel_DebugDisplayFlora___c*>();
}
inline void MA::Flora::SettingsPanel_DebugDisplayFlora___c::setStaticF___9__24_8(::System::Action_1<bool>*  value)  {
::cordl_internals::setStaticField<::System::Action_1<bool>*, "<>9__24_8", ::MA::Flora::SettingsPanel_DebugDisplayFlora___c*>(std::forward<::System::Action_1<bool>*>(value));
}
inline ::System::Action_1<bool>* MA::Flora::SettingsPanel_DebugDisplayFlora___c::getStaticF___9__24_8()  {
return ::cordl_internals::getStaticField<::System::Action_1<bool>*, "<>9__24_8", ::MA::Flora::SettingsPanel_DebugDisplayFlora___c*>();
}
inline void MA::Flora::SettingsPanel_DebugDisplayFlora___c::setStaticF___9__25_0(::System::Func_1<bool>*  value)  {
::cordl_internals::setStaticField<::System::Func_1<bool>*, "<>9__25_0", ::MA::Flora::SettingsPanel_DebugDisplayFlora___c*>(std::forward<::System::Func_1<bool>*>(value));
}
inline ::System::Func_1<bool>* MA::Flora::SettingsPanel_DebugDisplayFlora___c::getStaticF___9__25_0()  {
return ::cordl_internals::getStaticField<::System::Func_1<bool>*, "<>9__25_0", ::MA::Flora::SettingsPanel_DebugDisplayFlora___c*>();
}
inline void MA::Flora::SettingsPanel_DebugDisplayFlora___c::setStaticF___9__25_1(::System::Func_1<int32_t>*  value)  {
::cordl_internals::setStaticField<::System::Func_1<int32_t>*, "<>9__25_1", ::MA::Flora::SettingsPanel_DebugDisplayFlora___c*>(std::forward<::System::Func_1<int32_t>*>(value));
}
inline ::System::Func_1<int32_t>* MA::Flora::SettingsPanel_DebugDisplayFlora___c::getStaticF___9__25_1()  {
return ::cordl_internals::getStaticField<::System::Func_1<int32_t>*, "<>9__25_1", ::MA::Flora::SettingsPanel_DebugDisplayFlora___c*>();
}
inline void MA::Flora::SettingsPanel_DebugDisplayFlora___c::setStaticF___9__25_2(::System::Action_1<int32_t>*  value)  {
::cordl_internals::setStaticField<::System::Action_1<int32_t>*, "<>9__25_2", ::MA::Flora::SettingsPanel_DebugDisplayFlora___c*>(std::forward<::System::Action_1<int32_t>*>(value));
}
inline ::System::Action_1<int32_t>* MA::Flora::SettingsPanel_DebugDisplayFlora___c::getStaticF___9__25_2()  {
return ::cordl_internals::getStaticField<::System::Action_1<int32_t>*, "<>9__25_2", ::MA::Flora::SettingsPanel_DebugDisplayFlora___c*>();
}
inline void MA::Flora::SettingsPanel_DebugDisplayFlora___c::setStaticF___9__25_3(::System::Func_1<int32_t>*  value)  {
::cordl_internals::setStaticField<::System::Func_1<int32_t>*, "<>9__25_3", ::MA::Flora::SettingsPanel_DebugDisplayFlora___c*>(std::forward<::System::Func_1<int32_t>*>(value));
}
inline ::System::Func_1<int32_t>* MA::Flora::SettingsPanel_DebugDisplayFlora___c::getStaticF___9__25_3()  {
return ::cordl_internals::getStaticField<::System::Func_1<int32_t>*, "<>9__25_3", ::MA::Flora::SettingsPanel_DebugDisplayFlora___c*>();
}
inline void MA::Flora::SettingsPanel_DebugDisplayFlora___c::setStaticF___9__25_4(::System::Action_1<int32_t>*  value)  {
::cordl_internals::setStaticField<::System::Action_1<int32_t>*, "<>9__25_4", ::MA::Flora::SettingsPanel_DebugDisplayFlora___c*>(std::forward<::System::Action_1<int32_t>*>(value));
}
inline ::System::Action_1<int32_t>* MA::Flora::SettingsPanel_DebugDisplayFlora___c::getStaticF___9__25_4()  {
return ::cordl_internals::getStaticField<::System::Action_1<int32_t>*, "<>9__25_4", ::MA::Flora::SettingsPanel_DebugDisplayFlora___c*>();
}
inline void MA::Flora::SettingsPanel_DebugDisplayFlora___c::setStaticF___9__25_5(::System::Func_1<bool>*  value)  {
::cordl_internals::setStaticField<::System::Func_1<bool>*, "<>9__25_5", ::MA::Flora::SettingsPanel_DebugDisplayFlora___c*>(std::forward<::System::Func_1<bool>*>(value));
}
inline ::System::Func_1<bool>* MA::Flora::SettingsPanel_DebugDisplayFlora___c::getStaticF___9__25_5()  {
return ::cordl_internals::getStaticField<::System::Func_1<bool>*, "<>9__25_5", ::MA::Flora::SettingsPanel_DebugDisplayFlora___c*>();
}
inline void MA::Flora::SettingsPanel_DebugDisplayFlora___c::setStaticF___9__25_6(::System::Func_1<int32_t>*  value)  {
::cordl_internals::setStaticField<::System::Func_1<int32_t>*, "<>9__25_6", ::MA::Flora::SettingsPanel_DebugDisplayFlora___c*>(std::forward<::System::Func_1<int32_t>*>(value));
}
inline ::System::Func_1<int32_t>* MA::Flora::SettingsPanel_DebugDisplayFlora___c::getStaticF___9__25_6()  {
return ::cordl_internals::getStaticField<::System::Func_1<int32_t>*, "<>9__25_6", ::MA::Flora::SettingsPanel_DebugDisplayFlora___c*>();
}
inline void MA::Flora::SettingsPanel_DebugDisplayFlora___c::setStaticF___9__25_7(::System::Action_1<int32_t>*  value)  {
::cordl_internals::setStaticField<::System::Action_1<int32_t>*, "<>9__25_7", ::MA::Flora::SettingsPanel_DebugDisplayFlora___c*>(std::forward<::System::Action_1<int32_t>*>(value));
}
inline ::System::Action_1<int32_t>* MA::Flora::SettingsPanel_DebugDisplayFlora___c::getStaticF___9__25_7()  {
return ::cordl_internals::getStaticField<::System::Action_1<int32_t>*, "<>9__25_7", ::MA::Flora::SettingsPanel_DebugDisplayFlora___c*>();
}
inline void MA::Flora::SettingsPanel_DebugDisplayFlora___c::setStaticF___9__25_8(::System::Func_1<int32_t>*  value)  {
::cordl_internals::setStaticField<::System::Func_1<int32_t>*, "<>9__25_8", ::MA::Flora::SettingsPanel_DebugDisplayFlora___c*>(std::forward<::System::Func_1<int32_t>*>(value));
}
inline ::System::Func_1<int32_t>* MA::Flora::SettingsPanel_DebugDisplayFlora___c::getStaticF___9__25_8()  {
return ::cordl_internals::getStaticField<::System::Func_1<int32_t>*, "<>9__25_8", ::MA::Flora::SettingsPanel_DebugDisplayFlora___c*>();
}
inline void MA::Flora::SettingsPanel_DebugDisplayFlora___c::setStaticF___9__25_9(::System::Func_1<int32_t>*  value)  {
::cordl_internals::setStaticField<::System::Func_1<int32_t>*, "<>9__25_9", ::MA::Flora::SettingsPanel_DebugDisplayFlora___c*>(std::forward<::System::Func_1<int32_t>*>(value));
}
inline ::System::Func_1<int32_t>* MA::Flora::SettingsPanel_DebugDisplayFlora___c::getStaticF___9__25_9()  {
return ::cordl_internals::getStaticField<::System::Func_1<int32_t>*, "<>9__25_9", ::MA::Flora::SettingsPanel_DebugDisplayFlora___c*>();
}
inline void MA::Flora::SettingsPanel_DebugDisplayFlora___c::setStaticF___9__26_0(::System::Func_1<bool>*  value)  {
::cordl_internals::setStaticField<::System::Func_1<bool>*, "<>9__26_0", ::MA::Flora::SettingsPanel_DebugDisplayFlora___c*>(std::forward<::System::Func_1<bool>*>(value));
}
inline ::System::Func_1<bool>* MA::Flora::SettingsPanel_DebugDisplayFlora___c::getStaticF___9__26_0()  {
return ::cordl_internals::getStaticField<::System::Func_1<bool>*, "<>9__26_0", ::MA::Flora::SettingsPanel_DebugDisplayFlora___c*>();
}
inline void MA::Flora::SettingsPanel_DebugDisplayFlora___c::setStaticF___9__26_1(::System::Func_1<int32_t>*  value)  {
::cordl_internals::setStaticField<::System::Func_1<int32_t>*, "<>9__26_1", ::MA::Flora::SettingsPanel_DebugDisplayFlora___c*>(std::forward<::System::Func_1<int32_t>*>(value));
}
inline ::System::Func_1<int32_t>* MA::Flora::SettingsPanel_DebugDisplayFlora___c::getStaticF___9__26_1()  {
return ::cordl_internals::getStaticField<::System::Func_1<int32_t>*, "<>9__26_1", ::MA::Flora::SettingsPanel_DebugDisplayFlora___c*>();
}
inline void MA::Flora::SettingsPanel_DebugDisplayFlora___c::setStaticF___9__26_2(::System::Action_1<int32_t>*  value)  {
::cordl_internals::setStaticField<::System::Action_1<int32_t>*, "<>9__26_2", ::MA::Flora::SettingsPanel_DebugDisplayFlora___c*>(std::forward<::System::Action_1<int32_t>*>(value));
}
inline ::System::Action_1<int32_t>* MA::Flora::SettingsPanel_DebugDisplayFlora___c::getStaticF___9__26_2()  {
return ::cordl_internals::getStaticField<::System::Action_1<int32_t>*, "<>9__26_2", ::MA::Flora::SettingsPanel_DebugDisplayFlora___c*>();
}
inline void MA::Flora::SettingsPanel_DebugDisplayFlora___c::setStaticF___9__26_3(::System::Func_1<int32_t>*  value)  {
::cordl_internals::setStaticField<::System::Func_1<int32_t>*, "<>9__26_3", ::MA::Flora::SettingsPanel_DebugDisplayFlora___c*>(std::forward<::System::Func_1<int32_t>*>(value));
}
inline ::System::Func_1<int32_t>* MA::Flora::SettingsPanel_DebugDisplayFlora___c::getStaticF___9__26_3()  {
return ::cordl_internals::getStaticField<::System::Func_1<int32_t>*, "<>9__26_3", ::MA::Flora::SettingsPanel_DebugDisplayFlora___c*>();
}
inline void MA::Flora::SettingsPanel_DebugDisplayFlora___c::setStaticF___9__26_4(::System::Action_1<int32_t>*  value)  {
::cordl_internals::setStaticField<::System::Action_1<int32_t>*, "<>9__26_4", ::MA::Flora::SettingsPanel_DebugDisplayFlora___c*>(std::forward<::System::Action_1<int32_t>*>(value));
}
inline ::System::Action_1<int32_t>* MA::Flora::SettingsPanel_DebugDisplayFlora___c::getStaticF___9__26_4()  {
return ::cordl_internals::getStaticField<::System::Action_1<int32_t>*, "<>9__26_4", ::MA::Flora::SettingsPanel_DebugDisplayFlora___c*>();
}
inline void MA::Flora::SettingsPanel_DebugDisplayFlora___c::setStaticF___9__26_5(::System::Func_1<::System::Enum*>*  value)  {
::cordl_internals::setStaticField<::System::Func_1<::System::Enum*>*, "<>9__26_5", ::MA::Flora::SettingsPanel_DebugDisplayFlora___c*>(std::forward<::System::Func_1<::System::Enum*>*>(value));
}
inline ::System::Func_1<::System::Enum*>* MA::Flora::SettingsPanel_DebugDisplayFlora___c::getStaticF___9__26_5()  {
return ::cordl_internals::getStaticField<::System::Func_1<::System::Enum*>*, "<>9__26_5", ::MA::Flora::SettingsPanel_DebugDisplayFlora___c*>();
}
inline void MA::Flora::SettingsPanel_DebugDisplayFlora___c::setStaticF___9__26_6(::System::Action_1<::System::Enum*>*  value)  {
::cordl_internals::setStaticField<::System::Action_1<::System::Enum*>*, "<>9__26_6", ::MA::Flora::SettingsPanel_DebugDisplayFlora___c*>(std::forward<::System::Action_1<::System::Enum*>*>(value));
}
inline ::System::Action_1<::System::Enum*>* MA::Flora::SettingsPanel_DebugDisplayFlora___c::getStaticF___9__26_6()  {
return ::cordl_internals::getStaticField<::System::Action_1<::System::Enum*>*, "<>9__26_6", ::MA::Flora::SettingsPanel_DebugDisplayFlora___c*>();
}
inline void MA::Flora::SettingsPanel_DebugDisplayFlora___c::setStaticF___9__26_7(::System::Func_1<float_t>*  value)  {
::cordl_internals::setStaticField<::System::Func_1<float_t>*, "<>9__26_7", ::MA::Flora::SettingsPanel_DebugDisplayFlora___c*>(std::forward<::System::Func_1<float_t>*>(value));
}
inline ::System::Func_1<float_t>* MA::Flora::SettingsPanel_DebugDisplayFlora___c::getStaticF___9__26_7()  {
return ::cordl_internals::getStaticField<::System::Func_1<float_t>*, "<>9__26_7", ::MA::Flora::SettingsPanel_DebugDisplayFlora___c*>();
}
inline void MA::Flora::SettingsPanel_DebugDisplayFlora___c::setStaticF___9__26_8(::System::Action_1<float_t>*  value)  {
::cordl_internals::setStaticField<::System::Action_1<float_t>*, "<>9__26_8", ::MA::Flora::SettingsPanel_DebugDisplayFlora___c*>(std::forward<::System::Action_1<float_t>*>(value));
}
inline ::System::Action_1<float_t>* MA::Flora::SettingsPanel_DebugDisplayFlora___c::getStaticF___9__26_8()  {
return ::cordl_internals::getStaticField<::System::Action_1<float_t>*, "<>9__26_8", ::MA::Flora::SettingsPanel_DebugDisplayFlora___c*>();
}
inline void MA::Flora::SettingsPanel_DebugDisplayFlora___c::setStaticF___9__26_9(::System::Func_1<float_t>*  value)  {
::cordl_internals::setStaticField<::System::Func_1<float_t>*, "<>9__26_9", ::MA::Flora::SettingsPanel_DebugDisplayFlora___c*>(std::forward<::System::Func_1<float_t>*>(value));
}
inline ::System::Func_1<float_t>* MA::Flora::SettingsPanel_DebugDisplayFlora___c::getStaticF___9__26_9()  {
return ::cordl_internals::getStaticField<::System::Func_1<float_t>*, "<>9__26_9", ::MA::Flora::SettingsPanel_DebugDisplayFlora___c*>();
}
inline void MA::Flora::SettingsPanel_DebugDisplayFlora___c::setStaticF___9__27_0(::System::Func_1<bool>*  value)  {
::cordl_internals::setStaticField<::System::Func_1<bool>*, "<>9__27_0", ::MA::Flora::SettingsPanel_DebugDisplayFlora___c*>(std::forward<::System::Func_1<bool>*>(value));
}
inline ::System::Func_1<bool>* MA::Flora::SettingsPanel_DebugDisplayFlora___c::getStaticF___9__27_0()  {
return ::cordl_internals::getStaticField<::System::Func_1<bool>*, "<>9__27_0", ::MA::Flora::SettingsPanel_DebugDisplayFlora___c*>();
}
inline void MA::Flora::SettingsPanel_DebugDisplayFlora___c::setStaticF___9__27_1(::System::Func_1<::StringW>*  value)  {
::cordl_internals::setStaticField<::System::Func_1<::StringW>*, "<>9__27_1", ::MA::Flora::SettingsPanel_DebugDisplayFlora___c*>(std::forward<::System::Func_1<::StringW>*>(value));
}
inline ::System::Func_1<::StringW>* MA::Flora::SettingsPanel_DebugDisplayFlora___c::getStaticF___9__27_1()  {
return ::cordl_internals::getStaticField<::System::Func_1<::StringW>*, "<>9__27_1", ::MA::Flora::SettingsPanel_DebugDisplayFlora___c*>();
}
inline void MA::Flora::SettingsPanel_DebugDisplayFlora___c::setStaticF___9__27_2(::System::Func_1<bool>*  value)  {
::cordl_internals::setStaticField<::System::Func_1<bool>*, "<>9__27_2", ::MA::Flora::SettingsPanel_DebugDisplayFlora___c*>(std::forward<::System::Func_1<bool>*>(value));
}
inline ::System::Func_1<bool>* MA::Flora::SettingsPanel_DebugDisplayFlora___c::getStaticF___9__27_2()  {
return ::cordl_internals::getStaticField<::System::Func_1<bool>*, "<>9__27_2", ::MA::Flora::SettingsPanel_DebugDisplayFlora___c*>();
}
inline void MA::Flora::SettingsPanel_DebugDisplayFlora___c::setStaticF___9__27_3(::System::Func_1<bool>*  value)  {
::cordl_internals::setStaticField<::System::Func_1<bool>*, "<>9__27_3", ::MA::Flora::SettingsPanel_DebugDisplayFlora___c*>(std::forward<::System::Func_1<bool>*>(value));
}
inline ::System::Func_1<bool>* MA::Flora::SettingsPanel_DebugDisplayFlora___c::getStaticF___9__27_3()  {
return ::cordl_internals::getStaticField<::System::Func_1<bool>*, "<>9__27_3", ::MA::Flora::SettingsPanel_DebugDisplayFlora___c*>();
}
inline void MA::Flora::SettingsPanel_DebugDisplayFlora___c::setStaticF___9__27_4(::System::Action_1<bool>*  value)  {
::cordl_internals::setStaticField<::System::Action_1<bool>*, "<>9__27_4", ::MA::Flora::SettingsPanel_DebugDisplayFlora___c*>(std::forward<::System::Action_1<bool>*>(value));
}
inline ::System::Action_1<bool>* MA::Flora::SettingsPanel_DebugDisplayFlora___c::getStaticF___9__27_4()  {
return ::cordl_internals::getStaticField<::System::Action_1<bool>*, "<>9__27_4", ::MA::Flora::SettingsPanel_DebugDisplayFlora___c*>();
}
inline void MA::Flora::SettingsPanel_DebugDisplayFlora___c::setStaticF___9__27_5(::System::Func_1<bool>*  value)  {
::cordl_internals::setStaticField<::System::Func_1<bool>*, "<>9__27_5", ::MA::Flora::SettingsPanel_DebugDisplayFlora___c*>(std::forward<::System::Func_1<bool>*>(value));
}
inline ::System::Func_1<bool>* MA::Flora::SettingsPanel_DebugDisplayFlora___c::getStaticF___9__27_5()  {
return ::cordl_internals::getStaticField<::System::Func_1<bool>*, "<>9__27_5", ::MA::Flora::SettingsPanel_DebugDisplayFlora___c*>();
}
inline void MA::Flora::SettingsPanel_DebugDisplayFlora___c::setStaticF___9__27_6(::System::Func_1<bool>*  value)  {
::cordl_internals::setStaticField<::System::Func_1<bool>*, "<>9__27_6", ::MA::Flora::SettingsPanel_DebugDisplayFlora___c*>(std::forward<::System::Func_1<bool>*>(value));
}
inline ::System::Func_1<bool>* MA::Flora::SettingsPanel_DebugDisplayFlora___c::getStaticF___9__27_6()  {
return ::cordl_internals::getStaticField<::System::Func_1<bool>*, "<>9__27_6", ::MA::Flora::SettingsPanel_DebugDisplayFlora___c*>();
}
inline void MA::Flora::SettingsPanel_DebugDisplayFlora___c::setStaticF___9__27_7(::System::Action_1<bool>*  value)  {
::cordl_internals::setStaticField<::System::Action_1<bool>*, "<>9__27_7", ::MA::Flora::SettingsPanel_DebugDisplayFlora___c*>(std::forward<::System::Action_1<bool>*>(value));
}
inline ::System::Action_1<bool>* MA::Flora::SettingsPanel_DebugDisplayFlora___c::getStaticF___9__27_7()  {
return ::cordl_internals::getStaticField<::System::Action_1<bool>*, "<>9__27_7", ::MA::Flora::SettingsPanel_DebugDisplayFlora___c*>();
}
inline void MA::Flora::SettingsPanel_DebugDisplayFlora___c::setStaticF___9__27_8(::System::Func_1<bool>*  value)  {
::cordl_internals::setStaticField<::System::Func_1<bool>*, "<>9__27_8", ::MA::Flora::SettingsPanel_DebugDisplayFlora___c*>(std::forward<::System::Func_1<bool>*>(value));
}
inline ::System::Func_1<bool>* MA::Flora::SettingsPanel_DebugDisplayFlora___c::getStaticF___9__27_8()  {
return ::cordl_internals::getStaticField<::System::Func_1<bool>*, "<>9__27_8", ::MA::Flora::SettingsPanel_DebugDisplayFlora___c*>();
}
inline void MA::Flora::SettingsPanel_DebugDisplayFlora___c::setStaticF___9__27_10(::System::Func_1<float_t>*  value)  {
::cordl_internals::setStaticField<::System::Func_1<float_t>*, "<>9__27_10", ::MA::Flora::SettingsPanel_DebugDisplayFlora___c*>(std::forward<::System::Func_1<float_t>*>(value));
}
inline ::System::Func_1<float_t>* MA::Flora::SettingsPanel_DebugDisplayFlora___c::getStaticF___9__27_10()  {
return ::cordl_internals::getStaticField<::System::Func_1<float_t>*, "<>9__27_10", ::MA::Flora::SettingsPanel_DebugDisplayFlora___c*>();
}
inline void MA::Flora::SettingsPanel_DebugDisplayFlora___c::setStaticF___9__27_11(::System::Func_1<float_t>*  value)  {
::cordl_internals::setStaticField<::System::Func_1<float_t>*, "<>9__27_11", ::MA::Flora::SettingsPanel_DebugDisplayFlora___c*>(std::forward<::System::Func_1<float_t>*>(value));
}
inline ::System::Func_1<float_t>* MA::Flora::SettingsPanel_DebugDisplayFlora___c::getStaticF___9__27_11()  {
return ::cordl_internals::getStaticField<::System::Func_1<float_t>*, "<>9__27_11", ::MA::Flora::SettingsPanel_DebugDisplayFlora___c*>();
}
inline void MA::Flora::SettingsPanel_DebugDisplayFlora___c::setStaticF___9__27_12(::System::Func_1<float_t>*  value)  {
::cordl_internals::setStaticField<::System::Func_1<float_t>*, "<>9__27_12", ::MA::Flora::SettingsPanel_DebugDisplayFlora___c*>(std::forward<::System::Func_1<float_t>*>(value));
}
inline ::System::Func_1<float_t>* MA::Flora::SettingsPanel_DebugDisplayFlora___c::getStaticF___9__27_12()  {
return ::cordl_internals::getStaticField<::System::Func_1<float_t>*, "<>9__27_12", ::MA::Flora::SettingsPanel_DebugDisplayFlora___c*>();
}
inline void MA::Flora::SettingsPanel_DebugDisplayFlora___c::setStaticF___9__27_13(::System::Action_1<float_t>*  value)  {
::cordl_internals::setStaticField<::System::Action_1<float_t>*, "<>9__27_13", ::MA::Flora::SettingsPanel_DebugDisplayFlora___c*>(std::forward<::System::Action_1<float_t>*>(value));
}
inline ::System::Action_1<float_t>* MA::Flora::SettingsPanel_DebugDisplayFlora___c::getStaticF___9__27_13()  {
return ::cordl_internals::getStaticField<::System::Action_1<float_t>*, "<>9__27_13", ::MA::Flora::SettingsPanel_DebugDisplayFlora___c*>();
}
inline void MA::Flora::SettingsPanel_DebugDisplayFlora___c::setStaticF___9__27_14(::System::Func_1<bool>*  value)  {
::cordl_internals::setStaticField<::System::Func_1<bool>*, "<>9__27_14", ::MA::Flora::SettingsPanel_DebugDisplayFlora___c*>(std::forward<::System::Func_1<bool>*>(value));
}
inline ::System::Func_1<bool>* MA::Flora::SettingsPanel_DebugDisplayFlora___c::getStaticF___9__27_14()  {
return ::cordl_internals::getStaticField<::System::Func_1<bool>*, "<>9__27_14", ::MA::Flora::SettingsPanel_DebugDisplayFlora___c*>();
}
inline void MA::Flora::SettingsPanel_DebugDisplayFlora___c::setStaticF___9__27_15(::System::Func_1<bool>*  value)  {
::cordl_internals::setStaticField<::System::Func_1<bool>*, "<>9__27_15", ::MA::Flora::SettingsPanel_DebugDisplayFlora___c*>(std::forward<::System::Func_1<bool>*>(value));
}
inline ::System::Func_1<bool>* MA::Flora::SettingsPanel_DebugDisplayFlora___c::getStaticF___9__27_15()  {
return ::cordl_internals::getStaticField<::System::Func_1<bool>*, "<>9__27_15", ::MA::Flora::SettingsPanel_DebugDisplayFlora___c*>();
}
inline void MA::Flora::SettingsPanel_DebugDisplayFlora___c::setStaticF___9__27_16(::System::Action_1<bool>*  value)  {
::cordl_internals::setStaticField<::System::Action_1<bool>*, "<>9__27_16", ::MA::Flora::SettingsPanel_DebugDisplayFlora___c*>(std::forward<::System::Action_1<bool>*>(value));
}
inline ::System::Action_1<bool>* MA::Flora::SettingsPanel_DebugDisplayFlora___c::getStaticF___9__27_16()  {
return ::cordl_internals::getStaticField<::System::Action_1<bool>*, "<>9__27_16", ::MA::Flora::SettingsPanel_DebugDisplayFlora___c*>();
}
inline void MA::Flora::SettingsPanel_DebugDisplayFlora___c::setStaticF___9__27_17(::System::Func_1<bool>*  value)  {
::cordl_internals::setStaticField<::System::Func_1<bool>*, "<>9__27_17", ::MA::Flora::SettingsPanel_DebugDisplayFlora___c*>(std::forward<::System::Func_1<bool>*>(value));
}
inline ::System::Func_1<bool>* MA::Flora::SettingsPanel_DebugDisplayFlora___c::getStaticF___9__27_17()  {
return ::cordl_internals::getStaticField<::System::Func_1<bool>*, "<>9__27_17", ::MA::Flora::SettingsPanel_DebugDisplayFlora___c*>();
}
inline void MA::Flora::SettingsPanel_DebugDisplayFlora___c::setStaticF___9__27_9(::System::Func_1<bool>*  value)  {
::cordl_internals::setStaticField<::System::Func_1<bool>*, "<>9__27_9", ::MA::Flora::SettingsPanel_DebugDisplayFlora___c*>(std::forward<::System::Func_1<bool>*>(value));
}
inline ::System::Func_1<bool>* MA::Flora::SettingsPanel_DebugDisplayFlora___c::getStaticF___9__27_9()  {
return ::cordl_internals::getStaticField<::System::Func_1<bool>*, "<>9__27_9", ::MA::Flora::SettingsPanel_DebugDisplayFlora___c*>();
}
inline void MA::Flora::SettingsPanel_DebugDisplayFlora___c::setStaticF___9__27_18(::System::Func_1<bool>*  value)  {
::cordl_internals::setStaticField<::System::Func_1<bool>*, "<>9__27_18", ::MA::Flora::SettingsPanel_DebugDisplayFlora___c*>(std::forward<::System::Func_1<bool>*>(value));
}
inline ::System::Func_1<bool>* MA::Flora::SettingsPanel_DebugDisplayFlora___c::getStaticF___9__27_18()  {
return ::cordl_internals::getStaticField<::System::Func_1<bool>*, "<>9__27_18", ::MA::Flora::SettingsPanel_DebugDisplayFlora___c*>();
}
inline void MA::Flora::SettingsPanel_DebugDisplayFlora___c::setStaticF___9__27_19(::System::Action_1<bool>*  value)  {
::cordl_internals::setStaticField<::System::Action_1<bool>*, "<>9__27_19", ::MA::Flora::SettingsPanel_DebugDisplayFlora___c*>(std::forward<::System::Action_1<bool>*>(value));
}
inline ::System::Action_1<bool>* MA::Flora::SettingsPanel_DebugDisplayFlora___c::getStaticF___9__27_19()  {
return ::cordl_internals::getStaticField<::System::Action_1<bool>*, "<>9__27_19", ::MA::Flora::SettingsPanel_DebugDisplayFlora___c*>();
}
inline void MA::Flora::SettingsPanel_DebugDisplayFlora___c::setStaticF___9__27_20(::System::Func_1<bool>*  value)  {
::cordl_internals::setStaticField<::System::Func_1<bool>*, "<>9__27_20", ::MA::Flora::SettingsPanel_DebugDisplayFlora___c*>(std::forward<::System::Func_1<bool>*>(value));
}
inline ::System::Func_1<bool>* MA::Flora::SettingsPanel_DebugDisplayFlora___c::getStaticF___9__27_20()  {
return ::cordl_internals::getStaticField<::System::Func_1<bool>*, "<>9__27_20", ::MA::Flora::SettingsPanel_DebugDisplayFlora___c*>();
}
inline void MA::Flora::SettingsPanel_DebugDisplayFlora___c::setStaticF___9__27_22(::System::Func_1<bool>*  value)  {
::cordl_internals::setStaticField<::System::Func_1<bool>*, "<>9__27_22", ::MA::Flora::SettingsPanel_DebugDisplayFlora___c*>(std::forward<::System::Func_1<bool>*>(value));
}
inline ::System::Func_1<bool>* MA::Flora::SettingsPanel_DebugDisplayFlora___c::getStaticF___9__27_22()  {
return ::cordl_internals::getStaticField<::System::Func_1<bool>*, "<>9__27_22", ::MA::Flora::SettingsPanel_DebugDisplayFlora___c*>();
}
inline void MA::Flora::SettingsPanel_DebugDisplayFlora___c::setStaticF___9__27_23(::System::Func_1<float_t>*  value)  {
::cordl_internals::setStaticField<::System::Func_1<float_t>*, "<>9__27_23", ::MA::Flora::SettingsPanel_DebugDisplayFlora___c*>(std::forward<::System::Func_1<float_t>*>(value));
}
inline ::System::Func_1<float_t>* MA::Flora::SettingsPanel_DebugDisplayFlora___c::getStaticF___9__27_23()  {
return ::cordl_internals::getStaticField<::System::Func_1<float_t>*, "<>9__27_23", ::MA::Flora::SettingsPanel_DebugDisplayFlora___c*>();
}
inline void MA::Flora::SettingsPanel_DebugDisplayFlora___c::setStaticF___9__27_24(::System::Func_1<float_t>*  value)  {
::cordl_internals::setStaticField<::System::Func_1<float_t>*, "<>9__27_24", ::MA::Flora::SettingsPanel_DebugDisplayFlora___c*>(std::forward<::System::Func_1<float_t>*>(value));
}
inline ::System::Func_1<float_t>* MA::Flora::SettingsPanel_DebugDisplayFlora___c::getStaticF___9__27_24()  {
return ::cordl_internals::getStaticField<::System::Func_1<float_t>*, "<>9__27_24", ::MA::Flora::SettingsPanel_DebugDisplayFlora___c*>();
}
inline void MA::Flora::SettingsPanel_DebugDisplayFlora___c::setStaticF___9__27_25(::System::Func_1<float_t>*  value)  {
::cordl_internals::setStaticField<::System::Func_1<float_t>*, "<>9__27_25", ::MA::Flora::SettingsPanel_DebugDisplayFlora___c*>(std::forward<::System::Func_1<float_t>*>(value));
}
inline ::System::Func_1<float_t>* MA::Flora::SettingsPanel_DebugDisplayFlora___c::getStaticF___9__27_25()  {
return ::cordl_internals::getStaticField<::System::Func_1<float_t>*, "<>9__27_25", ::MA::Flora::SettingsPanel_DebugDisplayFlora___c*>();
}
inline void MA::Flora::SettingsPanel_DebugDisplayFlora___c::setStaticF___9__27_26(::System::Action_1<float_t>*  value)  {
::cordl_internals::setStaticField<::System::Action_1<float_t>*, "<>9__27_26", ::MA::Flora::SettingsPanel_DebugDisplayFlora___c*>(std::forward<::System::Action_1<float_t>*>(value));
}
inline ::System::Action_1<float_t>* MA::Flora::SettingsPanel_DebugDisplayFlora___c::getStaticF___9__27_26()  {
return ::cordl_internals::getStaticField<::System::Action_1<float_t>*, "<>9__27_26", ::MA::Flora::SettingsPanel_DebugDisplayFlora___c*>();
}
inline void MA::Flora::SettingsPanel_DebugDisplayFlora___c::setStaticF___9__27_27(::System::Func_1<bool>*  value)  {
::cordl_internals::setStaticField<::System::Func_1<bool>*, "<>9__27_27", ::MA::Flora::SettingsPanel_DebugDisplayFlora___c*>(std::forward<::System::Func_1<bool>*>(value));
}
inline ::System::Func_1<bool>* MA::Flora::SettingsPanel_DebugDisplayFlora___c::getStaticF___9__27_27()  {
return ::cordl_internals::getStaticField<::System::Func_1<bool>*, "<>9__27_27", ::MA::Flora::SettingsPanel_DebugDisplayFlora___c*>();
}
inline void MA::Flora::SettingsPanel_DebugDisplayFlora___c::setStaticF___9__27_28(::System::Func_1<float_t>*  value)  {
::cordl_internals::setStaticField<::System::Func_1<float_t>*, "<>9__27_28", ::MA::Flora::SettingsPanel_DebugDisplayFlora___c*>(std::forward<::System::Func_1<float_t>*>(value));
}
inline ::System::Func_1<float_t>* MA::Flora::SettingsPanel_DebugDisplayFlora___c::getStaticF___9__27_28()  {
return ::cordl_internals::getStaticField<::System::Func_1<float_t>*, "<>9__27_28", ::MA::Flora::SettingsPanel_DebugDisplayFlora___c*>();
}
inline void MA::Flora::SettingsPanel_DebugDisplayFlora___c::setStaticF___9__27_29(::System::Func_1<float_t>*  value)  {
::cordl_internals::setStaticField<::System::Func_1<float_t>*, "<>9__27_29", ::MA::Flora::SettingsPanel_DebugDisplayFlora___c*>(std::forward<::System::Func_1<float_t>*>(value));
}
inline ::System::Func_1<float_t>* MA::Flora::SettingsPanel_DebugDisplayFlora___c::getStaticF___9__27_29()  {
return ::cordl_internals::getStaticField<::System::Func_1<float_t>*, "<>9__27_29", ::MA::Flora::SettingsPanel_DebugDisplayFlora___c*>();
}
inline void MA::Flora::SettingsPanel_DebugDisplayFlora___c::setStaticF___9__27_30(::System::Func_1<float_t>*  value)  {
::cordl_internals::setStaticField<::System::Func_1<float_t>*, "<>9__27_30", ::MA::Flora::SettingsPanel_DebugDisplayFlora___c*>(std::forward<::System::Func_1<float_t>*>(value));
}
inline ::System::Func_1<float_t>* MA::Flora::SettingsPanel_DebugDisplayFlora___c::getStaticF___9__27_30()  {
return ::cordl_internals::getStaticField<::System::Func_1<float_t>*, "<>9__27_30", ::MA::Flora::SettingsPanel_DebugDisplayFlora___c*>();
}
inline void MA::Flora::SettingsPanel_DebugDisplayFlora___c::setStaticF___9__27_31(::System::Action_1<float_t>*  value)  {
::cordl_internals::setStaticField<::System::Action_1<float_t>*, "<>9__27_31", ::MA::Flora::SettingsPanel_DebugDisplayFlora___c*>(std::forward<::System::Action_1<float_t>*>(value));
}
inline ::System::Action_1<float_t>* MA::Flora::SettingsPanel_DebugDisplayFlora___c::getStaticF___9__27_31()  {
return ::cordl_internals::getStaticField<::System::Action_1<float_t>*, "<>9__27_31", ::MA::Flora::SettingsPanel_DebugDisplayFlora___c*>();
}
inline void MA::Flora::SettingsPanel_DebugDisplayFlora___c::setStaticF___9__27_21(::System::Func_1<bool>*  value)  {
::cordl_internals::setStaticField<::System::Func_1<bool>*, "<>9__27_21", ::MA::Flora::SettingsPanel_DebugDisplayFlora___c*>(std::forward<::System::Func_1<bool>*>(value));
}
inline ::System::Func_1<bool>* MA::Flora::SettingsPanel_DebugDisplayFlora___c::getStaticF___9__27_21()  {
return ::cordl_internals::getStaticField<::System::Func_1<bool>*, "<>9__27_21", ::MA::Flora::SettingsPanel_DebugDisplayFlora___c*>();
}
inline void MA::Flora::SettingsPanel_DebugDisplayFlora___c::setStaticF___9__28_0(::System::Func_1<bool>*  value)  {
::cordl_internals::setStaticField<::System::Func_1<bool>*, "<>9__28_0", ::MA::Flora::SettingsPanel_DebugDisplayFlora___c*>(std::forward<::System::Func_1<bool>*>(value));
}
inline ::System::Func_1<bool>* MA::Flora::SettingsPanel_DebugDisplayFlora___c::getStaticF___9__28_0()  {
return ::cordl_internals::getStaticField<::System::Func_1<bool>*, "<>9__28_0", ::MA::Flora::SettingsPanel_DebugDisplayFlora___c*>();
}
inline void MA::Flora::SettingsPanel_DebugDisplayFlora___c::setStaticF___9__28_1(::System::Func_1<::System::Object*>*  value)  {
::cordl_internals::setStaticField<::System::Func_1<::System::Object*>*, "<>9__28_1", ::MA::Flora::SettingsPanel_DebugDisplayFlora___c*>(std::forward<::System::Func_1<::System::Object*>*>(value));
}
inline ::System::Func_1<::System::Object*>* MA::Flora::SettingsPanel_DebugDisplayFlora___c::getStaticF___9__28_1()  {
return ::cordl_internals::getStaticField<::System::Func_1<::System::Object*>*, "<>9__28_1", ::MA::Flora::SettingsPanel_DebugDisplayFlora___c*>();
}
inline void MA::Flora::SettingsPanel_DebugDisplayFlora___c::setStaticF___9__28_2(::System::Func_1<bool>*  value)  {
::cordl_internals::setStaticField<::System::Func_1<bool>*, "<>9__28_2", ::MA::Flora::SettingsPanel_DebugDisplayFlora___c*>(std::forward<::System::Func_1<bool>*>(value));
}
inline ::System::Func_1<bool>* MA::Flora::SettingsPanel_DebugDisplayFlora___c::getStaticF___9__28_2()  {
return ::cordl_internals::getStaticField<::System::Func_1<bool>*, "<>9__28_2", ::MA::Flora::SettingsPanel_DebugDisplayFlora___c*>();
}
inline void MA::Flora::SettingsPanel_DebugDisplayFlora___c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::SettingsPanel_DebugDisplayFlora___c*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::StringW MA::Flora::SettingsPanel_DebugDisplayFlora___c::__ctor_b__19_0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::SettingsPanel_DebugDisplayFlora___c*>(),
                        {"<.ctor>b__19_0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline bool MA::Flora::SettingsPanel_DebugDisplayFlora___c::__ctor_b__19_1()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::SettingsPanel_DebugDisplayFlora___c*>(),
                        {"<.ctor>b__19_1", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool MA::Flora::SettingsPanel_DebugDisplayFlora___c::_CreateGeneralSettings_b__24_0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::SettingsPanel_DebugDisplayFlora___c*>(),
                        {"<CreateGeneralSettings>b__24_0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline int32_t MA::Flora::SettingsPanel_DebugDisplayFlora___c::_CreateGeneralSettings_b__24_1()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::SettingsPanel_DebugDisplayFlora___c*>(),
                        {"<CreateGeneralSettings>b__24_1", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void MA::Flora::SettingsPanel_DebugDisplayFlora___c::_CreateGeneralSettings_b__24_2(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::SettingsPanel_DebugDisplayFlora___c*>(),
                        {"<CreateGeneralSettings>b__24_2", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t MA::Flora::SettingsPanel_DebugDisplayFlora___c::_CreateGeneralSettings_b__24_3()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::SettingsPanel_DebugDisplayFlora___c*>(),
                        {"<CreateGeneralSettings>b__24_3", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void MA::Flora::SettingsPanel_DebugDisplayFlora___c::_CreateGeneralSettings_b__24_4(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::SettingsPanel_DebugDisplayFlora___c*>(),
                        {"<CreateGeneralSettings>b__24_4", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool MA::Flora::SettingsPanel_DebugDisplayFlora___c::_CreateGeneralSettings_b__24_5()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::SettingsPanel_DebugDisplayFlora___c*>(),
                        {"<CreateGeneralSettings>b__24_5", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void MA::Flora::SettingsPanel_DebugDisplayFlora___c::_CreateGeneralSettings_b__24_6(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::SettingsPanel_DebugDisplayFlora___c*>(),
                        {"<CreateGeneralSettings>b__24_6", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool MA::Flora::SettingsPanel_DebugDisplayFlora___c::_CreateGeneralSettings_b__24_7()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::SettingsPanel_DebugDisplayFlora___c*>(),
                        {"<CreateGeneralSettings>b__24_7", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void MA::Flora::SettingsPanel_DebugDisplayFlora___c::_CreateGeneralSettings_b__24_8(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::SettingsPanel_DebugDisplayFlora___c*>(),
                        {"<CreateGeneralSettings>b__24_8", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool MA::Flora::SettingsPanel_DebugDisplayFlora___c::_CreateLODSettings_b__25_0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::SettingsPanel_DebugDisplayFlora___c*>(),
                        {"<CreateLODSettings>b__25_0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline int32_t MA::Flora::SettingsPanel_DebugDisplayFlora___c::_CreateLODSettings_b__25_1()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::SettingsPanel_DebugDisplayFlora___c*>(),
                        {"<CreateLODSettings>b__25_1", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void MA::Flora::SettingsPanel_DebugDisplayFlora___c::_CreateLODSettings_b__25_2(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::SettingsPanel_DebugDisplayFlora___c*>(),
                        {"<CreateLODSettings>b__25_2", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t MA::Flora::SettingsPanel_DebugDisplayFlora___c::_CreateLODSettings_b__25_3()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::SettingsPanel_DebugDisplayFlora___c*>(),
                        {"<CreateLODSettings>b__25_3", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void MA::Flora::SettingsPanel_DebugDisplayFlora___c::_CreateLODSettings_b__25_4(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::SettingsPanel_DebugDisplayFlora___c*>(),
                        {"<CreateLODSettings>b__25_4", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool MA::Flora::SettingsPanel_DebugDisplayFlora___c::_CreateLODSettings_b__25_5()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::SettingsPanel_DebugDisplayFlora___c*>(),
                        {"<CreateLODSettings>b__25_5", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline int32_t MA::Flora::SettingsPanel_DebugDisplayFlora___c::_CreateLODSettings_b__25_6()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::SettingsPanel_DebugDisplayFlora___c*>(),
                        {"<CreateLODSettings>b__25_6", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void MA::Flora::SettingsPanel_DebugDisplayFlora___c::_CreateLODSettings_b__25_7(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::SettingsPanel_DebugDisplayFlora___c*>(),
                        {"<CreateLODSettings>b__25_7", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t MA::Flora::SettingsPanel_DebugDisplayFlora___c::_CreateLODSettings_b__25_8()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::SettingsPanel_DebugDisplayFlora___c*>(),
                        {"<CreateLODSettings>b__25_8", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t MA::Flora::SettingsPanel_DebugDisplayFlora___c::_CreateLODSettings_b__25_9()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::SettingsPanel_DebugDisplayFlora___c*>(),
                        {"<CreateLODSettings>b__25_9", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline bool MA::Flora::SettingsPanel_DebugDisplayFlora___c::_CreateSpatialHashSettings_b__26_0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::SettingsPanel_DebugDisplayFlora___c*>(),
                        {"<CreateSpatialHashSettings>b__26_0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline int32_t MA::Flora::SettingsPanel_DebugDisplayFlora___c::_CreateSpatialHashSettings_b__26_1()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::SettingsPanel_DebugDisplayFlora___c*>(),
                        {"<CreateSpatialHashSettings>b__26_1", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void MA::Flora::SettingsPanel_DebugDisplayFlora___c::_CreateSpatialHashSettings_b__26_2(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::SettingsPanel_DebugDisplayFlora___c*>(),
                        {"<CreateSpatialHashSettings>b__26_2", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t MA::Flora::SettingsPanel_DebugDisplayFlora___c::_CreateSpatialHashSettings_b__26_3()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::SettingsPanel_DebugDisplayFlora___c*>(),
                        {"<CreateSpatialHashSettings>b__26_3", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void MA::Flora::SettingsPanel_DebugDisplayFlora___c::_CreateSpatialHashSettings_b__26_4(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::SettingsPanel_DebugDisplayFlora___c*>(),
                        {"<CreateSpatialHashSettings>b__26_4", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Enum* MA::Flora::SettingsPanel_DebugDisplayFlora___c::_CreateSpatialHashSettings_b__26_5()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::SettingsPanel_DebugDisplayFlora___c*>(),
                        {"<CreateSpatialHashSettings>b__26_5", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Enum*>(this, ___internal_method);
}
inline void MA::Flora::SettingsPanel_DebugDisplayFlora___c::_CreateSpatialHashSettings_b__26_6(::System::Enum*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::SettingsPanel_DebugDisplayFlora___c*>(),
                        {"<CreateSpatialHashSettings>b__26_6", {}, {::i2c::type_of<::System::Enum*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t MA::Flora::SettingsPanel_DebugDisplayFlora___c::_CreateSpatialHashSettings_b__26_7()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::SettingsPanel_DebugDisplayFlora___c*>(),
                        {"<CreateSpatialHashSettings>b__26_7", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void MA::Flora::SettingsPanel_DebugDisplayFlora___c::_CreateSpatialHashSettings_b__26_8(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::SettingsPanel_DebugDisplayFlora___c*>(),
                        {"<CreateSpatialHashSettings>b__26_8", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t MA::Flora::SettingsPanel_DebugDisplayFlora___c::_CreateSpatialHashSettings_b__26_9()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::SettingsPanel_DebugDisplayFlora___c*>(),
                        {"<CreateSpatialHashSettings>b__26_9", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline bool MA::Flora::SettingsPanel_DebugDisplayFlora___c::_CreateGPUOcclusionSettings_b__27_0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::SettingsPanel_DebugDisplayFlora___c*>(),
                        {"<CreateGPUOcclusionSettings>b__27_0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::StringW MA::Flora::SettingsPanel_DebugDisplayFlora___c::_CreateGPUOcclusionSettings_b__27_1()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::SettingsPanel_DebugDisplayFlora___c*>(),
                        {"<CreateGPUOcclusionSettings>b__27_1", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline bool MA::Flora::SettingsPanel_DebugDisplayFlora___c::_CreateGPUOcclusionSettings_b__27_2()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::SettingsPanel_DebugDisplayFlora___c*>(),
                        {"<CreateGPUOcclusionSettings>b__27_2", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool MA::Flora::SettingsPanel_DebugDisplayFlora___c::_CreateGPUOcclusionSettings_b__27_3()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::SettingsPanel_DebugDisplayFlora___c*>(),
                        {"<CreateGPUOcclusionSettings>b__27_3", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void MA::Flora::SettingsPanel_DebugDisplayFlora___c::_CreateGPUOcclusionSettings_b__27_4(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::SettingsPanel_DebugDisplayFlora___c*>(),
                        {"<CreateGPUOcclusionSettings>b__27_4", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool MA::Flora::SettingsPanel_DebugDisplayFlora___c::_CreateGPUOcclusionSettings_b__27_5()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::SettingsPanel_DebugDisplayFlora___c*>(),
                        {"<CreateGPUOcclusionSettings>b__27_5", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool MA::Flora::SettingsPanel_DebugDisplayFlora___c::_CreateGPUOcclusionSettings_b__27_6()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::SettingsPanel_DebugDisplayFlora___c*>(),
                        {"<CreateGPUOcclusionSettings>b__27_6", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void MA::Flora::SettingsPanel_DebugDisplayFlora___c::_CreateGPUOcclusionSettings_b__27_7(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::SettingsPanel_DebugDisplayFlora___c*>(),
                        {"<CreateGPUOcclusionSettings>b__27_7", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool MA::Flora::SettingsPanel_DebugDisplayFlora___c::_CreateGPUOcclusionSettings_b__27_8()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::SettingsPanel_DebugDisplayFlora___c*>(),
                        {"<CreateGPUOcclusionSettings>b__27_8", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline float_t MA::Flora::SettingsPanel_DebugDisplayFlora___c::_CreateGPUOcclusionSettings_b__27_10()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::SettingsPanel_DebugDisplayFlora___c*>(),
                        {"<CreateGPUOcclusionSettings>b__27_10", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline float_t MA::Flora::SettingsPanel_DebugDisplayFlora___c::_CreateGPUOcclusionSettings_b__27_11()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::SettingsPanel_DebugDisplayFlora___c*>(),
                        {"<CreateGPUOcclusionSettings>b__27_11", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline float_t MA::Flora::SettingsPanel_DebugDisplayFlora___c::_CreateGPUOcclusionSettings_b__27_12()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::SettingsPanel_DebugDisplayFlora___c*>(),
                        {"<CreateGPUOcclusionSettings>b__27_12", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void MA::Flora::SettingsPanel_DebugDisplayFlora___c::_CreateGPUOcclusionSettings_b__27_13(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::SettingsPanel_DebugDisplayFlora___c*>(),
                        {"<CreateGPUOcclusionSettings>b__27_13", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool MA::Flora::SettingsPanel_DebugDisplayFlora___c::_CreateGPUOcclusionSettings_b__27_14()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::SettingsPanel_DebugDisplayFlora___c*>(),
                        {"<CreateGPUOcclusionSettings>b__27_14", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool MA::Flora::SettingsPanel_DebugDisplayFlora___c::_CreateGPUOcclusionSettings_b__27_15()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::SettingsPanel_DebugDisplayFlora___c*>(),
                        {"<CreateGPUOcclusionSettings>b__27_15", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void MA::Flora::SettingsPanel_DebugDisplayFlora___c::_CreateGPUOcclusionSettings_b__27_16(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::SettingsPanel_DebugDisplayFlora___c*>(),
                        {"<CreateGPUOcclusionSettings>b__27_16", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool MA::Flora::SettingsPanel_DebugDisplayFlora___c::_CreateGPUOcclusionSettings_b__27_17()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::SettingsPanel_DebugDisplayFlora___c*>(),
                        {"<CreateGPUOcclusionSettings>b__27_17", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool MA::Flora::SettingsPanel_DebugDisplayFlora___c::_CreateGPUOcclusionSettings_b__27_9()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::SettingsPanel_DebugDisplayFlora___c*>(),
                        {"<CreateGPUOcclusionSettings>b__27_9", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool MA::Flora::SettingsPanel_DebugDisplayFlora___c::_CreateGPUOcclusionSettings_b__27_18()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::SettingsPanel_DebugDisplayFlora___c*>(),
                        {"<CreateGPUOcclusionSettings>b__27_18", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void MA::Flora::SettingsPanel_DebugDisplayFlora___c::_CreateGPUOcclusionSettings_b__27_19(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::SettingsPanel_DebugDisplayFlora___c*>(),
                        {"<CreateGPUOcclusionSettings>b__27_19", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool MA::Flora::SettingsPanel_DebugDisplayFlora___c::_CreateGPUOcclusionSettings_b__27_20()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::SettingsPanel_DebugDisplayFlora___c*>(),
                        {"<CreateGPUOcclusionSettings>b__27_20", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool MA::Flora::SettingsPanel_DebugDisplayFlora___c::_CreateGPUOcclusionSettings_b__27_22()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::SettingsPanel_DebugDisplayFlora___c*>(),
                        {"<CreateGPUOcclusionSettings>b__27_22", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline float_t MA::Flora::SettingsPanel_DebugDisplayFlora___c::_CreateGPUOcclusionSettings_b__27_23()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::SettingsPanel_DebugDisplayFlora___c*>(),
                        {"<CreateGPUOcclusionSettings>b__27_23", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline float_t MA::Flora::SettingsPanel_DebugDisplayFlora___c::_CreateGPUOcclusionSettings_b__27_24()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::SettingsPanel_DebugDisplayFlora___c*>(),
                        {"<CreateGPUOcclusionSettings>b__27_24", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline float_t MA::Flora::SettingsPanel_DebugDisplayFlora___c::_CreateGPUOcclusionSettings_b__27_25()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::SettingsPanel_DebugDisplayFlora___c*>(),
                        {"<CreateGPUOcclusionSettings>b__27_25", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void MA::Flora::SettingsPanel_DebugDisplayFlora___c::_CreateGPUOcclusionSettings_b__27_26(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::SettingsPanel_DebugDisplayFlora___c*>(),
                        {"<CreateGPUOcclusionSettings>b__27_26", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool MA::Flora::SettingsPanel_DebugDisplayFlora___c::_CreateGPUOcclusionSettings_b__27_27()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::SettingsPanel_DebugDisplayFlora___c*>(),
                        {"<CreateGPUOcclusionSettings>b__27_27", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline float_t MA::Flora::SettingsPanel_DebugDisplayFlora___c::_CreateGPUOcclusionSettings_b__27_28()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::SettingsPanel_DebugDisplayFlora___c*>(),
                        {"<CreateGPUOcclusionSettings>b__27_28", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline float_t MA::Flora::SettingsPanel_DebugDisplayFlora___c::_CreateGPUOcclusionSettings_b__27_29()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::SettingsPanel_DebugDisplayFlora___c*>(),
                        {"<CreateGPUOcclusionSettings>b__27_29", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline float_t MA::Flora::SettingsPanel_DebugDisplayFlora___c::_CreateGPUOcclusionSettings_b__27_30()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::SettingsPanel_DebugDisplayFlora___c*>(),
                        {"<CreateGPUOcclusionSettings>b__27_30", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void MA::Flora::SettingsPanel_DebugDisplayFlora___c::_CreateGPUOcclusionSettings_b__27_31(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::SettingsPanel_DebugDisplayFlora___c*>(),
                        {"<CreateGPUOcclusionSettings>b__27_31", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool MA::Flora::SettingsPanel_DebugDisplayFlora___c::_CreateGPUOcclusionSettings_b__27_21()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::SettingsPanel_DebugDisplayFlora___c*>(),
                        {"<CreateGPUOcclusionSettings>b__27_21", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool MA::Flora::SettingsPanel_DebugDisplayFlora___c::_CreateCullingStats_b__28_0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::SettingsPanel_DebugDisplayFlora___c*>(),
                        {"<CreateCullingStats>b__28_0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Object* MA::Flora::SettingsPanel_DebugDisplayFlora___c::_CreateCullingStats_b__28_1()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::SettingsPanel_DebugDisplayFlora___c*>(),
                        {"<CreateCullingStats>b__28_1", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline bool MA::Flora::SettingsPanel_DebugDisplayFlora___c::_CreateCullingStats_b__28_2()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::SettingsPanel_DebugDisplayFlora___c*>(),
                        {"<CreateCullingStats>b__28_2", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::MA::Flora::SettingsPanel_DebugDisplayFlora___c* MA::Flora::SettingsPanel_DebugDisplayFlora___c::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::MA::Flora::SettingsPanel_DebugDisplayFlora___c*>());
}
// Ctor Parameters []
constexpr ::MA::Flora::SettingsPanel_DebugDisplayFlora___c::SettingsPanel_DebugDisplayFlora___c()   {
}
//  Writing Method size for method: ::MA::Flora::DebugDisplayFlora_SettingsPanel.get_PanelName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::MA::Flora::DebugDisplayFlora_SettingsPanel::*)()>(&::MA::Flora::DebugDisplayFlora_SettingsPanel::get_PanelName)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1814d7570;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::MA::Flora::DebugDisplayFlora_SettingsPanel*>(),
                    {::i2c::class_of<::MA::Flora::DebugDisplayFlora_SettingsPanel*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::DebugDisplayFlora_SettingsPanel.get_Flags
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::DebugUI_Flags (::MA::Flora::DebugDisplayFlora_SettingsPanel::*)()>(&::MA::Flora::DebugDisplayFlora_SettingsPanel::get_Flags)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180308dd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::MA::Flora::DebugDisplayFlora_SettingsPanel*>(),
                    {::i2c::class_of<::MA::Flora::DebugDisplayFlora_SettingsPanel*>(), 10}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::DebugDisplayFlora_SettingsPanel.get_FrozenCameraField
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::DebugUI_EnumField* (::MA::Flora::DebugDisplayFlora_SettingsPanel::*)()>(&::MA::Flora::DebugDisplayFlora_SettingsPanel::get_FrozenCameraField)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9810;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::DebugDisplayFlora_SettingsPanel*>(),
                        {"get_FrozenCameraField", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::DebugDisplayFlora_SettingsPanel.set_FrozenCameraField
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::DebugDisplayFlora_SettingsPanel::*)(::UnityEngine::Rendering::DebugUI_EnumField*)>(&::MA::Flora::DebugDisplayFlora_SettingsPanel::set_FrozenCameraField)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9850;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::DebugDisplayFlora_SettingsPanel*>(),
                        {"set_FrozenCameraField", {}, {::i2c::type_of<::UnityEngine::Rendering::DebugUI_EnumField*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::DebugDisplayFlora_SettingsPanel.get_FrozenCameraIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::MA::Flora::DebugDisplayFlora_SettingsPanel::*)()>(&::MA::Flora::DebugDisplayFlora_SettingsPanel::get_FrozenCameraIndex)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e2ba0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::DebugDisplayFlora_SettingsPanel*>(),
                        {"get_FrozenCameraIndex", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::DebugDisplayFlora_SettingsPanel.set_FrozenCameraIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::DebugDisplayFlora_SettingsPanel::*)(int32_t)>(&::MA::Flora::DebugDisplayFlora_SettingsPanel::set_FrozenCameraIndex)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e2f70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::DebugDisplayFlora_SettingsPanel*>(),
                        {"set_FrozenCameraIndex", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::DebugDisplayFlora_SettingsPanel.get_FrozenCameraEnumIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::MA::Flora::DebugDisplayFlora_SettingsPanel::*)()>(&::MA::Flora::DebugDisplayFlora_SettingsPanel::get_FrozenCameraEnumIndex)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180392ff0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::DebugDisplayFlora_SettingsPanel*>(),
                        {"get_FrozenCameraEnumIndex", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::DebugDisplayFlora_SettingsPanel.set_FrozenCameraEnumIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::DebugDisplayFlora_SettingsPanel::*)(int32_t)>(&::MA::Flora::DebugDisplayFlora_SettingsPanel::set_FrozenCameraEnumIndex)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180393010;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::DebugDisplayFlora_SettingsPanel*>(),
                        {"set_FrozenCameraEnumIndex", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::DebugDisplayFlora_SettingsPanel._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::DebugDisplayFlora_SettingsPanel::*)(::MA::Flora::DebugDisplayFlora*)>(&::MA::Flora::DebugDisplayFlora_SettingsPanel::_ctor)> {
  constexpr static std::size_t size = 0x360;
  constexpr static std::size_t addrs = 0x1814d7210;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::DebugDisplayFlora_SettingsPanel*>(),
                        {".ctor", {}, {::i2c::type_of<::MA::Flora::DebugDisplayFlora*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::DebugDisplayFlora_SettingsPanel.InitFrozenCameraField
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::DebugDisplayFlora_SettingsPanel::*)()>(&::MA::Flora::DebugDisplayFlora_SettingsPanel::InitFrozenCameraField)> {
  constexpr static std::size_t size = 0x390;
  constexpr static std::size_t addrs = 0x1814d6b60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::DebugDisplayFlora_SettingsPanel*>(),
                        {"InitFrozenCameraField", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::DebugDisplayFlora_SettingsPanel.GetFrozenCameraEnumIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::MA::Flora::DebugDisplayFlora_SettingsPanel::*)()>(&::MA::Flora::DebugDisplayFlora_SettingsPanel::GetFrozenCameraEnumIndex)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x1814d6a60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::DebugDisplayFlora_SettingsPanel*>(),
                        {"GetFrozenCameraEnumIndex", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::DebugDisplayFlora_SettingsPanel.SetFrozenCameraIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::DebugDisplayFlora_SettingsPanel::*)(int32_t)>(&::MA::Flora::DebugDisplayFlora_SettingsPanel::SetFrozenCameraIndex)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x1814d6ef0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::DebugDisplayFlora_SettingsPanel*>(),
                        {"SetFrozenCameraIndex", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::DebugDisplayFlora_SettingsPanel.UpdateFreezableCameras
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::DebugDisplayFlora_SettingsPanel::*)()>(&::MA::Flora::DebugDisplayFlora_SettingsPanel::UpdateFreezableCameras)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x1814d7030;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::DebugDisplayFlora_SettingsPanel*>(),
                        {"UpdateFreezableCameras", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::DebugDisplayFlora_SettingsPanel.CreateGeneralSettings
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::DebugUI_Widget* (::MA::Flora::DebugDisplayFlora_SettingsPanel::*)()>(&::MA::Flora::DebugDisplayFlora_SettingsPanel::CreateGeneralSettings)> {
  constexpr static std::size_t size = 0x610;
  constexpr static std::size_t addrs = 0x1814d56f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::DebugDisplayFlora_SettingsPanel*>(),
                        {"CreateGeneralSettings", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::DebugDisplayFlora_SettingsPanel.CreateLODSettings
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::DebugUI_Widget* (::MA::Flora::DebugDisplayFlora_SettingsPanel::*)()>(&::MA::Flora::DebugDisplayFlora_SettingsPanel::CreateLODSettings)> {
  constexpr static std::size_t size = 0x660;
  constexpr static std::size_t addrs = 0x1814d5d00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::DebugDisplayFlora_SettingsPanel*>(),
                        {"CreateLODSettings", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::DebugDisplayFlora_SettingsPanel.CreateSpatialHashSettings
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::DebugUI_Widget* (::MA::Flora::DebugDisplayFlora_SettingsPanel::*)()>(&::MA::Flora::DebugDisplayFlora_SettingsPanel::CreateSpatialHashSettings)> {
  constexpr static std::size_t size = 0x700;
  constexpr static std::size_t addrs = 0x1814d6360;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::DebugDisplayFlora_SettingsPanel*>(),
                        {"CreateSpatialHashSettings", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::DebugDisplayFlora_SettingsPanel.CreateGPUOcclusionSettings
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::DebugUI_Widget* (::MA::Flora::DebugDisplayFlora_SettingsPanel::*)()>(&::MA::Flora::DebugDisplayFlora_SettingsPanel::CreateGPUOcclusionSettings)> {
  constexpr static std::size_t size = 0x1440;
  constexpr static std::size_t addrs = 0x1814d42b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::DebugDisplayFlora_SettingsPanel*>(),
                        {"CreateGPUOcclusionSettings", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::DebugDisplayFlora_SettingsPanel.CreateCullingStats
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::DebugUI_Widget* (::MA::Flora::DebugDisplayFlora_SettingsPanel::*)()>(&::MA::Flora::DebugDisplayFlora_SettingsPanel::CreateCullingStats)> {
  constexpr static std::size_t size = 0x3c0;
  constexpr static std::size_t addrs = 0x1814d3ef0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::DebugDisplayFlora_SettingsPanel*>(),
                        {"CreateCullingStats", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::DebugDisplayFlora_SettingsPanel._InitFrozenCameraField_b__20_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::MA::Flora::DebugDisplayFlora_SettingsPanel::*)()>(&::MA::Flora::DebugDisplayFlora_SettingsPanel::_InitFrozenCameraField_b__20_0)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e2ba0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::DebugDisplayFlora_SettingsPanel*>(),
                        {"<InitFrozenCameraField>b__20_0", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::DebugDisplayFlora_SettingsPanel._InitFrozenCameraField_b__20_1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::DebugDisplayFlora_SettingsPanel::*)(int32_t)>(&::MA::Flora::DebugDisplayFlora_SettingsPanel::_InitFrozenCameraField_b__20_1)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x1814d6ef0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::DebugDisplayFlora_SettingsPanel*>(),
                        {"<InitFrozenCameraField>b__20_1", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::DebugDisplayFlora_SettingsPanel._InitFrozenCameraField_b__20_2
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::MA::Flora::DebugDisplayFlora_SettingsPanel::*)()>(&::MA::Flora::DebugDisplayFlora_SettingsPanel::_InitFrozenCameraField_b__20_2)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180392ff0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::DebugDisplayFlora_SettingsPanel*>(),
                        {"<InitFrozenCameraField>b__20_2", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::DebugDisplayFlora_SettingsPanel._InitFrozenCameraField_b__20_3
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::DebugDisplayFlora_SettingsPanel::*)(int32_t)>(&::MA::Flora::DebugDisplayFlora_SettingsPanel::_InitFrozenCameraField_b__20_3)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180393010;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::DebugDisplayFlora_SettingsPanel*>(),
                        {"<InitFrozenCameraField>b__20_3", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Rendering::DebugUI_EnumField*& MA::Flora::DebugDisplayFlora_SettingsPanel::__cordl_internal_get__FrozenCameraField_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____FrozenCameraField_k__BackingField;
}
constexpr ::UnityEngine::Rendering::DebugUI_EnumField* const& MA::Flora::DebugDisplayFlora_SettingsPanel::__cordl_internal_get__FrozenCameraField_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____FrozenCameraField_k__BackingField;
}
constexpr void MA::Flora::DebugDisplayFlora_SettingsPanel::__cordl_internal_set__FrozenCameraField_k__BackingField(::UnityEngine::Rendering::DebugUI_EnumField*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____FrozenCameraField_k__BackingField = value;
}
constexpr int32_t& MA::Flora::DebugDisplayFlora_SettingsPanel::__cordl_internal_get__FrozenCameraIndex_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____FrozenCameraIndex_k__BackingField;
}
constexpr int32_t const& MA::Flora::DebugDisplayFlora_SettingsPanel::__cordl_internal_get__FrozenCameraIndex_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____FrozenCameraIndex_k__BackingField;
}
constexpr void MA::Flora::DebugDisplayFlora_SettingsPanel::__cordl_internal_set__FrozenCameraIndex_k__BackingField(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____FrozenCameraIndex_k__BackingField = value;
}
constexpr int32_t& MA::Flora::DebugDisplayFlora_SettingsPanel::__cordl_internal_get__FrozenCameraEnumIndex_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____FrozenCameraEnumIndex_k__BackingField;
}
constexpr int32_t const& MA::Flora::DebugDisplayFlora_SettingsPanel::__cordl_internal_get__FrozenCameraEnumIndex_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____FrozenCameraEnumIndex_k__BackingField;
}
constexpr void MA::Flora::DebugDisplayFlora_SettingsPanel::__cordl_internal_set__FrozenCameraEnumIndex_k__BackingField(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____FrozenCameraEnumIndex_k__BackingField = value;
}
constexpr ::ArrayW<::UnityEngine::GUIContent*>& MA::Flora::DebugDisplayFlora_SettingsPanel::__cordl_internal_get_m_FreezableCameraNames()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_FreezableCameraNames;
}
constexpr ::ArrayW<::UnityEngine::GUIContent*> const& MA::Flora::DebugDisplayFlora_SettingsPanel::__cordl_internal_get_m_FreezableCameraNames() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_FreezableCameraNames;
}
constexpr void MA::Flora::DebugDisplayFlora_SettingsPanel::__cordl_internal_set_m_FreezableCameraNames(::ArrayW<::UnityEngine::GUIContent*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_FreezableCameraNames = value;
}
inline void MA::Flora::DebugDisplayFlora_SettingsPanel::setStaticF_FreezableCameraIndices(::ArrayW<int32_t>  value)  {
::cordl_internals::setStaticField<::ArrayW<int32_t>, "FreezableCameraIndices", ::MA::Flora::DebugDisplayFlora_SettingsPanel*>(std::forward<::ArrayW<int32_t>>(value));
}
inline ::ArrayW<int32_t> MA::Flora::DebugDisplayFlora_SettingsPanel::getStaticF_FreezableCameraIndices()  {
return ::cordl_internals::getStaticField<::ArrayW<int32_t>, "FreezableCameraIndices", ::MA::Flora::DebugDisplayFlora_SettingsPanel*>();
}
inline ::StringW MA::Flora::DebugDisplayFlora_SettingsPanel::get_PanelName()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::MA::Flora::DebugDisplayFlora_SettingsPanel*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::DebugUI_Flags MA::Flora::DebugDisplayFlora_SettingsPanel::get_Flags()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::MA::Flora::DebugDisplayFlora_SettingsPanel*>(), 10}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::DebugUI_Flags>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::DebugUI_EnumField* MA::Flora::DebugDisplayFlora_SettingsPanel::get_FrozenCameraField()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::DebugDisplayFlora_SettingsPanel*>(),
                        {"get_FrozenCameraField", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::DebugUI_EnumField*>(this, ___internal_method);
}
inline void MA::Flora::DebugDisplayFlora_SettingsPanel::set_FrozenCameraField(::UnityEngine::Rendering::DebugUI_EnumField*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::DebugDisplayFlora_SettingsPanel*>(),
                        {"set_FrozenCameraField", {}, {::i2c::type_of<::UnityEngine::Rendering::DebugUI_EnumField*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t MA::Flora::DebugDisplayFlora_SettingsPanel::get_FrozenCameraIndex()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::DebugDisplayFlora_SettingsPanel*>(),
                        {"get_FrozenCameraIndex", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void MA::Flora::DebugDisplayFlora_SettingsPanel::set_FrozenCameraIndex(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::DebugDisplayFlora_SettingsPanel*>(),
                        {"set_FrozenCameraIndex", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t MA::Flora::DebugDisplayFlora_SettingsPanel::get_FrozenCameraEnumIndex()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::DebugDisplayFlora_SettingsPanel*>(),
                        {"get_FrozenCameraEnumIndex", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void MA::Flora::DebugDisplayFlora_SettingsPanel::set_FrozenCameraEnumIndex(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::DebugDisplayFlora_SettingsPanel*>(),
                        {"set_FrozenCameraEnumIndex", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void MA::Flora::DebugDisplayFlora_SettingsPanel::_ctor(::MA::Flora::DebugDisplayFlora*  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::DebugDisplayFlora_SettingsPanel*>(),
                        {".ctor", {}, {::i2c::type_of<::MA::Flora::DebugDisplayFlora*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data);
}
inline void MA::Flora::DebugDisplayFlora_SettingsPanel::InitFrozenCameraField()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::DebugDisplayFlora_SettingsPanel*>(),
                        {"InitFrozenCameraField", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int32_t MA::Flora::DebugDisplayFlora_SettingsPanel::GetFrozenCameraEnumIndex()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::DebugDisplayFlora_SettingsPanel*>(),
                        {"GetFrozenCameraEnumIndex", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void MA::Flora::DebugDisplayFlora_SettingsPanel::SetFrozenCameraIndex(int32_t  enumIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::DebugDisplayFlora_SettingsPanel*>(),
                        {"SetFrozenCameraIndex", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, enumIndex);
}
inline void MA::Flora::DebugDisplayFlora_SettingsPanel::UpdateFreezableCameras()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::DebugDisplayFlora_SettingsPanel*>(),
                        {"UpdateFreezableCameras", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::DebugUI_Widget* MA::Flora::DebugDisplayFlora_SettingsPanel::CreateGeneralSettings()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::DebugDisplayFlora_SettingsPanel*>(),
                        {"CreateGeneralSettings", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::DebugUI_Widget*>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::DebugUI_Widget* MA::Flora::DebugDisplayFlora_SettingsPanel::CreateLODSettings()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::DebugDisplayFlora_SettingsPanel*>(),
                        {"CreateLODSettings", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::DebugUI_Widget*>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::DebugUI_Widget* MA::Flora::DebugDisplayFlora_SettingsPanel::CreateSpatialHashSettings()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::DebugDisplayFlora_SettingsPanel*>(),
                        {"CreateSpatialHashSettings", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::DebugUI_Widget*>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::DebugUI_Widget* MA::Flora::DebugDisplayFlora_SettingsPanel::CreateGPUOcclusionSettings()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::DebugDisplayFlora_SettingsPanel*>(),
                        {"CreateGPUOcclusionSettings", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::DebugUI_Widget*>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::DebugUI_Widget* MA::Flora::DebugDisplayFlora_SettingsPanel::CreateCullingStats()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::DebugDisplayFlora_SettingsPanel*>(),
                        {"CreateCullingStats", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::DebugUI_Widget*>(this, ___internal_method);
}
inline int32_t MA::Flora::DebugDisplayFlora_SettingsPanel::_InitFrozenCameraField_b__20_0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::DebugDisplayFlora_SettingsPanel*>(),
                        {"<InitFrozenCameraField>b__20_0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void MA::Flora::DebugDisplayFlora_SettingsPanel::_InitFrozenCameraField_b__20_1(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::DebugDisplayFlora_SettingsPanel*>(),
                        {"<InitFrozenCameraField>b__20_1", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t MA::Flora::DebugDisplayFlora_SettingsPanel::_InitFrozenCameraField_b__20_2()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::DebugDisplayFlora_SettingsPanel*>(),
                        {"<InitFrozenCameraField>b__20_2", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void MA::Flora::DebugDisplayFlora_SettingsPanel::_InitFrozenCameraField_b__20_3(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::DebugDisplayFlora_SettingsPanel*>(),
                        {"<InitFrozenCameraField>b__20_3", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, index);
}
inline ::MA::Flora::DebugDisplayFlora_SettingsPanel* MA::Flora::DebugDisplayFlora_SettingsPanel::New_ctor(::MA::Flora::DebugDisplayFlora*  data)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::MA::Flora::DebugDisplayFlora_SettingsPanel*>(data));
}
// Ctor Parameters []
constexpr ::MA::Flora::DebugDisplayFlora_SettingsPanel::DebugDisplayFlora_SettingsPanel()   {
}
//  Writing Method size for method: ::MA::Flora::DebugDisplayFlora___c__DisplayClass33_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::DebugDisplayFlora___c__DisplayClass33_0::*)()>(&::MA::Flora::DebugDisplayFlora___c__DisplayClass33_0::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::DebugDisplayFlora___c__DisplayClass33_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::DebugDisplayFlora___c__DisplayClass33_0._AddViewStatsDataRow_b__0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::MA::Flora::DebugDisplayFlora___c__DisplayClass33_0::*)()>(&::MA::Flora::DebugDisplayFlora___c__DisplayClass33_0::_AddViewStatsDataRow_b__0)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1814d9130;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::DebugDisplayFlora___c__DisplayClass33_0*>(),
                        {"<AddViewStatsDataRow>b__0", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::DebugDisplayFlora___c__DisplayClass33_0._AddViewStatsDataRow_b__1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::MA::Flora::DebugDisplayFlora___c__DisplayClass33_0::*)()>(&::MA::Flora::DebugDisplayFlora___c__DisplayClass33_0::_AddViewStatsDataRow_b__1)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1814d9180;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::DebugDisplayFlora___c__DisplayClass33_0*>(),
                        {"<AddViewStatsDataRow>b__1", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::DebugDisplayFlora___c__DisplayClass33_0._AddViewStatsDataRow_b__2
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::MA::Flora::DebugDisplayFlora___c__DisplayClass33_0::*)()>(&::MA::Flora::DebugDisplayFlora___c__DisplayClass33_0::_AddViewStatsDataRow_b__2)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1814d91a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::DebugDisplayFlora___c__DisplayClass33_0*>(),
                        {"<AddViewStatsDataRow>b__2", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::DebugDisplayFlora___c__DisplayClass33_0._AddViewStatsDataRow_b__3
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::MA::Flora::DebugDisplayFlora___c__DisplayClass33_0::*)()>(&::MA::Flora::DebugDisplayFlora___c__DisplayClass33_0::_AddViewStatsDataRow_b__3)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1814d91e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::DebugDisplayFlora___c__DisplayClass33_0*>(),
                        {"<AddViewStatsDataRow>b__3", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::DebugDisplayFlora___c__DisplayClass33_0._AddViewStatsDataRow_b__4
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::MA::Flora::DebugDisplayFlora___c__DisplayClass33_0::*)()>(&::MA::Flora::DebugDisplayFlora___c__DisplayClass33_0::_AddViewStatsDataRow_b__4)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1814d9210;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::DebugDisplayFlora___c__DisplayClass33_0*>(),
                        {"<AddViewStatsDataRow>b__4", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& MA::Flora::DebugDisplayFlora___c__DisplayClass33_0::__cordl_internal_get_viewStatsIndex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___viewStatsIndex;
}
constexpr int32_t const& MA::Flora::DebugDisplayFlora___c__DisplayClass33_0::__cordl_internal_get_viewStatsIndex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___viewStatsIndex;
}
constexpr void MA::Flora::DebugDisplayFlora___c__DisplayClass33_0::__cordl_internal_set_viewStatsIndex(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___viewStatsIndex = value;
}
inline void MA::Flora::DebugDisplayFlora___c__DisplayClass33_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::DebugDisplayFlora___c__DisplayClass33_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool MA::Flora::DebugDisplayFlora___c__DisplayClass33_0::_AddViewStatsDataRow_b__0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::DebugDisplayFlora___c__DisplayClass33_0*>(),
                        {"<AddViewStatsDataRow>b__0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Object* MA::Flora::DebugDisplayFlora___c__DisplayClass33_0::_AddViewStatsDataRow_b__1()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::DebugDisplayFlora___c__DisplayClass33_0*>(),
                        {"<AddViewStatsDataRow>b__1", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline ::System::Object* MA::Flora::DebugDisplayFlora___c__DisplayClass33_0::_AddViewStatsDataRow_b__2()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::DebugDisplayFlora___c__DisplayClass33_0*>(),
                        {"<AddViewStatsDataRow>b__2", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline ::System::Object* MA::Flora::DebugDisplayFlora___c__DisplayClass33_0::_AddViewStatsDataRow_b__3()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::DebugDisplayFlora___c__DisplayClass33_0*>(),
                        {"<AddViewStatsDataRow>b__3", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline ::System::Object* MA::Flora::DebugDisplayFlora___c__DisplayClass33_0::_AddViewStatsDataRow_b__4()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::DebugDisplayFlora___c__DisplayClass33_0*>(),
                        {"<AddViewStatsDataRow>b__4", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline ::MA::Flora::DebugDisplayFlora___c__DisplayClass33_0* MA::Flora::DebugDisplayFlora___c__DisplayClass33_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::MA::Flora::DebugDisplayFlora___c__DisplayClass33_0*>());
}
// Ctor Parameters []
constexpr ::MA::Flora::DebugDisplayFlora___c__DisplayClass33_0::DebugDisplayFlora___c__DisplayClass33_0()   {
}
//  Writing Method size for method: ::MA::Flora::DebugDisplayFlora.get_Properties
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::by_ref<::MA::Flora::FloraDebugDisplayProperties> (*)()>(&::MA::Flora::DebugDisplayFlora::get_Properties)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1814c5af0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::DebugDisplayFlora*>(),
                        {"get_Properties", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::DebugDisplayFlora.get_Active
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::MA::Flora::DebugDisplayFlora::get_Active)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1814c59a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::DebugDisplayFlora*>(),
                        {"get_Active", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::DebugDisplayFlora.get_ForceDisplay
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::MA::Flora::DebugDisplayFlora::get_ForceDisplay)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1814c5a90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::DebugDisplayFlora*>(),
                        {"get_ForceDisplay", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::DebugDisplayFlora.set_ForceDisplay
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(bool)>(&::MA::Flora::DebugDisplayFlora::set_ForceDisplay)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1814c5b20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::DebugDisplayFlora*>(),
                        {"set_ForceDisplay", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::DebugDisplayFlora._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::DebugDisplayFlora::*)()>(&::MA::Flora::DebugDisplayFlora::_ctor)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1814c5910;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::DebugDisplayFlora*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::DebugDisplayFlora.get_AreAnySettingsActive
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::MA::Flora::DebugDisplayFlora::*)()>(&::MA::Flora::DebugDisplayFlora::get_AreAnySettingsActive)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1814c5a00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::DebugDisplayFlora*>(),
                        {"get_AreAnySettingsActive", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::DebugDisplayFlora.get_IsPostProcessingAllowed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::MA::Flora::DebugDisplayFlora::*)()>(&::MA::Flora::DebugDisplayFlora::get_IsPostProcessingAllowed)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1814c5ad0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::DebugDisplayFlora*>(),
                        {"get_IsPostProcessingAllowed", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::DebugDisplayFlora.get_IsLightingActive
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::MA::Flora::DebugDisplayFlora::*)()>(&::MA::Flora::DebugDisplayFlora::get_IsLightingActive)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1814c5ad0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::DebugDisplayFlora*>(),
                        {"get_IsLightingActive", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::DebugDisplayFlora.TryGetScreenClearColor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::MA::Flora::DebugDisplayFlora::*)(::by_ref<::UnityEngine::Color>)>(&::MA::Flora::DebugDisplayFlora::TryGetScreenClearColor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e2bd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::DebugDisplayFlora*>(),
                        {"TryGetScreenClearColor", {}, {::i2c::type_of<::by_ref<::UnityEngine::Color>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::DebugDisplayFlora.UnityEngine_Rendering_IDebugDisplaySettingsData_CreatePanel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::IDebugDisplaySettingsPanelDisposable* (::MA::Flora::DebugDisplayFlora::*)()>(&::MA::Flora::DebugDisplayFlora::UnityEngine_Rendering_IDebugDisplaySettingsData_CreatePanel)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1814c57c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::DebugDisplayFlora*>(),
                        {"UnityEngine.Rendering.IDebugDisplaySettingsData.CreatePanel", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::DebugDisplayFlora.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::DebugDisplayFlora::*)()>(&::MA::Flora::DebugDisplayFlora::Update)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::DebugDisplayFlora*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::DebugDisplayFlora.GetViewStatsCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)()>(&::MA::Flora::DebugDisplayFlora::GetViewStatsCount)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1814c5490;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::DebugDisplayFlora*>(),
                        {"GetViewStatsCount", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::DebugDisplayFlora.GetViewStats
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::MA::Flora::GPUCullingStats (*)(int32_t)>(&::MA::Flora::DebugDisplayFlora::GetViewStats)> {
  constexpr static std::size_t size = 0xeb0;
  constexpr static std::size_t addrs = 0x180974130;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::DebugDisplayFlora*>(),
                        {"GetViewStats", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::DebugDisplayFlora.AddViewStatsDataRow
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::Table_DebugUI_Row* (*)(int32_t)>(&::MA::Flora::DebugDisplayFlora::AddViewStatsDataRow)> {
  constexpr static std::size_t size = 0x340;
  constexpr static std::size_t addrs = 0x1814c5150;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::DebugDisplayFlora*>(),
                        {"AddViewStatsDataRow", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::DebugDisplayFlora.InitFreezableCameras
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::MA::Flora::DebugDisplayFlora::InitFreezableCameras)> {
  constexpr static std::size_t size = 0x2e0;
  constexpr static std::size_t addrs = 0x1814c54e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::DebugDisplayFlora*>(),
                        {"InitFreezableCameras", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::MA::Flora::DebugDisplayFlora_SettingsPanel*& MA::Flora::DebugDisplayFlora::__cordl_internal_get_m_Panel()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Panel;
}
constexpr ::MA::Flora::DebugDisplayFlora_SettingsPanel* const& MA::Flora::DebugDisplayFlora::__cordl_internal_get_m_Panel() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Panel;
}
constexpr void MA::Flora::DebugDisplayFlora::__cordl_internal_set_m_Panel(::MA::Flora::DebugDisplayFlora_SettingsPanel*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Panel = value;
}
constexpr int32_t& MA::Flora::DebugDisplayFlora::__cordl_internal_get_m_FrameIndex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_FrameIndex;
}
constexpr int32_t const& MA::Flora::DebugDisplayFlora::__cordl_internal_get_m_FrameIndex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_FrameIndex;
}
constexpr void MA::Flora::DebugDisplayFlora::__cordl_internal_set_m_FrameIndex(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_FrameIndex = value;
}
constexpr int32_t& MA::Flora::DebugDisplayFlora::__cordl_internal_get_m_LastFrozenCameraUpdateFrame()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_LastFrozenCameraUpdateFrame;
}
constexpr int32_t const& MA::Flora::DebugDisplayFlora::__cordl_internal_get_m_LastFrozenCameraUpdateFrame() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_LastFrozenCameraUpdateFrame;
}
constexpr void MA::Flora::DebugDisplayFlora::__cordl_internal_set_m_LastFrozenCameraUpdateFrame(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_LastFrozenCameraUpdateFrame = value;
}
inline void MA::Flora::DebugDisplayFlora::setStaticF_s_SharedProperties(::MA::Flora::FloraDebugDisplayProperties  value)  {
::cordl_internals::setStaticField<::MA::Flora::FloraDebugDisplayProperties, "s_SharedProperties", ::MA::Flora::DebugDisplayFlora*>(std::forward<::MA::Flora::FloraDebugDisplayProperties>(value));
}
inline ::MA::Flora::FloraDebugDisplayProperties MA::Flora::DebugDisplayFlora::getStaticF_s_SharedProperties()  {
return ::cordl_internals::getStaticField<::MA::Flora::FloraDebugDisplayProperties, "s_SharedProperties", ::MA::Flora::DebugDisplayFlora*>();
}
inline void MA::Flora::DebugDisplayFlora::setStaticF__ForceDisplay_k__BackingField(bool  value)  {
::cordl_internals::setStaticField<bool, "<ForceDisplay>k__BackingField", ::MA::Flora::DebugDisplayFlora*>(std::forward<bool>(value));
}
inline bool MA::Flora::DebugDisplayFlora::getStaticF__ForceDisplay_k__BackingField()  {
return ::cordl_internals::getStaticField<bool, "<ForceDisplay>k__BackingField", ::MA::Flora::DebugDisplayFlora*>();
}
inline void MA::Flora::DebugDisplayFlora::setStaticF_s_CachedIndirectViewCullingStats(::System::Collections::Generic::List_1<::MA::Flora::GPUCullingStats>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::MA::Flora::GPUCullingStats>*, "s_CachedIndirectViewCullingStats", ::MA::Flora::DebugDisplayFlora*>(std::forward<::System::Collections::Generic::List_1<::MA::Flora::GPUCullingStats>*>(value));
}
inline ::System::Collections::Generic::List_1<::MA::Flora::GPUCullingStats>* MA::Flora::DebugDisplayFlora::getStaticF_s_CachedIndirectViewCullingStats()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::MA::Flora::GPUCullingStats>*, "s_CachedIndirectViewCullingStats", ::MA::Flora::DebugDisplayFlora*>();
}
inline void MA::Flora::DebugDisplayFlora::setStaticF_s_FreezableCameras(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Camera>>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Camera>>*, "s_FreezableCameras", ::MA::Flora::DebugDisplayFlora*>(std::forward<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Camera>>*>(value));
}
inline ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Camera>>* MA::Flora::DebugDisplayFlora::getStaticF_s_FreezableCameras()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Camera>>*, "s_FreezableCameras", ::MA::Flora::DebugDisplayFlora*>();
}
inline ::by_ref<::MA::Flora::FloraDebugDisplayProperties> MA::Flora::DebugDisplayFlora::get_Properties()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::DebugDisplayFlora*>(),
                        {"get_Properties", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::by_ref<::MA::Flora::FloraDebugDisplayProperties>>(nullptr, ___internal_method);
}
inline bool MA::Flora::DebugDisplayFlora::get_Active()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::DebugDisplayFlora*>(),
                        {"get_Active", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline bool MA::Flora::DebugDisplayFlora::get_ForceDisplay()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::DebugDisplayFlora*>(),
                        {"get_ForceDisplay", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline void MA::Flora::DebugDisplayFlora::set_ForceDisplay(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::DebugDisplayFlora*>(),
                        {"set_ForceDisplay", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void MA::Flora::DebugDisplayFlora::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::DebugDisplayFlora*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool MA::Flora::DebugDisplayFlora::get_AreAnySettingsActive()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::DebugDisplayFlora*>(),
                        {"get_AreAnySettingsActive", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool MA::Flora::DebugDisplayFlora::get_IsPostProcessingAllowed()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::DebugDisplayFlora*>(),
                        {"get_IsPostProcessingAllowed", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool MA::Flora::DebugDisplayFlora::get_IsLightingActive()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::DebugDisplayFlora*>(),
                        {"get_IsLightingActive", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool MA::Flora::DebugDisplayFlora::TryGetScreenClearColor(::by_ref<::UnityEngine::Color>  color)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::DebugDisplayFlora*>(),
                        {"TryGetScreenClearColor", {}, {::i2c::type_of<::by_ref<::UnityEngine::Color>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, color);
}
inline ::UnityEngine::Rendering::IDebugDisplaySettingsPanelDisposable* MA::Flora::DebugDisplayFlora::UnityEngine_Rendering_IDebugDisplaySettingsData_CreatePanel()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::DebugDisplayFlora*>(),
                        {"UnityEngine.Rendering.IDebugDisplaySettingsData.CreatePanel", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::IDebugDisplaySettingsPanelDisposable*>(this, ___internal_method);
}
inline void MA::Flora::DebugDisplayFlora::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::DebugDisplayFlora*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int32_t MA::Flora::DebugDisplayFlora::GetViewStatsCount()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::DebugDisplayFlora*>(),
                        {"GetViewStatsCount", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method);
}
inline ::MA::Flora::GPUCullingStats MA::Flora::DebugDisplayFlora::GetViewStats(int32_t  viewStatsIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::DebugDisplayFlora*>(),
                        {"GetViewStats", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::MA::Flora::GPUCullingStats>(nullptr, ___internal_method, viewStatsIndex);
}
inline ::UnityEngine::Rendering::Table_DebugUI_Row* MA::Flora::DebugDisplayFlora::AddViewStatsDataRow(int32_t  viewStatsIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::DebugDisplayFlora*>(),
                        {"AddViewStatsDataRow", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::Table_DebugUI_Row*>(nullptr, ___internal_method, viewStatsIndex);
}
inline bool MA::Flora::DebugDisplayFlora::InitFreezableCameras()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::DebugDisplayFlora*>(),
                        {"InitFreezableCameras", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline ::MA::Flora::DebugDisplayFlora* MA::Flora::DebugDisplayFlora::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::MA::Flora::DebugDisplayFlora*>());
}
/// @brief Convert operator to "::UnityEngine::Rendering::IDebugDisplaySettingsData"
constexpr  MA::Flora::DebugDisplayFlora::operator ::UnityEngine::Rendering::IDebugDisplaySettingsData*() noexcept {
return static_cast<::UnityEngine::Rendering::IDebugDisplaySettingsData*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::Rendering::IDebugDisplaySettingsData"
constexpr ::UnityEngine::Rendering::IDebugDisplaySettingsData* MA::Flora::DebugDisplayFlora::i___UnityEngine__Rendering__IDebugDisplaySettingsData() noexcept {
return static_cast<::UnityEngine::Rendering::IDebugDisplaySettingsData*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::UnityEngine::Rendering::IDebugDisplaySettingsQuery"
constexpr  MA::Flora::DebugDisplayFlora::operator ::UnityEngine::Rendering::IDebugDisplaySettingsQuery*() noexcept {
return static_cast<::UnityEngine::Rendering::IDebugDisplaySettingsQuery*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::Rendering::IDebugDisplaySettingsQuery"
constexpr ::UnityEngine::Rendering::IDebugDisplaySettingsQuery* MA::Flora::DebugDisplayFlora::i___UnityEngine__Rendering__IDebugDisplaySettingsQuery() noexcept {
return static_cast<::UnityEngine::Rendering::IDebugDisplaySettingsQuery*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::MA::Flora::DebugDisplayFlora::DebugDisplayFlora()   {
}

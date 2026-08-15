#pragma once
// IWYU pragma private; include "PlayEveryWare/EpicOnlineServices/PlatformManager.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "PlayEveryWare/EpicOnlineServices/zzzz__PlatformManager_def.hpp"
#include "PlayEveryWare/EpicOnlineServices/zzzz__PlatformConfig_def.hpp"
#include "PlayEveryWare/EpicOnlineServices/zzzz__PlatformManager_def.hpp"
#include "System/Collections/Generic/zzzz__IDictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/zzzz__Func_1_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "UnityEngine/zzzz__RuntimePlatform_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::PlayEveryWare::EpicOnlineServices::PlatformManager_Platform::PlatformManager_Platform(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::PlayEveryWare::EpicOnlineServices::PlatformManager_Platform::PlatformManager_Platform()   {
}
constexpr ::PlayEveryWare::EpicOnlineServices::PlatformManager_Platform  PlayEveryWare::EpicOnlineServices::PlatformManager_Platform::Unknown{static_cast<int32_t>(0x0)};
constexpr ::PlayEveryWare::EpicOnlineServices::PlatformManager_Platform  PlayEveryWare::EpicOnlineServices::PlatformManager_Platform::Windows{static_cast<int32_t>(0x1)};
constexpr ::PlayEveryWare::EpicOnlineServices::PlatformManager_Platform  PlayEveryWare::EpicOnlineServices::PlatformManager_Platform::Android{static_cast<int32_t>(0x2)};
constexpr ::PlayEveryWare::EpicOnlineServices::PlatformManager_Platform  PlayEveryWare::EpicOnlineServices::PlatformManager_Platform::XboxOne{static_cast<int32_t>(0x4)};
constexpr ::PlayEveryWare::EpicOnlineServices::PlatformManager_Platform  PlayEveryWare::EpicOnlineServices::PlatformManager_Platform::XboxSeriesX{static_cast<int32_t>(0x8)};
constexpr ::PlayEveryWare::EpicOnlineServices::PlatformManager_Platform  PlayEveryWare::EpicOnlineServices::PlatformManager_Platform::iOS{static_cast<int32_t>(0x10)};
constexpr ::PlayEveryWare::EpicOnlineServices::PlatformManager_Platform  PlayEveryWare::EpicOnlineServices::PlatformManager_Platform::Linux{static_cast<int32_t>(0x20)};
constexpr ::PlayEveryWare::EpicOnlineServices::PlatformManager_Platform  PlayEveryWare::EpicOnlineServices::PlatformManager_Platform::macOS{static_cast<int32_t>(0x40)};
constexpr ::PlayEveryWare::EpicOnlineServices::PlatformManager_Platform  PlayEveryWare::EpicOnlineServices::PlatformManager_Platform::PS4{static_cast<int32_t>(0x80)};
constexpr ::PlayEveryWare::EpicOnlineServices::PlatformManager_Platform  PlayEveryWare::EpicOnlineServices::PlatformManager_Platform::PS5{static_cast<int32_t>(0x100)};
constexpr ::PlayEveryWare::EpicOnlineServices::PlatformManager_Platform  PlayEveryWare::EpicOnlineServices::PlatformManager_Platform::Switch{static_cast<int32_t>(0x200)};
constexpr ::PlayEveryWare::EpicOnlineServices::PlatformManager_Platform  PlayEveryWare::EpicOnlineServices::PlatformManager_Platform::Steam{static_cast<int32_t>(0x400)};
constexpr ::PlayEveryWare::EpicOnlineServices::PlatformManager_Platform  PlayEveryWare::EpicOnlineServices::PlatformManager_Platform::Switch2{static_cast<int32_t>(0x800)};
constexpr ::PlayEveryWare::EpicOnlineServices::PlatformManager_Platform  PlayEveryWare::EpicOnlineServices::PlatformManager_Platform::Console{static_cast<int32_t>(0xb8c)};
constexpr ::PlayEveryWare::EpicOnlineServices::PlatformManager_Platform  PlayEveryWare::EpicOnlineServices::PlatformManager_Platform::Any{static_cast<int32_t>(0xfff)};
//  Writing Method size for method: ::PlayEveryWare::EpicOnlineServices::PlatformManager_PlatformInfo.get_FullName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::PlayEveryWare::EpicOnlineServices::PlatformManager_PlatformInfo::*)()>(&::PlayEveryWare::EpicOnlineServices::PlatformManager_PlatformInfo::get_FullName)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803a88d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::PlatformManager_PlatformInfo>(),
                        {"get_FullName", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayEveryWare::EpicOnlineServices::PlatformManager_PlatformInfo.get_ConfigFileName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::PlayEveryWare::EpicOnlineServices::PlatformManager_PlatformInfo::*)()>(&::PlayEveryWare::EpicOnlineServices::PlatformManager_PlatformInfo::get_ConfigFileName)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803ed930;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::PlatformManager_PlatformInfo>(),
                        {"get_ConfigFileName", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayEveryWare::EpicOnlineServices::PlatformManager_PlatformInfo.get_DynamicLibraryExtension
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::PlayEveryWare::EpicOnlineServices::PlatformManager_PlatformInfo::*)()>(&::PlayEveryWare::EpicOnlineServices::PlatformManager_PlatformInfo::get_DynamicLibraryExtension)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802db4a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::PlatformManager_PlatformInfo>(),
                        {"get_DynamicLibraryExtension", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayEveryWare::EpicOnlineServices::PlatformManager_PlatformInfo.get_PlatformIconLabel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::PlayEveryWare::EpicOnlineServices::PlatformManager_PlatformInfo::*)()>(&::PlayEveryWare::EpicOnlineServices::PlatformManager_PlatformInfo::get_PlatformIconLabel)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802ecc10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::PlatformManager_PlatformInfo>(),
                        {"get_PlatformIconLabel", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayEveryWare::EpicOnlineServices::PlatformManager_PlatformInfo.get_GetConfigFunction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Func_1<::PlayEveryWare::EpicOnlineServices::PlatformConfig*>* (::PlayEveryWare::EpicOnlineServices::PlatformManager_PlatformInfo::*)()>(&::PlayEveryWare::EpicOnlineServices::PlatformManager_PlatformInfo::get_GetConfigFunction)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d97e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::PlatformManager_PlatformInfo>(),
                        {"get_GetConfigFunction", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayEveryWare::EpicOnlineServices::PlatformManager_PlatformInfo.get_ConfigType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Type* (::PlayEveryWare::EpicOnlineServices::PlatformManager_PlatformInfo::*)()>(&::PlayEveryWare::EpicOnlineServices::PlatformManager_PlatformInfo::get_ConfigType)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9810;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::PlatformManager_PlatformInfo>(),
                        {"get_ConfigType", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayEveryWare::EpicOnlineServices::PlatformManager_PlatformInfo._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayEveryWare::EpicOnlineServices::PlatformManager_PlatformInfo::*)(::System::Func_1<::PlayEveryWare::EpicOnlineServices::PlatformConfig*>*, ::System::Type*, ::StringW, ::StringW, ::StringW, ::StringW)>(&::PlayEveryWare::EpicOnlineServices::PlatformManager_PlatformInfo::_ctor)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x180543a30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::PlatformManager_PlatformInfo>(),
                        {".ctor", {}, {::i2c::type_of<::System::Func_1<::PlayEveryWare::EpicOnlineServices::PlatformConfig*>*>(), ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
inline ::StringW PlayEveryWare::EpicOnlineServices::PlatformManager_PlatformInfo::get_FullName()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::PlatformManager_PlatformInfo>(),
                        {"get_FullName", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
inline ::StringW PlayEveryWare::EpicOnlineServices::PlatformManager_PlatformInfo::get_ConfigFileName()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::PlatformManager_PlatformInfo>(),
                        {"get_ConfigFileName", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
inline ::StringW PlayEveryWare::EpicOnlineServices::PlatformManager_PlatformInfo::get_DynamicLibraryExtension()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::PlatformManager_PlatformInfo>(),
                        {"get_DynamicLibraryExtension", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
inline ::StringW PlayEveryWare::EpicOnlineServices::PlatformManager_PlatformInfo::get_PlatformIconLabel()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::PlatformManager_PlatformInfo>(),
                        {"get_PlatformIconLabel", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
inline ::System::Func_1<::PlayEveryWare::EpicOnlineServices::PlatformConfig*>* PlayEveryWare::EpicOnlineServices::PlatformManager_PlatformInfo::get_GetConfigFunction()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::PlatformManager_PlatformInfo>(),
                        {"get_GetConfigFunction", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Func_1<::PlayEveryWare::EpicOnlineServices::PlatformConfig*>*>(*this, ___internal_method);
}
inline ::System::Type* PlayEveryWare::EpicOnlineServices::PlatformManager_PlatformInfo::get_ConfigType()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::PlatformManager_PlatformInfo>(),
                        {"get_ConfigType", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Type*>(*this, ___internal_method);
}
inline void PlayEveryWare::EpicOnlineServices::PlatformManager_PlatformInfo::_ctor(::System::Func_1<::PlayEveryWare::EpicOnlineServices::PlatformConfig*>*  getConfigFunction, ::System::Type*  configType, ::StringW  fullName, ::StringW  configFileName, ::StringW  dynamicLibraryExtension, ::StringW  platformIconLabel)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::PlatformManager_PlatformInfo>(),
                        {".ctor", {}, {::i2c::type_of<::System::Func_1<::PlayEveryWare::EpicOnlineServices::PlatformConfig*>*>(), ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, getConfigFunction, configType, fullName, configFileName, dynamicLibraryExtension, platformIconLabel);
}
template<typename T>
inline ::PlayEveryWare::EpicOnlineServices::PlatformManager_PlatformInfo PlayEveryWare::EpicOnlineServices::PlatformManager_PlatformInfo::Create(::StringW  fullName, ::StringW  configFileName, ::StringW  dynamicLibraryExtension, ::StringW  platformIconLabel)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::PlatformManager_PlatformInfo>(),
                    {"Create", {::i2c::class_of<T>()}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<::PlayEveryWare::EpicOnlineServices::PlatformManager_PlatformInfo>(nullptr, ___internal_method, fullName, configFileName, dynamicLibraryExtension, platformIconLabel);
}
// Ctor Parameters [CppParam { name: "_FullName_k__BackingField", ty: "::StringW", modifiers: "", def_value: Some("{}") }, CppParam { name: "_ConfigFileName_k__BackingField", ty: "::StringW", modifiers: "", def_value: Some("{}") }, CppParam { name: "_DynamicLibraryExtension_k__BackingField", ty: "::StringW", modifiers: "", def_value: Some("{}") }, CppParam { name: "_PlatformIconLabel_k__BackingField", ty: "::StringW", modifiers: "", def_value: Some("{}") }, CppParam { name: "_GetConfigFunction_k__BackingField", ty: "::System::Func_1<::PlayEveryWare::EpicOnlineServices::PlatformConfig*>*", modifiers: "", def_value: Some("{}") }, CppParam { name: "_ConfigType_k__BackingField", ty: "::System::Type*", modifiers: "", def_value: Some("{}") }]
constexpr ::PlayEveryWare::EpicOnlineServices::PlatformManager_PlatformInfo::PlatformManager_PlatformInfo(::StringW  _FullName_k__BackingField, ::StringW  _ConfigFileName_k__BackingField, ::StringW  _DynamicLibraryExtension_k__BackingField, ::StringW  _PlatformIconLabel_k__BackingField, ::System::Func_1<::PlayEveryWare::EpicOnlineServices::PlatformConfig*>*  _GetConfigFunction_k__BackingField, ::System::Type*  _ConfigType_k__BackingField) noexcept  {
this->_FullName_k__BackingField = _FullName_k__BackingField;
this->_ConfigFileName_k__BackingField = _ConfigFileName_k__BackingField;
this->_DynamicLibraryExtension_k__BackingField = _DynamicLibraryExtension_k__BackingField;
this->_PlatformIconLabel_k__BackingField = _PlatformIconLabel_k__BackingField;
this->_GetConfigFunction_k__BackingField = _GetConfigFunction_k__BackingField;
this->_ConfigType_k__BackingField = _ConfigType_k__BackingField;
}
// Ctor Parameters []
constexpr ::PlayEveryWare::EpicOnlineServices::PlatformManager_PlatformInfo::PlatformManager_PlatformInfo()   {
}
//  Writing Method size for method: ::PlayEveryWare::EpicOnlineServices::PlatformManager.get_ConfigurablePlatforms
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerable_1<::PlayEveryWare::EpicOnlineServices::PlatformManager_Platform>* (*)()>(&::PlayEveryWare::EpicOnlineServices::PlatformManager::get_ConfigurablePlatforms)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x180544c80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::PlatformManager*>(),
                        {"get_ConfigurablePlatforms", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayEveryWare::EpicOnlineServices::PlatformManager.TryGetConfig
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::PlayEveryWare::EpicOnlineServices::PlatformManager_Platform, ::by_ref<::PlayEveryWare::EpicOnlineServices::PlatformConfig*>)>(&::PlayEveryWare::EpicOnlineServices::PlatformManager::TryGetConfig)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x180544690;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::PlatformManager*>(),
                        {"TryGetConfig", {}, {::i2c::type_of<::PlayEveryWare::EpicOnlineServices::PlatformManager_Platform>(), ::i2c::type_of<::by_ref<::PlayEveryWare::EpicOnlineServices::PlatformConfig*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayEveryWare::EpicOnlineServices::PlatformManager.get_CurrentPlatform
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::PlayEveryWare::EpicOnlineServices::PlatformManager_Platform (*)()>(&::PlayEveryWare::EpicOnlineServices::PlatformManager::get_CurrentPlatform)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x180544cd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::PlatformManager*>(),
                        {"get_CurrentPlatform", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayEveryWare::EpicOnlineServices::PlatformManager.set_CurrentPlatform
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::PlayEveryWare::EpicOnlineServices::PlatformManager_Platform)>(&::PlayEveryWare::EpicOnlineServices::PlatformManager::set_CurrentPlatform)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x180544d10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::PlatformManager*>(),
                        {"set_CurrentPlatform", {}, {::i2c::type_of<::PlayEveryWare::EpicOnlineServices::PlatformManager_Platform>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayEveryWare::EpicOnlineServices::PlatformManager.InitializePlatformConfigs
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::PlayEveryWare::EpicOnlineServices::PlatformManager::InitializePlatformConfigs)> {
  constexpr static std::size_t size = 0x500;
  constexpr static std::size_t addrs = 0x180544060;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::PlatformManager*>(),
                        {"InitializePlatformConfigs", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayEveryWare::EpicOnlineServices::PlatformManager.GetPlatformConfig
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::PlayEveryWare::EpicOnlineServices::PlatformConfig* (*)()>(&::PlayEveryWare::EpicOnlineServices::PlatformManager::GetPlatformConfig)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x180543e80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::PlatformManager*>(),
                        {"GetPlatformConfig", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayEveryWare::EpicOnlineServices::PlatformManager.TryGetPlatform
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::RuntimePlatform, ::by_ref<::PlayEveryWare::EpicOnlineServices::PlatformManager_Platform>)>(&::PlayEveryWare::EpicOnlineServices::PlatformManager::TryGetPlatform)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x1805447c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::PlatformManager*>(),
                        {"TryGetPlatform", {}, {::i2c::type_of<::UnityEngine::RuntimePlatform>(), ::i2c::type_of<::by_ref<::PlayEveryWare::EpicOnlineServices::PlatformManager_Platform>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayEveryWare::EpicOnlineServices::PlatformManager.GetDynamicLibraryExtension
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::PlayEveryWare::EpicOnlineServices::PlatformManager_Platform)>(&::PlayEveryWare::EpicOnlineServices::PlatformManager::GetDynamicLibraryExtension)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x180543cf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::PlatformManager*>(),
                        {"GetDynamicLibraryExtension", {}, {::i2c::type_of<::PlayEveryWare::EpicOnlineServices::PlatformManager_Platform>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayEveryWare::EpicOnlineServices::PlatformManager.GetConfigFilePath
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)()>(&::PlayEveryWare::EpicOnlineServices::PlatformManager::GetConfigFilePath)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x180543ba0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::PlatformManager*>(),
                        {"GetConfigFilePath", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayEveryWare::EpicOnlineServices::PlatformManager.GetConfigFilePath
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::PlayEveryWare::EpicOnlineServices::PlatformManager_Platform)>(&::PlayEveryWare::EpicOnlineServices::PlatformManager::GetConfigFilePath)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x180543bf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::PlatformManager*>(),
                        {"GetConfigFilePath", {}, {::i2c::type_of<::PlayEveryWare::EpicOnlineServices::PlatformManager_Platform>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayEveryWare::EpicOnlineServices::PlatformManager.TryGetConfigFilePath
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::PlayEveryWare::EpicOnlineServices::PlatformManager_Platform, ::by_ref<::StringW>)>(&::PlayEveryWare::EpicOnlineServices::PlatformManager::TryGetConfigFilePath)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x180544560;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::PlatformManager*>(),
                        {"TryGetConfigFilePath", {}, {::i2c::type_of<::PlayEveryWare::EpicOnlineServices::PlatformManager_Platform>(), ::i2c::type_of<::by_ref<::StringW>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayEveryWare::EpicOnlineServices::PlatformManager.GetConfigFileName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::PlayEveryWare::EpicOnlineServices::PlatformManager_Platform)>(&::PlayEveryWare::EpicOnlineServices::PlatformManager::GetConfigFileName)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x180543b30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::PlatformManager*>(),
                        {"GetConfigFileName", {}, {::i2c::type_of<::PlayEveryWare::EpicOnlineServices::PlatformManager_Platform>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayEveryWare::EpicOnlineServices::PlatformManager.GetFullName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::PlayEveryWare::EpicOnlineServices::PlatformManager_Platform)>(&::PlayEveryWare::EpicOnlineServices::PlatformManager::GetFullName)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x180543d60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::PlatformManager*>(),
                        {"GetFullName", {}, {::i2c::type_of<::PlayEveryWare::EpicOnlineServices::PlatformManager_Platform>()}}
                    )));
    return ___internal_method;
  }
};
inline void PlayEveryWare::EpicOnlineServices::PlatformManager::setStaticF_PlatformInformation(::System::Collections::Generic::IDictionary_2<::PlayEveryWare::EpicOnlineServices::PlatformManager_Platform,::PlayEveryWare::EpicOnlineServices::PlatformManager_PlatformInfo>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::IDictionary_2<::PlayEveryWare::EpicOnlineServices::PlatformManager_Platform,::PlayEveryWare::EpicOnlineServices::PlatformManager_PlatformInfo>*, "PlatformInformation", ::PlayEveryWare::EpicOnlineServices::PlatformManager*>(std::forward<::System::Collections::Generic::IDictionary_2<::PlayEveryWare::EpicOnlineServices::PlatformManager_Platform,::PlayEveryWare::EpicOnlineServices::PlatformManager_PlatformInfo>*>(value));
}
inline ::System::Collections::Generic::IDictionary_2<::PlayEveryWare::EpicOnlineServices::PlatformManager_Platform,::PlayEveryWare::EpicOnlineServices::PlatformManager_PlatformInfo>* PlayEveryWare::EpicOnlineServices::PlatformManager::getStaticF_PlatformInformation()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::IDictionary_2<::PlayEveryWare::EpicOnlineServices::PlatformManager_Platform,::PlayEveryWare::EpicOnlineServices::PlatformManager_PlatformInfo>*, "PlatformInformation", ::PlayEveryWare::EpicOnlineServices::PlatformManager*>();
}
inline void PlayEveryWare::EpicOnlineServices::PlatformManager::setStaticF_s_CurrentPlatform(::PlayEveryWare::EpicOnlineServices::PlatformManager_Platform  value)  {
::cordl_internals::setStaticField<::PlayEveryWare::EpicOnlineServices::PlatformManager_Platform, "s_CurrentPlatform", ::PlayEveryWare::EpicOnlineServices::PlatformManager*>(std::forward<::PlayEveryWare::EpicOnlineServices::PlatformManager_Platform>(value));
}
inline ::PlayEveryWare::EpicOnlineServices::PlatformManager_Platform PlayEveryWare::EpicOnlineServices::PlatformManager::getStaticF_s_CurrentPlatform()  {
return ::cordl_internals::getStaticField<::PlayEveryWare::EpicOnlineServices::PlatformManager_Platform, "s_CurrentPlatform", ::PlayEveryWare::EpicOnlineServices::PlatformManager*>();
}
inline void PlayEveryWare::EpicOnlineServices::PlatformManager::setStaticF_s_platformConfig(::PlayEveryWare::EpicOnlineServices::PlatformConfig*  value)  {
::cordl_internals::setStaticField<::PlayEveryWare::EpicOnlineServices::PlatformConfig*, "s_platformConfig", ::PlayEveryWare::EpicOnlineServices::PlatformManager*>(std::forward<::PlayEveryWare::EpicOnlineServices::PlatformConfig*>(value));
}
inline ::PlayEveryWare::EpicOnlineServices::PlatformConfig* PlayEveryWare::EpicOnlineServices::PlatformManager::getStaticF_s_platformConfig()  {
return ::cordl_internals::getStaticField<::PlayEveryWare::EpicOnlineServices::PlatformConfig*, "s_platformConfig", ::PlayEveryWare::EpicOnlineServices::PlatformManager*>();
}
inline void PlayEveryWare::EpicOnlineServices::PlatformManager::setStaticF_s_CurrentTargetedPlatform(::PlayEveryWare::EpicOnlineServices::PlatformManager_Platform  value)  {
::cordl_internals::setStaticField<::PlayEveryWare::EpicOnlineServices::PlatformManager_Platform, "s_CurrentTargetedPlatform", ::PlayEveryWare::EpicOnlineServices::PlatformManager*>(std::forward<::PlayEveryWare::EpicOnlineServices::PlatformManager_Platform>(value));
}
inline ::PlayEveryWare::EpicOnlineServices::PlatformManager_Platform PlayEveryWare::EpicOnlineServices::PlatformManager::getStaticF_s_CurrentTargetedPlatform()  {
return ::cordl_internals::getStaticField<::PlayEveryWare::EpicOnlineServices::PlatformManager_Platform, "s_CurrentTargetedPlatform", ::PlayEveryWare::EpicOnlineServices::PlatformManager*>();
}
inline void PlayEveryWare::EpicOnlineServices::PlatformManager::setStaticF_RuntimeToPlatformsMap(::System::Collections::Generic::IDictionary_2<::UnityEngine::RuntimePlatform,::PlayEveryWare::EpicOnlineServices::PlatformManager_Platform>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::IDictionary_2<::UnityEngine::RuntimePlatform,::PlayEveryWare::EpicOnlineServices::PlatformManager_Platform>*, "RuntimeToPlatformsMap", ::PlayEveryWare::EpicOnlineServices::PlatformManager*>(std::forward<::System::Collections::Generic::IDictionary_2<::UnityEngine::RuntimePlatform,::PlayEveryWare::EpicOnlineServices::PlatformManager_Platform>*>(value));
}
inline ::System::Collections::Generic::IDictionary_2<::UnityEngine::RuntimePlatform,::PlayEveryWare::EpicOnlineServices::PlatformManager_Platform>* PlayEveryWare::EpicOnlineServices::PlatformManager::getStaticF_RuntimeToPlatformsMap()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::IDictionary_2<::UnityEngine::RuntimePlatform,::PlayEveryWare::EpicOnlineServices::PlatformManager_Platform>*, "RuntimeToPlatformsMap", ::PlayEveryWare::EpicOnlineServices::PlatformManager*>();
}
inline ::System::Collections::Generic::IEnumerable_1<::PlayEveryWare::EpicOnlineServices::PlatformManager_Platform>* PlayEveryWare::EpicOnlineServices::PlatformManager::get_ConfigurablePlatforms()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::PlatformManager*>(),
                        {"get_ConfigurablePlatforms", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::PlayEveryWare::EpicOnlineServices::PlatformManager_Platform>*>(nullptr, ___internal_method);
}
inline bool PlayEveryWare::EpicOnlineServices::PlatformManager::TryGetConfig(::PlayEveryWare::EpicOnlineServices::PlatformManager_Platform  platform, ::by_ref<::PlayEveryWare::EpicOnlineServices::PlatformConfig*>  platformConfig)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::PlatformManager*>(),
                        {"TryGetConfig", {}, {::i2c::type_of<::PlayEveryWare::EpicOnlineServices::PlatformManager_Platform>(), ::i2c::type_of<::by_ref<::PlayEveryWare::EpicOnlineServices::PlatformConfig*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, platform, platformConfig);
}
inline ::PlayEveryWare::EpicOnlineServices::PlatformManager_Platform PlayEveryWare::EpicOnlineServices::PlatformManager::get_CurrentPlatform()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::PlatformManager*>(),
                        {"get_CurrentPlatform", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::PlayEveryWare::EpicOnlineServices::PlatformManager_Platform>(nullptr, ___internal_method);
}
inline void PlayEveryWare::EpicOnlineServices::PlatformManager::set_CurrentPlatform(::PlayEveryWare::EpicOnlineServices::PlatformManager_Platform  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::PlatformManager*>(),
                        {"set_CurrentPlatform", {}, {::i2c::type_of<::PlayEveryWare::EpicOnlineServices::PlatformManager_Platform>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void PlayEveryWare::EpicOnlineServices::PlatformManager::InitializePlatformConfigs()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::PlatformManager*>(),
                        {"InitializePlatformConfigs", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline ::PlayEveryWare::EpicOnlineServices::PlatformConfig* PlayEveryWare::EpicOnlineServices::PlatformManager::GetPlatformConfig()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::PlatformManager*>(),
                        {"GetPlatformConfig", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::PlayEveryWare::EpicOnlineServices::PlatformConfig*>(nullptr, ___internal_method);
}
inline bool PlayEveryWare::EpicOnlineServices::PlatformManager::TryGetPlatform(::UnityEngine::RuntimePlatform  runtimePlatform, ::by_ref<::PlayEveryWare::EpicOnlineServices::PlatformManager_Platform>  platform)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::PlatformManager*>(),
                        {"TryGetPlatform", {}, {::i2c::type_of<::UnityEngine::RuntimePlatform>(), ::i2c::type_of<::by_ref<::PlayEveryWare::EpicOnlineServices::PlatformManager_Platform>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, runtimePlatform, platform);
}
inline ::StringW PlayEveryWare::EpicOnlineServices::PlatformManager::GetDynamicLibraryExtension(::PlayEveryWare::EpicOnlineServices::PlatformManager_Platform  platform)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::PlatformManager*>(),
                        {"GetDynamicLibraryExtension", {}, {::i2c::type_of<::PlayEveryWare::EpicOnlineServices::PlatformManager_Platform>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, platform);
}
inline ::StringW PlayEveryWare::EpicOnlineServices::PlatformManager::GetConfigFilePath()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::PlatformManager*>(),
                        {"GetConfigFilePath", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method);
}
inline ::StringW PlayEveryWare::EpicOnlineServices::PlatformManager::GetConfigFilePath(::PlayEveryWare::EpicOnlineServices::PlatformManager_Platform  platform)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::PlatformManager*>(),
                        {"GetConfigFilePath", {}, {::i2c::type_of<::PlayEveryWare::EpicOnlineServices::PlatformManager_Platform>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, platform);
}
inline bool PlayEveryWare::EpicOnlineServices::PlatformManager::TryGetConfigFilePath(::PlayEveryWare::EpicOnlineServices::PlatformManager_Platform  platform, ::by_ref<::StringW>  configFilePath)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::PlatformManager*>(),
                        {"TryGetConfigFilePath", {}, {::i2c::type_of<::PlayEveryWare::EpicOnlineServices::PlatformManager_Platform>(), ::i2c::type_of<::by_ref<::StringW>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, platform, configFilePath);
}
inline ::StringW PlayEveryWare::EpicOnlineServices::PlatformManager::GetConfigFileName(::PlayEveryWare::EpicOnlineServices::PlatformManager_Platform  platform)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::PlatformManager*>(),
                        {"GetConfigFileName", {}, {::i2c::type_of<::PlayEveryWare::EpicOnlineServices::PlatformManager_Platform>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, platform);
}
inline ::StringW PlayEveryWare::EpicOnlineServices::PlatformManager::GetFullName(::PlayEveryWare::EpicOnlineServices::PlatformManager_Platform  platform)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::PlatformManager*>(),
                        {"GetFullName", {}, {::i2c::type_of<::PlayEveryWare::EpicOnlineServices::PlatformManager_Platform>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, platform);
}
// Ctor Parameters []
constexpr ::PlayEveryWare::EpicOnlineServices::PlatformManager::PlatformManager()   {
}

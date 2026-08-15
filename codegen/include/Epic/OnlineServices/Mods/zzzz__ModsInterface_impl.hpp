#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Mods/ModsInterface.hpp"
#include "Epic/OnlineServices/zzzz__Handle_impl.hpp"
#include "Epic/OnlineServices/Mods/zzzz__ModsInterface_def.hpp"
#include "Epic/OnlineServices/Mods/zzzz__CopyModInfoOptions_def.hpp"
#include "Epic/OnlineServices/Mods/zzzz__EnumerateModsOptions_def.hpp"
#include "Epic/OnlineServices/Mods/zzzz__InstallModOptions_def.hpp"
#include "Epic/OnlineServices/Mods/zzzz__ModInfo_def.hpp"
#include "Epic/OnlineServices/Mods/zzzz__OnEnumerateModsCallback_def.hpp"
#include "Epic/OnlineServices/Mods/zzzz__OnInstallModCallback_def.hpp"
#include "Epic/OnlineServices/Mods/zzzz__OnUninstallModCallback_def.hpp"
#include "Epic/OnlineServices/Mods/zzzz__OnUpdateModCallback_def.hpp"
#include "Epic/OnlineServices/Mods/zzzz__UninstallModOptions_def.hpp"
#include "Epic/OnlineServices/Mods/zzzz__UpdateModOptions_def.hpp"
#include "Epic/OnlineServices/zzzz__Result_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::Mods::ModsInterface._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Mods::ModsInterface::*)()>(&::Epic::OnlineServices::Mods::ModsInterface::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Mods::ModsInterface*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Mods::ModsInterface._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Mods::ModsInterface::*)(::System::IntPtr)>(&::Epic::OnlineServices::Mods::ModsInterface::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1804f0510;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Mods::ModsInterface*>(),
                        {".ctor", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Mods::ModsInterface.CopyModInfo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::Result (::Epic::OnlineServices::Mods::ModsInterface::*)(::by_ref<::Epic::OnlineServices::Mods::CopyModInfoOptions>, ::by_ref<::System::Nullable_1<::Epic::OnlineServices::Mods::ModInfo>>)>(&::Epic::OnlineServices::Mods::ModsInterface::CopyModInfo)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x18050c620;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Mods::ModsInterface*>(),
                        {"CopyModInfo", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Mods::CopyModInfoOptions>>(), ::i2c::type_of<::by_ref<::System::Nullable_1<::Epic::OnlineServices::Mods::ModInfo>>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Mods::ModsInterface.EnumerateMods
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Mods::ModsInterface::*)(::by_ref<::Epic::OnlineServices::Mods::EnumerateModsOptions>, ::System::Object*, ::Epic::OnlineServices::Mods::OnEnumerateModsCallback*)>(&::Epic::OnlineServices::Mods::ModsInterface::EnumerateMods)> {
  constexpr static std::size_t size = 0x220;
  constexpr static std::size_t addrs = 0x18050c6c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Mods::ModsInterface*>(),
                        {"EnumerateMods", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Mods::EnumerateModsOptions>>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::Epic::OnlineServices::Mods::OnEnumerateModsCallback*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Mods::ModsInterface.InstallMod
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Mods::ModsInterface::*)(::by_ref<::Epic::OnlineServices::Mods::InstallModOptions>, ::System::Object*, ::Epic::OnlineServices::Mods::OnInstallModCallback*)>(&::Epic::OnlineServices::Mods::ModsInterface::InstallMod)> {
  constexpr static std::size_t size = 0x270;
  constexpr static std::size_t addrs = 0x18050c8e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Mods::ModsInterface*>(),
                        {"InstallMod", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Mods::InstallModOptions>>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::Epic::OnlineServices::Mods::OnInstallModCallback*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Mods::ModsInterface.UninstallMod
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Mods::ModsInterface::*)(::by_ref<::Epic::OnlineServices::Mods::UninstallModOptions>, ::System::Object*, ::Epic::OnlineServices::Mods::OnUninstallModCallback*)>(&::Epic::OnlineServices::Mods::ModsInterface::UninstallMod)> {
  constexpr static std::size_t size = 0x260;
  constexpr static std::size_t addrs = 0x18050cb50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Mods::ModsInterface*>(),
                        {"UninstallMod", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Mods::UninstallModOptions>>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::Epic::OnlineServices::Mods::OnUninstallModCallback*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Mods::ModsInterface.UpdateMod
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Mods::ModsInterface::*)(::by_ref<::Epic::OnlineServices::Mods::UpdateModOptions>, ::System::Object*, ::Epic::OnlineServices::Mods::OnUpdateModCallback*)>(&::Epic::OnlineServices::Mods::ModsInterface::UpdateMod)> {
  constexpr static std::size_t size = 0x290;
  constexpr static std::size_t addrs = 0x18050cdb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Mods::ModsInterface*>(),
                        {"UpdateMod", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Mods::UpdateModOptions>>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::Epic::OnlineServices::Mods::OnUpdateModCallback*>()}}
                    )));
    return ___internal_method;
  }
};
inline void Epic::OnlineServices::Mods::ModsInterface::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Mods::ModsInterface*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Epic::OnlineServices::Mods::ModsInterface::_ctor(::System::IntPtr  innerHandle)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Mods::ModsInterface*>(),
                        {".ctor", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, innerHandle);
}
inline ::Epic::OnlineServices::Result Epic::OnlineServices::Mods::ModsInterface::CopyModInfo(::by_ref<::Epic::OnlineServices::Mods::CopyModInfoOptions>  options, ::by_ref<::System::Nullable_1<::Epic::OnlineServices::Mods::ModInfo>>  outEnumeratedMods)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Mods::ModsInterface*>(),
                        {"CopyModInfo", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Mods::CopyModInfoOptions>>(), ::i2c::type_of<::by_ref<::System::Nullable_1<::Epic::OnlineServices::Mods::ModInfo>>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Result>(this, ___internal_method, options, outEnumeratedMods);
}
inline void Epic::OnlineServices::Mods::ModsInterface::EnumerateMods(::by_ref<::Epic::OnlineServices::Mods::EnumerateModsOptions>  options, ::System::Object*  clientData, ::Epic::OnlineServices::Mods::OnEnumerateModsCallback*  completionDelegate)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Mods::ModsInterface*>(),
                        {"EnumerateMods", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Mods::EnumerateModsOptions>>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::Epic::OnlineServices::Mods::OnEnumerateModsCallback*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, options, clientData, completionDelegate);
}
inline void Epic::OnlineServices::Mods::ModsInterface::InstallMod(::by_ref<::Epic::OnlineServices::Mods::InstallModOptions>  options, ::System::Object*  clientData, ::Epic::OnlineServices::Mods::OnInstallModCallback*  completionDelegate)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Mods::ModsInterface*>(),
                        {"InstallMod", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Mods::InstallModOptions>>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::Epic::OnlineServices::Mods::OnInstallModCallback*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, options, clientData, completionDelegate);
}
inline void Epic::OnlineServices::Mods::ModsInterface::UninstallMod(::by_ref<::Epic::OnlineServices::Mods::UninstallModOptions>  options, ::System::Object*  clientData, ::Epic::OnlineServices::Mods::OnUninstallModCallback*  completionDelegate)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Mods::ModsInterface*>(),
                        {"UninstallMod", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Mods::UninstallModOptions>>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::Epic::OnlineServices::Mods::OnUninstallModCallback*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, options, clientData, completionDelegate);
}
inline void Epic::OnlineServices::Mods::ModsInterface::UpdateMod(::by_ref<::Epic::OnlineServices::Mods::UpdateModOptions>  options, ::System::Object*  clientData, ::Epic::OnlineServices::Mods::OnUpdateModCallback*  completionDelegate)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Mods::ModsInterface*>(),
                        {"UpdateMod", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Mods::UpdateModOptions>>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::Epic::OnlineServices::Mods::OnUpdateModCallback*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, options, clientData, completionDelegate);
}
inline ::Epic::OnlineServices::Mods::ModsInterface* Epic::OnlineServices::Mods::ModsInterface::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Epic::OnlineServices::Mods::ModsInterface*>());
}
inline ::Epic::OnlineServices::Mods::ModsInterface* Epic::OnlineServices::Mods::ModsInterface::New_ctor(::System::IntPtr  innerHandle)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Epic::OnlineServices::Mods::ModsInterface*>(innerHandle));
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::Mods::ModsInterface::ModsInterface()   {
}

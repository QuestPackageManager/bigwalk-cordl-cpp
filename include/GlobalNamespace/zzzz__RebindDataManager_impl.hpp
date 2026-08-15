#pragma once
// IWYU pragma private; include "GlobalNamespace/RebindDataManager.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__RebindDataManager_def.hpp"
#include "Rewired/zzzz__ControllerMapSaveData_def.hpp"
#include "Rewired/zzzz__ControllerType_def.hpp"
#include "Rewired/zzzz__Controller_def.hpp"
#include "Rewired/zzzz__Player_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::RebindDataManager.Save
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Rewired::Controller*, ::Rewired::Player*)>(&::GlobalNamespace::RebindDataManager::Save)> {
  constexpr static std::size_t size = 0x250;
  constexpr static std::size_t addrs = 0x18043b9e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RebindDataManager*>(),
                        {"Save", {}, {::i2c::type_of<::Rewired::Controller*>(), ::i2c::type_of<::Rewired::Player*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RebindDataManager.Save
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Rewired::ControllerType, ::Rewired::Player*)>(&::GlobalNamespace::RebindDataManager::Save)> {
  constexpr static std::size_t size = 0x210;
  constexpr static std::size_t addrs = 0x18043bc30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RebindDataManager*>(),
                        {"Save", {}, {::i2c::type_of<::Rewired::ControllerType>(), ::i2c::type_of<::Rewired::Player*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RebindDataManager.GetControllerRebindSaveData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::Rewired::ControllerMapSaveData*>* (*)(int32_t, ::Rewired::ControllerType, int32_t)>(&::GlobalNamespace::RebindDataManager::GetControllerRebindSaveData)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x18043aed0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RebindDataManager*>(),
                        {"GetControllerRebindSaveData", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::Rewired::ControllerType>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RebindDataManager.GetProcessedRebindSaveXml
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::Rewired::ControllerMapSaveData*)>(&::GlobalNamespace::RebindDataManager::GetProcessedRebindSaveXml)> {
  constexpr static std::size_t size = 0x250;
  constexpr static std::size_t addrs = 0x18043b150;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RebindDataManager*>(),
                        {"GetProcessedRebindSaveXml", {}, {::i2c::type_of<::Rewired::ControllerMapSaveData*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RebindDataManager.RemoveElementIdTags
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW)>(&::GlobalNamespace::RebindDataManager::RemoveElementIdTags)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x18043b8c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RebindDataManager*>(),
                        {"RemoveElementIdTags", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RebindDataManager.PrettifyXml
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW)>(&::GlobalNamespace::RebindDataManager::PrettifyXml)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x18043b870;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RebindDataManager*>(),
                        {"PrettifyXml", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RebindDataManager.AddHelperTagsToActionIds
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW)>(&::GlobalNamespace::RebindDataManager::AddHelperTagsToActionIds)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x18043a980;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RebindDataManager*>(),
                        {"AddHelperTagsToActionIds", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RebindDataManager.AddHeader
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW, bool)>(&::GlobalNamespace::RebindDataManager::AddHeader)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x18043a8f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RebindDataManager*>(),
                        {"AddHeader", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RebindDataManager.GenerateHeader
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(bool)>(&::GlobalNamespace::RebindDataManager::GenerateHeader)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x18043ae20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RebindDataManager*>(),
                        {"GenerateHeader", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RebindDataManager.RemoveXMLHeader
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW)>(&::GlobalNamespace::RebindDataManager::RemoveXMLHeader)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x18043b970;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RebindDataManager*>(),
                        {"RemoveXMLHeader", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RebindDataManager.LoadAll
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::GlobalNamespace::RebindDataManager::LoadAll)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x18043b580;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RebindDataManager*>(),
                        {"LoadAll", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RebindDataManager.LoadAll
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Rewired::ControllerType)>(&::GlobalNamespace::RebindDataManager::LoadAll)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x18043b3a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RebindDataManager*>(),
                        {"LoadAll", {}, {::i2c::type_of<::Rewired::ControllerType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RebindDataManager.LoadController
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Rewired::Controller*, ::Rewired::Player*)>(&::GlobalNamespace::RebindDataManager::LoadController)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x18043b760;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RebindDataManager*>(),
                        {"LoadController", {}, {::i2c::type_of<::Rewired::Controller*>(), ::i2c::type_of<::Rewired::Player*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RebindDataManager.ApplyControllerRebindData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::StringW, ::Rewired::Controller*, ::Rewired::Player*)>(&::GlobalNamespace::RebindDataManager::ApplyControllerRebindData)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x18043aa90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RebindDataManager*>(),
                        {"ApplyControllerRebindData", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::Rewired::Controller*>(), ::i2c::type_of<::Rewired::Player*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RebindDataManager.GetControllerSaveName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::Rewired::Controller*)>(&::GlobalNamespace::RebindDataManager::GetControllerSaveName)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x18043b020;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RebindDataManager*>(),
                        {"GetControllerSaveName", {}, {::i2c::type_of<::Rewired::Controller*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RebindDataManager.GetControllerPlayerSaveName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::Rewired::Controller*, ::Rewired::Player*)>(&::GlobalNamespace::RebindDataManager::GetControllerPlayerSaveName)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x18043ae60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RebindDataManager*>(),
                        {"GetControllerPlayerSaveName", {}, {::i2c::type_of<::Rewired::Controller*>(), ::i2c::type_of<::Rewired::Player*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RebindDataManager.GenerateFileName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::Rewired::ControllerMapSaveData*, ::Rewired::Player*)>(&::GlobalNamespace::RebindDataManager::GenerateFileName)> {
  constexpr static std::size_t size = 0x2a0;
  constexpr static std::size_t addrs = 0x18043ab80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RebindDataManager*>(),
                        {"GenerateFileName", {}, {::i2c::type_of<::Rewired::ControllerMapSaveData*>(), ::i2c::type_of<::Rewired::Player*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RebindDataManager.IsJoyconController
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Rewired::Controller*)>(&::GlobalNamespace::RebindDataManager::IsJoyconController)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e2bd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RebindDataManager*>(),
                        {"IsJoyconController", {}, {::i2c::type_of<::Rewired::Controller*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RebindDataManager.IsSingleJoyconController
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Rewired::Controller*)>(&::GlobalNamespace::RebindDataManager::IsSingleJoyconController)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e2bd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RebindDataManager*>(),
                        {"IsSingleJoyconController", {}, {::i2c::type_of<::Rewired::Controller*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RebindDataManager._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RebindDataManager::*)()>(&::GlobalNamespace::RebindDataManager::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RebindDataManager*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::RebindDataManager::setStaticF_PLAYER_FILE_STRINGS(::ArrayW<::StringW>  value)  {
::cordl_internals::setStaticField<::ArrayW<::StringW>, "PLAYER_FILE_STRINGS", ::GlobalNamespace::RebindDataManager*>(std::forward<::ArrayW<::StringW>>(value));
}
inline ::ArrayW<::StringW> GlobalNamespace::RebindDataManager::getStaticF_PLAYER_FILE_STRINGS()  {
return ::cordl_internals::getStaticField<::ArrayW<::StringW>, "PLAYER_FILE_STRINGS", ::GlobalNamespace::RebindDataManager*>();
}
inline void GlobalNamespace::RebindDataManager::setStaticF_ps4Gamepad1Name(::StringW  value)  {
::cordl_internals::setStaticField<::StringW, "ps4Gamepad1Name", ::GlobalNamespace::RebindDataManager*>(std::forward<::StringW>(value));
}
inline ::StringW GlobalNamespace::RebindDataManager::getStaticF_ps4Gamepad1Name()  {
return ::cordl_internals::getStaticField<::StringW, "ps4Gamepad1Name", ::GlobalNamespace::RebindDataManager*>();
}
inline void GlobalNamespace::RebindDataManager::Save(::Rewired::Controller*  controller, ::Rewired::Player*  player)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RebindDataManager*>(),
                        {"Save", {}, {::i2c::type_of<::Rewired::Controller*>(), ::i2c::type_of<::Rewired::Player*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, controller, player);
}
inline void GlobalNamespace::RebindDataManager::Save(::Rewired::ControllerType  controllerType, ::Rewired::Player*  player)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RebindDataManager*>(),
                        {"Save", {}, {::i2c::type_of<::Rewired::ControllerType>(), ::i2c::type_of<::Rewired::Player*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, controllerType, player);
}
inline ::System::Collections::Generic::List_1<::Rewired::ControllerMapSaveData*>* GlobalNamespace::RebindDataManager::GetControllerRebindSaveData(int32_t  playerId, ::Rewired::ControllerType  controllerType, int32_t  controllerId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RebindDataManager*>(),
                        {"GetControllerRebindSaveData", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::Rewired::ControllerType>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::Rewired::ControllerMapSaveData*>*>(nullptr, ___internal_method, playerId, controllerType, controllerId);
}
inline ::StringW GlobalNamespace::RebindDataManager::GetProcessedRebindSaveXml(::Rewired::ControllerMapSaveData*  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RebindDataManager*>(),
                        {"GetProcessedRebindSaveXml", {}, {::i2c::type_of<::Rewired::ControllerMapSaveData*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, data);
}
inline ::StringW GlobalNamespace::RebindDataManager::RemoveElementIdTags(::StringW  xml)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RebindDataManager*>(),
                        {"RemoveElementIdTags", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, xml);
}
inline ::StringW GlobalNamespace::RebindDataManager::PrettifyXml(::StringW  xml)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RebindDataManager*>(),
                        {"PrettifyXml", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, xml);
}
inline ::StringW GlobalNamespace::RebindDataManager::AddHelperTagsToActionIds(::StringW  xml)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RebindDataManager*>(),
                        {"AddHelperTagsToActionIds", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, xml);
}
inline ::StringW GlobalNamespace::RebindDataManager::AddHeader(::StringW  xml, bool  includeKeyCodeDetails)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RebindDataManager*>(),
                        {"AddHeader", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, xml, includeKeyCodeDetails);
}
inline ::StringW GlobalNamespace::RebindDataManager::GenerateHeader(bool  includeKeyCodeDetails)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RebindDataManager*>(),
                        {"GenerateHeader", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, includeKeyCodeDetails);
}
inline ::StringW GlobalNamespace::RebindDataManager::RemoveXMLHeader(::StringW  xml)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RebindDataManager*>(),
                        {"RemoveXMLHeader", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, xml);
}
inline void GlobalNamespace::RebindDataManager::LoadAll()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RebindDataManager*>(),
                        {"LoadAll", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void GlobalNamespace::RebindDataManager::LoadAll(::Rewired::ControllerType  type)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RebindDataManager*>(),
                        {"LoadAll", {}, {::i2c::type_of<::Rewired::ControllerType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, type);
}
inline void GlobalNamespace::RebindDataManager::LoadController(::Rewired::Controller*  controller, ::Rewired::Player*  player)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RebindDataManager*>(),
                        {"LoadController", {}, {::i2c::type_of<::Rewired::Controller*>(), ::i2c::type_of<::Rewired::Player*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, controller, player);
}
inline bool GlobalNamespace::RebindDataManager::ApplyControllerRebindData(::StringW  xml, ::Rewired::Controller*  controller, ::Rewired::Player*  player)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RebindDataManager*>(),
                        {"ApplyControllerRebindData", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::Rewired::Controller*>(), ::i2c::type_of<::Rewired::Player*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, xml, controller, player);
}
inline ::StringW GlobalNamespace::RebindDataManager::GetControllerSaveName(::Rewired::Controller*  controller)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RebindDataManager*>(),
                        {"GetControllerSaveName", {}, {::i2c::type_of<::Rewired::Controller*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, controller);
}
inline ::StringW GlobalNamespace::RebindDataManager::GetControllerPlayerSaveName(::Rewired::Controller*  controller, ::Rewired::Player*  player)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RebindDataManager*>(),
                        {"GetControllerPlayerSaveName", {}, {::i2c::type_of<::Rewired::Controller*>(), ::i2c::type_of<::Rewired::Player*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, controller, player);
}
inline ::StringW GlobalNamespace::RebindDataManager::GenerateFileName(::Rewired::ControllerMapSaveData*  data, ::Rewired::Player*  player)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RebindDataManager*>(),
                        {"GenerateFileName", {}, {::i2c::type_of<::Rewired::ControllerMapSaveData*>(), ::i2c::type_of<::Rewired::Player*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, data, player);
}
inline bool GlobalNamespace::RebindDataManager::IsJoyconController(::Rewired::Controller*  controller)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RebindDataManager*>(),
                        {"IsJoyconController", {}, {::i2c::type_of<::Rewired::Controller*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, controller);
}
inline bool GlobalNamespace::RebindDataManager::IsSingleJoyconController(::Rewired::Controller*  controller)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RebindDataManager*>(),
                        {"IsSingleJoyconController", {}, {::i2c::type_of<::Rewired::Controller*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, controller);
}
inline void GlobalNamespace::RebindDataManager::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RebindDataManager*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::RebindDataManager* GlobalNamespace::RebindDataManager::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::RebindDataManager*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::RebindDataManager::RebindDataManager()   {
}

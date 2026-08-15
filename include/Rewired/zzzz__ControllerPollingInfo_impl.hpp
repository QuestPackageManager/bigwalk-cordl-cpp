#pragma once
// IWYU pragma private; include "Rewired/ControllerPollingInfo.hpp"
#include "Rewired/zzzz__ControllerElementType_impl.hpp"
#include "Rewired/zzzz__ControllerType_impl.hpp"
#include "Rewired/zzzz__Pole_impl.hpp"
#include "UnityEngine/zzzz__KeyCode_impl.hpp"
#include "Rewired/zzzz__ControllerPollingInfo_def.hpp"
#include "Rewired/zzzz__ControllerElementIdentifier_def.hpp"
#include "Rewired/zzzz__ControllerElementType_def.hpp"
#include "Rewired/zzzz__ControllerType_def.hpp"
#include "Rewired/zzzz__Controller_def.hpp"
#include "Rewired/zzzz__Player_def.hpp"
#include "Rewired/zzzz__Pole_def.hpp"
#include "UnityEngine/zzzz__KeyCode_def.hpp"
//  Writing Method size for method: ::Rewired::ControllerPollingInfo.get_success
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::ControllerPollingInfo::*)()>(&::Rewired::ControllerPollingInfo::get_success)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x180311f90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerPollingInfo>(),
                        {"get_success", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerPollingInfo.xDfXqWqGxtXZaIGBmwwgjSnXZqUh
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ControllerPollingInfo::*)(bool)>(&::Rewired::ControllerPollingInfo::xDfXqWqGxtXZaIGBmwwgjSnXZqUh)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1804bda60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerPollingInfo>(),
                        {"xDfXqWqGxtXZaIGBmwwgjSnXZqUh", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerPollingInfo.get_playerId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Rewired::ControllerPollingInfo::*)()>(&::Rewired::ControllerPollingInfo::get_playerId)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18038fe90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerPollingInfo>(),
                        {"get_playerId", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerPollingInfo.GJLTfMMnvLeoyZyTVCKrtlUJbIZT
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ControllerPollingInfo::*)(int32_t)>(&::Rewired::ControllerPollingInfo::GJLTfMMnvLeoyZyTVCKrtlUJbIZT)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803bda60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerPollingInfo>(),
                        {"GJLTfMMnvLeoyZyTVCKrtlUJbIZT", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerPollingInfo.get_controllerId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Rewired::ControllerPollingInfo::*)()>(&::Rewired::ControllerPollingInfo::get_controllerId)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802f1880;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerPollingInfo>(),
                        {"get_controllerId", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerPollingInfo.kXLtHYEoCBpMyFHxCOVmHMYwMFIH
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ControllerPollingInfo::*)(int32_t)>(&::Rewired::ControllerPollingInfo::kXLtHYEoCBpMyFHxCOVmHMYwMFIH)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1804bd900;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerPollingInfo>(),
                        {"kXLtHYEoCBpMyFHxCOVmHMYwMFIH", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerPollingInfo.get_controllerName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Rewired::ControllerPollingInfo::*)()>(&::Rewired::ControllerPollingInfo::get_controllerName)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802db4a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerPollingInfo>(),
                        {"get_controllerName", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerPollingInfo.wZxcNmjxAZwdOyvjyIDDnGZILJXR
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ControllerPollingInfo::*)(::StringW)>(&::Rewired::ControllerPollingInfo::wZxcNmjxAZwdOyvjyIDDnGZILJXR)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x180308500;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerPollingInfo>(),
                        {"wZxcNmjxAZwdOyvjyIDDnGZILJXR", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerPollingInfo.get_controllerType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::ControllerType (::Rewired::ControllerPollingInfo::*)()>(&::Rewired::ControllerPollingInfo::get_controllerType)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802f41a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerPollingInfo>(),
                        {"get_controllerType", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerPollingInfo.eBqPfWDMqZKQPTAsodpZdmUiuToaA
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ControllerPollingInfo::*)(::Rewired::ControllerType)>(&::Rewired::ControllerPollingInfo::eBqPfWDMqZKQPTAsodpZdmUiuToaA)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802f4390;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerPollingInfo>(),
                        {"eBqPfWDMqZKQPTAsodpZdmUiuToaA", {}, {::i2c::type_of<::Rewired::ControllerType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerPollingInfo.get_elementType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::ControllerElementType (::Rewired::ControllerPollingInfo::*)()>(&::Rewired::ControllerPollingInfo::get_elementType)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802f42c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerPollingInfo>(),
                        {"get_elementType", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerPollingInfo.uVfgBAxeNFCiQougOwXXXQKaSzKt
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ControllerPollingInfo::*)(::Rewired::ControllerElementType)>(&::Rewired::ControllerPollingInfo::uVfgBAxeNFCiQougOwXXXQKaSzKt)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802f43d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerPollingInfo>(),
                        {"uVfgBAxeNFCiQougOwXXXQKaSzKt", {}, {::i2c::type_of<::Rewired::ControllerElementType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerPollingInfo.get_elementIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Rewired::ControllerPollingInfo::*)()>(&::Rewired::ControllerPollingInfo::get_elementIndex)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180396ee0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerPollingInfo>(),
                        {"get_elementIndex", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerPollingInfo.AKXlKRFyXIaaJRngRjCrKrrkkIAHA
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ControllerPollingInfo::*)(int32_t)>(&::Rewired::ControllerPollingInfo::AKXlKRFyXIaaJRngRjCrKrrkkIAHA)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803164e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerPollingInfo>(),
                        {"AKXlKRFyXIaaJRngRjCrKrrkkIAHA", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerPollingInfo.get_axisPole
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::Pole (::Rewired::ControllerPollingInfo::*)()>(&::Rewired::ControllerPollingInfo::get_axisPole)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180396ef0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerPollingInfo>(),
                        {"get_axisPole", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerPollingInfo.cUqxNuevqcInSjKYxOklmaWptqyF
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ControllerPollingInfo::*)(::Rewired::Pole)>(&::Rewired::ControllerPollingInfo::cUqxNuevqcInSjKYxOklmaWptqyF)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180396f00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerPollingInfo>(),
                        {"cUqxNuevqcInSjKYxOklmaWptqyF", {}, {::i2c::type_of<::Rewired::Pole>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerPollingInfo.get_elementIdentifierName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Rewired::ControllerPollingInfo::*)()>(&::Rewired::ControllerPollingInfo::get_elementIdentifierName)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9810;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerPollingInfo>(),
                        {"get_elementIdentifierName", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerPollingInfo.RTtDoOGyCqqChLdgNOIlYAqCWmJDA
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ControllerPollingInfo::*)(::StringW)>(&::Rewired::ControllerPollingInfo::RTtDoOGyCqqChLdgNOIlYAqCWmJDA)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9850;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerPollingInfo>(),
                        {"RTtDoOGyCqqChLdgNOIlYAqCWmJDA", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerPollingInfo.get_elementIdentifierId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Rewired::ControllerPollingInfo::*)()>(&::Rewired::ControllerPollingInfo::get_elementIdentifierId)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e2ba0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerPollingInfo>(),
                        {"get_elementIdentifierId", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerPollingInfo.fPCrEurcKBJUWuGNhNttIIlxgadx
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ControllerPollingInfo::*)(int32_t)>(&::Rewired::ControllerPollingInfo::fPCrEurcKBJUWuGNhNttIIlxgadx)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e2f70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerPollingInfo>(),
                        {"fPCrEurcKBJUWuGNhNttIIlxgadx", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerPollingInfo.get_keyboardKey
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::KeyCode (::Rewired::ControllerPollingInfo::*)()>(&::Rewired::ControllerPollingInfo::get_keyboardKey)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180392ff0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerPollingInfo>(),
                        {"get_keyboardKey", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerPollingInfo.nWzqxjplYfQtlDRIJPdYBIKuaVSV
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ControllerPollingInfo::*)(::UnityEngine::KeyCode)>(&::Rewired::ControllerPollingInfo::nWzqxjplYfQtlDRIJPdYBIKuaVSV)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180393010;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerPollingInfo>(),
                        {"nWzqxjplYfQtlDRIJPdYBIKuaVSV", {}, {::i2c::type_of<::UnityEngine::KeyCode>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerPollingInfo.get_player
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::Player* (::Rewired::ControllerPollingInfo::*)()>(&::Rewired::ControllerPollingInfo::get_player)> {
  constexpr static std::size_t size = 0x1f0;
  constexpr static std::size_t addrs = 0x18183e310;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerPollingInfo>(),
                        {"get_player", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerPollingInfo.get_controller
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::Controller* (::Rewired::ControllerPollingInfo::*)()>(&::Rewired::ControllerPollingInfo::get_controller)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x18183e1f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerPollingInfo>(),
                        {"get_controller", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerPollingInfo.get_elementIdentifier
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::ControllerElementIdentifier* (::Rewired::ControllerPollingInfo::*)()>(&::Rewired::ControllerPollingInfo::get_elementIdentifier)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x18183e280;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerPollingInfo>(),
                        {"get_elementIdentifier", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerPollingInfo._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ControllerPollingInfo::*)(bool, int32_t, int32_t, ::StringW, ::Rewired::ControllerType, ::Rewired::ControllerElementType, int32_t, ::Rewired::Pole, ::StringW, int32_t, ::UnityEngine::KeyCode)>(&::Rewired::ControllerPollingInfo::_ctor)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x18183e0a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerPollingInfo>(),
                        {".ctor", {}, {::i2c::type_of<bool>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::Rewired::ControllerType>(), ::i2c::type_of<::Rewired::ControllerElementType>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Rewired::Pole>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::KeyCode>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerPollingInfo._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ControllerPollingInfo::*)(::Rewired::ControllerPollingInfo)>(&::Rewired::ControllerPollingInfo::_ctor)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x18183e130;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerPollingInfo>(),
                        {".ctor", {}, {::i2c::type_of<::Rewired::ControllerPollingInfo>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerPollingInfo.LYMBWnpGBeqpFfQXlLinYEgfgudp
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::ControllerPollingInfo (*)()>(&::Rewired::ControllerPollingInfo::LYMBWnpGBeqpFfQXlLinYEgfgudp)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x18183e010;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerPollingInfo>(),
                        {"LYMBWnpGBeqpFfQXlLinYEgfgudp", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline bool Rewired::ControllerPollingInfo::get_success()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerPollingInfo>(),
                        {"get_success", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline void Rewired::ControllerPollingInfo::xDfXqWqGxtXZaIGBmwwgjSnXZqUh(bool  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerPollingInfo>(),
                        {"xDfXqWqGxtXZaIGBmwwgjSnXZqUh", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline int32_t Rewired::ControllerPollingInfo::get_playerId()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerPollingInfo>(),
                        {"get_playerId", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline void Rewired::ControllerPollingInfo::GJLTfMMnvLeoyZyTVCKrtlUJbIZT(int32_t  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerPollingInfo>(),
                        {"GJLTfMMnvLeoyZyTVCKrtlUJbIZT", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline int32_t Rewired::ControllerPollingInfo::get_controllerId()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerPollingInfo>(),
                        {"get_controllerId", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline void Rewired::ControllerPollingInfo::kXLtHYEoCBpMyFHxCOVmHMYwMFIH(int32_t  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerPollingInfo>(),
                        {"kXLtHYEoCBpMyFHxCOVmHMYwMFIH", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline ::StringW Rewired::ControllerPollingInfo::get_controllerName()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerPollingInfo>(),
                        {"get_controllerName", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
inline void Rewired::ControllerPollingInfo::wZxcNmjxAZwdOyvjyIDDnGZILJXR(::StringW  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerPollingInfo>(),
                        {"wZxcNmjxAZwdOyvjyIDDnGZILJXR", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline ::Rewired::ControllerType Rewired::ControllerPollingInfo::get_controllerType()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerPollingInfo>(),
                        {"get_controllerType", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::ControllerType>(*this, ___internal_method);
}
inline void Rewired::ControllerPollingInfo::eBqPfWDMqZKQPTAsodpZdmUiuToaA(::Rewired::ControllerType  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerPollingInfo>(),
                        {"eBqPfWDMqZKQPTAsodpZdmUiuToaA", {}, {::i2c::type_of<::Rewired::ControllerType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline ::Rewired::ControllerElementType Rewired::ControllerPollingInfo::get_elementType()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerPollingInfo>(),
                        {"get_elementType", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::ControllerElementType>(*this, ___internal_method);
}
inline void Rewired::ControllerPollingInfo::uVfgBAxeNFCiQougOwXXXQKaSzKt(::Rewired::ControllerElementType  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerPollingInfo>(),
                        {"uVfgBAxeNFCiQougOwXXXQKaSzKt", {}, {::i2c::type_of<::Rewired::ControllerElementType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline int32_t Rewired::ControllerPollingInfo::get_elementIndex()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerPollingInfo>(),
                        {"get_elementIndex", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline void Rewired::ControllerPollingInfo::AKXlKRFyXIaaJRngRjCrKrrkkIAHA(int32_t  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerPollingInfo>(),
                        {"AKXlKRFyXIaaJRngRjCrKrrkkIAHA", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline ::Rewired::Pole Rewired::ControllerPollingInfo::get_axisPole()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerPollingInfo>(),
                        {"get_axisPole", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::Pole>(*this, ___internal_method);
}
inline void Rewired::ControllerPollingInfo::cUqxNuevqcInSjKYxOklmaWptqyF(::Rewired::Pole  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerPollingInfo>(),
                        {"cUqxNuevqcInSjKYxOklmaWptqyF", {}, {::i2c::type_of<::Rewired::Pole>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline ::StringW Rewired::ControllerPollingInfo::get_elementIdentifierName()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerPollingInfo>(),
                        {"get_elementIdentifierName", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
inline void Rewired::ControllerPollingInfo::RTtDoOGyCqqChLdgNOIlYAqCWmJDA(::StringW  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerPollingInfo>(),
                        {"RTtDoOGyCqqChLdgNOIlYAqCWmJDA", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline int32_t Rewired::ControllerPollingInfo::get_elementIdentifierId()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerPollingInfo>(),
                        {"get_elementIdentifierId", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline void Rewired::ControllerPollingInfo::fPCrEurcKBJUWuGNhNttIIlxgadx(int32_t  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerPollingInfo>(),
                        {"fPCrEurcKBJUWuGNhNttIIlxgadx", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline ::UnityEngine::KeyCode Rewired::ControllerPollingInfo::get_keyboardKey()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerPollingInfo>(),
                        {"get_keyboardKey", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::KeyCode>(*this, ___internal_method);
}
inline void Rewired::ControllerPollingInfo::nWzqxjplYfQtlDRIJPdYBIKuaVSV(::UnityEngine::KeyCode  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerPollingInfo>(),
                        {"nWzqxjplYfQtlDRIJPdYBIKuaVSV", {}, {::i2c::type_of<::UnityEngine::KeyCode>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline ::Rewired::Player* Rewired::ControllerPollingInfo::get_player()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerPollingInfo>(),
                        {"get_player", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::Player*>(*this, ___internal_method);
}
inline ::Rewired::Controller* Rewired::ControllerPollingInfo::get_controller()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerPollingInfo>(),
                        {"get_controller", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::Controller*>(*this, ___internal_method);
}
inline ::Rewired::ControllerElementIdentifier* Rewired::ControllerPollingInfo::get_elementIdentifier()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerPollingInfo>(),
                        {"get_elementIdentifier", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::ControllerElementIdentifier*>(*this, ___internal_method);
}
inline void Rewired::ControllerPollingInfo::_ctor(bool  _cordl_fixed_empty_name_whitespace, int32_t  _cordl_fixed_empty_name_whitespace_param_1, int32_t  _cordl_fixed_empty_name_whitespace_param_2, ::StringW  _cordl_fixed_empty_name_whitespace_param_3, ::Rewired::ControllerType  _cordl_fixed_empty_name_whitespace_param_4, ::Rewired::ControllerElementType  _cordl_fixed_empty_name_whitespace_param_5, int32_t  _cordl_fixed_empty_name_whitespace_param_6, ::Rewired::Pole  _cordl_fixed_empty_name_whitespace_param_7, ::StringW  _cordl_fixed_empty_name_whitespace_param_8, int32_t  _cordl_fixed_empty_name_whitespace_param_9, ::UnityEngine::KeyCode  _cordl_fixed_empty_name_whitespace_param_10)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerPollingInfo>(),
                        {".ctor", {}, {::i2c::type_of<bool>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::Rewired::ControllerType>(), ::i2c::type_of<::Rewired::ControllerElementType>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Rewired::Pole>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::KeyCode>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1, _cordl_fixed_empty_name_whitespace_param_2, _cordl_fixed_empty_name_whitespace_param_3, _cordl_fixed_empty_name_whitespace_param_4, _cordl_fixed_empty_name_whitespace_param_5, _cordl_fixed_empty_name_whitespace_param_6, _cordl_fixed_empty_name_whitespace_param_7, _cordl_fixed_empty_name_whitespace_param_8, _cordl_fixed_empty_name_whitespace_param_9, _cordl_fixed_empty_name_whitespace_param_10);
}
inline void Rewired::ControllerPollingInfo::_ctor(::Rewired::ControllerPollingInfo  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerPollingInfo>(),
                        {".ctor", {}, {::i2c::type_of<::Rewired::ControllerPollingInfo>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline ::Rewired::ControllerPollingInfo Rewired::ControllerPollingInfo::LYMBWnpGBeqpFfQXlLinYEgfgudp()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerPollingInfo>(),
                        {"LYMBWnpGBeqpFfQXlLinYEgfgudp", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::ControllerPollingInfo>(nullptr, ___internal_method);
}
// Ctor Parameters [CppParam { name: "cfcetTaUVLrrLhlJkaQLUwoZJHePA", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "IfADDqehIzoFBiZEQMICUGxkMQiVA", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "sSXYdCozNbUGNpBlkIiMgONRTLZn", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "eIxpZsltrsufeqJcVirFOTztgdap", ty: "::StringW", modifiers: "", def_value: Some("{}") }, CppParam { name: "VAYfwruMCCewRILVIOAvernmNiXx", ty: "::Rewired::ControllerType", modifiers: "", def_value: Some("{}") }, CppParam { name: "kPfuOcPlwccniEIUvXXyKZpYUNLNA", ty: "::Rewired::ControllerElementType", modifiers: "", def_value: Some("{}") }, CppParam { name: "edGleceOSmCllFawdedDtNodlmFJA", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "toZIhvagJSHnREANWusWeamtHMHL", ty: "::Rewired::Pole", modifiers: "", def_value: Some("{}") }, CppParam { name: "zUSmTedzbOodvARCEcVytvdZfMHN", ty: "::StringW", modifiers: "", def_value: Some("{}") }, CppParam { name: "ZpvjRHYFVpUdCDJmdhWYFaSuzDed", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "lTKlsEqTqRWbGpXAZRDpiblWqzNe", ty: "::UnityEngine::KeyCode", modifiers: "", def_value: Some("{}") }]
constexpr ::Rewired::ControllerPollingInfo::ControllerPollingInfo(bool  cfcetTaUVLrrLhlJkaQLUwoZJHePA, int32_t  IfADDqehIzoFBiZEQMICUGxkMQiVA, int32_t  sSXYdCozNbUGNpBlkIiMgONRTLZn, ::StringW  eIxpZsltrsufeqJcVirFOTztgdap, ::Rewired::ControllerType  VAYfwruMCCewRILVIOAvernmNiXx, ::Rewired::ControllerElementType  kPfuOcPlwccniEIUvXXyKZpYUNLNA, int32_t  edGleceOSmCllFawdedDtNodlmFJA, ::Rewired::Pole  toZIhvagJSHnREANWusWeamtHMHL, ::StringW  zUSmTedzbOodvARCEcVytvdZfMHN, int32_t  ZpvjRHYFVpUdCDJmdhWYFaSuzDed, ::UnityEngine::KeyCode  lTKlsEqTqRWbGpXAZRDpiblWqzNe) noexcept  {
this->cfcetTaUVLrrLhlJkaQLUwoZJHePA = cfcetTaUVLrrLhlJkaQLUwoZJHePA;
this->IfADDqehIzoFBiZEQMICUGxkMQiVA = IfADDqehIzoFBiZEQMICUGxkMQiVA;
this->sSXYdCozNbUGNpBlkIiMgONRTLZn = sSXYdCozNbUGNpBlkIiMgONRTLZn;
this->eIxpZsltrsufeqJcVirFOTztgdap = eIxpZsltrsufeqJcVirFOTztgdap;
this->VAYfwruMCCewRILVIOAvernmNiXx = VAYfwruMCCewRILVIOAvernmNiXx;
this->kPfuOcPlwccniEIUvXXyKZpYUNLNA = kPfuOcPlwccniEIUvXXyKZpYUNLNA;
this->edGleceOSmCllFawdedDtNodlmFJA = edGleceOSmCllFawdedDtNodlmFJA;
this->toZIhvagJSHnREANWusWeamtHMHL = toZIhvagJSHnREANWusWeamtHMHL;
this->zUSmTedzbOodvARCEcVytvdZfMHN = zUSmTedzbOodvARCEcVytvdZfMHN;
this->ZpvjRHYFVpUdCDJmdhWYFaSuzDed = ZpvjRHYFVpUdCDJmdhWYFaSuzDed;
this->lTKlsEqTqRWbGpXAZRDpiblWqzNe = lTKlsEqTqRWbGpXAZRDpiblWqzNe;
}
// Ctor Parameters []
constexpr ::Rewired::ControllerPollingInfo::ControllerPollingInfo()   {
}

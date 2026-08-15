#pragma once
// IWYU pragma private; include "Mirror/Examples/Basic/Player.hpp"
#include "Mirror/zzzz__NetworkBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Color32_impl.hpp"
#include "Mirror/Examples/Basic/zzzz__Player_def.hpp"
#include "Mirror/Examples/Basic/zzzz__PlayerUI_def.hpp"
#include "Mirror/zzzz__NetworkReader_def.hpp"
#include "Mirror/zzzz__NetworkWriter_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "UnityEngine/zzzz__Color32_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
//  Writing Method size for method: ::Mirror::Examples::Basic::Player.add_OnPlayerNumberChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::Examples::Basic::Player::*)(::System::Action_1<uint8_t>*)>(&::Mirror::Examples::Basic::Player::add_OnPlayerNumberChanged)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x181561ea0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::Basic::Player*>(),
                        {"add_OnPlayerNumberChanged", {}, {::i2c::type_of<::System::Action_1<uint8_t>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::Examples::Basic::Player.remove_OnPlayerNumberChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::Examples::Basic::Player::*)(::System::Action_1<uint8_t>*)>(&::Mirror::Examples::Basic::Player::remove_OnPlayerNumberChanged)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x181562070;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::Basic::Player*>(),
                        {"remove_OnPlayerNumberChanged", {}, {::i2c::type_of<::System::Action_1<uint8_t>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::Examples::Basic::Player.add_OnPlayerColorChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::Examples::Basic::Player::*)(::System::Action_1<::UnityEngine::Color32>*)>(&::Mirror::Examples::Basic::Player::add_OnPlayerColorChanged)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x181561d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::Basic::Player*>(),
                        {"add_OnPlayerColorChanged", {}, {::i2c::type_of<::System::Action_1<::UnityEngine::Color32>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::Examples::Basic::Player.remove_OnPlayerColorChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::Examples::Basic::Player::*)(::System::Action_1<::UnityEngine::Color32>*)>(&::Mirror::Examples::Basic::Player::remove_OnPlayerColorChanged)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x181561f50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::Basic::Player*>(),
                        {"remove_OnPlayerColorChanged", {}, {::i2c::type_of<::System::Action_1<::UnityEngine::Color32>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::Examples::Basic::Player.add_OnPlayerDataChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::Examples::Basic::Player::*)(::System::Action_1<uint16_t>*)>(&::Mirror::Examples::Basic::Player::add_OnPlayerDataChanged)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x181561e10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::Basic::Player*>(),
                        {"add_OnPlayerDataChanged", {}, {::i2c::type_of<::System::Action_1<uint16_t>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::Examples::Basic::Player.remove_OnPlayerDataChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::Examples::Basic::Player::*)(::System::Action_1<uint16_t>*)>(&::Mirror::Examples::Basic::Player::remove_OnPlayerDataChanged)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x181561fe0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::Basic::Player*>(),
                        {"remove_OnPlayerDataChanged", {}, {::i2c::type_of<::System::Action_1<uint16_t>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::Examples::Basic::Player.PlayerNumberChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::Examples::Basic::Player::*)(uint8_t, uint8_t)>(&::Mirror::Examples::Basic::Player::PlayerNumberChanged)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1815614e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::Basic::Player*>(),
                        {"PlayerNumberChanged", {}, {::i2c::type_of<uint8_t>(), ::i2c::type_of<uint8_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::Examples::Basic::Player.PlayerColorChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::Examples::Basic::Player::*)(::UnityEngine::Color32, ::UnityEngine::Color32)>(&::Mirror::Examples::Basic::Player::PlayerColorChanged)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x181561490;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::Basic::Player*>(),
                        {"PlayerColorChanged", {}, {::i2c::type_of<::UnityEngine::Color32>(), ::i2c::type_of<::UnityEngine::Color32>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::Examples::Basic::Player.PlayerDataChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::Examples::Basic::Player::*)(uint16_t, uint16_t)>(&::Mirror::Examples::Basic::Player::PlayerDataChanged)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1815614b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::Basic::Player*>(),
                        {"PlayerDataChanged", {}, {::i2c::type_of<uint16_t>(), ::i2c::type_of<uint16_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::Examples::Basic::Player.OnStartServer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::Examples::Basic::Player::*)()>(&::Mirror::Examples::Basic::Player::OnStartServer)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x1815611b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mirror::Examples::Basic::Player*>(),
                    {::i2c::class_of<::Mirror::Examples::Basic::Player*>(), 9}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::Examples::Basic::Player.ResetPlayerNumbers
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::Mirror::Examples::Basic::Player::ResetPlayerNumbers)> {
  constexpr static std::size_t size = 0x220;
  constexpr static std::size_t addrs = 0x181561510;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::Basic::Player*>(),
                        {"ResetPlayerNumbers", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::Examples::Basic::Player.UpdateData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::Examples::Basic::Player::*)()>(&::Mirror::Examples::Basic::Player::UpdateData)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x181561870;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::Basic::Player*>(),
                        {"UpdateData", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::Examples::Basic::Player.OnStopServer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::Examples::Basic::Player::*)()>(&::Mirror::Examples::Basic::Player::OnStopServer)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x181561430;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mirror::Examples::Basic::Player*>(),
                    {::i2c::class_of<::Mirror::Examples::Basic::Player*>(), 10}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::Examples::Basic::Player.OnStartClient
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::Examples::Basic::Player::*)()>(&::Mirror::Examples::Basic::Player::OnStartClient)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x181560d30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mirror::Examples::Basic::Player*>(),
                    {::i2c::class_of<::Mirror::Examples::Basic::Player*>(), 11}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::Examples::Basic::Player.OnStartLocalPlayer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::Examples::Basic::Player::*)()>(&::Mirror::Examples::Basic::Player::OnStartLocalPlayer)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x181560ee0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mirror::Examples::Basic::Player*>(),
                    {::i2c::class_of<::Mirror::Examples::Basic::Player*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::Examples::Basic::Player.OnStopLocalPlayer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::Examples::Basic::Player::*)()>(&::Mirror::Examples::Basic::Player::OnStopLocalPlayer)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1815613e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mirror::Examples::Basic::Player*>(),
                    {::i2c::class_of<::Mirror::Examples::Basic::Player*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::Examples::Basic::Player.OnStopClient
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::Examples::Basic::Player::*)()>(&::Mirror::Examples::Basic::Player::OnStopClient)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x181561340;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mirror::Examples::Basic::Player*>(),
                    {::i2c::class_of<::Mirror::Examples::Basic::Player*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::Examples::Basic::Player._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::Examples::Basic::Player::*)()>(&::Mirror::Examples::Basic::Player::_ctor)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x181561d40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::Basic::Player*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::Examples::Basic::Player.MirrorProcessed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::Examples::Basic::Player::*)()>(&::Mirror::Examples::Basic::Player::MirrorProcessed)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::Basic::Player*>(),
                        {"MirrorProcessed", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::Examples::Basic::Player.get_NetworkplayerNumber
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint8_t (::Mirror::Examples::Basic::Player::*)()>(&::Mirror::Examples::Basic::Player::get_NetworkplayerNumber)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180310e70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::Basic::Player*>(),
                        {"get_NetworkplayerNumber", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::Examples::Basic::Player.set_NetworkplayerNumber
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::Examples::Basic::Player::*)(::ByRefConst<uint8_t>)>(&::Mirror::Examples::Basic::Player::set_NetworkplayerNumber)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x181562310;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::Basic::Player*>(),
                        {"set_NetworkplayerNumber", {}, {::i2c::type_of<::ByRefConst<uint8_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::Examples::Basic::Player.get_NetworkplayerColor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Color32 (::Mirror::Examples::Basic::Player::*)()>(&::Mirror::Examples::Basic::Player::get_NetworkplayerColor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x181561f30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::Basic::Player*>(),
                        {"get_NetworkplayerColor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::Examples::Basic::Player.set_NetworkplayerColor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::Examples::Basic::Player::*)(::ByRefConst<::UnityEngine::Color32>)>(&::Mirror::Examples::Basic::Player::set_NetworkplayerColor)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x181562180;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::Basic::Player*>(),
                        {"set_NetworkplayerColor", {}, {::i2c::type_of<::ByRefConst<::UnityEngine::Color32>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::Examples::Basic::Player.get_NetworkplayerData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint16_t (::Mirror::Examples::Basic::Player::*)()>(&::Mirror::Examples::Basic::Player::get_NetworkplayerData)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x181561f40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::Basic::Player*>(),
                        {"get_NetworkplayerData", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::Examples::Basic::Player.set_NetworkplayerData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::Examples::Basic::Player::*)(::ByRefConst<uint16_t>)>(&::Mirror::Examples::Basic::Player::set_NetworkplayerData)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x1815621f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::Basic::Player*>(),
                        {"set_NetworkplayerData", {}, {::i2c::type_of<::ByRefConst<uint16_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::Examples::Basic::Player.SerializeSyncVars
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::Examples::Basic::Player::*)(::Mirror::NetworkWriter*, bool)>(&::Mirror::Examples::Basic::Player::SerializeSyncVars)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x181561730;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mirror::Examples::Basic::Player*>(),
                    {::i2c::class_of<::Mirror::Examples::Basic::Player*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::Examples::Basic::Player.DeserializeSyncVars
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::Examples::Basic::Player::*)(::Mirror::NetworkReader*, bool)>(&::Mirror::Examples::Basic::Player::DeserializeSyncVars)> {
  constexpr static std::size_t size = 0x320;
  constexpr static std::size_t addrs = 0x1815606c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mirror::Examples::Basic::Player*>(),
                    {::i2c::class_of<::Mirror::Examples::Basic::Player*>(), 8}
                ));
    return ___internal_method;
  }
};
constexpr ::System::Action_1<uint8_t>*& Mirror::Examples::Basic::Player::__cordl_internal_get_OnPlayerNumberChanged()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnPlayerNumberChanged;
}
constexpr ::System::Action_1<uint8_t>* const& Mirror::Examples::Basic::Player::__cordl_internal_get_OnPlayerNumberChanged() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnPlayerNumberChanged;
}
constexpr void Mirror::Examples::Basic::Player::__cordl_internal_set_OnPlayerNumberChanged(::System::Action_1<uint8_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnPlayerNumberChanged = value;
}
constexpr ::System::Action_1<::UnityEngine::Color32>*& Mirror::Examples::Basic::Player::__cordl_internal_get_OnPlayerColorChanged()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnPlayerColorChanged;
}
constexpr ::System::Action_1<::UnityEngine::Color32>* const& Mirror::Examples::Basic::Player::__cordl_internal_get_OnPlayerColorChanged() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnPlayerColorChanged;
}
constexpr void Mirror::Examples::Basic::Player::__cordl_internal_set_OnPlayerColorChanged(::System::Action_1<::UnityEngine::Color32>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnPlayerColorChanged = value;
}
constexpr ::System::Action_1<uint16_t>*& Mirror::Examples::Basic::Player::__cordl_internal_get_OnPlayerDataChanged()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnPlayerDataChanged;
}
constexpr ::System::Action_1<uint16_t>* const& Mirror::Examples::Basic::Player::__cordl_internal_get_OnPlayerDataChanged() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnPlayerDataChanged;
}
constexpr void Mirror::Examples::Basic::Player::__cordl_internal_set_OnPlayerDataChanged(::System::Action_1<uint16_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnPlayerDataChanged = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& Mirror::Examples::Basic::Player::__cordl_internal_get_playerUIPrefab()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playerUIPrefab;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& Mirror::Examples::Basic::Player::__cordl_internal_get_playerUIPrefab() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playerUIPrefab;
}
constexpr void Mirror::Examples::Basic::Player::__cordl_internal_set_playerUIPrefab(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___playerUIPrefab = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& Mirror::Examples::Basic::Player::__cordl_internal_get_playerUIObject()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playerUIObject;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& Mirror::Examples::Basic::Player::__cordl_internal_get_playerUIObject() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playerUIObject;
}
constexpr void Mirror::Examples::Basic::Player::__cordl_internal_set_playerUIObject(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___playerUIObject = value;
}
constexpr ::UnityW<::Mirror::Examples::Basic::PlayerUI>& Mirror::Examples::Basic::Player::__cordl_internal_get_playerUI()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playerUI;
}
constexpr ::UnityW<::Mirror::Examples::Basic::PlayerUI> const& Mirror::Examples::Basic::Player::__cordl_internal_get_playerUI() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playerUI;
}
constexpr void Mirror::Examples::Basic::Player::__cordl_internal_set_playerUI(::UnityW<::Mirror::Examples::Basic::PlayerUI>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___playerUI = value;
}
constexpr uint8_t& Mirror::Examples::Basic::Player::__cordl_internal_get_playerNumber()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playerNumber;
}
constexpr uint8_t const& Mirror::Examples::Basic::Player::__cordl_internal_get_playerNumber() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playerNumber;
}
constexpr void Mirror::Examples::Basic::Player::__cordl_internal_set_playerNumber(uint8_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___playerNumber = value;
}
constexpr ::UnityEngine::Color32& Mirror::Examples::Basic::Player::__cordl_internal_get_playerColor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playerColor;
}
constexpr ::UnityEngine::Color32 const& Mirror::Examples::Basic::Player::__cordl_internal_get_playerColor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playerColor;
}
constexpr void Mirror::Examples::Basic::Player::__cordl_internal_set_playerColor(::UnityEngine::Color32  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___playerColor = value;
}
constexpr uint16_t& Mirror::Examples::Basic::Player::__cordl_internal_get_playerData()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playerData;
}
constexpr uint16_t const& Mirror::Examples::Basic::Player::__cordl_internal_get_playerData() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playerData;
}
constexpr void Mirror::Examples::Basic::Player::__cordl_internal_set_playerData(uint16_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___playerData = value;
}
inline void Mirror::Examples::Basic::Player::setStaticF_playersList(::System::Collections::Generic::List_1<::UnityW<::Mirror::Examples::Basic::Player>>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::UnityW<::Mirror::Examples::Basic::Player>>*, "playersList", ::Mirror::Examples::Basic::Player*>(std::forward<::System::Collections::Generic::List_1<::UnityW<::Mirror::Examples::Basic::Player>>*>(value));
}
inline ::System::Collections::Generic::List_1<::UnityW<::Mirror::Examples::Basic::Player>>* Mirror::Examples::Basic::Player::getStaticF_playersList()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::UnityW<::Mirror::Examples::Basic::Player>>*, "playersList", ::Mirror::Examples::Basic::Player*>();
}
inline void Mirror::Examples::Basic::Player::add_OnPlayerNumberChanged(::System::Action_1<uint8_t>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::Basic::Player*>(),
                        {"add_OnPlayerNumberChanged", {}, {::i2c::type_of<::System::Action_1<uint8_t>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Mirror::Examples::Basic::Player::remove_OnPlayerNumberChanged(::System::Action_1<uint8_t>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::Basic::Player*>(),
                        {"remove_OnPlayerNumberChanged", {}, {::i2c::type_of<::System::Action_1<uint8_t>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Mirror::Examples::Basic::Player::add_OnPlayerColorChanged(::System::Action_1<::UnityEngine::Color32>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::Basic::Player*>(),
                        {"add_OnPlayerColorChanged", {}, {::i2c::type_of<::System::Action_1<::UnityEngine::Color32>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Mirror::Examples::Basic::Player::remove_OnPlayerColorChanged(::System::Action_1<::UnityEngine::Color32>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::Basic::Player*>(),
                        {"remove_OnPlayerColorChanged", {}, {::i2c::type_of<::System::Action_1<::UnityEngine::Color32>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Mirror::Examples::Basic::Player::add_OnPlayerDataChanged(::System::Action_1<uint16_t>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::Basic::Player*>(),
                        {"add_OnPlayerDataChanged", {}, {::i2c::type_of<::System::Action_1<uint16_t>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Mirror::Examples::Basic::Player::remove_OnPlayerDataChanged(::System::Action_1<uint16_t>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::Basic::Player*>(),
                        {"remove_OnPlayerDataChanged", {}, {::i2c::type_of<::System::Action_1<uint16_t>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Mirror::Examples::Basic::Player::PlayerNumberChanged(uint8_t  _, uint8_t  newPlayerNumber)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::Basic::Player*>(),
                        {"PlayerNumberChanged", {}, {::i2c::type_of<uint8_t>(), ::i2c::type_of<uint8_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _, newPlayerNumber);
}
inline void Mirror::Examples::Basic::Player::PlayerColorChanged(::UnityEngine::Color32  _, ::UnityEngine::Color32  newPlayerColor)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::Basic::Player*>(),
                        {"PlayerColorChanged", {}, {::i2c::type_of<::UnityEngine::Color32>(), ::i2c::type_of<::UnityEngine::Color32>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _, newPlayerColor);
}
inline void Mirror::Examples::Basic::Player::PlayerDataChanged(uint16_t  _, uint16_t  newPlayerData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::Basic::Player*>(),
                        {"PlayerDataChanged", {}, {::i2c::type_of<uint16_t>(), ::i2c::type_of<uint16_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _, newPlayerData);
}
inline void Mirror::Examples::Basic::Player::OnStartServer()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mirror::Examples::Basic::Player*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Mirror::Examples::Basic::Player::ResetPlayerNumbers()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::Basic::Player*>(),
                        {"ResetPlayerNumbers", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void Mirror::Examples::Basic::Player::UpdateData()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::Basic::Player*>(),
                        {"UpdateData", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Mirror::Examples::Basic::Player::OnStopServer()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mirror::Examples::Basic::Player*>(), 10}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Mirror::Examples::Basic::Player::OnStartClient()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mirror::Examples::Basic::Player*>(), 11}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Mirror::Examples::Basic::Player::OnStartLocalPlayer()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mirror::Examples::Basic::Player*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Mirror::Examples::Basic::Player::OnStopLocalPlayer()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mirror::Examples::Basic::Player*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Mirror::Examples::Basic::Player::OnStopClient()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mirror::Examples::Basic::Player*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Mirror::Examples::Basic::Player::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::Basic::Player*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Mirror::Examples::Basic::Player::MirrorProcessed()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::Basic::Player*>(),
                        {"MirrorProcessed", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline uint8_t Mirror::Examples::Basic::Player::get_NetworkplayerNumber()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::Basic::Player*>(),
                        {"get_NetworkplayerNumber", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint8_t>(this, ___internal_method);
}
inline void Mirror::Examples::Basic::Player::set_NetworkplayerNumber(::ByRefConst<uint8_t>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::Basic::Player*>(),
                        {"set_NetworkplayerNumber", {}, {::i2c::type_of<::ByRefConst<uint8_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Color32 Mirror::Examples::Basic::Player::get_NetworkplayerColor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::Basic::Player*>(),
                        {"get_NetworkplayerColor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color32>(this, ___internal_method);
}
inline void Mirror::Examples::Basic::Player::set_NetworkplayerColor(::ByRefConst<::UnityEngine::Color32>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::Basic::Player*>(),
                        {"set_NetworkplayerColor", {}, {::i2c::type_of<::ByRefConst<::UnityEngine::Color32>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline uint16_t Mirror::Examples::Basic::Player::get_NetworkplayerData()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::Basic::Player*>(),
                        {"get_NetworkplayerData", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint16_t>(this, ___internal_method);
}
inline void Mirror::Examples::Basic::Player::set_NetworkplayerData(::ByRefConst<uint16_t>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::Basic::Player*>(),
                        {"set_NetworkplayerData", {}, {::i2c::type_of<::ByRefConst<uint16_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Mirror::Examples::Basic::Player::SerializeSyncVars(::Mirror::NetworkWriter*  writer, bool  forceAll)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mirror::Examples::Basic::Player*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, writer, forceAll);
}
inline void Mirror::Examples::Basic::Player::DeserializeSyncVars(::Mirror::NetworkReader*  reader, bool  initialState)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mirror::Examples::Basic::Player*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, reader, initialState);
}
inline ::Mirror::Examples::Basic::Player* Mirror::Examples::Basic::Player::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Mirror::Examples::Basic::Player*>());
}
// Ctor Parameters []
constexpr ::Mirror::Examples::Basic::Player::Player()   {
}

#pragma once
// IWYU pragma private; include "Dissonance/Integrations/MirrorIgnorance/MirrorIgnorancePlayer.hpp"
#include "Mirror/zzzz__NetworkBehaviour_impl.hpp"
#include "Dissonance/Integrations/MirrorIgnorance/zzzz__MirrorIgnorancePlayer_def.hpp"
#include "Dissonance/zzzz__DissonanceComms_def.hpp"
#include "Dissonance/zzzz__IDissonancePlayer_def.hpp"
#include "Dissonance/zzzz__Log_def.hpp"
#include "Dissonance/zzzz__NetworkPlayerType_def.hpp"
#include "GlobalNamespace/zzzz__PlayerCharacter_def.hpp"
#include "Mirror/zzzz__NetworkBehaviour_def.hpp"
#include "Mirror/zzzz__NetworkConnectionToClient_def.hpp"
#include "Mirror/zzzz__NetworkReader_def.hpp"
#include "Mirror/zzzz__NetworkWriter_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::Dissonance::Integrations::MirrorIgnorance::MirrorIgnorancePlayer.get_IsTracking
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Dissonance::Integrations::MirrorIgnorance::MirrorIgnorancePlayer::*)()>(&::Dissonance::Integrations::MirrorIgnorance::MirrorIgnorancePlayer::get_IsTracking)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803cf3d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Integrations::MirrorIgnorance::MirrorIgnorancePlayer*>(),
                        {"get_IsTracking", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Integrations::MirrorIgnorance::MirrorIgnorancePlayer.set_IsTracking
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Integrations::MirrorIgnorance::MirrorIgnorancePlayer::*)(bool)>(&::Dissonance::Integrations::MirrorIgnorance::MirrorIgnorancePlayer::set_IsTracking)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803cf510;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Integrations::MirrorIgnorance::MirrorIgnorancePlayer*>(),
                        {"set_IsTracking", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Integrations::MirrorIgnorance::MirrorIgnorancePlayer.get_PlayerId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Dissonance::Integrations::MirrorIgnorance::MirrorIgnorancePlayer::*)()>(&::Dissonance::Integrations::MirrorIgnorance::MirrorIgnorancePlayer::get_PlayerId)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802ec4c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Integrations::MirrorIgnorance::MirrorIgnorancePlayer*>(),
                        {"get_PlayerId", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Integrations::MirrorIgnorance::MirrorIgnorancePlayer.get_Position
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::Dissonance::Integrations::MirrorIgnorance::MirrorIgnorancePlayer::*)()>(&::Dissonance::Integrations::MirrorIgnorance::MirrorIgnorancePlayer::get_Position)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1803cf3e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Integrations::MirrorIgnorance::MirrorIgnorancePlayer*>(),
                        {"get_Position", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Integrations::MirrorIgnorance::MirrorIgnorancePlayer.get_Rotation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Quaternion (::Dissonance::Integrations::MirrorIgnorance::MirrorIgnorancePlayer::*)()>(&::Dissonance::Integrations::MirrorIgnorance::MirrorIgnorancePlayer::get_Rotation)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1803cf460;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Integrations::MirrorIgnorance::MirrorIgnorancePlayer*>(),
                        {"get_Rotation", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Integrations::MirrorIgnorance::MirrorIgnorancePlayer.get_Type
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Dissonance::NetworkPlayerType (::Dissonance::Integrations::MirrorIgnorance::MirrorIgnorancePlayer::*)()>(&::Dissonance::Integrations::MirrorIgnorance::MirrorIgnorancePlayer::get_Type)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1803cf4a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Integrations::MirrorIgnorance::MirrorIgnorancePlayer*>(),
                        {"get_Type", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Integrations::MirrorIgnorance::MirrorIgnorancePlayer.OnDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Integrations::MirrorIgnorance::MirrorIgnorancePlayer::*)()>(&::Dissonance::Integrations::MirrorIgnorance::MirrorIgnorancePlayer::OnDestroy)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1803cebf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Integrations::MirrorIgnorance::MirrorIgnorancePlayer*>(),
                        {"OnDestroy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Integrations::MirrorIgnorance::MirrorIgnorancePlayer.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Integrations::MirrorIgnorance::MirrorIgnorancePlayer::*)()>(&::Dissonance::Integrations::MirrorIgnorance::MirrorIgnorancePlayer::OnEnable)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1803cec80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Integrations::MirrorIgnorance::MirrorIgnorancePlayer*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Integrations::MirrorIgnorance::MirrorIgnorancePlayer.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Integrations::MirrorIgnorance::MirrorIgnorancePlayer::*)()>(&::Dissonance::Integrations::MirrorIgnorance::MirrorIgnorancePlayer::OnDisable)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803cec70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Integrations::MirrorIgnorance::MirrorIgnorancePlayer*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Integrations::MirrorIgnorance::MirrorIgnorancePlayer.OnStartLocalPlayer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Integrations::MirrorIgnorance::MirrorIgnorancePlayer::*)()>(&::Dissonance::Integrations::MirrorIgnorance::MirrorIgnorancePlayer::OnStartLocalPlayer)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x1803ced00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Dissonance::Integrations::MirrorIgnorance::MirrorIgnorancePlayer*>(),
                    {::i2c::class_of<::Dissonance::Integrations::MirrorIgnorance::MirrorIgnorancePlayer*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Integrations::MirrorIgnorance::MirrorIgnorancePlayer.SetPlayerName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Integrations::MirrorIgnorance::MirrorIgnorancePlayer::*)(::StringW)>(&::Dissonance::Integrations::MirrorIgnorance::MirrorIgnorancePlayer::SetPlayerName)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x1803cef50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Integrations::MirrorIgnorance::MirrorIgnorancePlayer*>(),
                        {"SetPlayerName", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Integrations::MirrorIgnorance::MirrorIgnorancePlayer.OnStartClient
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Integrations::MirrorIgnorance::MirrorIgnorancePlayer::*)()>(&::Dissonance::Integrations::MirrorIgnorance::MirrorIgnorancePlayer::OnStartClient)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1803cecd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Dissonance::Integrations::MirrorIgnorance::MirrorIgnorancePlayer*>(),
                    {::i2c::class_of<::Dissonance::Integrations::MirrorIgnorance::MirrorIgnorancePlayer*>(), 11}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Integrations::MirrorIgnorance::MirrorIgnorancePlayer.CmdSetPlayerName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Integrations::MirrorIgnorance::MirrorIgnorancePlayer::*)(::StringW)>(&::Dissonance::Integrations::MirrorIgnorance::MirrorIgnorancePlayer::CmdSetPlayerName)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x1803ce870;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Integrations::MirrorIgnorance::MirrorIgnorancePlayer*>(),
                        {"CmdSetPlayerName", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Integrations::MirrorIgnorance::MirrorIgnorancePlayer.RpcSetPlayerName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Integrations::MirrorIgnorance::MirrorIgnorancePlayer::*)(::StringW)>(&::Dissonance::Integrations::MirrorIgnorance::MirrorIgnorancePlayer::RpcSetPlayerName)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x1803cee40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Integrations::MirrorIgnorance::MirrorIgnorancePlayer*>(),
                        {"RpcSetPlayerName", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Integrations::MirrorIgnorance::MirrorIgnorancePlayer.StartTracking
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Integrations::MirrorIgnorance::MirrorIgnorancePlayer::*)()>(&::Dissonance::Integrations::MirrorIgnorance::MirrorIgnorancePlayer::StartTracking)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x1803cf050;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Integrations::MirrorIgnorance::MirrorIgnorancePlayer*>(),
                        {"StartTracking", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Integrations::MirrorIgnorance::MirrorIgnorancePlayer.StopTracking
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Integrations::MirrorIgnorance::MirrorIgnorancePlayer::*)()>(&::Dissonance::Integrations::MirrorIgnorance::MirrorIgnorancePlayer::StopTracking)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x1803cf110;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Integrations::MirrorIgnorance::MirrorIgnorancePlayer*>(),
                        {"StopTracking", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Integrations::MirrorIgnorance::MirrorIgnorancePlayer._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Integrations::MirrorIgnorance::MirrorIgnorancePlayer::*)()>(&::Dissonance::Integrations::MirrorIgnorance::MirrorIgnorancePlayer::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180360450;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Integrations::MirrorIgnorance::MirrorIgnorancePlayer*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Integrations::MirrorIgnorance::MirrorIgnorancePlayer.MirrorProcessed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Integrations::MirrorIgnorance::MirrorIgnorancePlayer::*)()>(&::Dissonance::Integrations::MirrorIgnorance::MirrorIgnorancePlayer::MirrorProcessed)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Integrations::MirrorIgnorance::MirrorIgnorancePlayer*>(),
                        {"MirrorProcessed", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Integrations::MirrorIgnorance::MirrorIgnorancePlayer.get_Network_playerId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Dissonance::Integrations::MirrorIgnorance::MirrorIgnorancePlayer::*)()>(&::Dissonance::Integrations::MirrorIgnorance::MirrorIgnorancePlayer::get_Network_playerId)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802ec4c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Integrations::MirrorIgnorance::MirrorIgnorancePlayer*>(),
                        {"get_Network_playerId", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Integrations::MirrorIgnorance::MirrorIgnorancePlayer.set_Network_playerId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Integrations::MirrorIgnorance::MirrorIgnorancePlayer::*)(::ByRefConst<::StringW>)>(&::Dissonance::Integrations::MirrorIgnorance::MirrorIgnorancePlayer::set_Network_playerId)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1803cf520;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Integrations::MirrorIgnorance::MirrorIgnorancePlayer*>(),
                        {"set_Network_playerId", {}, {::i2c::type_of<::ByRefConst<::StringW>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Integrations::MirrorIgnorance::MirrorIgnorancePlayer.UserCode_CmdSetPlayerName__String
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Integrations::MirrorIgnorance::MirrorIgnorancePlayer::*)(::StringW)>(&::Dissonance::Integrations::MirrorIgnorance::MirrorIgnorancePlayer::UserCode_CmdSetPlayerName__String)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x1803cf1d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Integrations::MirrorIgnorance::MirrorIgnorancePlayer*>(),
                        {"UserCode_CmdSetPlayerName__String", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Integrations::MirrorIgnorance::MirrorIgnorancePlayer.InvokeUserCode_CmdSetPlayerName__String
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Mirror::NetworkBehaviour*, ::Mirror::NetworkReader*, ::Mirror::NetworkConnectionToClient*)>(&::Dissonance::Integrations::MirrorIgnorance::MirrorIgnorancePlayer::InvokeUserCode_CmdSetPlayerName__String)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x1803ce9a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Integrations::MirrorIgnorance::MirrorIgnorancePlayer*>(),
                        {"InvokeUserCode_CmdSetPlayerName__String", {}, {::i2c::type_of<::Mirror::NetworkBehaviour*>(), ::i2c::type_of<::Mirror::NetworkReader*>(), ::i2c::type_of<::Mirror::NetworkConnectionToClient*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Integrations::MirrorIgnorance::MirrorIgnorancePlayer.UserCode_RpcSetPlayerName__String
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Integrations::MirrorIgnorance::MirrorIgnorancePlayer::*)(::StringW)>(&::Dissonance::Integrations::MirrorIgnorance::MirrorIgnorancePlayer::UserCode_RpcSetPlayerName__String)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1803cf2a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Integrations::MirrorIgnorance::MirrorIgnorancePlayer*>(),
                        {"UserCode_RpcSetPlayerName__String", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Integrations::MirrorIgnorance::MirrorIgnorancePlayer.InvokeUserCode_RpcSetPlayerName__String
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Mirror::NetworkBehaviour*, ::Mirror::NetworkReader*, ::Mirror::NetworkConnectionToClient*)>(&::Dissonance::Integrations::MirrorIgnorance::MirrorIgnorancePlayer::InvokeUserCode_RpcSetPlayerName__String)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x1803ceb10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Integrations::MirrorIgnorance::MirrorIgnorancePlayer*>(),
                        {"InvokeUserCode_RpcSetPlayerName__String", {}, {::i2c::type_of<::Mirror::NetworkBehaviour*>(), ::i2c::type_of<::Mirror::NetworkReader*>(), ::i2c::type_of<::Mirror::NetworkConnectionToClient*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Integrations::MirrorIgnorance::MirrorIgnorancePlayer.SerializeSyncVars
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Integrations::MirrorIgnorance::MirrorIgnorancePlayer::*)(::Mirror::NetworkWriter*, bool)>(&::Dissonance::Integrations::MirrorIgnorance::MirrorIgnorancePlayer::SerializeSyncVars)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1803cef00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Dissonance::Integrations::MirrorIgnorance::MirrorIgnorancePlayer*>(),
                    {::i2c::class_of<::Dissonance::Integrations::MirrorIgnorance::MirrorIgnorancePlayer*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Integrations::MirrorIgnorance::MirrorIgnorancePlayer.DeserializeSyncVars
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Integrations::MirrorIgnorance::MirrorIgnorancePlayer::*)(::Mirror::NetworkReader*, bool)>(&::Dissonance::Integrations::MirrorIgnorance::MirrorIgnorancePlayer::DeserializeSyncVars)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1803ce930;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Dissonance::Integrations::MirrorIgnorance::MirrorIgnorancePlayer*>(),
                    {::i2c::class_of<::Dissonance::Integrations::MirrorIgnorance::MirrorIgnorancePlayer*>(), 8}
                ));
    return ___internal_method;
  }
};
constexpr ::UnityW<::Dissonance::DissonanceComms>& Dissonance::Integrations::MirrorIgnorance::MirrorIgnorancePlayer::__cordl_internal_get__comms()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____comms;
}
constexpr ::UnityW<::Dissonance::DissonanceComms> const& Dissonance::Integrations::MirrorIgnorance::MirrorIgnorancePlayer::__cordl_internal_get__comms() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____comms;
}
constexpr void Dissonance::Integrations::MirrorIgnorance::MirrorIgnorancePlayer::__cordl_internal_set__comms(::UnityW<::Dissonance::DissonanceComms>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____comms = value;
}
constexpr ::UnityW<::GlobalNamespace::PlayerCharacter>& Dissonance::Integrations::MirrorIgnorance::MirrorIgnorancePlayer::__cordl_internal_get__player()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____player;
}
constexpr ::UnityW<::GlobalNamespace::PlayerCharacter> const& Dissonance::Integrations::MirrorIgnorance::MirrorIgnorancePlayer::__cordl_internal_get__player() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____player;
}
constexpr void Dissonance::Integrations::MirrorIgnorance::MirrorIgnorancePlayer::__cordl_internal_set__player(::UnityW<::GlobalNamespace::PlayerCharacter>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____player = value;
}
constexpr bool& Dissonance::Integrations::MirrorIgnorance::MirrorIgnorancePlayer::__cordl_internal_get__IsTracking_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____IsTracking_k__BackingField;
}
constexpr bool const& Dissonance::Integrations::MirrorIgnorance::MirrorIgnorancePlayer::__cordl_internal_get__IsTracking_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____IsTracking_k__BackingField;
}
constexpr void Dissonance::Integrations::MirrorIgnorance::MirrorIgnorancePlayer::__cordl_internal_set__IsTracking_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____IsTracking_k__BackingField = value;
}
constexpr ::StringW& Dissonance::Integrations::MirrorIgnorance::MirrorIgnorancePlayer::__cordl_internal_get__playerId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____playerId;
}
constexpr ::StringW const& Dissonance::Integrations::MirrorIgnorance::MirrorIgnorancePlayer::__cordl_internal_get__playerId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____playerId;
}
constexpr void Dissonance::Integrations::MirrorIgnorance::MirrorIgnorancePlayer::__cordl_internal_set__playerId(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____playerId = value;
}
inline void Dissonance::Integrations::MirrorIgnorance::MirrorIgnorancePlayer::setStaticF_Log(::Dissonance::Log*  value)  {
::cordl_internals::setStaticField<::Dissonance::Log*, "Log", ::Dissonance::Integrations::MirrorIgnorance::MirrorIgnorancePlayer*>(std::forward<::Dissonance::Log*>(value));
}
inline ::Dissonance::Log* Dissonance::Integrations::MirrorIgnorance::MirrorIgnorancePlayer::getStaticF_Log()  {
return ::cordl_internals::getStaticField<::Dissonance::Log*, "Log", ::Dissonance::Integrations::MirrorIgnorance::MirrorIgnorancePlayer*>();
}
inline bool Dissonance::Integrations::MirrorIgnorance::MirrorIgnorancePlayer::get_IsTracking()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Integrations::MirrorIgnorance::MirrorIgnorancePlayer*>(),
                        {"get_IsTracking", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Dissonance::Integrations::MirrorIgnorance::MirrorIgnorancePlayer::set_IsTracking(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Integrations::MirrorIgnorance::MirrorIgnorancePlayer*>(),
                        {"set_IsTracking", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW Dissonance::Integrations::MirrorIgnorance::MirrorIgnorancePlayer::get_PlayerId()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Integrations::MirrorIgnorance::MirrorIgnorancePlayer*>(),
                        {"get_PlayerId", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::UnityEngine::Vector3 Dissonance::Integrations::MirrorIgnorance::MirrorIgnorancePlayer::get_Position()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Integrations::MirrorIgnorance::MirrorIgnorancePlayer*>(),
                        {"get_Position", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method);
}
inline ::UnityEngine::Quaternion Dissonance::Integrations::MirrorIgnorance::MirrorIgnorancePlayer::get_Rotation()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Integrations::MirrorIgnorance::MirrorIgnorancePlayer*>(),
                        {"get_Rotation", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Quaternion>(this, ___internal_method);
}
inline ::Dissonance::NetworkPlayerType Dissonance::Integrations::MirrorIgnorance::MirrorIgnorancePlayer::get_Type()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Integrations::MirrorIgnorance::MirrorIgnorancePlayer*>(),
                        {"get_Type", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Dissonance::NetworkPlayerType>(this, ___internal_method);
}
inline void Dissonance::Integrations::MirrorIgnorance::MirrorIgnorancePlayer::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Integrations::MirrorIgnorance::MirrorIgnorancePlayer*>(),
                        {"OnDestroy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Dissonance::Integrations::MirrorIgnorance::MirrorIgnorancePlayer::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Integrations::MirrorIgnorance::MirrorIgnorancePlayer*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Dissonance::Integrations::MirrorIgnorance::MirrorIgnorancePlayer::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Integrations::MirrorIgnorance::MirrorIgnorancePlayer*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Dissonance::Integrations::MirrorIgnorance::MirrorIgnorancePlayer::OnStartLocalPlayer()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Dissonance::Integrations::MirrorIgnorance::MirrorIgnorancePlayer*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Dissonance::Integrations::MirrorIgnorance::MirrorIgnorancePlayer::SetPlayerName(::StringW  playerName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Integrations::MirrorIgnorance::MirrorIgnorancePlayer*>(),
                        {"SetPlayerName", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, playerName);
}
inline void Dissonance::Integrations::MirrorIgnorance::MirrorIgnorancePlayer::OnStartClient()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Dissonance::Integrations::MirrorIgnorance::MirrorIgnorancePlayer*>(), 11}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Dissonance::Integrations::MirrorIgnorance::MirrorIgnorancePlayer::CmdSetPlayerName(::StringW  playerName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Integrations::MirrorIgnorance::MirrorIgnorancePlayer*>(),
                        {"CmdSetPlayerName", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, playerName);
}
inline void Dissonance::Integrations::MirrorIgnorance::MirrorIgnorancePlayer::RpcSetPlayerName(::StringW  playerName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Integrations::MirrorIgnorance::MirrorIgnorancePlayer*>(),
                        {"RpcSetPlayerName", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, playerName);
}
inline void Dissonance::Integrations::MirrorIgnorance::MirrorIgnorancePlayer::StartTracking()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Integrations::MirrorIgnorance::MirrorIgnorancePlayer*>(),
                        {"StartTracking", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Dissonance::Integrations::MirrorIgnorance::MirrorIgnorancePlayer::StopTracking()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Integrations::MirrorIgnorance::MirrorIgnorancePlayer*>(),
                        {"StopTracking", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Dissonance::Integrations::MirrorIgnorance::MirrorIgnorancePlayer::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Integrations::MirrorIgnorance::MirrorIgnorancePlayer*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Dissonance::Integrations::MirrorIgnorance::MirrorIgnorancePlayer::MirrorProcessed()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Integrations::MirrorIgnorance::MirrorIgnorancePlayer*>(),
                        {"MirrorProcessed", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::StringW Dissonance::Integrations::MirrorIgnorance::MirrorIgnorancePlayer::get_Network_playerId()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Integrations::MirrorIgnorance::MirrorIgnorancePlayer*>(),
                        {"get_Network_playerId", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void Dissonance::Integrations::MirrorIgnorance::MirrorIgnorancePlayer::set_Network_playerId(::ByRefConst<::StringW>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Integrations::MirrorIgnorance::MirrorIgnorancePlayer*>(),
                        {"set_Network_playerId", {}, {::i2c::type_of<::ByRefConst<::StringW>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Dissonance::Integrations::MirrorIgnorance::MirrorIgnorancePlayer::UserCode_CmdSetPlayerName__String(::StringW  playerName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Integrations::MirrorIgnorance::MirrorIgnorancePlayer*>(),
                        {"UserCode_CmdSetPlayerName__String", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, playerName);
}
inline void Dissonance::Integrations::MirrorIgnorance::MirrorIgnorancePlayer::InvokeUserCode_CmdSetPlayerName__String(::Mirror::NetworkBehaviour*  obj, ::Mirror::NetworkReader*  reader, ::Mirror::NetworkConnectionToClient*  senderConnection)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Integrations::MirrorIgnorance::MirrorIgnorancePlayer*>(),
                        {"InvokeUserCode_CmdSetPlayerName__String", {}, {::i2c::type_of<::Mirror::NetworkBehaviour*>(), ::i2c::type_of<::Mirror::NetworkReader*>(), ::i2c::type_of<::Mirror::NetworkConnectionToClient*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, obj, reader, senderConnection);
}
inline void Dissonance::Integrations::MirrorIgnorance::MirrorIgnorancePlayer::UserCode_RpcSetPlayerName__String(::StringW  playerName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Integrations::MirrorIgnorance::MirrorIgnorancePlayer*>(),
                        {"UserCode_RpcSetPlayerName__String", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, playerName);
}
inline void Dissonance::Integrations::MirrorIgnorance::MirrorIgnorancePlayer::InvokeUserCode_RpcSetPlayerName__String(::Mirror::NetworkBehaviour*  obj, ::Mirror::NetworkReader*  reader, ::Mirror::NetworkConnectionToClient*  senderConnection)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Integrations::MirrorIgnorance::MirrorIgnorancePlayer*>(),
                        {"InvokeUserCode_RpcSetPlayerName__String", {}, {::i2c::type_of<::Mirror::NetworkBehaviour*>(), ::i2c::type_of<::Mirror::NetworkReader*>(), ::i2c::type_of<::Mirror::NetworkConnectionToClient*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, obj, reader, senderConnection);
}
inline void Dissonance::Integrations::MirrorIgnorance::MirrorIgnorancePlayer::SerializeSyncVars(::Mirror::NetworkWriter*  writer, bool  forceAll)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Dissonance::Integrations::MirrorIgnorance::MirrorIgnorancePlayer*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, writer, forceAll);
}
inline void Dissonance::Integrations::MirrorIgnorance::MirrorIgnorancePlayer::DeserializeSyncVars(::Mirror::NetworkReader*  reader, bool  initialState)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Dissonance::Integrations::MirrorIgnorance::MirrorIgnorancePlayer*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, reader, initialState);
}
inline ::Dissonance::Integrations::MirrorIgnorance::MirrorIgnorancePlayer* Dissonance::Integrations::MirrorIgnorance::MirrorIgnorancePlayer::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Dissonance::Integrations::MirrorIgnorance::MirrorIgnorancePlayer*>());
}
/// @brief Convert operator to "::Dissonance::IDissonancePlayer"
constexpr  Dissonance::Integrations::MirrorIgnorance::MirrorIgnorancePlayer::operator ::Dissonance::IDissonancePlayer*() noexcept {
return static_cast<::Dissonance::IDissonancePlayer*>(static_cast<void*>(this));
}
/// @brief Convert to "::Dissonance::IDissonancePlayer"
constexpr ::Dissonance::IDissonancePlayer* Dissonance::Integrations::MirrorIgnorance::MirrorIgnorancePlayer::i___Dissonance__IDissonancePlayer() noexcept {
return static_cast<::Dissonance::IDissonancePlayer*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Dissonance::Integrations::MirrorIgnorance::MirrorIgnorancePlayer::MirrorIgnorancePlayer()   {
}

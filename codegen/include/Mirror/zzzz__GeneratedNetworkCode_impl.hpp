#pragma once
// IWYU pragma private; include "Mirror/GeneratedNetworkCode.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Mirror/zzzz__GeneratedNetworkCode_def.hpp"
#include "GlobalNamespace/zzzz__GourdFlag_def.hpp"
#include "GlobalNamespace/zzzz__PeckContext_def.hpp"
#include "GlobalNamespace/zzzz__Platforms_def.hpp"
#include "GlobalNamespace/zzzz__PlayerCount_def.hpp"
#include "GlobalNamespace/zzzz__PlayerHeldInformation_def.hpp"
#include "GlobalNamespace/zzzz__PlayerLooks_def.hpp"
#include "GlobalNamespace/zzzz__SeaShell_def.hpp"
#include "GlobalNamespace/zzzz__ShellReferenceWithActionNumber_def.hpp"
#include "HouseHouse/Dream/zzzz__DreamController_def.hpp"
#include "Mirror/Authenticators/zzzz__HouseAuthenticator_def.hpp"
#include "Mirror/zzzz__AddPlayerMessage_def.hpp"
#include "Mirror/zzzz__ChangeOwnerMessage_def.hpp"
#include "Mirror/zzzz__CommandMessage_def.hpp"
#include "Mirror/zzzz__EntityStateMessage_def.hpp"
#include "Mirror/zzzz__NetworkPingMessage_def.hpp"
#include "Mirror/zzzz__NetworkPongMessage_def.hpp"
#include "Mirror/zzzz__NetworkReader_def.hpp"
#include "Mirror/zzzz__NetworkWriter_def.hpp"
#include "Mirror/zzzz__NotReadyMessage_def.hpp"
#include "Mirror/zzzz__ObjectDestroyMessage_def.hpp"
#include "Mirror/zzzz__ObjectHideMessage_def.hpp"
#include "Mirror/zzzz__ObjectSpawnFinishedMessage_def.hpp"
#include "Mirror/zzzz__ObjectSpawnStartedMessage_def.hpp"
#include "Mirror/zzzz__ReadyMessage_def.hpp"
#include "Mirror/zzzz__RpcBufferMessage_def.hpp"
#include "Mirror/zzzz__RpcMessage_def.hpp"
#include "Mirror/zzzz__SceneMessage_def.hpp"
#include "Mirror/zzzz__SceneOperation_def.hpp"
#include "Mirror/zzzz__SpawnMessage_def.hpp"
#include "Mirror/zzzz__TimeSnapshotMessage_def.hpp"
//  Writing Method size for method: ::Mirror::GeneratedNetworkCode._Read_Mirror_TimeSnapshotMessage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Mirror::TimeSnapshotMessage (*)(::Mirror::NetworkReader*)>(&::Mirror::GeneratedNetworkCode::_Read_Mirror_TimeSnapshotMessage)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e2bd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::GeneratedNetworkCode*>(),
                        {"_Read_Mirror.TimeSnapshotMessage", {}, {::i2c::type_of<::Mirror::NetworkReader*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::GeneratedNetworkCode._Write_Mirror_TimeSnapshotMessage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Mirror::NetworkWriter*, ::Mirror::TimeSnapshotMessage)>(&::Mirror::GeneratedNetworkCode::_Write_Mirror_TimeSnapshotMessage)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::GeneratedNetworkCode*>(),
                        {"_Write_Mirror.TimeSnapshotMessage", {}, {::i2c::type_of<::Mirror::NetworkWriter*>(), ::i2c::type_of<::Mirror::TimeSnapshotMessage>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::GeneratedNetworkCode._Read_Mirror_ReadyMessage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Mirror::ReadyMessage (*)(::Mirror::NetworkReader*)>(&::Mirror::GeneratedNetworkCode::_Read_Mirror_ReadyMessage)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e2bd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::GeneratedNetworkCode*>(),
                        {"_Read_Mirror.ReadyMessage", {}, {::i2c::type_of<::Mirror::NetworkReader*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::GeneratedNetworkCode._Write_Mirror_ReadyMessage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Mirror::NetworkWriter*, ::Mirror::ReadyMessage)>(&::Mirror::GeneratedNetworkCode::_Write_Mirror_ReadyMessage)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::GeneratedNetworkCode*>(),
                        {"_Write_Mirror.ReadyMessage", {}, {::i2c::type_of<::Mirror::NetworkWriter*>(), ::i2c::type_of<::Mirror::ReadyMessage>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::GeneratedNetworkCode._Read_Mirror_NotReadyMessage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Mirror::NotReadyMessage (*)(::Mirror::NetworkReader*)>(&::Mirror::GeneratedNetworkCode::_Read_Mirror_NotReadyMessage)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e2bd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::GeneratedNetworkCode*>(),
                        {"_Read_Mirror.NotReadyMessage", {}, {::i2c::type_of<::Mirror::NetworkReader*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::GeneratedNetworkCode._Write_Mirror_NotReadyMessage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Mirror::NetworkWriter*, ::Mirror::NotReadyMessage)>(&::Mirror::GeneratedNetworkCode::_Write_Mirror_NotReadyMessage)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::GeneratedNetworkCode*>(),
                        {"_Write_Mirror.NotReadyMessage", {}, {::i2c::type_of<::Mirror::NetworkWriter*>(), ::i2c::type_of<::Mirror::NotReadyMessage>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::GeneratedNetworkCode._Read_Mirror_AddPlayerMessage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Mirror::AddPlayerMessage (*)(::Mirror::NetworkReader*)>(&::Mirror::GeneratedNetworkCode::_Read_Mirror_AddPlayerMessage)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e2bd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::GeneratedNetworkCode*>(),
                        {"_Read_Mirror.AddPlayerMessage", {}, {::i2c::type_of<::Mirror::NetworkReader*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::GeneratedNetworkCode._Write_Mirror_AddPlayerMessage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Mirror::NetworkWriter*, ::Mirror::AddPlayerMessage)>(&::Mirror::GeneratedNetworkCode::_Write_Mirror_AddPlayerMessage)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::GeneratedNetworkCode*>(),
                        {"_Write_Mirror.AddPlayerMessage", {}, {::i2c::type_of<::Mirror::NetworkWriter*>(), ::i2c::type_of<::Mirror::AddPlayerMessage>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::GeneratedNetworkCode._Read_Mirror_SceneMessage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Mirror::SceneMessage (*)(::Mirror::NetworkReader*)>(&::Mirror::GeneratedNetworkCode::_Read_Mirror_SceneMessage)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1803c6540;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::GeneratedNetworkCode*>(),
                        {"_Read_Mirror.SceneMessage", {}, {::i2c::type_of<::Mirror::NetworkReader*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::GeneratedNetworkCode._Read_Mirror_SceneOperation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Mirror::SceneOperation (*)(::Mirror::NetworkReader*)>(&::Mirror::GeneratedNetworkCode::_Read_Mirror_SceneOperation)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803c65a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::GeneratedNetworkCode*>(),
                        {"_Read_Mirror.SceneOperation", {}, {::i2c::type_of<::Mirror::NetworkReader*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::GeneratedNetworkCode._Write_Mirror_SceneMessage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Mirror::NetworkWriter*, ::Mirror::SceneMessage)>(&::Mirror::GeneratedNetworkCode::_Write_Mirror_SceneMessage)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1803c6ae0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::GeneratedNetworkCode*>(),
                        {"_Write_Mirror.SceneMessage", {}, {::i2c::type_of<::Mirror::NetworkWriter*>(), ::i2c::type_of<::Mirror::SceneMessage>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::GeneratedNetworkCode._Write_Mirror_SceneOperation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Mirror::NetworkWriter*, ::Mirror::SceneOperation)>(&::Mirror::GeneratedNetworkCode::_Write_Mirror_SceneOperation)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803c6b30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::GeneratedNetworkCode*>(),
                        {"_Write_Mirror.SceneOperation", {}, {::i2c::type_of<::Mirror::NetworkWriter*>(), ::i2c::type_of<::Mirror::SceneOperation>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::GeneratedNetworkCode._Read_Mirror_CommandMessage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Mirror::CommandMessage (*)(::Mirror::NetworkReader*)>(&::Mirror::GeneratedNetworkCode::_Read_Mirror_CommandMessage)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1803c63f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::GeneratedNetworkCode*>(),
                        {"_Read_Mirror.CommandMessage", {}, {::i2c::type_of<::Mirror::NetworkReader*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::GeneratedNetworkCode._Write_Mirror_CommandMessage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Mirror::NetworkWriter*, ::Mirror::CommandMessage)>(&::Mirror::GeneratedNetworkCode::_Write_Mirror_CommandMessage)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1803c6a10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::GeneratedNetworkCode*>(),
                        {"_Write_Mirror.CommandMessage", {}, {::i2c::type_of<::Mirror::NetworkWriter*>(), ::i2c::type_of<::Mirror::CommandMessage>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::GeneratedNetworkCode._Read_Mirror_RpcMessage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Mirror::RpcMessage (*)(::Mirror::NetworkReader*)>(&::Mirror::GeneratedNetworkCode::_Read_Mirror_RpcMessage)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1803c63f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::GeneratedNetworkCode*>(),
                        {"_Read_Mirror.RpcMessage", {}, {::i2c::type_of<::Mirror::NetworkReader*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::GeneratedNetworkCode._Write_Mirror_RpcMessage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Mirror::NetworkWriter*, ::Mirror::RpcMessage)>(&::Mirror::GeneratedNetworkCode::_Write_Mirror_RpcMessage)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1803c6a10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::GeneratedNetworkCode*>(),
                        {"_Write_Mirror.RpcMessage", {}, {::i2c::type_of<::Mirror::NetworkWriter*>(), ::i2c::type_of<::Mirror::RpcMessage>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::GeneratedNetworkCode._Read_Mirror_RpcBufferMessage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Mirror::RpcBufferMessage (*)(::Mirror::NetworkReader*)>(&::Mirror::GeneratedNetworkCode::_Read_Mirror_RpcBufferMessage)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1803c6500;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::GeneratedNetworkCode*>(),
                        {"_Read_Mirror.RpcBufferMessage", {}, {::i2c::type_of<::Mirror::NetworkReader*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::GeneratedNetworkCode._Write_Mirror_RpcBufferMessage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Mirror::NetworkWriter*, ::Mirror::RpcBufferMessage)>(&::Mirror::GeneratedNetworkCode::_Write_Mirror_RpcBufferMessage)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1803c6ac0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::GeneratedNetworkCode*>(),
                        {"_Write_Mirror.RpcBufferMessage", {}, {::i2c::type_of<::Mirror::NetworkWriter*>(), ::i2c::type_of<::Mirror::RpcBufferMessage>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::GeneratedNetworkCode._Read_Mirror_SpawnMessage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Mirror::SpawnMessage (*)(::Mirror::NetworkReader*)>(&::Mirror::GeneratedNetworkCode::_Read_Mirror_SpawnMessage)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x1803c65b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::GeneratedNetworkCode*>(),
                        {"_Read_Mirror.SpawnMessage", {}, {::i2c::type_of<::Mirror::NetworkReader*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::GeneratedNetworkCode._Write_Mirror_SpawnMessage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Mirror::NetworkWriter*, ::Mirror::SpawnMessage)>(&::Mirror::GeneratedNetworkCode::_Write_Mirror_SpawnMessage)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x1803c6b40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::GeneratedNetworkCode*>(),
                        {"_Write_Mirror.SpawnMessage", {}, {::i2c::type_of<::Mirror::NetworkWriter*>(), ::i2c::type_of<::Mirror::SpawnMessage>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::GeneratedNetworkCode._Read_Mirror_ChangeOwnerMessage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Mirror::ChangeOwnerMessage (*)(::Mirror::NetworkReader*)>(&::Mirror::GeneratedNetworkCode::_Read_Mirror_ChangeOwnerMessage)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1803c63a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::GeneratedNetworkCode*>(),
                        {"_Read_Mirror.ChangeOwnerMessage", {}, {::i2c::type_of<::Mirror::NetworkReader*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::GeneratedNetworkCode._Write_Mirror_ChangeOwnerMessage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Mirror::NetworkWriter*, ::Mirror::ChangeOwnerMessage)>(&::Mirror::GeneratedNetworkCode::_Write_Mirror_ChangeOwnerMessage)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1803c69d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::GeneratedNetworkCode*>(),
                        {"_Write_Mirror.ChangeOwnerMessage", {}, {::i2c::type_of<::Mirror::NetworkWriter*>(), ::i2c::type_of<::Mirror::ChangeOwnerMessage>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::GeneratedNetworkCode._Read_Mirror_ObjectSpawnStartedMessage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Mirror::ObjectSpawnStartedMessage (*)(::Mirror::NetworkReader*)>(&::Mirror::GeneratedNetworkCode::_Read_Mirror_ObjectSpawnStartedMessage)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e2bd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::GeneratedNetworkCode*>(),
                        {"_Read_Mirror.ObjectSpawnStartedMessage", {}, {::i2c::type_of<::Mirror::NetworkReader*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::GeneratedNetworkCode._Write_Mirror_ObjectSpawnStartedMessage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Mirror::NetworkWriter*, ::Mirror::ObjectSpawnStartedMessage)>(&::Mirror::GeneratedNetworkCode::_Write_Mirror_ObjectSpawnStartedMessage)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::GeneratedNetworkCode*>(),
                        {"_Write_Mirror.ObjectSpawnStartedMessage", {}, {::i2c::type_of<::Mirror::NetworkWriter*>(), ::i2c::type_of<::Mirror::ObjectSpawnStartedMessage>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::GeneratedNetworkCode._Read_Mirror_ObjectSpawnFinishedMessage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Mirror::ObjectSpawnFinishedMessage (*)(::Mirror::NetworkReader*)>(&::Mirror::GeneratedNetworkCode::_Read_Mirror_ObjectSpawnFinishedMessage)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e2bd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::GeneratedNetworkCode*>(),
                        {"_Read_Mirror.ObjectSpawnFinishedMessage", {}, {::i2c::type_of<::Mirror::NetworkReader*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::GeneratedNetworkCode._Write_Mirror_ObjectSpawnFinishedMessage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Mirror::NetworkWriter*, ::Mirror::ObjectSpawnFinishedMessage)>(&::Mirror::GeneratedNetworkCode::_Write_Mirror_ObjectSpawnFinishedMessage)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::GeneratedNetworkCode*>(),
                        {"_Write_Mirror.ObjectSpawnFinishedMessage", {}, {::i2c::type_of<::Mirror::NetworkWriter*>(), ::i2c::type_of<::Mirror::ObjectSpawnFinishedMessage>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::GeneratedNetworkCode._Read_Mirror_ObjectDestroyMessage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Mirror::ObjectDestroyMessage (*)(::Mirror::NetworkReader*)>(&::Mirror::GeneratedNetworkCode::_Read_Mirror_ObjectDestroyMessage)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803c64f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::GeneratedNetworkCode*>(),
                        {"_Read_Mirror.ObjectDestroyMessage", {}, {::i2c::type_of<::Mirror::NetworkReader*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::GeneratedNetworkCode._Write_Mirror_ObjectDestroyMessage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Mirror::NetworkWriter*, ::Mirror::ObjectDestroyMessage)>(&::Mirror::GeneratedNetworkCode::_Write_Mirror_ObjectDestroyMessage)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803c68b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::GeneratedNetworkCode*>(),
                        {"_Write_Mirror.ObjectDestroyMessage", {}, {::i2c::type_of<::Mirror::NetworkWriter*>(), ::i2c::type_of<::Mirror::ObjectDestroyMessage>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::GeneratedNetworkCode._Read_Mirror_ObjectHideMessage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Mirror::ObjectHideMessage (*)(::Mirror::NetworkReader*)>(&::Mirror::GeneratedNetworkCode::_Read_Mirror_ObjectHideMessage)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803c64f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::GeneratedNetworkCode*>(),
                        {"_Read_Mirror.ObjectHideMessage", {}, {::i2c::type_of<::Mirror::NetworkReader*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::GeneratedNetworkCode._Write_Mirror_ObjectHideMessage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Mirror::NetworkWriter*, ::Mirror::ObjectHideMessage)>(&::Mirror::GeneratedNetworkCode::_Write_Mirror_ObjectHideMessage)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803c68b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::GeneratedNetworkCode*>(),
                        {"_Write_Mirror.ObjectHideMessage", {}, {::i2c::type_of<::Mirror::NetworkWriter*>(), ::i2c::type_of<::Mirror::ObjectHideMessage>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::GeneratedNetworkCode._Read_Mirror_EntityStateMessage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Mirror::EntityStateMessage (*)(::Mirror::NetworkReader*)>(&::Mirror::GeneratedNetworkCode::_Read_Mirror_EntityStateMessage)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1803c6470;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::GeneratedNetworkCode*>(),
                        {"_Read_Mirror.EntityStateMessage", {}, {::i2c::type_of<::Mirror::NetworkReader*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::GeneratedNetworkCode._Write_Mirror_EntityStateMessage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Mirror::NetworkWriter*, ::Mirror::EntityStateMessage)>(&::Mirror::GeneratedNetworkCode::_Write_Mirror_EntityStateMessage)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1803c6a70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::GeneratedNetworkCode*>(),
                        {"_Write_Mirror.EntityStateMessage", {}, {::i2c::type_of<::Mirror::NetworkWriter*>(), ::i2c::type_of<::Mirror::EntityStateMessage>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::GeneratedNetworkCode._Read_Mirror_NetworkPingMessage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Mirror::NetworkPingMessage (*)(::Mirror::NetworkReader*)>(&::Mirror::GeneratedNetworkCode::_Read_Mirror_NetworkPingMessage)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1803c64d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::GeneratedNetworkCode*>(),
                        {"_Read_Mirror.NetworkPingMessage", {}, {::i2c::type_of<::Mirror::NetworkReader*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::GeneratedNetworkCode._Write_Mirror_NetworkPingMessage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Mirror::NetworkWriter*, ::Mirror::NetworkPingMessage)>(&::Mirror::GeneratedNetworkCode::_Write_Mirror_NetworkPingMessage)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803c6ab0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::GeneratedNetworkCode*>(),
                        {"_Write_Mirror.NetworkPingMessage", {}, {::i2c::type_of<::Mirror::NetworkWriter*>(), ::i2c::type_of<::Mirror::NetworkPingMessage>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::GeneratedNetworkCode._Read_Mirror_NetworkPongMessage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Mirror::NetworkPongMessage (*)(::Mirror::NetworkReader*)>(&::Mirror::GeneratedNetworkCode::_Read_Mirror_NetworkPongMessage)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1803c64d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::GeneratedNetworkCode*>(),
                        {"_Read_Mirror.NetworkPongMessage", {}, {::i2c::type_of<::Mirror::NetworkReader*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::GeneratedNetworkCode._Write_Mirror_NetworkPongMessage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Mirror::NetworkWriter*, ::Mirror::NetworkPongMessage)>(&::Mirror::GeneratedNetworkCode::_Write_Mirror_NetworkPongMessage)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803c6ab0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::GeneratedNetworkCode*>(),
                        {"_Write_Mirror.NetworkPongMessage", {}, {::i2c::type_of<::Mirror::NetworkWriter*>(), ::i2c::type_of<::Mirror::NetworkPongMessage>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::GeneratedNetworkCode._Read_Mirror_Authenticators_HouseAuthenticator_InitialialAuthRequestMessage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Mirror::Authenticators::HouseAuthenticator_InitialialAuthRequestMessage (*)(::Mirror::NetworkReader*)>(&::Mirror::GeneratedNetworkCode::_Read_Mirror_Authenticators_HouseAuthenticator_InitialialAuthRequestMessage)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1803c62d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::GeneratedNetworkCode*>(),
                        {"_Read_Mirror.Authenticators.HouseAuthenticator/InitialialAuthRequestMessage", {}, {::i2c::type_of<::Mirror::NetworkReader*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::GeneratedNetworkCode._Write_Mirror_Authenticators_HouseAuthenticator_InitialialAuthRequestMessage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Mirror::NetworkWriter*, ::Mirror::Authenticators::HouseAuthenticator_InitialialAuthRequestMessage)>(&::Mirror::GeneratedNetworkCode::_Write_Mirror_Authenticators_HouseAuthenticator_InitialialAuthRequestMessage)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1803c6950;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::GeneratedNetworkCode*>(),
                        {"_Write_Mirror.Authenticators.HouseAuthenticator/InitialialAuthRequestMessage", {}, {::i2c::type_of<::Mirror::NetworkWriter*>(), ::i2c::type_of<::Mirror::Authenticators::HouseAuthenticator_InitialialAuthRequestMessage>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::GeneratedNetworkCode._Read_Mirror_Authenticators_HouseAuthenticator_PasswordResponseMessage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Mirror::Authenticators::HouseAuthenticator_PasswordResponseMessage (*)(::Mirror::NetworkReader*)>(&::Mirror::GeneratedNetworkCode::_Read_Mirror_Authenticators_HouseAuthenticator_PasswordResponseMessage)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1803c6330;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::GeneratedNetworkCode*>(),
                        {"_Read_Mirror.Authenticators.HouseAuthenticator/PasswordResponseMessage", {}, {::i2c::type_of<::Mirror::NetworkReader*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::GeneratedNetworkCode._Write_Mirror_Authenticators_HouseAuthenticator_PasswordResponseMessage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Mirror::NetworkWriter*, ::Mirror::Authenticators::HouseAuthenticator_PasswordResponseMessage)>(&::Mirror::GeneratedNetworkCode::_Write_Mirror_Authenticators_HouseAuthenticator_PasswordResponseMessage)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803c6990;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::GeneratedNetworkCode*>(),
                        {"_Write_Mirror.Authenticators.HouseAuthenticator/PasswordResponseMessage", {}, {::i2c::type_of<::Mirror::NetworkWriter*>(), ::i2c::type_of<::Mirror::Authenticators::HouseAuthenticator_PasswordResponseMessage>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::GeneratedNetworkCode._Read_Mirror_Authenticators_HouseAuthenticator_AuthResponseMessage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Mirror::Authenticators::HouseAuthenticator_AuthResponseMessage (*)(::Mirror::NetworkReader*)>(&::Mirror::GeneratedNetworkCode::_Read_Mirror_Authenticators_HouseAuthenticator_AuthResponseMessage)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1803c6280;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::GeneratedNetworkCode*>(),
                        {"_Read_Mirror.Authenticators.HouseAuthenticator/AuthResponseMessage", {}, {::i2c::type_of<::Mirror::NetworkReader*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::GeneratedNetworkCode._Write_Mirror_Authenticators_HouseAuthenticator_AuthResponseMessage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Mirror::NetworkWriter*, ::Mirror::Authenticators::HouseAuthenticator_AuthResponseMessage)>(&::Mirror::GeneratedNetworkCode::_Write_Mirror_Authenticators_HouseAuthenticator_AuthResponseMessage)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1803c6910;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::GeneratedNetworkCode*>(),
                        {"_Write_Mirror.Authenticators.HouseAuthenticator/AuthResponseMessage", {}, {::i2c::type_of<::Mirror::NetworkWriter*>(), ::i2c::type_of<::Mirror::Authenticators::HouseAuthenticator_AuthResponseMessage>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::GeneratedNetworkCode._Read_Mirror_Authenticators_HouseAuthenticator_WelcomeMessage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Mirror::Authenticators::HouseAuthenticator_WelcomeMessage (*)(::Mirror::NetworkReader*)>(&::Mirror::GeneratedNetworkCode::_Read_Mirror_Authenticators_HouseAuthenticator_WelcomeMessage)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1803c6360;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::GeneratedNetworkCode*>(),
                        {"_Read_Mirror.Authenticators.HouseAuthenticator/WelcomeMessage", {}, {::i2c::type_of<::Mirror::NetworkReader*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::GeneratedNetworkCode._Read_PlayerCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::PlayerCount (*)(::Mirror::NetworkReader*)>(&::Mirror::GeneratedNetworkCode::_Read_PlayerCount)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803c6220;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::GeneratedNetworkCode*>(),
                        {"_Read_PlayerCount", {}, {::i2c::type_of<::Mirror::NetworkReader*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::GeneratedNetworkCode._Write_Mirror_Authenticators_HouseAuthenticator_WelcomeMessage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Mirror::NetworkWriter*, ::Mirror::Authenticators::HouseAuthenticator_WelcomeMessage)>(&::Mirror::GeneratedNetworkCode::_Write_Mirror_Authenticators_HouseAuthenticator_WelcomeMessage)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1803c69a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::GeneratedNetworkCode*>(),
                        {"_Write_Mirror.Authenticators.HouseAuthenticator/WelcomeMessage", {}, {::i2c::type_of<::Mirror::NetworkWriter*>(), ::i2c::type_of<::Mirror::Authenticators::HouseAuthenticator_WelcomeMessage>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::GeneratedNetworkCode._Write_PlayerCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Mirror::NetworkWriter*, ::GlobalNamespace::PlayerCount)>(&::Mirror::GeneratedNetworkCode::_Write_PlayerCount)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803c68b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::GeneratedNetworkCode*>(),
                        {"_Write_PlayerCount", {}, {::i2c::type_of<::Mirror::NetworkWriter*>(), ::i2c::type_of<::GlobalNamespace::PlayerCount>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::GeneratedNetworkCode._Write_GourdFlag_GourdState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Mirror::NetworkWriter*, ::GlobalNamespace::GourdFlag_GourdState)>(&::Mirror::GeneratedNetworkCode::_Write_GourdFlag_GourdState)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803c68b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::GeneratedNetworkCode*>(),
                        {"_Write_GourdFlag/GourdState", {}, {::i2c::type_of<::Mirror::NetworkWriter*>(), ::i2c::type_of<::GlobalNamespace::GourdFlag_GourdState>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::GeneratedNetworkCode._Read_GourdFlag_GourdState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::GourdFlag_GourdState (*)(::Mirror::NetworkReader*)>(&::Mirror::GeneratedNetworkCode::_Read_GourdFlag_GourdState)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803c6220;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::GeneratedNetworkCode*>(),
                        {"_Read_GourdFlag/GourdState", {}, {::i2c::type_of<::Mirror::NetworkReader*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::GeneratedNetworkCode._Read_SeaShell_ShellReference
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::SeaShell_ShellReference (*)(::Mirror::NetworkReader*)>(&::Mirror::GeneratedNetworkCode::_Read_SeaShell_ShellReference)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1803c67f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::GeneratedNetworkCode*>(),
                        {"_Read_SeaShell/ShellReference", {}, {::i2c::type_of<::Mirror::NetworkReader*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::GeneratedNetworkCode._Write_SeaShell_ShellReference
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Mirror::NetworkWriter*, ::GlobalNamespace::SeaShell_ShellReference)>(&::Mirror::GeneratedNetworkCode::_Write_SeaShell_ShellReference)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1803c6d30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::GeneratedNetworkCode*>(),
                        {"_Write_SeaShell/ShellReference", {}, {::i2c::type_of<::Mirror::NetworkWriter*>(), ::i2c::type_of<::GlobalNamespace::SeaShell_ShellReference>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::GeneratedNetworkCode._Read_PeckContext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::PeckContext (*)(::Mirror::NetworkReader*)>(&::Mirror::GeneratedNetworkCode::_Read_PeckContext)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1803c66a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::GeneratedNetworkCode*>(),
                        {"_Read_PeckContext", {}, {::i2c::type_of<::Mirror::NetworkReader*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::GeneratedNetworkCode._Write_PeckContext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Mirror::NetworkWriter*, ::GlobalNamespace::PeckContext)>(&::Mirror::GeneratedNetworkCode::_Write_PeckContext)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1803c6c20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::GeneratedNetworkCode*>(),
                        {"_Write_PeckContext", {}, {::i2c::type_of<::Mirror::NetworkWriter*>(), ::i2c::type_of<::GlobalNamespace::PeckContext>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::GeneratedNetworkCode._Write_PlayerHeldInformation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Mirror::NetworkWriter*, ::GlobalNamespace::PlayerHeldInformation)>(&::Mirror::GeneratedNetworkCode::_Write_PlayerHeldInformation)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x1803c6c80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::GeneratedNetworkCode*>(),
                        {"_Write_PlayerHeldInformation", {}, {::i2c::type_of<::Mirror::NetworkWriter*>(), ::i2c::type_of<::GlobalNamespace::PlayerHeldInformation>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::GeneratedNetworkCode._Write_PlayerHeldInformation_HeldType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Mirror::NetworkWriter*, ::GlobalNamespace::PlayerHeldInformation_HeldType)>(&::Mirror::GeneratedNetworkCode::_Write_PlayerHeldInformation_HeldType)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803c68b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::GeneratedNetworkCode*>(),
                        {"_Write_PlayerHeldInformation/HeldType", {}, {::i2c::type_of<::Mirror::NetworkWriter*>(), ::i2c::type_of<::GlobalNamespace::PlayerHeldInformation_HeldType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::GeneratedNetworkCode._Read_PlayerHeldInformation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::PlayerHeldInformation (*)(::Mirror::NetworkReader*)>(&::Mirror::GeneratedNetworkCode::_Read_PlayerHeldInformation)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x1803c6720;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::GeneratedNetworkCode*>(),
                        {"_Read_PlayerHeldInformation", {}, {::i2c::type_of<::Mirror::NetworkReader*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::GeneratedNetworkCode._Read_PlayerHeldInformation_HeldType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::PlayerHeldInformation_HeldType (*)(::Mirror::NetworkReader*)>(&::Mirror::GeneratedNetworkCode::_Read_PlayerHeldInformation_HeldType)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803c6220;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::GeneratedNetworkCode*>(),
                        {"_Read_PlayerHeldInformation/HeldType", {}, {::i2c::type_of<::Mirror::NetworkReader*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::GeneratedNetworkCode._Write_PlayerLooks_LookPart
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Mirror::NetworkWriter*, ::GlobalNamespace::PlayerLooks_LookPart)>(&::Mirror::GeneratedNetworkCode::_Write_PlayerLooks_LookPart)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803c68b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::GeneratedNetworkCode*>(),
                        {"_Write_PlayerLooks/LookPart", {}, {::i2c::type_of<::Mirror::NetworkWriter*>(), ::i2c::type_of<::GlobalNamespace::PlayerLooks_LookPart>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::GeneratedNetworkCode._Read_PlayerLooks_LookPart
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::PlayerLooks_LookPart (*)(::Mirror::NetworkReader*)>(&::Mirror::GeneratedNetworkCode::_Read_PlayerLooks_LookPart)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803c6220;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::GeneratedNetworkCode*>(),
                        {"_Read_PlayerLooks/LookPart", {}, {::i2c::type_of<::Mirror::NetworkReader*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::GeneratedNetworkCode._Write_Platforms
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Mirror::NetworkWriter*, ::GlobalNamespace::Platforms)>(&::Mirror::GeneratedNetworkCode::_Write_Platforms)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803c6b30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::GeneratedNetworkCode*>(),
                        {"_Write_Platforms", {}, {::i2c::type_of<::Mirror::NetworkWriter*>(), ::i2c::type_of<::GlobalNamespace::Platforms>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::GeneratedNetworkCode._Read_Platforms
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::Platforms (*)(::Mirror::NetworkReader*)>(&::Mirror::GeneratedNetworkCode::_Read_Platforms)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803c65a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::GeneratedNetworkCode*>(),
                        {"_Read_Platforms", {}, {::i2c::type_of<::Mirror::NetworkReader*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::GeneratedNetworkCode._Write_ShellReferenceWithActionNumber
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Mirror::NetworkWriter*, ::GlobalNamespace::ShellReferenceWithActionNumber)>(&::Mirror::GeneratedNetworkCode::_Write_ShellReferenceWithActionNumber)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1803c6d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::GeneratedNetworkCode*>(),
                        {"_Write_ShellReferenceWithActionNumber", {}, {::i2c::type_of<::Mirror::NetworkWriter*>(), ::i2c::type_of<::GlobalNamespace::ShellReferenceWithActionNumber>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::GeneratedNetworkCode._Read_ShellReferenceWithActionNumber
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::ShellReferenceWithActionNumber (*)(::Mirror::NetworkReader*)>(&::Mirror::GeneratedNetworkCode::_Read_ShellReferenceWithActionNumber)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1803c6840;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::GeneratedNetworkCode*>(),
                        {"_Read_ShellReferenceWithActionNumber", {}, {::i2c::type_of<::Mirror::NetworkReader*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::GeneratedNetworkCode._Write_HouseHouse_Dream_DreamController_LookIdTrio
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Mirror::NetworkWriter*, ::HouseHouse::Dream::DreamController_LookIdTrio)>(&::Mirror::GeneratedNetworkCode::_Write_HouseHouse_Dream_DreamController_LookIdTrio)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1803c68c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::GeneratedNetworkCode*>(),
                        {"_Write_HouseHouse.Dream.DreamController/LookIdTrio", {}, {::i2c::type_of<::Mirror::NetworkWriter*>(), ::i2c::type_of<::HouseHouse::Dream::DreamController_LookIdTrio>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::GeneratedNetworkCode._Read_HouseHouse_Dream_DreamController_LookIdTrio
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::HouseHouse::Dream::DreamController_LookIdTrio (*)(::Mirror::NetworkReader*)>(&::Mirror::GeneratedNetworkCode::_Read_HouseHouse_Dream_DreamController_LookIdTrio)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1803c6230;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::GeneratedNetworkCode*>(),
                        {"_Read_HouseHouse.Dream.DreamController/LookIdTrio", {}, {::i2c::type_of<::Mirror::NetworkReader*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::GeneratedNetworkCode.InitReadWriters
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::Mirror::GeneratedNetworkCode::InitReadWriters)> {
  constexpr static std::size_t size = 0x3a30;
  constexpr static std::size_t addrs = 0x1803c27f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::GeneratedNetworkCode*>(),
                        {"InitReadWriters", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline ::Mirror::TimeSnapshotMessage Mirror::GeneratedNetworkCode::_Read_Mirror_TimeSnapshotMessage(::Mirror::NetworkReader*  reader)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::GeneratedNetworkCode*>(),
                        {"_Read_Mirror.TimeSnapshotMessage", {}, {::i2c::type_of<::Mirror::NetworkReader*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Mirror::TimeSnapshotMessage>(nullptr, ___internal_method, reader);
}
inline void Mirror::GeneratedNetworkCode::_Write_Mirror_TimeSnapshotMessage(::Mirror::NetworkWriter*  writer, ::Mirror::TimeSnapshotMessage  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::GeneratedNetworkCode*>(),
                        {"_Write_Mirror.TimeSnapshotMessage", {}, {::i2c::type_of<::Mirror::NetworkWriter*>(), ::i2c::type_of<::Mirror::TimeSnapshotMessage>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, writer, value);
}
inline ::Mirror::ReadyMessage Mirror::GeneratedNetworkCode::_Read_Mirror_ReadyMessage(::Mirror::NetworkReader*  reader)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::GeneratedNetworkCode*>(),
                        {"_Read_Mirror.ReadyMessage", {}, {::i2c::type_of<::Mirror::NetworkReader*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Mirror::ReadyMessage>(nullptr, ___internal_method, reader);
}
inline void Mirror::GeneratedNetworkCode::_Write_Mirror_ReadyMessage(::Mirror::NetworkWriter*  writer, ::Mirror::ReadyMessage  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::GeneratedNetworkCode*>(),
                        {"_Write_Mirror.ReadyMessage", {}, {::i2c::type_of<::Mirror::NetworkWriter*>(), ::i2c::type_of<::Mirror::ReadyMessage>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, writer, value);
}
inline ::Mirror::NotReadyMessage Mirror::GeneratedNetworkCode::_Read_Mirror_NotReadyMessage(::Mirror::NetworkReader*  reader)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::GeneratedNetworkCode*>(),
                        {"_Read_Mirror.NotReadyMessage", {}, {::i2c::type_of<::Mirror::NetworkReader*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Mirror::NotReadyMessage>(nullptr, ___internal_method, reader);
}
inline void Mirror::GeneratedNetworkCode::_Write_Mirror_NotReadyMessage(::Mirror::NetworkWriter*  writer, ::Mirror::NotReadyMessage  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::GeneratedNetworkCode*>(),
                        {"_Write_Mirror.NotReadyMessage", {}, {::i2c::type_of<::Mirror::NetworkWriter*>(), ::i2c::type_of<::Mirror::NotReadyMessage>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, writer, value);
}
inline ::Mirror::AddPlayerMessage Mirror::GeneratedNetworkCode::_Read_Mirror_AddPlayerMessage(::Mirror::NetworkReader*  reader)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::GeneratedNetworkCode*>(),
                        {"_Read_Mirror.AddPlayerMessage", {}, {::i2c::type_of<::Mirror::NetworkReader*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Mirror::AddPlayerMessage>(nullptr, ___internal_method, reader);
}
inline void Mirror::GeneratedNetworkCode::_Write_Mirror_AddPlayerMessage(::Mirror::NetworkWriter*  writer, ::Mirror::AddPlayerMessage  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::GeneratedNetworkCode*>(),
                        {"_Write_Mirror.AddPlayerMessage", {}, {::i2c::type_of<::Mirror::NetworkWriter*>(), ::i2c::type_of<::Mirror::AddPlayerMessage>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, writer, value);
}
inline ::Mirror::SceneMessage Mirror::GeneratedNetworkCode::_Read_Mirror_SceneMessage(::Mirror::NetworkReader*  reader)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::GeneratedNetworkCode*>(),
                        {"_Read_Mirror.SceneMessage", {}, {::i2c::type_of<::Mirror::NetworkReader*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Mirror::SceneMessage>(nullptr, ___internal_method, reader);
}
inline ::Mirror::SceneOperation Mirror::GeneratedNetworkCode::_Read_Mirror_SceneOperation(::Mirror::NetworkReader*  reader)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::GeneratedNetworkCode*>(),
                        {"_Read_Mirror.SceneOperation", {}, {::i2c::type_of<::Mirror::NetworkReader*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Mirror::SceneOperation>(nullptr, ___internal_method, reader);
}
inline void Mirror::GeneratedNetworkCode::_Write_Mirror_SceneMessage(::Mirror::NetworkWriter*  writer, ::Mirror::SceneMessage  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::GeneratedNetworkCode*>(),
                        {"_Write_Mirror.SceneMessage", {}, {::i2c::type_of<::Mirror::NetworkWriter*>(), ::i2c::type_of<::Mirror::SceneMessage>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, writer, value);
}
inline void Mirror::GeneratedNetworkCode::_Write_Mirror_SceneOperation(::Mirror::NetworkWriter*  writer, ::Mirror::SceneOperation  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::GeneratedNetworkCode*>(),
                        {"_Write_Mirror.SceneOperation", {}, {::i2c::type_of<::Mirror::NetworkWriter*>(), ::i2c::type_of<::Mirror::SceneOperation>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, writer, value);
}
inline ::Mirror::CommandMessage Mirror::GeneratedNetworkCode::_Read_Mirror_CommandMessage(::Mirror::NetworkReader*  reader)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::GeneratedNetworkCode*>(),
                        {"_Read_Mirror.CommandMessage", {}, {::i2c::type_of<::Mirror::NetworkReader*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Mirror::CommandMessage>(nullptr, ___internal_method, reader);
}
inline void Mirror::GeneratedNetworkCode::_Write_Mirror_CommandMessage(::Mirror::NetworkWriter*  writer, ::Mirror::CommandMessage  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::GeneratedNetworkCode*>(),
                        {"_Write_Mirror.CommandMessage", {}, {::i2c::type_of<::Mirror::NetworkWriter*>(), ::i2c::type_of<::Mirror::CommandMessage>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, writer, value);
}
inline ::Mirror::RpcMessage Mirror::GeneratedNetworkCode::_Read_Mirror_RpcMessage(::Mirror::NetworkReader*  reader)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::GeneratedNetworkCode*>(),
                        {"_Read_Mirror.RpcMessage", {}, {::i2c::type_of<::Mirror::NetworkReader*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Mirror::RpcMessage>(nullptr, ___internal_method, reader);
}
inline void Mirror::GeneratedNetworkCode::_Write_Mirror_RpcMessage(::Mirror::NetworkWriter*  writer, ::Mirror::RpcMessage  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::GeneratedNetworkCode*>(),
                        {"_Write_Mirror.RpcMessage", {}, {::i2c::type_of<::Mirror::NetworkWriter*>(), ::i2c::type_of<::Mirror::RpcMessage>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, writer, value);
}
inline ::Mirror::RpcBufferMessage Mirror::GeneratedNetworkCode::_Read_Mirror_RpcBufferMessage(::Mirror::NetworkReader*  reader)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::GeneratedNetworkCode*>(),
                        {"_Read_Mirror.RpcBufferMessage", {}, {::i2c::type_of<::Mirror::NetworkReader*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Mirror::RpcBufferMessage>(nullptr, ___internal_method, reader);
}
inline void Mirror::GeneratedNetworkCode::_Write_Mirror_RpcBufferMessage(::Mirror::NetworkWriter*  writer, ::Mirror::RpcBufferMessage  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::GeneratedNetworkCode*>(),
                        {"_Write_Mirror.RpcBufferMessage", {}, {::i2c::type_of<::Mirror::NetworkWriter*>(), ::i2c::type_of<::Mirror::RpcBufferMessage>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, writer, value);
}
inline ::Mirror::SpawnMessage Mirror::GeneratedNetworkCode::_Read_Mirror_SpawnMessage(::Mirror::NetworkReader*  reader)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::GeneratedNetworkCode*>(),
                        {"_Read_Mirror.SpawnMessage", {}, {::i2c::type_of<::Mirror::NetworkReader*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Mirror::SpawnMessage>(nullptr, ___internal_method, reader);
}
inline void Mirror::GeneratedNetworkCode::_Write_Mirror_SpawnMessage(::Mirror::NetworkWriter*  writer, ::Mirror::SpawnMessage  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::GeneratedNetworkCode*>(),
                        {"_Write_Mirror.SpawnMessage", {}, {::i2c::type_of<::Mirror::NetworkWriter*>(), ::i2c::type_of<::Mirror::SpawnMessage>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, writer, value);
}
inline ::Mirror::ChangeOwnerMessage Mirror::GeneratedNetworkCode::_Read_Mirror_ChangeOwnerMessage(::Mirror::NetworkReader*  reader)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::GeneratedNetworkCode*>(),
                        {"_Read_Mirror.ChangeOwnerMessage", {}, {::i2c::type_of<::Mirror::NetworkReader*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Mirror::ChangeOwnerMessage>(nullptr, ___internal_method, reader);
}
inline void Mirror::GeneratedNetworkCode::_Write_Mirror_ChangeOwnerMessage(::Mirror::NetworkWriter*  writer, ::Mirror::ChangeOwnerMessage  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::GeneratedNetworkCode*>(),
                        {"_Write_Mirror.ChangeOwnerMessage", {}, {::i2c::type_of<::Mirror::NetworkWriter*>(), ::i2c::type_of<::Mirror::ChangeOwnerMessage>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, writer, value);
}
inline ::Mirror::ObjectSpawnStartedMessage Mirror::GeneratedNetworkCode::_Read_Mirror_ObjectSpawnStartedMessage(::Mirror::NetworkReader*  reader)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::GeneratedNetworkCode*>(),
                        {"_Read_Mirror.ObjectSpawnStartedMessage", {}, {::i2c::type_of<::Mirror::NetworkReader*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Mirror::ObjectSpawnStartedMessage>(nullptr, ___internal_method, reader);
}
inline void Mirror::GeneratedNetworkCode::_Write_Mirror_ObjectSpawnStartedMessage(::Mirror::NetworkWriter*  writer, ::Mirror::ObjectSpawnStartedMessage  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::GeneratedNetworkCode*>(),
                        {"_Write_Mirror.ObjectSpawnStartedMessage", {}, {::i2c::type_of<::Mirror::NetworkWriter*>(), ::i2c::type_of<::Mirror::ObjectSpawnStartedMessage>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, writer, value);
}
inline ::Mirror::ObjectSpawnFinishedMessage Mirror::GeneratedNetworkCode::_Read_Mirror_ObjectSpawnFinishedMessage(::Mirror::NetworkReader*  reader)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::GeneratedNetworkCode*>(),
                        {"_Read_Mirror.ObjectSpawnFinishedMessage", {}, {::i2c::type_of<::Mirror::NetworkReader*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Mirror::ObjectSpawnFinishedMessage>(nullptr, ___internal_method, reader);
}
inline void Mirror::GeneratedNetworkCode::_Write_Mirror_ObjectSpawnFinishedMessage(::Mirror::NetworkWriter*  writer, ::Mirror::ObjectSpawnFinishedMessage  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::GeneratedNetworkCode*>(),
                        {"_Write_Mirror.ObjectSpawnFinishedMessage", {}, {::i2c::type_of<::Mirror::NetworkWriter*>(), ::i2c::type_of<::Mirror::ObjectSpawnFinishedMessage>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, writer, value);
}
inline ::Mirror::ObjectDestroyMessage Mirror::GeneratedNetworkCode::_Read_Mirror_ObjectDestroyMessage(::Mirror::NetworkReader*  reader)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::GeneratedNetworkCode*>(),
                        {"_Read_Mirror.ObjectDestroyMessage", {}, {::i2c::type_of<::Mirror::NetworkReader*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Mirror::ObjectDestroyMessage>(nullptr, ___internal_method, reader);
}
inline void Mirror::GeneratedNetworkCode::_Write_Mirror_ObjectDestroyMessage(::Mirror::NetworkWriter*  writer, ::Mirror::ObjectDestroyMessage  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::GeneratedNetworkCode*>(),
                        {"_Write_Mirror.ObjectDestroyMessage", {}, {::i2c::type_of<::Mirror::NetworkWriter*>(), ::i2c::type_of<::Mirror::ObjectDestroyMessage>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, writer, value);
}
inline ::Mirror::ObjectHideMessage Mirror::GeneratedNetworkCode::_Read_Mirror_ObjectHideMessage(::Mirror::NetworkReader*  reader)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::GeneratedNetworkCode*>(),
                        {"_Read_Mirror.ObjectHideMessage", {}, {::i2c::type_of<::Mirror::NetworkReader*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Mirror::ObjectHideMessage>(nullptr, ___internal_method, reader);
}
inline void Mirror::GeneratedNetworkCode::_Write_Mirror_ObjectHideMessage(::Mirror::NetworkWriter*  writer, ::Mirror::ObjectHideMessage  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::GeneratedNetworkCode*>(),
                        {"_Write_Mirror.ObjectHideMessage", {}, {::i2c::type_of<::Mirror::NetworkWriter*>(), ::i2c::type_of<::Mirror::ObjectHideMessage>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, writer, value);
}
inline ::Mirror::EntityStateMessage Mirror::GeneratedNetworkCode::_Read_Mirror_EntityStateMessage(::Mirror::NetworkReader*  reader)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::GeneratedNetworkCode*>(),
                        {"_Read_Mirror.EntityStateMessage", {}, {::i2c::type_of<::Mirror::NetworkReader*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Mirror::EntityStateMessage>(nullptr, ___internal_method, reader);
}
inline void Mirror::GeneratedNetworkCode::_Write_Mirror_EntityStateMessage(::Mirror::NetworkWriter*  writer, ::Mirror::EntityStateMessage  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::GeneratedNetworkCode*>(),
                        {"_Write_Mirror.EntityStateMessage", {}, {::i2c::type_of<::Mirror::NetworkWriter*>(), ::i2c::type_of<::Mirror::EntityStateMessage>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, writer, value);
}
inline ::Mirror::NetworkPingMessage Mirror::GeneratedNetworkCode::_Read_Mirror_NetworkPingMessage(::Mirror::NetworkReader*  reader)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::GeneratedNetworkCode*>(),
                        {"_Read_Mirror.NetworkPingMessage", {}, {::i2c::type_of<::Mirror::NetworkReader*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Mirror::NetworkPingMessage>(nullptr, ___internal_method, reader);
}
inline void Mirror::GeneratedNetworkCode::_Write_Mirror_NetworkPingMessage(::Mirror::NetworkWriter*  writer, ::Mirror::NetworkPingMessage  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::GeneratedNetworkCode*>(),
                        {"_Write_Mirror.NetworkPingMessage", {}, {::i2c::type_of<::Mirror::NetworkWriter*>(), ::i2c::type_of<::Mirror::NetworkPingMessage>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, writer, value);
}
inline ::Mirror::NetworkPongMessage Mirror::GeneratedNetworkCode::_Read_Mirror_NetworkPongMessage(::Mirror::NetworkReader*  reader)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::GeneratedNetworkCode*>(),
                        {"_Read_Mirror.NetworkPongMessage", {}, {::i2c::type_of<::Mirror::NetworkReader*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Mirror::NetworkPongMessage>(nullptr, ___internal_method, reader);
}
inline void Mirror::GeneratedNetworkCode::_Write_Mirror_NetworkPongMessage(::Mirror::NetworkWriter*  writer, ::Mirror::NetworkPongMessage  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::GeneratedNetworkCode*>(),
                        {"_Write_Mirror.NetworkPongMessage", {}, {::i2c::type_of<::Mirror::NetworkWriter*>(), ::i2c::type_of<::Mirror::NetworkPongMessage>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, writer, value);
}
inline ::Mirror::Authenticators::HouseAuthenticator_InitialialAuthRequestMessage Mirror::GeneratedNetworkCode::_Read_Mirror_Authenticators_HouseAuthenticator_InitialialAuthRequestMessage(::Mirror::NetworkReader*  reader)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::GeneratedNetworkCode*>(),
                        {"_Read_Mirror.Authenticators.HouseAuthenticator/InitialialAuthRequestMessage", {}, {::i2c::type_of<::Mirror::NetworkReader*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Mirror::Authenticators::HouseAuthenticator_InitialialAuthRequestMessage>(nullptr, ___internal_method, reader);
}
inline void Mirror::GeneratedNetworkCode::_Write_Mirror_Authenticators_HouseAuthenticator_InitialialAuthRequestMessage(::Mirror::NetworkWriter*  writer, ::Mirror::Authenticators::HouseAuthenticator_InitialialAuthRequestMessage  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::GeneratedNetworkCode*>(),
                        {"_Write_Mirror.Authenticators.HouseAuthenticator/InitialialAuthRequestMessage", {}, {::i2c::type_of<::Mirror::NetworkWriter*>(), ::i2c::type_of<::Mirror::Authenticators::HouseAuthenticator_InitialialAuthRequestMessage>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, writer, value);
}
inline ::Mirror::Authenticators::HouseAuthenticator_PasswordResponseMessage Mirror::GeneratedNetworkCode::_Read_Mirror_Authenticators_HouseAuthenticator_PasswordResponseMessage(::Mirror::NetworkReader*  reader)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::GeneratedNetworkCode*>(),
                        {"_Read_Mirror.Authenticators.HouseAuthenticator/PasswordResponseMessage", {}, {::i2c::type_of<::Mirror::NetworkReader*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Mirror::Authenticators::HouseAuthenticator_PasswordResponseMessage>(nullptr, ___internal_method, reader);
}
inline void Mirror::GeneratedNetworkCode::_Write_Mirror_Authenticators_HouseAuthenticator_PasswordResponseMessage(::Mirror::NetworkWriter*  writer, ::Mirror::Authenticators::HouseAuthenticator_PasswordResponseMessage  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::GeneratedNetworkCode*>(),
                        {"_Write_Mirror.Authenticators.HouseAuthenticator/PasswordResponseMessage", {}, {::i2c::type_of<::Mirror::NetworkWriter*>(), ::i2c::type_of<::Mirror::Authenticators::HouseAuthenticator_PasswordResponseMessage>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, writer, value);
}
inline ::Mirror::Authenticators::HouseAuthenticator_AuthResponseMessage Mirror::GeneratedNetworkCode::_Read_Mirror_Authenticators_HouseAuthenticator_AuthResponseMessage(::Mirror::NetworkReader*  reader)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::GeneratedNetworkCode*>(),
                        {"_Read_Mirror.Authenticators.HouseAuthenticator/AuthResponseMessage", {}, {::i2c::type_of<::Mirror::NetworkReader*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Mirror::Authenticators::HouseAuthenticator_AuthResponseMessage>(nullptr, ___internal_method, reader);
}
inline void Mirror::GeneratedNetworkCode::_Write_Mirror_Authenticators_HouseAuthenticator_AuthResponseMessage(::Mirror::NetworkWriter*  writer, ::Mirror::Authenticators::HouseAuthenticator_AuthResponseMessage  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::GeneratedNetworkCode*>(),
                        {"_Write_Mirror.Authenticators.HouseAuthenticator/AuthResponseMessage", {}, {::i2c::type_of<::Mirror::NetworkWriter*>(), ::i2c::type_of<::Mirror::Authenticators::HouseAuthenticator_AuthResponseMessage>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, writer, value);
}
inline ::Mirror::Authenticators::HouseAuthenticator_WelcomeMessage Mirror::GeneratedNetworkCode::_Read_Mirror_Authenticators_HouseAuthenticator_WelcomeMessage(::Mirror::NetworkReader*  reader)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::GeneratedNetworkCode*>(),
                        {"_Read_Mirror.Authenticators.HouseAuthenticator/WelcomeMessage", {}, {::i2c::type_of<::Mirror::NetworkReader*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Mirror::Authenticators::HouseAuthenticator_WelcomeMessage>(nullptr, ___internal_method, reader);
}
inline ::GlobalNamespace::PlayerCount Mirror::GeneratedNetworkCode::_Read_PlayerCount(::Mirror::NetworkReader*  reader)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::GeneratedNetworkCode*>(),
                        {"_Read_PlayerCount", {}, {::i2c::type_of<::Mirror::NetworkReader*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::PlayerCount>(nullptr, ___internal_method, reader);
}
inline void Mirror::GeneratedNetworkCode::_Write_Mirror_Authenticators_HouseAuthenticator_WelcomeMessage(::Mirror::NetworkWriter*  writer, ::Mirror::Authenticators::HouseAuthenticator_WelcomeMessage  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::GeneratedNetworkCode*>(),
                        {"_Write_Mirror.Authenticators.HouseAuthenticator/WelcomeMessage", {}, {::i2c::type_of<::Mirror::NetworkWriter*>(), ::i2c::type_of<::Mirror::Authenticators::HouseAuthenticator_WelcomeMessage>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, writer, value);
}
inline void Mirror::GeneratedNetworkCode::_Write_PlayerCount(::Mirror::NetworkWriter*  writer, ::GlobalNamespace::PlayerCount  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::GeneratedNetworkCode*>(),
                        {"_Write_PlayerCount", {}, {::i2c::type_of<::Mirror::NetworkWriter*>(), ::i2c::type_of<::GlobalNamespace::PlayerCount>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, writer, value);
}
inline void Mirror::GeneratedNetworkCode::_Write_GourdFlag_GourdState(::Mirror::NetworkWriter*  writer, ::GlobalNamespace::GourdFlag_GourdState  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::GeneratedNetworkCode*>(),
                        {"_Write_GourdFlag/GourdState", {}, {::i2c::type_of<::Mirror::NetworkWriter*>(), ::i2c::type_of<::GlobalNamespace::GourdFlag_GourdState>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, writer, value);
}
inline ::GlobalNamespace::GourdFlag_GourdState Mirror::GeneratedNetworkCode::_Read_GourdFlag_GourdState(::Mirror::NetworkReader*  reader)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::GeneratedNetworkCode*>(),
                        {"_Read_GourdFlag/GourdState", {}, {::i2c::type_of<::Mirror::NetworkReader*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::GourdFlag_GourdState>(nullptr, ___internal_method, reader);
}
inline ::GlobalNamespace::SeaShell_ShellReference Mirror::GeneratedNetworkCode::_Read_SeaShell_ShellReference(::Mirror::NetworkReader*  reader)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::GeneratedNetworkCode*>(),
                        {"_Read_SeaShell/ShellReference", {}, {::i2c::type_of<::Mirror::NetworkReader*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::SeaShell_ShellReference>(nullptr, ___internal_method, reader);
}
inline void Mirror::GeneratedNetworkCode::_Write_SeaShell_ShellReference(::Mirror::NetworkWriter*  writer, ::GlobalNamespace::SeaShell_ShellReference  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::GeneratedNetworkCode*>(),
                        {"_Write_SeaShell/ShellReference", {}, {::i2c::type_of<::Mirror::NetworkWriter*>(), ::i2c::type_of<::GlobalNamespace::SeaShell_ShellReference>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, writer, value);
}
inline ::GlobalNamespace::PeckContext Mirror::GeneratedNetworkCode::_Read_PeckContext(::Mirror::NetworkReader*  reader)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::GeneratedNetworkCode*>(),
                        {"_Read_PeckContext", {}, {::i2c::type_of<::Mirror::NetworkReader*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::PeckContext>(nullptr, ___internal_method, reader);
}
inline void Mirror::GeneratedNetworkCode::_Write_PeckContext(::Mirror::NetworkWriter*  writer, ::GlobalNamespace::PeckContext  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::GeneratedNetworkCode*>(),
                        {"_Write_PeckContext", {}, {::i2c::type_of<::Mirror::NetworkWriter*>(), ::i2c::type_of<::GlobalNamespace::PeckContext>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, writer, value);
}
inline void Mirror::GeneratedNetworkCode::_Write_PlayerHeldInformation(::Mirror::NetworkWriter*  writer, ::GlobalNamespace::PlayerHeldInformation  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::GeneratedNetworkCode*>(),
                        {"_Write_PlayerHeldInformation", {}, {::i2c::type_of<::Mirror::NetworkWriter*>(), ::i2c::type_of<::GlobalNamespace::PlayerHeldInformation>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, writer, value);
}
inline void Mirror::GeneratedNetworkCode::_Write_PlayerHeldInformation_HeldType(::Mirror::NetworkWriter*  writer, ::GlobalNamespace::PlayerHeldInformation_HeldType  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::GeneratedNetworkCode*>(),
                        {"_Write_PlayerHeldInformation/HeldType", {}, {::i2c::type_of<::Mirror::NetworkWriter*>(), ::i2c::type_of<::GlobalNamespace::PlayerHeldInformation_HeldType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, writer, value);
}
inline ::GlobalNamespace::PlayerHeldInformation Mirror::GeneratedNetworkCode::_Read_PlayerHeldInformation(::Mirror::NetworkReader*  reader)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::GeneratedNetworkCode*>(),
                        {"_Read_PlayerHeldInformation", {}, {::i2c::type_of<::Mirror::NetworkReader*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::PlayerHeldInformation>(nullptr, ___internal_method, reader);
}
inline ::GlobalNamespace::PlayerHeldInformation_HeldType Mirror::GeneratedNetworkCode::_Read_PlayerHeldInformation_HeldType(::Mirror::NetworkReader*  reader)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::GeneratedNetworkCode*>(),
                        {"_Read_PlayerHeldInformation/HeldType", {}, {::i2c::type_of<::Mirror::NetworkReader*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::PlayerHeldInformation_HeldType>(nullptr, ___internal_method, reader);
}
inline void Mirror::GeneratedNetworkCode::_Write_PlayerLooks_LookPart(::Mirror::NetworkWriter*  writer, ::GlobalNamespace::PlayerLooks_LookPart  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::GeneratedNetworkCode*>(),
                        {"_Write_PlayerLooks/LookPart", {}, {::i2c::type_of<::Mirror::NetworkWriter*>(), ::i2c::type_of<::GlobalNamespace::PlayerLooks_LookPart>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, writer, value);
}
inline ::GlobalNamespace::PlayerLooks_LookPart Mirror::GeneratedNetworkCode::_Read_PlayerLooks_LookPart(::Mirror::NetworkReader*  reader)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::GeneratedNetworkCode*>(),
                        {"_Read_PlayerLooks/LookPart", {}, {::i2c::type_of<::Mirror::NetworkReader*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::PlayerLooks_LookPart>(nullptr, ___internal_method, reader);
}
inline void Mirror::GeneratedNetworkCode::_Write_Platforms(::Mirror::NetworkWriter*  writer, ::GlobalNamespace::Platforms  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::GeneratedNetworkCode*>(),
                        {"_Write_Platforms", {}, {::i2c::type_of<::Mirror::NetworkWriter*>(), ::i2c::type_of<::GlobalNamespace::Platforms>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, writer, value);
}
inline ::GlobalNamespace::Platforms Mirror::GeneratedNetworkCode::_Read_Platforms(::Mirror::NetworkReader*  reader)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::GeneratedNetworkCode*>(),
                        {"_Read_Platforms", {}, {::i2c::type_of<::Mirror::NetworkReader*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::Platforms>(nullptr, ___internal_method, reader);
}
inline void Mirror::GeneratedNetworkCode::_Write_ShellReferenceWithActionNumber(::Mirror::NetworkWriter*  writer, ::GlobalNamespace::ShellReferenceWithActionNumber  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::GeneratedNetworkCode*>(),
                        {"_Write_ShellReferenceWithActionNumber", {}, {::i2c::type_of<::Mirror::NetworkWriter*>(), ::i2c::type_of<::GlobalNamespace::ShellReferenceWithActionNumber>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, writer, value);
}
inline ::GlobalNamespace::ShellReferenceWithActionNumber Mirror::GeneratedNetworkCode::_Read_ShellReferenceWithActionNumber(::Mirror::NetworkReader*  reader)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::GeneratedNetworkCode*>(),
                        {"_Read_ShellReferenceWithActionNumber", {}, {::i2c::type_of<::Mirror::NetworkReader*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::ShellReferenceWithActionNumber>(nullptr, ___internal_method, reader);
}
inline void Mirror::GeneratedNetworkCode::_Write_HouseHouse_Dream_DreamController_LookIdTrio(::Mirror::NetworkWriter*  writer, ::HouseHouse::Dream::DreamController_LookIdTrio  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::GeneratedNetworkCode*>(),
                        {"_Write_HouseHouse.Dream.DreamController/LookIdTrio", {}, {::i2c::type_of<::Mirror::NetworkWriter*>(), ::i2c::type_of<::HouseHouse::Dream::DreamController_LookIdTrio>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, writer, value);
}
inline ::HouseHouse::Dream::DreamController_LookIdTrio Mirror::GeneratedNetworkCode::_Read_HouseHouse_Dream_DreamController_LookIdTrio(::Mirror::NetworkReader*  reader)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::GeneratedNetworkCode*>(),
                        {"_Read_HouseHouse.Dream.DreamController/LookIdTrio", {}, {::i2c::type_of<::Mirror::NetworkReader*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::HouseHouse::Dream::DreamController_LookIdTrio>(nullptr, ___internal_method, reader);
}
inline void Mirror::GeneratedNetworkCode::InitReadWriters()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::GeneratedNetworkCode*>(),
                        {"InitReadWriters", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::Mirror::GeneratedNetworkCode::GeneratedNetworkCode()   {
}

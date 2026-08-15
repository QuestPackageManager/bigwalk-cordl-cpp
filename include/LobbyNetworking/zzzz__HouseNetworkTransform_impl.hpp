#pragma once
// IWYU pragma private; include "LobbyNetworking/HouseNetworkTransform.hpp"
#include "Mirror/zzzz__NetworkBehaviour_impl.hpp"
#include "System/zzzz__Nullable_1_impl.hpp"
#include "Unity/Mathematics/zzzz__float3_impl.hpp"
#include "UnityEngine/zzzz__Quaternion_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "LobbyNetworking/zzzz__HouseNetworkTransform_def.hpp"
#include "GlobalNamespace/zzzz__StickyPlatform_def.hpp"
#include "LobbyNetworking/zzzz__HouseNetworkTransformManager_def.hpp"
#include "LobbyNetworking/zzzz__HouseNetworkTransform_def.hpp"
#include "Mirror/zzzz__NetworkBehaviour_def.hpp"
#include "Mirror/zzzz__NetworkConnectionToClient_def.hpp"
#include "Mirror/zzzz__NetworkReader_def.hpp"
#include "Unity/Mathematics/zzzz__float3_def.hpp"
#include "Unity/Mathematics/zzzz__quaternion_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Rigidbody_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::LobbyNetworking::HouseNetworkTransform_Goal._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::LobbyNetworking::HouseNetworkTransform_Goal::*)(bool, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, float_t)>(&::LobbyNetworking::HouseNetworkTransform_Goal::_ctor)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x1803c6de0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LobbyNetworking::HouseNetworkTransform_Goal>(),
                        {".ctor", {}, {::i2c::type_of<bool>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
inline void LobbyNetworking::HouseNetworkTransform_Goal::_ctor(bool  isValid, ::UnityEngine::Vector3  position, ::UnityEngine::Quaternion  rotation, float_t  timeStamp)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LobbyNetworking::HouseNetworkTransform_Goal>(),
                        {".ctor", {}, {::i2c::type_of<bool>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, isValid, position, rotation, timeStamp);
}
// Ctor Parameters [CppParam { name: "isValid", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "position", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}") }, CppParam { name: "rotation", ty: "::UnityEngine::Quaternion", modifiers: "", def_value: Some("{}") }, CppParam { name: "timeStamp", ty: "float_t", modifiers: "", def_value: Some("{}") }]
constexpr ::LobbyNetworking::HouseNetworkTransform_Goal::HouseNetworkTransform_Goal(bool  isValid, ::UnityEngine::Vector3  position, ::UnityEngine::Quaternion  rotation, float_t  timeStamp) noexcept  {
this->isValid = isValid;
this->position = position;
this->rotation = rotation;
this->timeStamp = timeStamp;
}
// Ctor Parameters []
constexpr ::LobbyNetworking::HouseNetworkTransform_Goal::HouseNetworkTransform_Goal()   {
}
//  Writing Method size for method: ::LobbyNetworking::HouseNetworkTransform.get_stickyPlatform
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::StickyPlatform> (::LobbyNetworking::HouseNetworkTransform::*)()>(&::LobbyNetworking::HouseNetworkTransform::get_stickyPlatform)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18039fe40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LobbyNetworking::HouseNetworkTransform*>(),
                        {"get_stickyPlatform", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LobbyNetworking::HouseNetworkTransform.set_stickyPlatform
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::LobbyNetworking::HouseNetworkTransform::*)(::GlobalNamespace::StickyPlatform*)>(&::LobbyNetworking::HouseNetworkTransform::set_stickyPlatform)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x1803cb780;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LobbyNetworking::HouseNetworkTransform*>(),
                        {"set_stickyPlatform", {}, {::i2c::type_of<::GlobalNamespace::StickyPlatform*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LobbyNetworking::HouseNetworkTransform.get_targetPosition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::LobbyNetworking::HouseNetworkTransform::*)()>(&::LobbyNetworking::HouseNetworkTransform::get_targetPosition)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x1803cb5d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LobbyNetworking::HouseNetworkTransform*>(),
                        {"get_targetPosition", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LobbyNetworking::HouseNetworkTransform.set_targetPosition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::LobbyNetworking::HouseNetworkTransform::*)(::UnityEngine::Vector3)>(&::LobbyNetworking::HouseNetworkTransform::set_targetPosition)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x1803cb8d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LobbyNetworking::HouseNetworkTransform*>(),
                        {"set_targetPosition", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LobbyNetworking::HouseNetworkTransform.get_targetRotation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Quaternion (::LobbyNetworking::HouseNetworkTransform::*)()>(&::LobbyNetworking::HouseNetworkTransform::get_targetRotation)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1803cb750;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LobbyNetworking::HouseNetworkTransform*>(),
                        {"get_targetRotation", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LobbyNetworking::HouseNetworkTransform.set_targetRotation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::LobbyNetworking::HouseNetworkTransform::*)(::UnityEngine::Quaternion)>(&::LobbyNetworking::HouseNetworkTransform::set_targetRotation)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1803cba10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LobbyNetworking::HouseNetworkTransform*>(),
                        {"set_targetRotation", {}, {::i2c::type_of<::UnityEngine::Quaternion>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LobbyNetworking::HouseNetworkTransform.HasMoved
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::LobbyNetworking::HouseNetworkTransform::*)(::Unity::Mathematics::float3, ::Unity::Mathematics::quaternion)>(&::LobbyNetworking::HouseNetworkTransform::HasMoved)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x1803c98d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LobbyNetworking::HouseNetworkTransform*>(),
                        {"HasMoved", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::quaternion>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LobbyNetworking::HouseNetworkTransform.get_isOwned
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::LobbyNetworking::HouseNetworkTransform::*)()>(&::LobbyNetworking::HouseNetworkTransform::get_isOwned)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1803cb590;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LobbyNetworking::HouseNetworkTransform*>(),
                        {"get_isOwned", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LobbyNetworking::HouseNetworkTransform.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::LobbyNetworking::HouseNetworkTransform::*)()>(&::LobbyNetworking::HouseNetworkTransform::Awake)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1803c9010;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LobbyNetworking::HouseNetworkTransform*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LobbyNetworking::HouseNetworkTransform.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::LobbyNetworking::HouseNetworkTransform::*)()>(&::LobbyNetworking::HouseNetworkTransform::Start)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1803caf10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LobbyNetworking::HouseNetworkTransform*>(),
                        {"Start", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LobbyNetworking::HouseNetworkTransform.AwakeFixedUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::LobbyNetworking::HouseNetworkTransform::*)()>(&::LobbyNetworking::HouseNetworkTransform::AwakeFixedUpdate)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1803c8fc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LobbyNetworking::HouseNetworkTransform*>(),
                        {"AwakeFixedUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LobbyNetworking::HouseNetworkTransform.OwnerUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::LobbyNetworking::HouseNetworkTransform::*)(bool)>(&::LobbyNetworking::HouseNetworkTransform::OwnerUpdate)> {
  constexpr static std::size_t size = 0x5f0;
  constexpr static std::size_t addrs = 0x1803ca380;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LobbyNetworking::HouseNetworkTransform*>(),
                        {"OwnerUpdate", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LobbyNetworking::HouseNetworkTransform.ClientUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::LobbyNetworking::HouseNetworkTransform::*)()>(&::LobbyNetworking::HouseNetworkTransform::ClientUpdate)> {
  constexpr static std::size_t size = 0x530;
  constexpr static std::size_t addrs = 0x1803c9060;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LobbyNetworking::HouseNetworkTransform*>(),
                        {"ClientUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LobbyNetworking::HouseNetworkTransform.RpcMove
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::LobbyNetworking::HouseNetworkTransform::*)(::UnityEngine::Vector3, uint32_t, uint16_t)>(&::LobbyNetworking::HouseNetworkTransform::RpcMove)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x1803cacc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LobbyNetworking::HouseNetworkTransform*>(),
                        {"RpcMove", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint16_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LobbyNetworking::HouseNetworkTransform.CmdMove
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::LobbyNetworking::HouseNetworkTransform::*)(::UnityEngine::Vector3, uint32_t, uint16_t)>(&::LobbyNetworking::HouseNetworkTransform::CmdMove)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x1803c9590;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LobbyNetworking::HouseNetworkTransform*>(),
                        {"CmdMove", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint16_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LobbyNetworking::HouseNetworkTransform.ProcessMove
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::LobbyNetworking::HouseNetworkTransform::*)(::UnityEngine::Vector3, uint32_t, uint16_t)>(&::LobbyNetworking::HouseNetworkTransform::ProcessMove)> {
  constexpr static std::size_t size = 0x350;
  constexpr static std::size_t addrs = 0x1803ca970;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LobbyNetworking::HouseNetworkTransform*>(),
                        {"ProcessMove", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint16_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LobbyNetworking::HouseNetworkTransform.HasChangedVelocity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Unity::Mathematics::float3, ::Unity::Mathematics::float3, ::Unity::Mathematics::float3, ::Unity::Mathematics::float3)>(&::LobbyNetworking::HouseNetworkTransform::HasChangedVelocity)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x1803c9830;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LobbyNetworking::HouseNetworkTransform*>(),
                        {"HasChangedVelocity", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LobbyNetworking::HouseNetworkTransform.SyncVelocity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::LobbyNetworking::HouseNetworkTransform::*)(::Unity::Mathematics::float3, ::Unity::Mathematics::float3)>(&::LobbyNetworking::HouseNetworkTransform::SyncVelocity)> {
  constexpr static std::size_t size = 0x210;
  constexpr static std::size_t addrs = 0x1803caf90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LobbyNetworking::HouseNetworkTransform*>(),
                        {"SyncVelocity", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LobbyNetworking::HouseNetworkTransform.RpcVelocity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::LobbyNetworking::HouseNetworkTransform::*)(::UnityEngine::Vector3, ::UnityEngine::Vector3)>(&::LobbyNetworking::HouseNetworkTransform::RpcVelocity)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x1803cadd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LobbyNetworking::HouseNetworkTransform*>(),
                        {"RpcVelocity", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LobbyNetworking::HouseNetworkTransform.CmdVelocity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::LobbyNetworking::HouseNetworkTransform::*)(::UnityEngine::Vector3, ::UnityEngine::Vector3)>(&::LobbyNetworking::HouseNetworkTransform::CmdVelocity)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x1803c96a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LobbyNetworking::HouseNetworkTransform*>(),
                        {"CmdVelocity", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LobbyNetworking::HouseNetworkTransform.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::LobbyNetworking::HouseNetworkTransform::*)()>(&::LobbyNetworking::HouseNetworkTransform::OnEnable)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1803ca080;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LobbyNetworking::HouseNetworkTransform*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LobbyNetworking::HouseNetworkTransform.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::LobbyNetworking::HouseNetworkTransform::*)()>(&::LobbyNetworking::HouseNetworkTransform::OnDisable)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803ca070;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LobbyNetworking::HouseNetworkTransform*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LobbyNetworking::HouseNetworkTransform.CanSleep
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::LobbyNetworking::HouseNetworkTransform::*)()>(&::LobbyNetworking::HouseNetworkTransform::CanSleep)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1803c9040;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LobbyNetworking::HouseNetworkTransform*>(),
                        {"CanSleep", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LobbyNetworking::HouseNetworkTransform.GetTrackingData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::LobbyNetworking::HouseNetworkTransformManager_TransformJobData (::LobbyNetworking::HouseNetworkTransform::*)()>(&::LobbyNetworking::HouseNetworkTransform::GetTrackingData)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1803c97a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LobbyNetworking::HouseNetworkTransform*>(),
                        {"GetTrackingData", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LobbyNetworking::HouseNetworkTransform.OnStartServer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::LobbyNetworking::HouseNetworkTransform::*)()>(&::LobbyNetworking::HouseNetworkTransform::OnStartServer)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x1803ca140;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::LobbyNetworking::HouseNetworkTransform*>(),
                    {::i2c::class_of<::LobbyNetworking::HouseNetworkTransform*>(), 9}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LobbyNetworking::HouseNetworkTransform.OnStopServer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::LobbyNetworking::HouseNetworkTransform::*)()>(&::LobbyNetworking::HouseNetworkTransform::OnStopServer)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x1803ca270;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::LobbyNetworking::HouseNetworkTransform*>(),
                    {::i2c::class_of<::LobbyNetworking::HouseNetworkTransform*>(), 10}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LobbyNetworking::HouseNetworkTransform.OnPlayerConnected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::LobbyNetworking::HouseNetworkTransform::*)(::Mirror::NetworkConnectionToClient*)>(&::LobbyNetworking::HouseNetworkTransform::OnPlayerConnected)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1803ca0e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LobbyNetworking::HouseNetworkTransform*>(),
                        {"OnPlayerConnected", {}, {::i2c::type_of<::Mirror::NetworkConnectionToClient*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LobbyNetworking::HouseNetworkTransform.StartLocalCooldown
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::LobbyNetworking::HouseNetworkTransform::*)()>(&::LobbyNetworking::HouseNetworkTransform::StartLocalCooldown)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1803caed0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LobbyNetworking::HouseNetworkTransform*>(),
                        {"StartLocalCooldown", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LobbyNetworking::HouseNetworkTransform.get_IsRestingForPlayerMovement
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::LobbyNetworking::HouseNetworkTransform::*)()>(&::LobbyNetworking::HouseNetworkTransform::get_IsRestingForPlayerMovement)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1803cb550;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LobbyNetworking::HouseNetworkTransform*>(),
                        {"get_IsRestingForPlayerMovement", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LobbyNetworking::HouseNetworkTransform._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::LobbyNetworking::HouseNetworkTransform::*)()>(&::LobbyNetworking::HouseNetworkTransform::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1803cb530;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LobbyNetworking::HouseNetworkTransform*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LobbyNetworking::HouseNetworkTransform.MirrorProcessed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::LobbyNetworking::HouseNetworkTransform::*)()>(&::LobbyNetworking::HouseNetworkTransform::MirrorProcessed)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LobbyNetworking::HouseNetworkTransform*>(),
                        {"MirrorProcessed", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LobbyNetworking::HouseNetworkTransform.UserCode_RpcMove__Vector3__UInt32__UInt16
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::LobbyNetworking::HouseNetworkTransform::*)(::UnityEngine::Vector3, uint32_t, uint16_t)>(&::LobbyNetworking::HouseNetworkTransform::UserCode_RpcMove__Vector3__UInt32__UInt16)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x1803cb270;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LobbyNetworking::HouseNetworkTransform*>(),
                        {"UserCode_RpcMove__Vector3__UInt32__UInt16", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint16_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LobbyNetworking::HouseNetworkTransform.InvokeUserCode_RpcMove__Vector3__UInt32__UInt16
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Mirror::NetworkBehaviour*, ::Mirror::NetworkReader*, ::Mirror::NetworkConnectionToClient*)>(&::LobbyNetworking::HouseNetworkTransform::InvokeUserCode_RpcMove__Vector3__UInt32__UInt16)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x1803c9d70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LobbyNetworking::HouseNetworkTransform*>(),
                        {"InvokeUserCode_RpcMove__Vector3__UInt32__UInt16", {}, {::i2c::type_of<::Mirror::NetworkBehaviour*>(), ::i2c::type_of<::Mirror::NetworkReader*>(), ::i2c::type_of<::Mirror::NetworkConnectionToClient*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LobbyNetworking::HouseNetworkTransform.UserCode_CmdMove__Vector3__UInt32__UInt16
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::LobbyNetworking::HouseNetworkTransform::*)(::UnityEngine::Vector3, uint32_t, uint16_t)>(&::LobbyNetworking::HouseNetworkTransform::UserCode_CmdMove__Vector3__UInt32__UInt16)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1803cb1a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LobbyNetworking::HouseNetworkTransform*>(),
                        {"UserCode_CmdMove__Vector3__UInt32__UInt16", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint16_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LobbyNetworking::HouseNetworkTransform.InvokeUserCode_CmdMove__Vector3__UInt32__UInt16
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Mirror::NetworkBehaviour*, ::Mirror::NetworkReader*, ::Mirror::NetworkConnectionToClient*)>(&::LobbyNetworking::HouseNetworkTransform::InvokeUserCode_CmdMove__Vector3__UInt32__UInt16)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x1803c9a80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LobbyNetworking::HouseNetworkTransform*>(),
                        {"InvokeUserCode_CmdMove__Vector3__UInt32__UInt16", {}, {::i2c::type_of<::Mirror::NetworkBehaviour*>(), ::i2c::type_of<::Mirror::NetworkReader*>(), ::i2c::type_of<::Mirror::NetworkConnectionToClient*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LobbyNetworking::HouseNetworkTransform.UserCode_RpcVelocity__Vector3__Vector3
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::LobbyNetworking::HouseNetworkTransform::*)(::UnityEngine::Vector3, ::UnityEngine::Vector3)>(&::LobbyNetworking::HouseNetworkTransform::UserCode_RpcVelocity__Vector3__Vector3)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x1803cb320;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LobbyNetworking::HouseNetworkTransform*>(),
                        {"UserCode_RpcVelocity__Vector3__Vector3", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LobbyNetworking::HouseNetworkTransform.InvokeUserCode_RpcVelocity__Vector3__Vector3
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Mirror::NetworkBehaviour*, ::Mirror::NetworkReader*, ::Mirror::NetworkConnectionToClient*)>(&::LobbyNetworking::HouseNetworkTransform::InvokeUserCode_RpcVelocity__Vector3__Vector3)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x1803c9f00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LobbyNetworking::HouseNetworkTransform*>(),
                        {"InvokeUserCode_RpcVelocity__Vector3__Vector3", {}, {::i2c::type_of<::Mirror::NetworkBehaviour*>(), ::i2c::type_of<::Mirror::NetworkReader*>(), ::i2c::type_of<::Mirror::NetworkConnectionToClient*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LobbyNetworking::HouseNetworkTransform.UserCode_CmdVelocity__Vector3__Vector3
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::LobbyNetworking::HouseNetworkTransform::*)(::UnityEngine::Vector3, ::UnityEngine::Vector3)>(&::LobbyNetworking::HouseNetworkTransform::UserCode_CmdVelocity__Vector3__Vector3)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1803cb230;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LobbyNetworking::HouseNetworkTransform*>(),
                        {"UserCode_CmdVelocity__Vector3__Vector3", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LobbyNetworking::HouseNetworkTransform.InvokeUserCode_CmdVelocity__Vector3__Vector3
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Mirror::NetworkBehaviour*, ::Mirror::NetworkReader*, ::Mirror::NetworkConnectionToClient*)>(&::LobbyNetworking::HouseNetworkTransform::InvokeUserCode_CmdVelocity__Vector3__Vector3)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x1803c9c10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LobbyNetworking::HouseNetworkTransform*>(),
                        {"InvokeUserCode_CmdVelocity__Vector3__Vector3", {}, {::i2c::type_of<::Mirror::NetworkBehaviour*>(), ::i2c::type_of<::Mirror::NetworkReader*>(), ::i2c::type_of<::Mirror::NetworkConnectionToClient*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Rigidbody>& LobbyNetworking::HouseNetworkTransform::__cordl_internal_get__target()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____target;
}
constexpr ::UnityW<::UnityEngine::Rigidbody> const& LobbyNetworking::HouseNetworkTransform::__cordl_internal_get__target() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____target;
}
constexpr void LobbyNetworking::HouseNetworkTransform::__cordl_internal_set__target(::UnityW<::UnityEngine::Rigidbody>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____target = value;
}
constexpr ::UnityW<::GlobalNamespace::StickyPlatform>& LobbyNetworking::HouseNetworkTransform::__cordl_internal_get__stickyPlatform()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____stickyPlatform;
}
constexpr ::UnityW<::GlobalNamespace::StickyPlatform> const& LobbyNetworking::HouseNetworkTransform::__cordl_internal_get__stickyPlatform() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____stickyPlatform;
}
constexpr void LobbyNetworking::HouseNetworkTransform::__cordl_internal_set__stickyPlatform(::UnityW<::GlobalNamespace::StickyPlatform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____stickyPlatform = value;
}
constexpr ::UnityEngine::Vector3& LobbyNetworking::HouseNetworkTransform::__cordl_internal_get_rotationDampVelocity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rotationDampVelocity;
}
constexpr ::UnityEngine::Vector3 const& LobbyNetworking::HouseNetworkTransform::__cordl_internal_get_rotationDampVelocity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rotationDampVelocity;
}
constexpr void LobbyNetworking::HouseNetworkTransform::__cordl_internal_set_rotationDampVelocity(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rotationDampVelocity = value;
}
constexpr ::UnityEngine::Vector3& LobbyNetworking::HouseNetworkTransform::__cordl_internal_get_positionDampVelocity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___positionDampVelocity;
}
constexpr ::UnityEngine::Vector3 const& LobbyNetworking::HouseNetworkTransform::__cordl_internal_get_positionDampVelocity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___positionDampVelocity;
}
constexpr void LobbyNetworking::HouseNetworkTransform::__cordl_internal_set_positionDampVelocity(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___positionDampVelocity = value;
}
constexpr float_t& LobbyNetworking::HouseNetworkTransform::__cordl_internal_get_positionDampSmoothTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___positionDampSmoothTime;
}
constexpr float_t const& LobbyNetworking::HouseNetworkTransform::__cordl_internal_get_positionDampSmoothTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___positionDampSmoothTime;
}
constexpr void LobbyNetworking::HouseNetworkTransform::__cordl_internal_set_positionDampSmoothTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___positionDampSmoothTime = value;
}
constexpr float_t& LobbyNetworking::HouseNetworkTransform::__cordl_internal_get_waitBeforeTelepot()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___waitBeforeTelepot;
}
constexpr float_t const& LobbyNetworking::HouseNetworkTransform::__cordl_internal_get_waitBeforeTelepot() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___waitBeforeTelepot;
}
constexpr void LobbyNetworking::HouseNetworkTransform::__cordl_internal_set_waitBeforeTelepot(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___waitBeforeTelepot = value;
}
constexpr bool& LobbyNetworking::HouseNetworkTransform::__cordl_internal_get_isPlayer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isPlayer;
}
constexpr bool const& LobbyNetworking::HouseNetworkTransform::__cordl_internal_get_isPlayer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isPlayer;
}
constexpr void LobbyNetworking::HouseNetworkTransform::__cordl_internal_set_isPlayer(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___isPlayer = value;
}
constexpr bool& LobbyNetworking::HouseNetworkTransform::__cordl_internal_get_preventRotationTeleport()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___preventRotationTeleport;
}
constexpr bool const& LobbyNetworking::HouseNetworkTransform::__cordl_internal_get_preventRotationTeleport() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___preventRotationTeleport;
}
constexpr void LobbyNetworking::HouseNetworkTransform::__cordl_internal_set_preventRotationTeleport(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___preventRotationTeleport = value;
}
constexpr bool& LobbyNetworking::HouseNetworkTransform::__cordl_internal_get_convertPositionOnPlatformChange()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___convertPositionOnPlatformChange;
}
constexpr bool const& LobbyNetworking::HouseNetworkTransform::__cordl_internal_get_convertPositionOnPlatformChange() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___convertPositionOnPlatformChange;
}
constexpr void LobbyNetworking::HouseNetworkTransform::__cordl_internal_set_convertPositionOnPlatformChange(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___convertPositionOnPlatformChange = value;
}
constexpr bool& LobbyNetworking::HouseNetworkTransform::__cordl_internal_get_syncOnSpawn()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___syncOnSpawn;
}
constexpr bool const& LobbyNetworking::HouseNetworkTransform::__cordl_internal_get_syncOnSpawn() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___syncOnSpawn;
}
constexpr void LobbyNetworking::HouseNetworkTransform::__cordl_internal_set_syncOnSpawn(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___syncOnSpawn = value;
}
constexpr bool& LobbyNetworking::HouseNetworkTransform::__cordl_internal_get_syncVelocity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___syncVelocity;
}
constexpr bool const& LobbyNetworking::HouseNetworkTransform::__cordl_internal_get_syncVelocity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___syncVelocity;
}
constexpr void LobbyNetworking::HouseNetworkTransform::__cordl_internal_set_syncVelocity(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___syncVelocity = value;
}
constexpr bool& LobbyNetworking::HouseNetworkTransform::__cordl_internal_get_applyInterpolatedVelocity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___applyInterpolatedVelocity;
}
constexpr bool const& LobbyNetworking::HouseNetworkTransform::__cordl_internal_get_applyInterpolatedVelocity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___applyInterpolatedVelocity;
}
constexpr void LobbyNetworking::HouseNetworkTransform::__cordl_internal_set_applyInterpolatedVelocity(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___applyInterpolatedVelocity = value;
}
constexpr ::System::Nullable_1<float_t>& LobbyNetworking::HouseNetworkTransform::__cordl_internal_get_remainingCooldownDuration()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___remainingCooldownDuration;
}
constexpr ::System::Nullable_1<float_t> const& LobbyNetworking::HouseNetworkTransform::__cordl_internal_get_remainingCooldownDuration() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___remainingCooldownDuration;
}
constexpr void LobbyNetworking::HouseNetworkTransform::__cordl_internal_set_remainingCooldownDuration(::System::Nullable_1<float_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___remainingCooldownDuration = value;
}
constexpr bool& LobbyNetworking::HouseNetworkTransform::__cordl_internal_get_logVerbose()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___logVerbose;
}
constexpr bool const& LobbyNetworking::HouseNetworkTransform::__cordl_internal_get_logVerbose() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___logVerbose;
}
constexpr void LobbyNetworking::HouseNetworkTransform::__cordl_internal_set_logVerbose(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___logVerbose = value;
}
constexpr ::LobbyNetworking::HouseNetworkTransform_Goal& LobbyNetworking::HouseNetworkTransform::__cordl_internal_get_goal()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___goal;
}
constexpr ::LobbyNetworking::HouseNetworkTransform_Goal const& LobbyNetworking::HouseNetworkTransform::__cordl_internal_get_goal() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___goal;
}
constexpr void LobbyNetworking::HouseNetworkTransform::__cordl_internal_set_goal(::LobbyNetworking::HouseNetworkTransform_Goal  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___goal = value;
}
constexpr ::Unity::Mathematics::float3& LobbyNetworking::HouseNetworkTransform::__cordl_internal_get__syncedPosition()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____syncedPosition;
}
constexpr ::Unity::Mathematics::float3 const& LobbyNetworking::HouseNetworkTransform::__cordl_internal_get__syncedPosition() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____syncedPosition;
}
constexpr void LobbyNetworking::HouseNetworkTransform::__cordl_internal_set__syncedPosition(::Unity::Mathematics::float3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____syncedPosition = value;
}
constexpr ::UnityEngine::Quaternion& LobbyNetworking::HouseNetworkTransform::__cordl_internal_get__syncedRotation()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____syncedRotation;
}
constexpr ::UnityEngine::Quaternion const& LobbyNetworking::HouseNetworkTransform::__cordl_internal_get__syncedRotation() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____syncedRotation;
}
constexpr void LobbyNetworking::HouseNetworkTransform::__cordl_internal_set__syncedRotation(::UnityEngine::Quaternion  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____syncedRotation = value;
}
constexpr ::Unity::Mathematics::float3& LobbyNetworking::HouseNetworkTransform::__cordl_internal_get__syncedVelocity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____syncedVelocity;
}
constexpr ::Unity::Mathematics::float3 const& LobbyNetworking::HouseNetworkTransform::__cordl_internal_get__syncedVelocity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____syncedVelocity;
}
constexpr void LobbyNetworking::HouseNetworkTransform::__cordl_internal_set__syncedVelocity(::Unity::Mathematics::float3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____syncedVelocity = value;
}
constexpr ::Unity::Mathematics::float3& LobbyNetworking::HouseNetworkTransform::__cordl_internal_get__syncedAngularVelocity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____syncedAngularVelocity;
}
constexpr ::Unity::Mathematics::float3 const& LobbyNetworking::HouseNetworkTransform::__cordl_internal_get__syncedAngularVelocity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____syncedAngularVelocity;
}
constexpr void LobbyNetworking::HouseNetworkTransform::__cordl_internal_set__syncedAngularVelocity(::Unity::Mathematics::float3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____syncedAngularVelocity = value;
}
inline ::UnityW<::GlobalNamespace::StickyPlatform> LobbyNetworking::HouseNetworkTransform::get_stickyPlatform()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LobbyNetworking::HouseNetworkTransform*>(),
                        {"get_stickyPlatform", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::StickyPlatform>>(this, ___internal_method);
}
inline void LobbyNetworking::HouseNetworkTransform::set_stickyPlatform(::GlobalNamespace::StickyPlatform*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LobbyNetworking::HouseNetworkTransform*>(),
                        {"set_stickyPlatform", {}, {::i2c::type_of<::GlobalNamespace::StickyPlatform*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Vector3 LobbyNetworking::HouseNetworkTransform::get_targetPosition()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LobbyNetworking::HouseNetworkTransform*>(),
                        {"get_targetPosition", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method);
}
inline void LobbyNetworking::HouseNetworkTransform::set_targetPosition(::UnityEngine::Vector3  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LobbyNetworking::HouseNetworkTransform*>(),
                        {"set_targetPosition", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Quaternion LobbyNetworking::HouseNetworkTransform::get_targetRotation()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LobbyNetworking::HouseNetworkTransform*>(),
                        {"get_targetRotation", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Quaternion>(this, ___internal_method);
}
inline void LobbyNetworking::HouseNetworkTransform::set_targetRotation(::UnityEngine::Quaternion  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LobbyNetworking::HouseNetworkTransform*>(),
                        {"set_targetRotation", {}, {::i2c::type_of<::UnityEngine::Quaternion>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool LobbyNetworking::HouseNetworkTransform::HasMoved(::Unity::Mathematics::float3  currentPosition, ::Unity::Mathematics::quaternion  currentRotation)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LobbyNetworking::HouseNetworkTransform*>(),
                        {"HasMoved", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::quaternion>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, currentPosition, currentRotation);
}
inline bool LobbyNetworking::HouseNetworkTransform::get_isOwned()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LobbyNetworking::HouseNetworkTransform*>(),
                        {"get_isOwned", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void LobbyNetworking::HouseNetworkTransform::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LobbyNetworking::HouseNetworkTransform*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void LobbyNetworking::HouseNetworkTransform::Start()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LobbyNetworking::HouseNetworkTransform*>(),
                        {"Start", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void LobbyNetworking::HouseNetworkTransform::AwakeFixedUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LobbyNetworking::HouseNetworkTransform*>(),
                        {"AwakeFixedUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void LobbyNetworking::HouseNetworkTransform::OwnerUpdate(bool  forceFullSync)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LobbyNetworking::HouseNetworkTransform*>(),
                        {"OwnerUpdate", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, forceFullSync);
}
inline void LobbyNetworking::HouseNetworkTransform::ClientUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LobbyNetworking::HouseNetworkTransform*>(),
                        {"ClientUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void LobbyNetworking::HouseNetworkTransform::RpcMove(::UnityEngine::Vector3  position, uint32_t  packedRotation, uint16_t  platformTicket)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LobbyNetworking::HouseNetworkTransform*>(),
                        {"RpcMove", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint16_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, position, packedRotation, platformTicket);
}
inline void LobbyNetworking::HouseNetworkTransform::CmdMove(::UnityEngine::Vector3  position, uint32_t  packedRotation, uint16_t  platformTicket)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LobbyNetworking::HouseNetworkTransform*>(),
                        {"CmdMove", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint16_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, position, packedRotation, platformTicket);
}
inline void LobbyNetworking::HouseNetworkTransform::ProcessMove(::UnityEngine::Vector3  position, uint32_t  packedRotation, uint16_t  platformTicket)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LobbyNetworking::HouseNetworkTransform*>(),
                        {"ProcessMove", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint16_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, position, packedRotation, platformTicket);
}
inline bool LobbyNetworking::HouseNetworkTransform::HasChangedVelocity(::Unity::Mathematics::float3  previousVelocity, ::Unity::Mathematics::float3  previousAngularVelocity, ::Unity::Mathematics::float3  newVelocity, ::Unity::Mathematics::float3  newAngularVelocity)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LobbyNetworking::HouseNetworkTransform*>(),
                        {"HasChangedVelocity", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, previousVelocity, previousAngularVelocity, newVelocity, newAngularVelocity);
}
inline void LobbyNetworking::HouseNetworkTransform::SyncVelocity(::Unity::Mathematics::float3  newVelocity, ::Unity::Mathematics::float3  newAngularVelocity)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LobbyNetworking::HouseNetworkTransform*>(),
                        {"SyncVelocity", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newVelocity, newAngularVelocity);
}
inline void LobbyNetworking::HouseNetworkTransform::RpcVelocity(::UnityEngine::Vector3  velocity, ::UnityEngine::Vector3  angularVelocity)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LobbyNetworking::HouseNetworkTransform*>(),
                        {"RpcVelocity", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, velocity, angularVelocity);
}
inline void LobbyNetworking::HouseNetworkTransform::CmdVelocity(::UnityEngine::Vector3  velocity, ::UnityEngine::Vector3  angularVelocity)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LobbyNetworking::HouseNetworkTransform*>(),
                        {"CmdVelocity", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, velocity, angularVelocity);
}
inline void LobbyNetworking::HouseNetworkTransform::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LobbyNetworking::HouseNetworkTransform*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void LobbyNetworking::HouseNetworkTransform::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LobbyNetworking::HouseNetworkTransform*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool LobbyNetworking::HouseNetworkTransform::CanSleep()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LobbyNetworking::HouseNetworkTransform*>(),
                        {"CanSleep", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::LobbyNetworking::HouseNetworkTransformManager_TransformJobData LobbyNetworking::HouseNetworkTransform::GetTrackingData()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LobbyNetworking::HouseNetworkTransform*>(),
                        {"GetTrackingData", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::LobbyNetworking::HouseNetworkTransformManager_TransformJobData>(this, ___internal_method);
}
inline void LobbyNetworking::HouseNetworkTransform::OnStartServer()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::LobbyNetworking::HouseNetworkTransform*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void LobbyNetworking::HouseNetworkTransform::OnStopServer()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::LobbyNetworking::HouseNetworkTransform*>(), 10}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void LobbyNetworking::HouseNetworkTransform::OnPlayerConnected(::Mirror::NetworkConnectionToClient*  conn)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LobbyNetworking::HouseNetworkTransform*>(),
                        {"OnPlayerConnected", {}, {::i2c::type_of<::Mirror::NetworkConnectionToClient*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, conn);
}
inline void LobbyNetworking::HouseNetworkTransform::StartLocalCooldown()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LobbyNetworking::HouseNetworkTransform*>(),
                        {"StartLocalCooldown", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool LobbyNetworking::HouseNetworkTransform::get_IsRestingForPlayerMovement()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LobbyNetworking::HouseNetworkTransform*>(),
                        {"get_IsRestingForPlayerMovement", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void LobbyNetworking::HouseNetworkTransform::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LobbyNetworking::HouseNetworkTransform*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void LobbyNetworking::HouseNetworkTransform::MirrorProcessed()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LobbyNetworking::HouseNetworkTransform*>(),
                        {"MirrorProcessed", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void LobbyNetworking::HouseNetworkTransform::UserCode_RpcMove__Vector3__UInt32__UInt16(::UnityEngine::Vector3  position, uint32_t  packedRotation, uint16_t  platformTicket)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LobbyNetworking::HouseNetworkTransform*>(),
                        {"UserCode_RpcMove__Vector3__UInt32__UInt16", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint16_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, position, packedRotation, platformTicket);
}
inline void LobbyNetworking::HouseNetworkTransform::InvokeUserCode_RpcMove__Vector3__UInt32__UInt16(::Mirror::NetworkBehaviour*  obj, ::Mirror::NetworkReader*  reader, ::Mirror::NetworkConnectionToClient*  senderConnection)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LobbyNetworking::HouseNetworkTransform*>(),
                        {"InvokeUserCode_RpcMove__Vector3__UInt32__UInt16", {}, {::i2c::type_of<::Mirror::NetworkBehaviour*>(), ::i2c::type_of<::Mirror::NetworkReader*>(), ::i2c::type_of<::Mirror::NetworkConnectionToClient*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, obj, reader, senderConnection);
}
inline void LobbyNetworking::HouseNetworkTransform::UserCode_CmdMove__Vector3__UInt32__UInt16(::UnityEngine::Vector3  position, uint32_t  packedRotation, uint16_t  platformTicket)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LobbyNetworking::HouseNetworkTransform*>(),
                        {"UserCode_CmdMove__Vector3__UInt32__UInt16", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint16_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, position, packedRotation, platformTicket);
}
inline void LobbyNetworking::HouseNetworkTransform::InvokeUserCode_CmdMove__Vector3__UInt32__UInt16(::Mirror::NetworkBehaviour*  obj, ::Mirror::NetworkReader*  reader, ::Mirror::NetworkConnectionToClient*  senderConnection)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LobbyNetworking::HouseNetworkTransform*>(),
                        {"InvokeUserCode_CmdMove__Vector3__UInt32__UInt16", {}, {::i2c::type_of<::Mirror::NetworkBehaviour*>(), ::i2c::type_of<::Mirror::NetworkReader*>(), ::i2c::type_of<::Mirror::NetworkConnectionToClient*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, obj, reader, senderConnection);
}
inline void LobbyNetworking::HouseNetworkTransform::UserCode_RpcVelocity__Vector3__Vector3(::UnityEngine::Vector3  velocity, ::UnityEngine::Vector3  angularVelocity)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LobbyNetworking::HouseNetworkTransform*>(),
                        {"UserCode_RpcVelocity__Vector3__Vector3", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, velocity, angularVelocity);
}
inline void LobbyNetworking::HouseNetworkTransform::InvokeUserCode_RpcVelocity__Vector3__Vector3(::Mirror::NetworkBehaviour*  obj, ::Mirror::NetworkReader*  reader, ::Mirror::NetworkConnectionToClient*  senderConnection)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LobbyNetworking::HouseNetworkTransform*>(),
                        {"InvokeUserCode_RpcVelocity__Vector3__Vector3", {}, {::i2c::type_of<::Mirror::NetworkBehaviour*>(), ::i2c::type_of<::Mirror::NetworkReader*>(), ::i2c::type_of<::Mirror::NetworkConnectionToClient*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, obj, reader, senderConnection);
}
inline void LobbyNetworking::HouseNetworkTransform::UserCode_CmdVelocity__Vector3__Vector3(::UnityEngine::Vector3  velocity, ::UnityEngine::Vector3  angularVelocity)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LobbyNetworking::HouseNetworkTransform*>(),
                        {"UserCode_CmdVelocity__Vector3__Vector3", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, velocity, angularVelocity);
}
inline void LobbyNetworking::HouseNetworkTransform::InvokeUserCode_CmdVelocity__Vector3__Vector3(::Mirror::NetworkBehaviour*  obj, ::Mirror::NetworkReader*  reader, ::Mirror::NetworkConnectionToClient*  senderConnection)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LobbyNetworking::HouseNetworkTransform*>(),
                        {"InvokeUserCode_CmdVelocity__Vector3__Vector3", {}, {::i2c::type_of<::Mirror::NetworkBehaviour*>(), ::i2c::type_of<::Mirror::NetworkReader*>(), ::i2c::type_of<::Mirror::NetworkConnectionToClient*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, obj, reader, senderConnection);
}
inline ::LobbyNetworking::HouseNetworkTransform* LobbyNetworking::HouseNetworkTransform::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::LobbyNetworking::HouseNetworkTransform*>());
}
// Ctor Parameters []
constexpr ::LobbyNetworking::HouseNetworkTransform::HouseNetworkTransform()   {
}

#pragma once
// IWYU pragma private; include "Mirror/NetworkTransformBase.hpp"
#include "Mirror/zzzz__NetworkBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "Mirror/zzzz__NetworkTransformBase_def.hpp"
#include "Mirror/zzzz__NetworkBehaviour_def.hpp"
#include "Mirror/zzzz__NetworkConnectionToClient_def.hpp"
#include "Mirror/zzzz__NetworkIdentity_def.hpp"
#include "Mirror/zzzz__NetworkReader_def.hpp"
#include "Mirror/zzzz__TransformSnapshot_def.hpp"
#include "System/Collections/Generic/zzzz__SortedList_2_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::Mirror::NetworkTransformBase.get_IsClientWithAuthority
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Mirror::NetworkTransformBase::*)()>(&::Mirror::NetworkTransformBase::get_IsClientWithAuthority)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x181528640;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkTransformBase*>(),
                        {"get_IsClientWithAuthority", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkTransformBase.get_timeStampAdjustment
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (::Mirror::NetworkTransformBase::*)()>(&::Mirror::NetworkTransformBase::get_timeStampAdjustment)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1815286c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkTransformBase*>(),
                        {"get_timeStampAdjustment", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkTransformBase.get_offset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (::Mirror::NetworkTransformBase::*)()>(&::Mirror::NetworkTransformBase::get_offset)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x181528670;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkTransformBase*>(),
                        {"get_offset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkTransformBase.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::NetworkTransformBase::*)()>(&::Mirror::NetworkTransformBase::Awake)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mirror::NetworkTransformBase*>(),
                    {::i2c::class_of<::Mirror::NetworkTransformBase*>(), 17}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkTransformBase.OnValidate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::NetworkTransformBase::*)()>(&::Mirror::NetworkTransformBase::OnValidate)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x181527da0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mirror::NetworkTransformBase*>(),
                    {::i2c::class_of<::Mirror::NetworkTransformBase*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkTransformBase.Construct
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Mirror::TransformSnapshot (::Mirror::NetworkTransformBase::*)()>(&::Mirror::NetworkTransformBase::Construct)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x181527300;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mirror::NetworkTransformBase*>(),
                    {::i2c::class_of<::Mirror::NetworkTransformBase*>(), 18}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkTransformBase.AddSnapshot
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::NetworkTransformBase::*)(::System::Collections::Generic::SortedList_2<double_t,::Mirror::TransformSnapshot>*, double_t, ::System::Nullable_1<::UnityEngine::Vector3>, ::System::Nullable_1<::UnityEngine::Quaternion>, ::System::Nullable_1<::UnityEngine::Vector3>)>(&::Mirror::NetworkTransformBase::AddSnapshot)> {
  constexpr static std::size_t size = 0x330;
  constexpr static std::size_t addrs = 0x181526cf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkTransformBase*>(),
                        {"AddSnapshot", {}, {::i2c::type_of<::System::Collections::Generic::SortedList_2<double_t,::Mirror::TransformSnapshot>*>(), ::i2c::type_of<double_t>(), ::i2c::type_of<::System::Nullable_1<::UnityEngine::Vector3>>(), ::i2c::type_of<::System::Nullable_1<::UnityEngine::Quaternion>>(), ::i2c::type_of<::System::Nullable_1<::UnityEngine::Vector3>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkTransformBase.Apply
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::NetworkTransformBase::*)(::Mirror::TransformSnapshot, ::Mirror::TransformSnapshot)>(&::Mirror::NetworkTransformBase::Apply)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x181527020;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mirror::NetworkTransformBase*>(),
                    {::i2c::class_of<::Mirror::NetworkTransformBase*>(), 19}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkTransformBase.CmdTeleport
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::NetworkTransformBase::*)(::UnityEngine::Vector3)>(&::Mirror::NetworkTransformBase::CmdTeleport)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x181527220;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkTransformBase*>(),
                        {"CmdTeleport", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkTransformBase.CmdTeleport
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::NetworkTransformBase::*)(::UnityEngine::Vector3, ::UnityEngine::Quaternion)>(&::Mirror::NetworkTransformBase::CmdTeleport)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x181527120;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkTransformBase*>(),
                        {"CmdTeleport", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkTransformBase.RpcTeleport
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::NetworkTransformBase::*)(::UnityEngine::Vector3)>(&::Mirror::NetworkTransformBase::RpcTeleport)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x181528010;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkTransformBase*>(),
                        {"RpcTeleport", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkTransformBase.RpcTeleport
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::NetworkTransformBase::*)(::UnityEngine::Vector3, ::UnityEngine::Quaternion)>(&::Mirror::NetworkTransformBase::RpcTeleport)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x181527f10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkTransformBase*>(),
                        {"RpcTeleport", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkTransformBase.RpcReset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::NetworkTransformBase::*)()>(&::Mirror::NetworkTransformBase::RpcReset)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x181527e60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkTransformBase*>(),
                        {"RpcReset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkTransformBase.OnTeleport
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::NetworkTransformBase::*)(::UnityEngine::Vector3)>(&::Mirror::NetworkTransformBase::OnTeleport)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x181527cb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mirror::NetworkTransformBase*>(),
                    {::i2c::class_of<::Mirror::NetworkTransformBase*>(), 20}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkTransformBase.OnTeleport
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::NetworkTransformBase::*)(::UnityEngine::Vector3, ::UnityEngine::Quaternion)>(&::Mirror::NetworkTransformBase::OnTeleport)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x181527d10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mirror::NetworkTransformBase*>(),
                    {::i2c::class_of<::Mirror::NetworkTransformBase*>(), 21}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkTransformBase.Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::NetworkTransformBase::*)()>(&::Mirror::NetworkTransformBase::Reset)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x181527e20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mirror::NetworkTransformBase*>(),
                    {::i2c::class_of<::Mirror::NetworkTransformBase*>(), 22}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkTransformBase.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::NetworkTransformBase::*)()>(&::Mirror::NetworkTransformBase::OnEnable)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x181527c20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mirror::NetworkTransformBase*>(),
                    {::i2c::class_of<::Mirror::NetworkTransformBase*>(), 23}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkTransformBase.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::NetworkTransformBase::*)()>(&::Mirror::NetworkTransformBase::OnDisable)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x181527b90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mirror::NetworkTransformBase*>(),
                    {::i2c::class_of<::Mirror::NetworkTransformBase*>(), 24}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkTransformBase.OnClientAuthorityChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::NetworkTransformBase::*)(::Mirror::NetworkConnectionToClient*, ::Mirror::NetworkIdentity*, bool)>(&::Mirror::NetworkTransformBase::OnClientAuthorityChanged)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x181527a80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkTransformBase*>(),
                        {"OnClientAuthorityChanged", {}, {::i2c::type_of<::Mirror::NetworkConnectionToClient*>(), ::i2c::type_of<::Mirror::NetworkIdentity*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkTransformBase._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::NetworkTransformBase::*)()>(&::Mirror::NetworkTransformBase::_ctor)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x181528580;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkTransformBase*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkTransformBase.MirrorProcessed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::NetworkTransformBase::*)()>(&::Mirror::NetworkTransformBase::MirrorProcessed)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkTransformBase*>(),
                        {"MirrorProcessed", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkTransformBase.UserCode_CmdTeleport__Vector3
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::NetworkTransformBase::*)(::UnityEngine::Vector3)>(&::Mirror::NetworkTransformBase::UserCode_CmdTeleport__Vector3)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x181528230;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkTransformBase*>(),
                        {"UserCode_CmdTeleport__Vector3", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkTransformBase.InvokeUserCode_CmdTeleport__Vector3
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Mirror::NetworkBehaviour*, ::Mirror::NetworkReader*, ::Mirror::NetworkConnectionToClient*)>(&::Mirror::NetworkTransformBase::InvokeUserCode_CmdTeleport__Vector3)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x1815275e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkTransformBase*>(),
                        {"InvokeUserCode_CmdTeleport__Vector3", {}, {::i2c::type_of<::Mirror::NetworkBehaviour*>(), ::i2c::type_of<::Mirror::NetworkReader*>(), ::i2c::type_of<::Mirror::NetworkConnectionToClient*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkTransformBase.UserCode_CmdTeleport__Vector3__Quaternion
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::NetworkTransformBase::*)(::UnityEngine::Vector3, ::UnityEngine::Quaternion)>(&::Mirror::NetworkTransformBase::UserCode_CmdTeleport__Vector3__Quaternion)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x1815280f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkTransformBase*>(),
                        {"UserCode_CmdTeleport__Vector3__Quaternion", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkTransformBase.InvokeUserCode_CmdTeleport__Vector3__Quaternion
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Mirror::NetworkBehaviour*, ::Mirror::NetworkReader*, ::Mirror::NetworkConnectionToClient*)>(&::Mirror::NetworkTransformBase::InvokeUserCode_CmdTeleport__Vector3__Quaternion)> {
  constexpr static std::size_t size = 0x200;
  constexpr static std::size_t addrs = 0x1815273e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkTransformBase*>(),
                        {"InvokeUserCode_CmdTeleport__Vector3__Quaternion", {}, {::i2c::type_of<::Mirror::NetworkBehaviour*>(), ::i2c::type_of<::Mirror::NetworkReader*>(), ::i2c::type_of<::Mirror::NetworkConnectionToClient*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkTransformBase.UserCode_RpcTeleport__Vector3
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::NetworkTransformBase::*)(::UnityEngine::Vector3)>(&::Mirror::NetworkTransformBase::UserCode_RpcTeleport__Vector3)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1815283a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkTransformBase*>(),
                        {"UserCode_RpcTeleport__Vector3", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkTransformBase.InvokeUserCode_RpcTeleport__Vector3
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Mirror::NetworkBehaviour*, ::Mirror::NetworkReader*, ::Mirror::NetworkConnectionToClient*)>(&::Mirror::NetworkTransformBase::InvokeUserCode_RpcTeleport__Vector3)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x181527980;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkTransformBase*>(),
                        {"InvokeUserCode_RpcTeleport__Vector3", {}, {::i2c::type_of<::Mirror::NetworkBehaviour*>(), ::i2c::type_of<::Mirror::NetworkReader*>(), ::i2c::type_of<::Mirror::NetworkConnectionToClient*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkTransformBase.UserCode_RpcTeleport__Vector3__Quaternion
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::NetworkTransformBase::*)(::UnityEngine::Vector3, ::UnityEngine::Quaternion)>(&::Mirror::NetworkTransformBase::UserCode_RpcTeleport__Vector3__Quaternion)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x181528360;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkTransformBase*>(),
                        {"UserCode_RpcTeleport__Vector3__Quaternion", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkTransformBase.InvokeUserCode_RpcTeleport__Vector3__Quaternion
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Mirror::NetworkBehaviour*, ::Mirror::NetworkReader*, ::Mirror::NetworkConnectionToClient*)>(&::Mirror::NetworkTransformBase::InvokeUserCode_RpcTeleport__Vector3__Quaternion)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x181527850;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkTransformBase*>(),
                        {"InvokeUserCode_RpcTeleport__Vector3__Quaternion", {}, {::i2c::type_of<::Mirror::NetworkBehaviour*>(), ::i2c::type_of<::Mirror::NetworkReader*>(), ::i2c::type_of<::Mirror::NetworkConnectionToClient*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkTransformBase.UserCode_RpcReset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::NetworkTransformBase::*)()>(&::Mirror::NetworkTransformBase::UserCode_RpcReset)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x181528340;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkTransformBase*>(),
                        {"UserCode_RpcReset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkTransformBase.InvokeUserCode_RpcReset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Mirror::NetworkBehaviour*, ::Mirror::NetworkReader*, ::Mirror::NetworkConnectionToClient*)>(&::Mirror::NetworkTransformBase::InvokeUserCode_RpcReset)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x1815277a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkTransformBase*>(),
                        {"InvokeUserCode_RpcReset", {}, {::i2c::type_of<::Mirror::NetworkBehaviour*>(), ::i2c::type_of<::Mirror::NetworkReader*>(), ::i2c::type_of<::Mirror::NetworkConnectionToClient*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Transform>& Mirror::NetworkTransformBase::__cordl_internal_get_target()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___target;
}
constexpr ::UnityW<::UnityEngine::Transform> const& Mirror::NetworkTransformBase::__cordl_internal_get_target() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___target;
}
constexpr void Mirror::NetworkTransformBase::__cordl_internal_set_target(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___target = value;
}
constexpr bool& Mirror::NetworkTransformBase::__cordl_internal_get_clientAuthority()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___clientAuthority;
}
constexpr bool const& Mirror::NetworkTransformBase::__cordl_internal_get_clientAuthority() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___clientAuthority;
}
constexpr void Mirror::NetworkTransformBase::__cordl_internal_set_clientAuthority(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___clientAuthority = value;
}
constexpr ::System::Collections::Generic::SortedList_2<double_t,::Mirror::TransformSnapshot>*& Mirror::NetworkTransformBase::__cordl_internal_get_clientSnapshots()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___clientSnapshots;
}
constexpr ::System::Collections::Generic::SortedList_2<double_t,::Mirror::TransformSnapshot>* const& Mirror::NetworkTransformBase::__cordl_internal_get_clientSnapshots() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___clientSnapshots;
}
constexpr void Mirror::NetworkTransformBase::__cordl_internal_set_clientSnapshots(::System::Collections::Generic::SortedList_2<double_t,::Mirror::TransformSnapshot>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___clientSnapshots = value;
}
constexpr ::System::Collections::Generic::SortedList_2<double_t,::Mirror::TransformSnapshot>*& Mirror::NetworkTransformBase::__cordl_internal_get_serverSnapshots()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___serverSnapshots;
}
constexpr ::System::Collections::Generic::SortedList_2<double_t,::Mirror::TransformSnapshot>* const& Mirror::NetworkTransformBase::__cordl_internal_get_serverSnapshots() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___serverSnapshots;
}
constexpr void Mirror::NetworkTransformBase::__cordl_internal_set_serverSnapshots(::System::Collections::Generic::SortedList_2<double_t,::Mirror::TransformSnapshot>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___serverSnapshots = value;
}
constexpr bool& Mirror::NetworkTransformBase::__cordl_internal_get_syncPosition()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___syncPosition;
}
constexpr bool const& Mirror::NetworkTransformBase::__cordl_internal_get_syncPosition() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___syncPosition;
}
constexpr void Mirror::NetworkTransformBase::__cordl_internal_set_syncPosition(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___syncPosition = value;
}
constexpr bool& Mirror::NetworkTransformBase::__cordl_internal_get_syncRotation()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___syncRotation;
}
constexpr bool const& Mirror::NetworkTransformBase::__cordl_internal_get_syncRotation() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___syncRotation;
}
constexpr void Mirror::NetworkTransformBase::__cordl_internal_set_syncRotation(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___syncRotation = value;
}
constexpr bool& Mirror::NetworkTransformBase::__cordl_internal_get_syncScale()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___syncScale;
}
constexpr bool const& Mirror::NetworkTransformBase::__cordl_internal_get_syncScale() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___syncScale;
}
constexpr void Mirror::NetworkTransformBase::__cordl_internal_set_syncScale(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___syncScale = value;
}
constexpr bool& Mirror::NetworkTransformBase::__cordl_internal_get_interpolatePosition()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___interpolatePosition;
}
constexpr bool const& Mirror::NetworkTransformBase::__cordl_internal_get_interpolatePosition() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___interpolatePosition;
}
constexpr void Mirror::NetworkTransformBase::__cordl_internal_set_interpolatePosition(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___interpolatePosition = value;
}
constexpr bool& Mirror::NetworkTransformBase::__cordl_internal_get_interpolateRotation()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___interpolateRotation;
}
constexpr bool const& Mirror::NetworkTransformBase::__cordl_internal_get_interpolateRotation() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___interpolateRotation;
}
constexpr void Mirror::NetworkTransformBase::__cordl_internal_set_interpolateRotation(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___interpolateRotation = value;
}
constexpr bool& Mirror::NetworkTransformBase::__cordl_internal_get_interpolateScale()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___interpolateScale;
}
constexpr bool const& Mirror::NetworkTransformBase::__cordl_internal_get_interpolateScale() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___interpolateScale;
}
constexpr void Mirror::NetworkTransformBase::__cordl_internal_set_interpolateScale(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___interpolateScale = value;
}
constexpr uint32_t& Mirror::NetworkTransformBase::__cordl_internal_get_sendIntervalMultiplier()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sendIntervalMultiplier;
}
constexpr uint32_t const& Mirror::NetworkTransformBase::__cordl_internal_get_sendIntervalMultiplier() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sendIntervalMultiplier;
}
constexpr void Mirror::NetworkTransformBase::__cordl_internal_set_sendIntervalMultiplier(uint32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___sendIntervalMultiplier = value;
}
constexpr bool& Mirror::NetworkTransformBase::__cordl_internal_get_timelineOffset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___timelineOffset;
}
constexpr bool const& Mirror::NetworkTransformBase::__cordl_internal_get_timelineOffset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___timelineOffset;
}
constexpr void Mirror::NetworkTransformBase::__cordl_internal_set_timelineOffset(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___timelineOffset = value;
}
constexpr bool& Mirror::NetworkTransformBase::__cordl_internal_get_showGizmos()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___showGizmos;
}
constexpr bool const& Mirror::NetworkTransformBase::__cordl_internal_get_showGizmos() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___showGizmos;
}
constexpr void Mirror::NetworkTransformBase::__cordl_internal_set_showGizmos(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___showGizmos = value;
}
constexpr bool& Mirror::NetworkTransformBase::__cordl_internal_get_showOverlay()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___showOverlay;
}
constexpr bool const& Mirror::NetworkTransformBase::__cordl_internal_get_showOverlay() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___showOverlay;
}
constexpr void Mirror::NetworkTransformBase::__cordl_internal_set_showOverlay(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___showOverlay = value;
}
constexpr ::UnityEngine::Color& Mirror::NetworkTransformBase::__cordl_internal_get_overlayColor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___overlayColor;
}
constexpr ::UnityEngine::Color const& Mirror::NetworkTransformBase::__cordl_internal_get_overlayColor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___overlayColor;
}
constexpr void Mirror::NetworkTransformBase::__cordl_internal_set_overlayColor(::UnityEngine::Color  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___overlayColor = value;
}
inline bool Mirror::NetworkTransformBase::get_IsClientWithAuthority()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkTransformBase*>(),
                        {"get_IsClientWithAuthority", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline double_t Mirror::NetworkTransformBase::get_timeStampAdjustment()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkTransformBase*>(),
                        {"get_timeStampAdjustment", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<double_t>(this, ___internal_method);
}
inline double_t Mirror::NetworkTransformBase::get_offset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkTransformBase*>(),
                        {"get_offset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<double_t>(this, ___internal_method);
}
inline void Mirror::NetworkTransformBase::Awake()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mirror::NetworkTransformBase*>(), 17}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Mirror::NetworkTransformBase::OnValidate()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mirror::NetworkTransformBase*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Mirror::TransformSnapshot Mirror::NetworkTransformBase::Construct()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mirror::NetworkTransformBase*>(), 18}
                        )));
return ::cordl_internals::RunMethodRethrow<::Mirror::TransformSnapshot>(this, ___internal_method);
}
inline void Mirror::NetworkTransformBase::AddSnapshot(::System::Collections::Generic::SortedList_2<double_t,::Mirror::TransformSnapshot>*  snapshots, double_t  timeStamp, ::System::Nullable_1<::UnityEngine::Vector3>  position, ::System::Nullable_1<::UnityEngine::Quaternion>  rotation, ::System::Nullable_1<::UnityEngine::Vector3>  scale)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkTransformBase*>(),
                        {"AddSnapshot", {}, {::i2c::type_of<::System::Collections::Generic::SortedList_2<double_t,::Mirror::TransformSnapshot>*>(), ::i2c::type_of<double_t>(), ::i2c::type_of<::System::Nullable_1<::UnityEngine::Vector3>>(), ::i2c::type_of<::System::Nullable_1<::UnityEngine::Quaternion>>(), ::i2c::type_of<::System::Nullable_1<::UnityEngine::Vector3>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, snapshots, timeStamp, position, rotation, scale);
}
inline void Mirror::NetworkTransformBase::Apply(::Mirror::TransformSnapshot  interpolated, ::Mirror::TransformSnapshot  endGoal)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mirror::NetworkTransformBase*>(), 19}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, interpolated, endGoal);
}
inline void Mirror::NetworkTransformBase::CmdTeleport(::UnityEngine::Vector3  destination)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkTransformBase*>(),
                        {"CmdTeleport", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, destination);
}
inline void Mirror::NetworkTransformBase::CmdTeleport(::UnityEngine::Vector3  destination, ::UnityEngine::Quaternion  rotation)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkTransformBase*>(),
                        {"CmdTeleport", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, destination, rotation);
}
inline void Mirror::NetworkTransformBase::RpcTeleport(::UnityEngine::Vector3  destination)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkTransformBase*>(),
                        {"RpcTeleport", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, destination);
}
inline void Mirror::NetworkTransformBase::RpcTeleport(::UnityEngine::Vector3  destination, ::UnityEngine::Quaternion  rotation)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkTransformBase*>(),
                        {"RpcTeleport", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, destination, rotation);
}
inline void Mirror::NetworkTransformBase::RpcReset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkTransformBase*>(),
                        {"RpcReset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Mirror::NetworkTransformBase::OnTeleport(::UnityEngine::Vector3  destination)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mirror::NetworkTransformBase*>(), 20}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, destination);
}
inline void Mirror::NetworkTransformBase::OnTeleport(::UnityEngine::Vector3  destination, ::UnityEngine::Quaternion  rotation)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mirror::NetworkTransformBase*>(), 21}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, destination, rotation);
}
inline void Mirror::NetworkTransformBase::Reset()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mirror::NetworkTransformBase*>(), 22}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Mirror::NetworkTransformBase::OnEnable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mirror::NetworkTransformBase*>(), 23}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Mirror::NetworkTransformBase::OnDisable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mirror::NetworkTransformBase*>(), 24}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Mirror::NetworkTransformBase::OnClientAuthorityChanged(::Mirror::NetworkConnectionToClient*  conn, ::Mirror::NetworkIdentity*  identity, bool  authorityState)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkTransformBase*>(),
                        {"OnClientAuthorityChanged", {}, {::i2c::type_of<::Mirror::NetworkConnectionToClient*>(), ::i2c::type_of<::Mirror::NetworkIdentity*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, conn, identity, authorityState);
}
inline void Mirror::NetworkTransformBase::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkTransformBase*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Mirror::NetworkTransformBase::MirrorProcessed()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkTransformBase*>(),
                        {"MirrorProcessed", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Mirror::NetworkTransformBase::UserCode_CmdTeleport__Vector3(::UnityEngine::Vector3  destination)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkTransformBase*>(),
                        {"UserCode_CmdTeleport__Vector3", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, destination);
}
inline void Mirror::NetworkTransformBase::InvokeUserCode_CmdTeleport__Vector3(::Mirror::NetworkBehaviour*  obj, ::Mirror::NetworkReader*  reader, ::Mirror::NetworkConnectionToClient*  senderConnection)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkTransformBase*>(),
                        {"InvokeUserCode_CmdTeleport__Vector3", {}, {::i2c::type_of<::Mirror::NetworkBehaviour*>(), ::i2c::type_of<::Mirror::NetworkReader*>(), ::i2c::type_of<::Mirror::NetworkConnectionToClient*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, obj, reader, senderConnection);
}
inline void Mirror::NetworkTransformBase::UserCode_CmdTeleport__Vector3__Quaternion(::UnityEngine::Vector3  destination, ::UnityEngine::Quaternion  rotation)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkTransformBase*>(),
                        {"UserCode_CmdTeleport__Vector3__Quaternion", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, destination, rotation);
}
inline void Mirror::NetworkTransformBase::InvokeUserCode_CmdTeleport__Vector3__Quaternion(::Mirror::NetworkBehaviour*  obj, ::Mirror::NetworkReader*  reader, ::Mirror::NetworkConnectionToClient*  senderConnection)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkTransformBase*>(),
                        {"InvokeUserCode_CmdTeleport__Vector3__Quaternion", {}, {::i2c::type_of<::Mirror::NetworkBehaviour*>(), ::i2c::type_of<::Mirror::NetworkReader*>(), ::i2c::type_of<::Mirror::NetworkConnectionToClient*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, obj, reader, senderConnection);
}
inline void Mirror::NetworkTransformBase::UserCode_RpcTeleport__Vector3(::UnityEngine::Vector3  destination)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkTransformBase*>(),
                        {"UserCode_RpcTeleport__Vector3", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, destination);
}
inline void Mirror::NetworkTransformBase::InvokeUserCode_RpcTeleport__Vector3(::Mirror::NetworkBehaviour*  obj, ::Mirror::NetworkReader*  reader, ::Mirror::NetworkConnectionToClient*  senderConnection)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkTransformBase*>(),
                        {"InvokeUserCode_RpcTeleport__Vector3", {}, {::i2c::type_of<::Mirror::NetworkBehaviour*>(), ::i2c::type_of<::Mirror::NetworkReader*>(), ::i2c::type_of<::Mirror::NetworkConnectionToClient*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, obj, reader, senderConnection);
}
inline void Mirror::NetworkTransformBase::UserCode_RpcTeleport__Vector3__Quaternion(::UnityEngine::Vector3  destination, ::UnityEngine::Quaternion  rotation)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkTransformBase*>(),
                        {"UserCode_RpcTeleport__Vector3__Quaternion", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, destination, rotation);
}
inline void Mirror::NetworkTransformBase::InvokeUserCode_RpcTeleport__Vector3__Quaternion(::Mirror::NetworkBehaviour*  obj, ::Mirror::NetworkReader*  reader, ::Mirror::NetworkConnectionToClient*  senderConnection)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkTransformBase*>(),
                        {"InvokeUserCode_RpcTeleport__Vector3__Quaternion", {}, {::i2c::type_of<::Mirror::NetworkBehaviour*>(), ::i2c::type_of<::Mirror::NetworkReader*>(), ::i2c::type_of<::Mirror::NetworkConnectionToClient*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, obj, reader, senderConnection);
}
inline void Mirror::NetworkTransformBase::UserCode_RpcReset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkTransformBase*>(),
                        {"UserCode_RpcReset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Mirror::NetworkTransformBase::InvokeUserCode_RpcReset(::Mirror::NetworkBehaviour*  obj, ::Mirror::NetworkReader*  reader, ::Mirror::NetworkConnectionToClient*  senderConnection)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkTransformBase*>(),
                        {"InvokeUserCode_RpcReset", {}, {::i2c::type_of<::Mirror::NetworkBehaviour*>(), ::i2c::type_of<::Mirror::NetworkReader*>(), ::i2c::type_of<::Mirror::NetworkConnectionToClient*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, obj, reader, senderConnection);
}
inline ::Mirror::NetworkTransformBase* Mirror::NetworkTransformBase::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Mirror::NetworkTransformBase*>());
}
// Ctor Parameters []
constexpr ::Mirror::NetworkTransformBase::NetworkTransformBase()   {
}

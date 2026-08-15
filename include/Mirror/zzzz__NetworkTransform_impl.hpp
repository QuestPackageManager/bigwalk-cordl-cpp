#pragma once
// IWYU pragma private; include "Mirror/NetworkTransform.hpp"
#include "Mirror/zzzz__NetworkTransformBase_impl.hpp"
#include "Mirror/zzzz__TransformSnapshot_impl.hpp"
#include "Mirror/zzzz__NetworkTransform_def.hpp"
#include "Mirror/zzzz__NetworkBehaviour_def.hpp"
#include "Mirror/zzzz__NetworkConnectionToClient_def.hpp"
#include "Mirror/zzzz__NetworkReader_def.hpp"
#include "Mirror/zzzz__NetworkWriter_def.hpp"
#include "Mirror/zzzz__TransformSnapshot_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::Mirror::NetworkTransform.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::NetworkTransform::*)()>(&::Mirror::NetworkTransform::Update)> {
  constexpr static std::size_t size = 0x2f0;
  constexpr static std::size_t addrs = 0x18152be80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkTransform*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkTransform.LateUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::NetworkTransform::*)()>(&::Mirror::NetworkTransform::LateUpdate)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x18152ab90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkTransform*>(),
                        {"LateUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkTransform.CheckLastSendTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::NetworkTransform::*)()>(&::Mirror::NetworkTransform::CheckLastSendTime)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x18152a460;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mirror::NetworkTransform*>(),
                    {::i2c::class_of<::Mirror::NetworkTransform*>(), 25}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkTransform.UpdateServerBroadcast
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::NetworkTransform::*)()>(&::Mirror::NetworkTransform::UpdateServerBroadcast)> {
  constexpr static std::size_t size = 0x3a0;
  constexpr static std::size_t addrs = 0x18152b910;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkTransform*>(),
                        {"UpdateServerBroadcast", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkTransform.UpdateServerInterpolation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::NetworkTransform::*)()>(&::Mirror::NetworkTransform::UpdateServerInterpolation)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0x18152bcb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkTransform*>(),
                        {"UpdateServerInterpolation", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkTransform.UpdateClientBroadcast
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::NetworkTransform::*)()>(&::Mirror::NetworkTransform::UpdateClientBroadcast)> {
  constexpr static std::size_t size = 0x3b0;
  constexpr static std::size_t addrs = 0x18152b3d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkTransform*>(),
                        {"UpdateClientBroadcast", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkTransform.UpdateClientInterpolation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::NetworkTransform::*)()>(&::Mirror::NetworkTransform::UpdateClientInterpolation)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x18152b780;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkTransform*>(),
                        {"UpdateClientInterpolation", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkTransform.OnSerialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::NetworkTransform::*)(::Mirror::NetworkWriter*, bool)>(&::Mirror::NetworkTransform::OnSerialize)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x18152af30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mirror::NetworkTransform*>(),
                    {::i2c::class_of<::Mirror::NetworkTransform*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkTransform.OnDeserialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::NetworkTransform::*)(::Mirror::NetworkReader*, bool)>(&::Mirror::NetworkTransform::OnDeserialize)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x18152ae30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mirror::NetworkTransform*>(),
                    {::i2c::class_of<::Mirror::NetworkTransform*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkTransform.CompareSnapshots
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Mirror::NetworkTransform::*)(::Mirror::TransformSnapshot)>(&::Mirror::NetworkTransform::CompareSnapshots)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0x18152a610;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mirror::NetworkTransform*>(),
                    {::i2c::class_of<::Mirror::NetworkTransform*>(), 26}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkTransform.CmdClientToServerSync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::NetworkTransform::*)(::System::Nullable_1<::UnityEngine::Vector3>, ::System::Nullable_1<::UnityEngine::Quaternion>, ::System::Nullable_1<::UnityEngine::Vector3>)>(&::Mirror::NetworkTransform::CmdClientToServerSync)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x18152a4e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkTransform*>(),
                        {"CmdClientToServerSync", {}, {::i2c::type_of<::System::Nullable_1<::UnityEngine::Vector3>>(), ::i2c::type_of<::System::Nullable_1<::UnityEngine::Quaternion>>(), ::i2c::type_of<::System::Nullable_1<::UnityEngine::Vector3>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkTransform.OnClientToServerSync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::NetworkTransform::*)(::System::Nullable_1<::UnityEngine::Vector3>, ::System::Nullable_1<::UnityEngine::Quaternion>, ::System::Nullable_1<::UnityEngine::Vector3>)>(&::Mirror::NetworkTransform::OnClientToServerSync)> {
  constexpr static std::size_t size = 0x240;
  constexpr static std::size_t addrs = 0x18152abf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mirror::NetworkTransform*>(),
                    {::i2c::class_of<::Mirror::NetworkTransform*>(), 27}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkTransform.RpcServerToClientSync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::NetworkTransform::*)(::System::Nullable_1<::UnityEngine::Vector3>, ::System::Nullable_1<::UnityEngine::Quaternion>, ::System::Nullable_1<::UnityEngine::Vector3>)>(&::Mirror::NetworkTransform::RpcServerToClientSync)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x18152b2a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkTransform*>(),
                        {"RpcServerToClientSync", {}, {::i2c::type_of<::System::Nullable_1<::UnityEngine::Vector3>>(), ::i2c::type_of<::System::Nullable_1<::UnityEngine::Quaternion>>(), ::i2c::type_of<::System::Nullable_1<::UnityEngine::Vector3>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkTransform.OnServerToClientSync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::NetworkTransform::*)(::System::Nullable_1<::UnityEngine::Vector3>, ::System::Nullable_1<::UnityEngine::Quaternion>, ::System::Nullable_1<::UnityEngine::Vector3>)>(&::Mirror::NetworkTransform::OnServerToClientSync)> {
  constexpr static std::size_t size = 0x280;
  constexpr static std::size_t addrs = 0x18152b020;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mirror::NetworkTransform*>(),
                    {::i2c::class_of<::Mirror::NetworkTransform*>(), 28}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkTransform._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::NetworkTransform::*)()>(&::Mirror::NetworkTransform::_ctor)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x18152c420;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkTransform*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkTransform.MirrorProcessed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::NetworkTransform::*)()>(&::Mirror::NetworkTransform::MirrorProcessed)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkTransform*>(),
                        {"MirrorProcessed", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkTransform.UserCode_CmdClientToServerSync__Nullable_1__Nullable_1__Nullable_1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::NetworkTransform::*)(::System::Nullable_1<::UnityEngine::Vector3>, ::System::Nullable_1<::UnityEngine::Quaternion>, ::System::Nullable_1<::UnityEngine::Vector3>)>(&::Mirror::NetworkTransform::UserCode_CmdClientToServerSync__Nullable_1__Nullable_1__Nullable_1)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x18152c170;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkTransform*>(),
                        {"UserCode_CmdClientToServerSync__Nullable`1__Nullable`1__Nullable`1", {}, {::i2c::type_of<::System::Nullable_1<::UnityEngine::Vector3>>(), ::i2c::type_of<::System::Nullable_1<::UnityEngine::Quaternion>>(), ::i2c::type_of<::System::Nullable_1<::UnityEngine::Vector3>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkTransform.InvokeUserCode_CmdClientToServerSync__Nullable_1__Nullable_1__Nullable_1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Mirror::NetworkBehaviour*, ::Mirror::NetworkReader*, ::Mirror::NetworkConnectionToClient*)>(&::Mirror::NetworkTransform::InvokeUserCode_CmdClientToServerSync__Nullable_1__Nullable_1__Nullable_1)> {
  constexpr static std::size_t size = 0x260;
  constexpr static std::size_t addrs = 0x18152a7b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkTransform*>(),
                        {"InvokeUserCode_CmdClientToServerSync__Nullable`1__Nullable`1__Nullable`1", {}, {::i2c::type_of<::Mirror::NetworkBehaviour*>(), ::i2c::type_of<::Mirror::NetworkReader*>(), ::i2c::type_of<::Mirror::NetworkConnectionToClient*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkTransform.UserCode_RpcServerToClientSync__Nullable_1__Nullable_1__Nullable_1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::NetworkTransform::*)(::System::Nullable_1<::UnityEngine::Vector3>, ::System::Nullable_1<::UnityEngine::Quaternion>, ::System::Nullable_1<::UnityEngine::Vector3>)>(&::Mirror::NetworkTransform::UserCode_RpcServerToClientSync__Nullable_1__Nullable_1__Nullable_1)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x18152c300;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkTransform*>(),
                        {"UserCode_RpcServerToClientSync__Nullable`1__Nullable`1__Nullable`1", {}, {::i2c::type_of<::System::Nullable_1<::UnityEngine::Vector3>>(), ::i2c::type_of<::System::Nullable_1<::UnityEngine::Quaternion>>(), ::i2c::type_of<::System::Nullable_1<::UnityEngine::Vector3>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkTransform.InvokeUserCode_RpcServerToClientSync__Nullable_1__Nullable_1__Nullable_1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Mirror::NetworkBehaviour*, ::Mirror::NetworkReader*, ::Mirror::NetworkConnectionToClient*)>(&::Mirror::NetworkTransform::InvokeUserCode_RpcServerToClientSync__Nullable_1__Nullable_1__Nullable_1)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x18152aa10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkTransform*>(),
                        {"InvokeUserCode_RpcServerToClientSync__Nullable`1__Nullable`1__Nullable`1", {}, {::i2c::type_of<::Mirror::NetworkBehaviour*>(), ::i2c::type_of<::Mirror::NetworkReader*>(), ::i2c::type_of<::Mirror::NetworkConnectionToClient*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& Mirror::NetworkTransform::__cordl_internal_get_onlySyncOnChange()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onlySyncOnChange;
}
constexpr bool const& Mirror::NetworkTransform::__cordl_internal_get_onlySyncOnChange() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onlySyncOnChange;
}
constexpr void Mirror::NetworkTransform::__cordl_internal_set_onlySyncOnChange(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___onlySyncOnChange = value;
}
constexpr uint32_t& Mirror::NetworkTransform::__cordl_internal_get_sendIntervalCounter()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sendIntervalCounter;
}
constexpr uint32_t const& Mirror::NetworkTransform::__cordl_internal_get_sendIntervalCounter() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sendIntervalCounter;
}
constexpr void Mirror::NetworkTransform::__cordl_internal_set_sendIntervalCounter(uint32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___sendIntervalCounter = value;
}
constexpr double_t& Mirror::NetworkTransform::__cordl_internal_get_lastSendIntervalTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastSendIntervalTime;
}
constexpr double_t const& Mirror::NetworkTransform::__cordl_internal_get_lastSendIntervalTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastSendIntervalTime;
}
constexpr void Mirror::NetworkTransform::__cordl_internal_set_lastSendIntervalTime(double_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lastSendIntervalTime = value;
}
constexpr float_t& Mirror::NetworkTransform::__cordl_internal_get_bufferResetMultiplier()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bufferResetMultiplier;
}
constexpr float_t const& Mirror::NetworkTransform::__cordl_internal_get_bufferResetMultiplier() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bufferResetMultiplier;
}
constexpr void Mirror::NetworkTransform::__cordl_internal_set_bufferResetMultiplier(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___bufferResetMultiplier = value;
}
constexpr float_t& Mirror::NetworkTransform::__cordl_internal_get_positionSensitivity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___positionSensitivity;
}
constexpr float_t const& Mirror::NetworkTransform::__cordl_internal_get_positionSensitivity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___positionSensitivity;
}
constexpr void Mirror::NetworkTransform::__cordl_internal_set_positionSensitivity(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___positionSensitivity = value;
}
constexpr float_t& Mirror::NetworkTransform::__cordl_internal_get_rotationSensitivity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rotationSensitivity;
}
constexpr float_t const& Mirror::NetworkTransform::__cordl_internal_get_rotationSensitivity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rotationSensitivity;
}
constexpr void Mirror::NetworkTransform::__cordl_internal_set_rotationSensitivity(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rotationSensitivity = value;
}
constexpr float_t& Mirror::NetworkTransform::__cordl_internal_get_scaleSensitivity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___scaleSensitivity;
}
constexpr float_t const& Mirror::NetworkTransform::__cordl_internal_get_scaleSensitivity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___scaleSensitivity;
}
constexpr void Mirror::NetworkTransform::__cordl_internal_set_scaleSensitivity(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___scaleSensitivity = value;
}
constexpr bool& Mirror::NetworkTransform::__cordl_internal_get_positionChanged()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___positionChanged;
}
constexpr bool const& Mirror::NetworkTransform::__cordl_internal_get_positionChanged() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___positionChanged;
}
constexpr void Mirror::NetworkTransform::__cordl_internal_set_positionChanged(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___positionChanged = value;
}
constexpr bool& Mirror::NetworkTransform::__cordl_internal_get_rotationChanged()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rotationChanged;
}
constexpr bool const& Mirror::NetworkTransform::__cordl_internal_get_rotationChanged() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rotationChanged;
}
constexpr void Mirror::NetworkTransform::__cordl_internal_set_rotationChanged(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rotationChanged = value;
}
constexpr bool& Mirror::NetworkTransform::__cordl_internal_get_scaleChanged()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___scaleChanged;
}
constexpr bool const& Mirror::NetworkTransform::__cordl_internal_get_scaleChanged() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___scaleChanged;
}
constexpr void Mirror::NetworkTransform::__cordl_internal_set_scaleChanged(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___scaleChanged = value;
}
constexpr ::Mirror::TransformSnapshot& Mirror::NetworkTransform::__cordl_internal_get_lastSnapshot()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastSnapshot;
}
constexpr ::Mirror::TransformSnapshot const& Mirror::NetworkTransform::__cordl_internal_get_lastSnapshot() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastSnapshot;
}
constexpr void Mirror::NetworkTransform::__cordl_internal_set_lastSnapshot(::Mirror::TransformSnapshot  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lastSnapshot = value;
}
constexpr bool& Mirror::NetworkTransform::__cordl_internal_get_cachedSnapshotComparison()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cachedSnapshotComparison;
}
constexpr bool const& Mirror::NetworkTransform::__cordl_internal_get_cachedSnapshotComparison() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cachedSnapshotComparison;
}
constexpr void Mirror::NetworkTransform::__cordl_internal_set_cachedSnapshotComparison(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___cachedSnapshotComparison = value;
}
constexpr bool& Mirror::NetworkTransform::__cordl_internal_get_hasSentUnchangedPosition()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hasSentUnchangedPosition;
}
constexpr bool const& Mirror::NetworkTransform::__cordl_internal_get_hasSentUnchangedPosition() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hasSentUnchangedPosition;
}
constexpr void Mirror::NetworkTransform::__cordl_internal_set_hasSentUnchangedPosition(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hasSentUnchangedPosition = value;
}
inline void Mirror::NetworkTransform::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkTransform*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Mirror::NetworkTransform::LateUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkTransform*>(),
                        {"LateUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Mirror::NetworkTransform::CheckLastSendTime()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mirror::NetworkTransform*>(), 25}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Mirror::NetworkTransform::UpdateServerBroadcast()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkTransform*>(),
                        {"UpdateServerBroadcast", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Mirror::NetworkTransform::UpdateServerInterpolation()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkTransform*>(),
                        {"UpdateServerInterpolation", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Mirror::NetworkTransform::UpdateClientBroadcast()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkTransform*>(),
                        {"UpdateClientBroadcast", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Mirror::NetworkTransform::UpdateClientInterpolation()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkTransform*>(),
                        {"UpdateClientInterpolation", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Mirror::NetworkTransform::OnSerialize(::Mirror::NetworkWriter*  writer, bool  initialState)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mirror::NetworkTransform*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, writer, initialState);
}
inline void Mirror::NetworkTransform::OnDeserialize(::Mirror::NetworkReader*  reader, bool  initialState)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mirror::NetworkTransform*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, reader, initialState);
}
inline bool Mirror::NetworkTransform::CompareSnapshots(::Mirror::TransformSnapshot  currentSnapshot)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mirror::NetworkTransform*>(), 26}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, currentSnapshot);
}
inline void Mirror::NetworkTransform::CmdClientToServerSync(::System::Nullable_1<::UnityEngine::Vector3>  position, ::System::Nullable_1<::UnityEngine::Quaternion>  rotation, ::System::Nullable_1<::UnityEngine::Vector3>  scale)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkTransform*>(),
                        {"CmdClientToServerSync", {}, {::i2c::type_of<::System::Nullable_1<::UnityEngine::Vector3>>(), ::i2c::type_of<::System::Nullable_1<::UnityEngine::Quaternion>>(), ::i2c::type_of<::System::Nullable_1<::UnityEngine::Vector3>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, position, rotation, scale);
}
inline void Mirror::NetworkTransform::OnClientToServerSync(::System::Nullable_1<::UnityEngine::Vector3>  position, ::System::Nullable_1<::UnityEngine::Quaternion>  rotation, ::System::Nullable_1<::UnityEngine::Vector3>  scale)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mirror::NetworkTransform*>(), 27}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, position, rotation, scale);
}
inline void Mirror::NetworkTransform::RpcServerToClientSync(::System::Nullable_1<::UnityEngine::Vector3>  position, ::System::Nullable_1<::UnityEngine::Quaternion>  rotation, ::System::Nullable_1<::UnityEngine::Vector3>  scale)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkTransform*>(),
                        {"RpcServerToClientSync", {}, {::i2c::type_of<::System::Nullable_1<::UnityEngine::Vector3>>(), ::i2c::type_of<::System::Nullable_1<::UnityEngine::Quaternion>>(), ::i2c::type_of<::System::Nullable_1<::UnityEngine::Vector3>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, position, rotation, scale);
}
inline void Mirror::NetworkTransform::OnServerToClientSync(::System::Nullable_1<::UnityEngine::Vector3>  position, ::System::Nullable_1<::UnityEngine::Quaternion>  rotation, ::System::Nullable_1<::UnityEngine::Vector3>  scale)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mirror::NetworkTransform*>(), 28}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, position, rotation, scale);
}
inline void Mirror::NetworkTransform::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkTransform*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Mirror::NetworkTransform::MirrorProcessed()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkTransform*>(),
                        {"MirrorProcessed", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Mirror::NetworkTransform::UserCode_CmdClientToServerSync__Nullable_1__Nullable_1__Nullable_1(::System::Nullable_1<::UnityEngine::Vector3>  position, ::System::Nullable_1<::UnityEngine::Quaternion>  rotation, ::System::Nullable_1<::UnityEngine::Vector3>  scale)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkTransform*>(),
                        {"UserCode_CmdClientToServerSync__Nullable`1__Nullable`1__Nullable`1", {}, {::i2c::type_of<::System::Nullable_1<::UnityEngine::Vector3>>(), ::i2c::type_of<::System::Nullable_1<::UnityEngine::Quaternion>>(), ::i2c::type_of<::System::Nullable_1<::UnityEngine::Vector3>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, position, rotation, scale);
}
inline void Mirror::NetworkTransform::InvokeUserCode_CmdClientToServerSync__Nullable_1__Nullable_1__Nullable_1(::Mirror::NetworkBehaviour*  obj, ::Mirror::NetworkReader*  reader, ::Mirror::NetworkConnectionToClient*  senderConnection)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkTransform*>(),
                        {"InvokeUserCode_CmdClientToServerSync__Nullable`1__Nullable`1__Nullable`1", {}, {::i2c::type_of<::Mirror::NetworkBehaviour*>(), ::i2c::type_of<::Mirror::NetworkReader*>(), ::i2c::type_of<::Mirror::NetworkConnectionToClient*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, obj, reader, senderConnection);
}
inline void Mirror::NetworkTransform::UserCode_RpcServerToClientSync__Nullable_1__Nullable_1__Nullable_1(::System::Nullable_1<::UnityEngine::Vector3>  position, ::System::Nullable_1<::UnityEngine::Quaternion>  rotation, ::System::Nullable_1<::UnityEngine::Vector3>  scale)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkTransform*>(),
                        {"UserCode_RpcServerToClientSync__Nullable`1__Nullable`1__Nullable`1", {}, {::i2c::type_of<::System::Nullable_1<::UnityEngine::Vector3>>(), ::i2c::type_of<::System::Nullable_1<::UnityEngine::Quaternion>>(), ::i2c::type_of<::System::Nullable_1<::UnityEngine::Vector3>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, position, rotation, scale);
}
inline void Mirror::NetworkTransform::InvokeUserCode_RpcServerToClientSync__Nullable_1__Nullable_1__Nullable_1(::Mirror::NetworkBehaviour*  obj, ::Mirror::NetworkReader*  reader, ::Mirror::NetworkConnectionToClient*  senderConnection)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkTransform*>(),
                        {"InvokeUserCode_RpcServerToClientSync__Nullable`1__Nullable`1__Nullable`1", {}, {::i2c::type_of<::Mirror::NetworkBehaviour*>(), ::i2c::type_of<::Mirror::NetworkReader*>(), ::i2c::type_of<::Mirror::NetworkConnectionToClient*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, obj, reader, senderConnection);
}
inline ::Mirror::NetworkTransform* Mirror::NetworkTransform::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Mirror::NetworkTransform*>());
}
// Ctor Parameters []
constexpr ::Mirror::NetworkTransform::NetworkTransform()   {
}

#pragma once
// IWYU pragma private; include "Mirror/NetworkTransform.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Mirror/zzzz__NetworkTransformBase_def.hpp"
#include "Mirror/zzzz__TransformSnapshot_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(NetworkTransform)
namespace Mirror {
class NetworkBehaviour;
}
namespace Mirror {
class NetworkConnectionToClient;
}
namespace Mirror {
class NetworkReader;
}
namespace Mirror {
class NetworkWriter;
}
namespace Mirror {
struct TransformSnapshot;
}
namespace System {
template<typename T>
struct Nullable_1;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace Mirror {
class NetworkTransform;
}
// Write type traits
MARK_REF_T(::Mirror::NetworkTransform*);
DEFINE_IL2CPP_CLASS(::Mirror::NetworkTransform*, "Mirror", "NetworkTransform");
// Dependencies Mirror.NetworkTransformBase, Mirror.TransformSnapshot
namespace Mirror {
// Is value type: false
// CS Name: Mirror.NetworkTransform
class CORDL_TYPE NetworkTransform : public ::Mirror::NetworkTransformBase {
public:
// Declarations
/// @brief Field bufferResetMultiplier, offset 0xb8, size 0x4 
 __declspec(property(get=__cordl_internal_get_bufferResetMultiplier, put=__cordl_internal_set_bufferResetMultiplier)) float_t  bufferResetMultiplier;

/// @brief Field cachedSnapshotComparison, offset 0x108, size 0x1 
 __declspec(property(get=__cordl_internal_get_cachedSnapshotComparison, put=__cordl_internal_set_cachedSnapshotComparison)) bool  cachedSnapshotComparison;

/// @brief Field hasSentUnchangedPosition, offset 0x109, size 0x1 
 __declspec(property(get=__cordl_internal_get_hasSentUnchangedPosition, put=__cordl_internal_set_hasSentUnchangedPosition)) bool  hasSentUnchangedPosition;

/// @brief Field lastSendIntervalTime, offset 0xb0, size 0x8 
 __declspec(property(get=__cordl_internal_get_lastSendIntervalTime, put=__cordl_internal_set_lastSendIntervalTime)) double_t  lastSendIntervalTime;

/// @brief Field lastSnapshot, offset 0xd0, size 0x38 
 __declspec(property(get=__cordl_internal_get_lastSnapshot, put=__cordl_internal_set_lastSnapshot)) ::Mirror::TransformSnapshot  lastSnapshot;

/// @brief Field onlySyncOnChange, offset 0xa8, size 0x1 
 __declspec(property(get=__cordl_internal_get_onlySyncOnChange, put=__cordl_internal_set_onlySyncOnChange)) bool  onlySyncOnChange;

/// @brief Field positionChanged, offset 0xc8, size 0x1 
 __declspec(property(get=__cordl_internal_get_positionChanged, put=__cordl_internal_set_positionChanged)) bool  positionChanged;

/// @brief Field positionSensitivity, offset 0xbc, size 0x4 
 __declspec(property(get=__cordl_internal_get_positionSensitivity, put=__cordl_internal_set_positionSensitivity)) float_t  positionSensitivity;

/// @brief Field rotationChanged, offset 0xc9, size 0x1 
 __declspec(property(get=__cordl_internal_get_rotationChanged, put=__cordl_internal_set_rotationChanged)) bool  rotationChanged;

/// @brief Field rotationSensitivity, offset 0xc0, size 0x4 
 __declspec(property(get=__cordl_internal_get_rotationSensitivity, put=__cordl_internal_set_rotationSensitivity)) float_t  rotationSensitivity;

/// @brief Field scaleChanged, offset 0xca, size 0x1 
 __declspec(property(get=__cordl_internal_get_scaleChanged, put=__cordl_internal_set_scaleChanged)) bool  scaleChanged;

/// @brief Field scaleSensitivity, offset 0xc4, size 0x4 
 __declspec(property(get=__cordl_internal_get_scaleSensitivity, put=__cordl_internal_set_scaleSensitivity)) float_t  scaleSensitivity;

/// @brief Field sendIntervalCounter, offset 0xac, size 0x4 
 __declspec(property(get=__cordl_internal_get_sendIntervalCounter, put=__cordl_internal_set_sendIntervalCounter)) uint32_t  sendIntervalCounter;

/// @brief Method CheckLastSendTime, addr 0x18152a460, size 0x80, virtual true, abstract: false, final false
inline void CheckLastSendTime() ;

/// @brief Method CmdClientToServerSync, addr 0x18152a4e0, size 0x130, virtual false, abstract: false, final false
inline void CmdClientToServerSync(::System::Nullable_1<::UnityEngine::Vector3>  position, ::System::Nullable_1<::UnityEngine::Quaternion>  rotation, ::System::Nullable_1<::UnityEngine::Vector3>  scale) ;

/// @brief Method CompareSnapshots, addr 0x18152a610, size 0x1a0, virtual true, abstract: false, final false
inline bool CompareSnapshots(::Mirror::TransformSnapshot  currentSnapshot) ;

/// @brief Method InvokeUserCode_CmdClientToServerSync__Nullable`1__Nullable`1__Nullable`1, addr 0x18152a7b0, size 0x260, virtual false, abstract: false, final false
static inline void InvokeUserCode_CmdClientToServerSync__Nullable_1__Nullable_1__Nullable_1(::Mirror::NetworkBehaviour*  obj, ::Mirror::NetworkReader*  reader, ::Mirror::NetworkConnectionToClient*  senderConnection) ;

/// @brief Method InvokeUserCode_RpcServerToClientSync__Nullable`1__Nullable`1__Nullable`1, addr 0x18152aa10, size 0x180, virtual false, abstract: false, final false
static inline void InvokeUserCode_RpcServerToClientSync__Nullable_1__Nullable_1__Nullable_1(::Mirror::NetworkBehaviour*  obj, ::Mirror::NetworkReader*  reader, ::Mirror::NetworkConnectionToClient*  senderConnection) ;

/// @brief Method LateUpdate, addr 0x18152ab90, size 0x60, virtual false, abstract: false, final false
inline void LateUpdate() ;

/// @brief Method MirrorProcessed, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void MirrorProcessed() ;

static inline ::Mirror::NetworkTransform* New_ctor() ;

/// @brief Method OnClientToServerSync, addr 0x18152abf0, size 0x240, virtual true, abstract: false, final false
inline void OnClientToServerSync(::System::Nullable_1<::UnityEngine::Vector3>  position, ::System::Nullable_1<::UnityEngine::Quaternion>  rotation, ::System::Nullable_1<::UnityEngine::Vector3>  scale) ;

/// @brief Method OnDeserialize, addr 0x18152ae30, size 0x100, virtual true, abstract: false, final false
inline void OnDeserialize(::Mirror::NetworkReader*  reader, bool  initialState) ;

/// @brief Method OnSerialize, addr 0x18152af30, size 0xf0, virtual true, abstract: false, final false
inline void OnSerialize(::Mirror::NetworkWriter*  writer, bool  initialState) ;

/// @brief Method OnServerToClientSync, addr 0x18152b020, size 0x280, virtual true, abstract: false, final false
inline void OnServerToClientSync(::System::Nullable_1<::UnityEngine::Vector3>  position, ::System::Nullable_1<::UnityEngine::Quaternion>  rotation, ::System::Nullable_1<::UnityEngine::Vector3>  scale) ;

/// @brief Method RpcServerToClientSync, addr 0x18152b2a0, size 0x130, virtual false, abstract: false, final false
inline void RpcServerToClientSync(::System::Nullable_1<::UnityEngine::Vector3>  position, ::System::Nullable_1<::UnityEngine::Quaternion>  rotation, ::System::Nullable_1<::UnityEngine::Vector3>  scale) ;

/// @brief Method Update, addr 0x18152be80, size 0x2f0, virtual false, abstract: false, final false
inline void Update() ;

/// @brief Method UpdateClientBroadcast, addr 0x18152b3d0, size 0x3b0, virtual false, abstract: false, final false
inline void UpdateClientBroadcast() ;

/// @brief Method UpdateClientInterpolation, addr 0x18152b780, size 0x190, virtual false, abstract: false, final false
inline void UpdateClientInterpolation() ;

/// @brief Method UpdateServerBroadcast, addr 0x18152b910, size 0x3a0, virtual false, abstract: false, final false
inline void UpdateServerBroadcast() ;

/// @brief Method UpdateServerInterpolation, addr 0x18152bcb0, size 0x1d0, virtual false, abstract: false, final false
inline void UpdateServerInterpolation() ;

/// @brief Method UserCode_CmdClientToServerSync__Nullable`1__Nullable`1__Nullable`1, addr 0x18152c170, size 0x190, virtual false, abstract: false, final false
inline void UserCode_CmdClientToServerSync__Nullable_1__Nullable_1__Nullable_1(::System::Nullable_1<::UnityEngine::Vector3>  position, ::System::Nullable_1<::UnityEngine::Quaternion>  rotation, ::System::Nullable_1<::UnityEngine::Vector3>  scale) ;

/// @brief Method UserCode_RpcServerToClientSync__Nullable`1__Nullable`1__Nullable`1, addr 0x18152c300, size 0x60, virtual false, abstract: false, final false
inline void UserCode_RpcServerToClientSync__Nullable_1__Nullable_1__Nullable_1(::System::Nullable_1<::UnityEngine::Vector3>  position, ::System::Nullable_1<::UnityEngine::Quaternion>  rotation, ::System::Nullable_1<::UnityEngine::Vector3>  scale) ;

constexpr float_t const& __cordl_internal_get_bufferResetMultiplier() const;

constexpr float_t& __cordl_internal_get_bufferResetMultiplier() ;

constexpr bool const& __cordl_internal_get_cachedSnapshotComparison() const;

constexpr bool& __cordl_internal_get_cachedSnapshotComparison() ;

constexpr bool const& __cordl_internal_get_hasSentUnchangedPosition() const;

constexpr bool& __cordl_internal_get_hasSentUnchangedPosition() ;

constexpr double_t const& __cordl_internal_get_lastSendIntervalTime() const;

constexpr double_t& __cordl_internal_get_lastSendIntervalTime() ;

constexpr ::Mirror::TransformSnapshot const& __cordl_internal_get_lastSnapshot() const;

constexpr ::Mirror::TransformSnapshot& __cordl_internal_get_lastSnapshot() ;

constexpr bool const& __cordl_internal_get_onlySyncOnChange() const;

constexpr bool& __cordl_internal_get_onlySyncOnChange() ;

constexpr bool const& __cordl_internal_get_positionChanged() const;

constexpr bool& __cordl_internal_get_positionChanged() ;

constexpr float_t const& __cordl_internal_get_positionSensitivity() const;

constexpr float_t& __cordl_internal_get_positionSensitivity() ;

constexpr bool const& __cordl_internal_get_rotationChanged() const;

constexpr bool& __cordl_internal_get_rotationChanged() ;

constexpr float_t const& __cordl_internal_get_rotationSensitivity() const;

constexpr float_t& __cordl_internal_get_rotationSensitivity() ;

constexpr bool const& __cordl_internal_get_scaleChanged() const;

constexpr bool& __cordl_internal_get_scaleChanged() ;

constexpr float_t const& __cordl_internal_get_scaleSensitivity() const;

constexpr float_t& __cordl_internal_get_scaleSensitivity() ;

constexpr uint32_t const& __cordl_internal_get_sendIntervalCounter() const;

constexpr uint32_t& __cordl_internal_get_sendIntervalCounter() ;

constexpr void __cordl_internal_set_bufferResetMultiplier(float_t  value) ;

constexpr void __cordl_internal_set_cachedSnapshotComparison(bool  value) ;

constexpr void __cordl_internal_set_hasSentUnchangedPosition(bool  value) ;

constexpr void __cordl_internal_set_lastSendIntervalTime(double_t  value) ;

constexpr void __cordl_internal_set_lastSnapshot(::Mirror::TransformSnapshot  value) ;

constexpr void __cordl_internal_set_onlySyncOnChange(bool  value) ;

constexpr void __cordl_internal_set_positionChanged(bool  value) ;

constexpr void __cordl_internal_set_positionSensitivity(float_t  value) ;

constexpr void __cordl_internal_set_rotationChanged(bool  value) ;

constexpr void __cordl_internal_set_rotationSensitivity(float_t  value) ;

constexpr void __cordl_internal_set_scaleChanged(bool  value) ;

constexpr void __cordl_internal_set_scaleSensitivity(float_t  value) ;

constexpr void __cordl_internal_set_sendIntervalCounter(uint32_t  value) ;

/// @brief Method .ctor, addr 0x18152c420, size 0xa0, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NetworkTransform() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NetworkTransform", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
NetworkTransform(NetworkTransform && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NetworkTransform", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
NetworkTransform(NetworkTransform const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19246};

/// @brief Field onlySyncOnChange, offset: 0xa8, size: 0x1, def value: None
 bool  ___onlySyncOnChange;

/// @brief Field sendIntervalCounter, offset: 0xac, size: 0x4, def value: None
 uint32_t  ___sendIntervalCounter;

/// @brief Field lastSendIntervalTime, offset: 0xb0, size: 0x8, def value: None
 double_t  ___lastSendIntervalTime;

/// @brief Field bufferResetMultiplier, offset: 0xb8, size: 0x4, def value: None
 float_t  ___bufferResetMultiplier;

/// @brief Field positionSensitivity, offset: 0xbc, size: 0x4, def value: None
 float_t  ___positionSensitivity;

/// @brief Field rotationSensitivity, offset: 0xc0, size: 0x4, def value: None
 float_t  ___rotationSensitivity;

/// @brief Field scaleSensitivity, offset: 0xc4, size: 0x4, def value: None
 float_t  ___scaleSensitivity;

/// @brief Field positionChanged, offset: 0xc8, size: 0x1, def value: None
 bool  ___positionChanged;

/// @brief Field rotationChanged, offset: 0xc9, size: 0x1, def value: None
 bool  ___rotationChanged;

/// @brief Field scaleChanged, offset: 0xca, size: 0x1, def value: None
 bool  ___scaleChanged;

/// @brief Field lastSnapshot, offset: 0xd0, size: 0x38, def value: None
 ::Mirror::TransformSnapshot  ___lastSnapshot;

/// @brief Field cachedSnapshotComparison, offset: 0x108, size: 0x1, def value: None
 bool  ___cachedSnapshotComparison;

/// @brief Field hasSentUnchangedPosition, offset: 0x109, size: 0x1, def value: None
 bool  ___hasSentUnchangedPosition;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Mirror::NetworkTransform, ___onlySyncOnChange) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::Mirror::NetworkTransform, ___sendIntervalCounter) == 0xac, "Offset mismatch!");

static_assert(offsetof(::Mirror::NetworkTransform, ___lastSendIntervalTime) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::Mirror::NetworkTransform, ___bufferResetMultiplier) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::Mirror::NetworkTransform, ___positionSensitivity) == 0xbc, "Offset mismatch!");

static_assert(offsetof(::Mirror::NetworkTransform, ___rotationSensitivity) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::Mirror::NetworkTransform, ___scaleSensitivity) == 0xc4, "Offset mismatch!");

static_assert(offsetof(::Mirror::NetworkTransform, ___positionChanged) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::Mirror::NetworkTransform, ___rotationChanged) == 0xc9, "Offset mismatch!");

static_assert(offsetof(::Mirror::NetworkTransform, ___scaleChanged) == 0xca, "Offset mismatch!");

static_assert(offsetof(::Mirror::NetworkTransform, ___lastSnapshot) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::Mirror::NetworkTransform, ___cachedSnapshotComparison) == 0x108, "Offset mismatch!");

static_assert(offsetof(::Mirror::NetworkTransform, ___hasSentUnchangedPosition) == 0x109, "Offset mismatch!");

static_assert(sizeof(::Mirror::NetworkTransform) == 0x110, "Size mismatch!");

} // namespace end def Mirror

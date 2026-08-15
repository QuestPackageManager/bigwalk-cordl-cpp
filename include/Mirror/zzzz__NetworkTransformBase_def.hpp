#pragma once
// IWYU pragma private; include "Mirror/NetworkTransformBase.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Mirror/zzzz__NetworkBehaviour_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(NetworkTransformBase)
namespace Mirror {
class NetworkBehaviour;
}
namespace Mirror {
class NetworkConnectionToClient;
}
namespace Mirror {
class NetworkIdentity;
}
namespace Mirror {
class NetworkReader;
}
namespace Mirror {
struct TransformSnapshot;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class SortedList_2;
}
namespace System {
template<typename T>
struct Nullable_1;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace Mirror {
class NetworkTransformBase;
}
// Write type traits
MARK_REF_T(::Mirror::NetworkTransformBase*);
DEFINE_IL2CPP_CLASS(::Mirror::NetworkTransformBase*, "Mirror", "NetworkTransformBase");
// Dependencies Mirror.NetworkBehaviour, UnityEngine.Color
namespace Mirror {
// Is value type: false
// CS Name: Mirror.NetworkTransformBase
class CORDL_TYPE NetworkTransformBase : public ::Mirror::NetworkBehaviour {
public:
// Declarations
 __declspec(property(get=get_IsClientWithAuthority)) bool  IsClientWithAuthority;

/// @brief Field clientAuthority, offset 0x70, size 0x1 
 __declspec(property(get=__cordl_internal_get_clientAuthority, put=__cordl_internal_set_clientAuthority)) bool  clientAuthority;

/// @brief Field clientSnapshots, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get_clientSnapshots, put=__cordl_internal_set_clientSnapshots)) ::System::Collections::Generic::SortedList_2<double_t,::Mirror::TransformSnapshot>*  clientSnapshots;

/// @brief Field interpolatePosition, offset 0x8b, size 0x1 
 __declspec(property(get=__cordl_internal_get_interpolatePosition, put=__cordl_internal_set_interpolatePosition)) bool  interpolatePosition;

/// @brief Field interpolateRotation, offset 0x8c, size 0x1 
 __declspec(property(get=__cordl_internal_get_interpolateRotation, put=__cordl_internal_set_interpolateRotation)) bool  interpolateRotation;

/// @brief Field interpolateScale, offset 0x8d, size 0x1 
 __declspec(property(get=__cordl_internal_get_interpolateScale, put=__cordl_internal_set_interpolateScale)) bool  interpolateScale;

 __declspec(property(get=get_offset)) double_t  offset;

/// @brief Field overlayColor, offset 0x98, size 0x10 
 __declspec(property(get=__cordl_internal_get_overlayColor, put=__cordl_internal_set_overlayColor)) ::UnityEngine::Color  overlayColor;

/// @brief Field sendIntervalMultiplier, offset 0x90, size 0x4 
 __declspec(property(get=__cordl_internal_get_sendIntervalMultiplier, put=__cordl_internal_set_sendIntervalMultiplier)) uint32_t  sendIntervalMultiplier;

/// @brief Field serverSnapshots, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get_serverSnapshots, put=__cordl_internal_set_serverSnapshots)) ::System::Collections::Generic::SortedList_2<double_t,::Mirror::TransformSnapshot>*  serverSnapshots;

/// @brief Field showGizmos, offset 0x95, size 0x1 
 __declspec(property(get=__cordl_internal_get_showGizmos, put=__cordl_internal_set_showGizmos)) bool  showGizmos;

/// @brief Field showOverlay, offset 0x96, size 0x1 
 __declspec(property(get=__cordl_internal_get_showOverlay, put=__cordl_internal_set_showOverlay)) bool  showOverlay;

/// @brief Field syncPosition, offset 0x88, size 0x1 
 __declspec(property(get=__cordl_internal_get_syncPosition, put=__cordl_internal_set_syncPosition)) bool  syncPosition;

/// @brief Field syncRotation, offset 0x89, size 0x1 
 __declspec(property(get=__cordl_internal_get_syncRotation, put=__cordl_internal_set_syncRotation)) bool  syncRotation;

/// @brief Field syncScale, offset 0x8a, size 0x1 
 __declspec(property(get=__cordl_internal_get_syncScale, put=__cordl_internal_set_syncScale)) bool  syncScale;

/// @brief Field target, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_target, put=__cordl_internal_set_target)) ::UnityW<::UnityEngine::Transform>  target;

 __declspec(property(get=get_timeStampAdjustment)) double_t  timeStampAdjustment;

/// @brief Field timelineOffset, offset 0x94, size 0x1 
 __declspec(property(get=__cordl_internal_get_timelineOffset, put=__cordl_internal_set_timelineOffset)) bool  timelineOffset;

/// @brief Method AddSnapshot, addr 0x181526cf0, size 0x330, virtual false, abstract: false, final false
inline void AddSnapshot(::System::Collections::Generic::SortedList_2<double_t,::Mirror::TransformSnapshot>*  snapshots, double_t  timeStamp, ::System::Nullable_1<::UnityEngine::Vector3>  position, ::System::Nullable_1<::UnityEngine::Quaternion>  rotation, ::System::Nullable_1<::UnityEngine::Vector3>  scale) ;

/// @brief Method Apply, addr 0x181527020, size 0x100, virtual true, abstract: false, final false
inline void Apply(::Mirror::TransformSnapshot  interpolated, ::Mirror::TransformSnapshot  endGoal) ;

/// @brief Method Awake, addr 0x1802d9d80, size 0x10, virtual true, abstract: false, final false
inline void Awake() ;

/// @brief Method CmdTeleport, addr 0x181527220, size 0xe0, virtual false, abstract: false, final false
inline void CmdTeleport(::UnityEngine::Vector3  destination) ;

/// @brief Method CmdTeleport, addr 0x181527120, size 0x100, virtual false, abstract: false, final false
inline void CmdTeleport(::UnityEngine::Vector3  destination, ::UnityEngine::Quaternion  rotation) ;

/// @brief Method Construct, addr 0x181527300, size 0xe0, virtual true, abstract: false, final false
inline ::Mirror::TransformSnapshot Construct() ;

/// @brief Method InvokeUserCode_CmdTeleport__Vector3, addr 0x1815275e0, size 0x1c0, virtual false, abstract: false, final false
static inline void InvokeUserCode_CmdTeleport__Vector3(::Mirror::NetworkBehaviour*  obj, ::Mirror::NetworkReader*  reader, ::Mirror::NetworkConnectionToClient*  senderConnection) ;

/// @brief Method InvokeUserCode_CmdTeleport__Vector3__Quaternion, addr 0x1815273e0, size 0x200, virtual false, abstract: false, final false
static inline void InvokeUserCode_CmdTeleport__Vector3__Quaternion(::Mirror::NetworkBehaviour*  obj, ::Mirror::NetworkReader*  reader, ::Mirror::NetworkConnectionToClient*  senderConnection) ;

/// @brief Method InvokeUserCode_RpcReset, addr 0x1815277a0, size 0xb0, virtual false, abstract: false, final false
static inline void InvokeUserCode_RpcReset(::Mirror::NetworkBehaviour*  obj, ::Mirror::NetworkReader*  reader, ::Mirror::NetworkConnectionToClient*  senderConnection) ;

/// @brief Method InvokeUserCode_RpcTeleport__Vector3, addr 0x181527980, size 0x100, virtual false, abstract: false, final false
static inline void InvokeUserCode_RpcTeleport__Vector3(::Mirror::NetworkBehaviour*  obj, ::Mirror::NetworkReader*  reader, ::Mirror::NetworkConnectionToClient*  senderConnection) ;

/// @brief Method InvokeUserCode_RpcTeleport__Vector3__Quaternion, addr 0x181527850, size 0x130, virtual false, abstract: false, final false
static inline void InvokeUserCode_RpcTeleport__Vector3__Quaternion(::Mirror::NetworkBehaviour*  obj, ::Mirror::NetworkReader*  reader, ::Mirror::NetworkConnectionToClient*  senderConnection) ;

/// @brief Method MirrorProcessed, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void MirrorProcessed() ;

static inline ::Mirror::NetworkTransformBase* New_ctor() ;

/// @brief Method OnClientAuthorityChanged, addr 0x181527a80, size 0x110, virtual false, abstract: false, final false
inline void OnClientAuthorityChanged(::Mirror::NetworkConnectionToClient*  conn, ::Mirror::NetworkIdentity*  identity, bool  authorityState) ;

/// @brief Method OnDisable, addr 0x181527b90, size 0x90, virtual true, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x181527c20, size 0x90, virtual true, abstract: false, final false
inline void OnEnable() ;

/// @brief Method OnTeleport, addr 0x181527cb0, size 0x60, virtual true, abstract: false, final false
inline void OnTeleport(::UnityEngine::Vector3  destination) ;

/// @brief Method OnTeleport, addr 0x181527d10, size 0x90, virtual true, abstract: false, final false
inline void OnTeleport(::UnityEngine::Vector3  destination, ::UnityEngine::Quaternion  rotation) ;

/// @brief Method OnValidate, addr 0x181527da0, size 0x80, virtual true, abstract: false, final false
inline void OnValidate() ;

/// @brief Method Reset, addr 0x181527e20, size 0x40, virtual true, abstract: false, final false
inline void Reset() ;

/// @brief Method RpcReset, addr 0x181527e60, size 0xb0, virtual false, abstract: false, final false
inline void RpcReset() ;

/// @brief Method RpcTeleport, addr 0x181528010, size 0xe0, virtual false, abstract: false, final false
inline void RpcTeleport(::UnityEngine::Vector3  destination) ;

/// @brief Method RpcTeleport, addr 0x181527f10, size 0x100, virtual false, abstract: false, final false
inline void RpcTeleport(::UnityEngine::Vector3  destination, ::UnityEngine::Quaternion  rotation) ;

/// @brief Method UserCode_CmdTeleport__Vector3, addr 0x181528230, size 0x110, virtual false, abstract: false, final false
inline void UserCode_CmdTeleport__Vector3(::UnityEngine::Vector3  destination) ;

/// @brief Method UserCode_CmdTeleport__Vector3__Quaternion, addr 0x1815280f0, size 0x140, virtual false, abstract: false, final false
inline void UserCode_CmdTeleport__Vector3__Quaternion(::UnityEngine::Vector3  destination, ::UnityEngine::Quaternion  rotation) ;

/// @brief Method UserCode_RpcReset, addr 0x181528340, size 0x20, virtual false, abstract: false, final false
inline void UserCode_RpcReset() ;

/// @brief Method UserCode_RpcTeleport__Vector3, addr 0x1815283a0, size 0x40, virtual false, abstract: false, final false
inline void UserCode_RpcTeleport__Vector3(::UnityEngine::Vector3  destination) ;

/// @brief Method UserCode_RpcTeleport__Vector3__Quaternion, addr 0x181528360, size 0x40, virtual false, abstract: false, final false
inline void UserCode_RpcTeleport__Vector3__Quaternion(::UnityEngine::Vector3  destination, ::UnityEngine::Quaternion  rotation) ;

constexpr bool const& __cordl_internal_get_clientAuthority() const;

constexpr bool& __cordl_internal_get_clientAuthority() ;

constexpr ::System::Collections::Generic::SortedList_2<double_t,::Mirror::TransformSnapshot>* const& __cordl_internal_get_clientSnapshots() const;

constexpr ::System::Collections::Generic::SortedList_2<double_t,::Mirror::TransformSnapshot>*& __cordl_internal_get_clientSnapshots() ;

constexpr bool const& __cordl_internal_get_interpolatePosition() const;

constexpr bool& __cordl_internal_get_interpolatePosition() ;

constexpr bool const& __cordl_internal_get_interpolateRotation() const;

constexpr bool& __cordl_internal_get_interpolateRotation() ;

constexpr bool const& __cordl_internal_get_interpolateScale() const;

constexpr bool& __cordl_internal_get_interpolateScale() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get_overlayColor() const;

constexpr ::UnityEngine::Color& __cordl_internal_get_overlayColor() ;

constexpr uint32_t const& __cordl_internal_get_sendIntervalMultiplier() const;

constexpr uint32_t& __cordl_internal_get_sendIntervalMultiplier() ;

constexpr ::System::Collections::Generic::SortedList_2<double_t,::Mirror::TransformSnapshot>* const& __cordl_internal_get_serverSnapshots() const;

constexpr ::System::Collections::Generic::SortedList_2<double_t,::Mirror::TransformSnapshot>*& __cordl_internal_get_serverSnapshots() ;

constexpr bool const& __cordl_internal_get_showGizmos() const;

constexpr bool& __cordl_internal_get_showGizmos() ;

constexpr bool const& __cordl_internal_get_showOverlay() const;

constexpr bool& __cordl_internal_get_showOverlay() ;

constexpr bool const& __cordl_internal_get_syncPosition() const;

constexpr bool& __cordl_internal_get_syncPosition() ;

constexpr bool const& __cordl_internal_get_syncRotation() const;

constexpr bool& __cordl_internal_get_syncRotation() ;

constexpr bool const& __cordl_internal_get_syncScale() const;

constexpr bool& __cordl_internal_get_syncScale() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_target() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_target() ;

constexpr bool const& __cordl_internal_get_timelineOffset() const;

constexpr bool& __cordl_internal_get_timelineOffset() ;

constexpr void __cordl_internal_set_clientAuthority(bool  value) ;

constexpr void __cordl_internal_set_clientSnapshots(::System::Collections::Generic::SortedList_2<double_t,::Mirror::TransformSnapshot>*  value) ;

constexpr void __cordl_internal_set_interpolatePosition(bool  value) ;

constexpr void __cordl_internal_set_interpolateRotation(bool  value) ;

constexpr void __cordl_internal_set_interpolateScale(bool  value) ;

constexpr void __cordl_internal_set_overlayColor(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set_sendIntervalMultiplier(uint32_t  value) ;

constexpr void __cordl_internal_set_serverSnapshots(::System::Collections::Generic::SortedList_2<double_t,::Mirror::TransformSnapshot>*  value) ;

constexpr void __cordl_internal_set_showGizmos(bool  value) ;

constexpr void __cordl_internal_set_showOverlay(bool  value) ;

constexpr void __cordl_internal_set_syncPosition(bool  value) ;

constexpr void __cordl_internal_set_syncRotation(bool  value) ;

constexpr void __cordl_internal_set_syncScale(bool  value) ;

constexpr void __cordl_internal_set_target(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_timelineOffset(bool  value) ;

/// @brief Method .ctor, addr 0x181528580, size 0xc0, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_IsClientWithAuthority, addr 0x181528640, size 0x30, virtual false, abstract: false, final false
inline bool get_IsClientWithAuthority() ;

/// @brief Method get_offset, addr 0x181528670, size 0x50, virtual false, abstract: false, final false
inline double_t get_offset() ;

/// @brief Method get_timeStampAdjustment, addr 0x1815286c0, size 0x40, virtual false, abstract: false, final false
inline double_t get_timeStampAdjustment() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NetworkTransformBase() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NetworkTransformBase", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
NetworkTransformBase(NetworkTransformBase && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NetworkTransformBase", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
NetworkTransformBase(NetworkTransformBase const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19244};

/// @brief Field target, offset: 0x68, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___target;

/// @brief Field clientAuthority, offset: 0x70, size: 0x1, def value: None
 bool  ___clientAuthority;

/// @brief Field clientSnapshots, offset: 0x78, size: 0x8, def value: None
 ::System::Collections::Generic::SortedList_2<double_t,::Mirror::TransformSnapshot>*  ___clientSnapshots;

/// @brief Field serverSnapshots, offset: 0x80, size: 0x8, def value: None
 ::System::Collections::Generic::SortedList_2<double_t,::Mirror::TransformSnapshot>*  ___serverSnapshots;

/// @brief Field syncPosition, offset: 0x88, size: 0x1, def value: None
 bool  ___syncPosition;

/// @brief Field syncRotation, offset: 0x89, size: 0x1, def value: None
 bool  ___syncRotation;

/// @brief Field syncScale, offset: 0x8a, size: 0x1, def value: None
 bool  ___syncScale;

/// @brief Field interpolatePosition, offset: 0x8b, size: 0x1, def value: None
 bool  ___interpolatePosition;

/// @brief Field interpolateRotation, offset: 0x8c, size: 0x1, def value: None
 bool  ___interpolateRotation;

/// @brief Field interpolateScale, offset: 0x8d, size: 0x1, def value: None
 bool  ___interpolateScale;

/// @brief Field sendIntervalMultiplier, offset: 0x90, size: 0x4, def value: None
 uint32_t  ___sendIntervalMultiplier;

/// @brief Field timelineOffset, offset: 0x94, size: 0x1, def value: None
 bool  ___timelineOffset;

/// @brief Field showGizmos, offset: 0x95, size: 0x1, def value: None
 bool  ___showGizmos;

/// @brief Field showOverlay, offset: 0x96, size: 0x1, def value: None
 bool  ___showOverlay;

/// @brief Field overlayColor, offset: 0x98, size: 0x10, def value: None
 ::UnityEngine::Color  ___overlayColor;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Mirror::NetworkTransformBase, ___target) == 0x68, "Offset mismatch!");

static_assert(offsetof(::Mirror::NetworkTransformBase, ___clientAuthority) == 0x70, "Offset mismatch!");

static_assert(offsetof(::Mirror::NetworkTransformBase, ___clientSnapshots) == 0x78, "Offset mismatch!");

static_assert(offsetof(::Mirror::NetworkTransformBase, ___serverSnapshots) == 0x80, "Offset mismatch!");

static_assert(offsetof(::Mirror::NetworkTransformBase, ___syncPosition) == 0x88, "Offset mismatch!");

static_assert(offsetof(::Mirror::NetworkTransformBase, ___syncRotation) == 0x89, "Offset mismatch!");

static_assert(offsetof(::Mirror::NetworkTransformBase, ___syncScale) == 0x8a, "Offset mismatch!");

static_assert(offsetof(::Mirror::NetworkTransformBase, ___interpolatePosition) == 0x8b, "Offset mismatch!");

static_assert(offsetof(::Mirror::NetworkTransformBase, ___interpolateRotation) == 0x8c, "Offset mismatch!");

static_assert(offsetof(::Mirror::NetworkTransformBase, ___interpolateScale) == 0x8d, "Offset mismatch!");

static_assert(offsetof(::Mirror::NetworkTransformBase, ___sendIntervalMultiplier) == 0x90, "Offset mismatch!");

static_assert(offsetof(::Mirror::NetworkTransformBase, ___timelineOffset) == 0x94, "Offset mismatch!");

static_assert(offsetof(::Mirror::NetworkTransformBase, ___showGizmos) == 0x95, "Offset mismatch!");

static_assert(offsetof(::Mirror::NetworkTransformBase, ___showOverlay) == 0x96, "Offset mismatch!");

static_assert(offsetof(::Mirror::NetworkTransformBase, ___overlayColor) == 0x98, "Offset mismatch!");

static_assert(sizeof(::Mirror::NetworkTransformBase) == 0xa8, "Size mismatch!");

} // namespace end def Mirror

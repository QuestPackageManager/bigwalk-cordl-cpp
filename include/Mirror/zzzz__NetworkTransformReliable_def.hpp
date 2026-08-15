#pragma once
// IWYU pragma private; include "Mirror/NetworkTransformReliable.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Mirror/zzzz__NetworkTransformBase_def.hpp"
#include "Mirror/zzzz__TransformSnapshot_def.hpp"
#include "Mirror/zzzz__Vector3Long_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(NetworkTransformReliable)
namespace Mirror {
class NetworkReader;
}
namespace Mirror {
class NetworkWriter;
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
struct Vector3;
}
// Forward declare root types
namespace Mirror {
class NetworkTransformReliable;
}
// Write type traits
MARK_REF_T(::Mirror::NetworkTransformReliable*);
DEFINE_IL2CPP_CLASS(::Mirror::NetworkTransformReliable*, "Mirror", "NetworkTransformReliable");
// Dependencies Mirror.NetworkTransformBase, Mirror.TransformSnapshot, Mirror.Vector3Long
namespace Mirror {
// Is value type: false
// CS Name: Mirror.NetworkTransformReliable
class CORDL_TYPE NetworkTransformReliable : public ::Mirror::NetworkTransformBase {
public:
// Declarations
/// @brief Field compressRotation, offset 0xc0, size 0x1 
 __declspec(property(get=__cordl_internal_get_compressRotation, put=__cordl_internal_set_compressRotation)) bool  compressRotation;

/// @brief Field last, offset 0x130, size 0x38 
 __declspec(property(get=__cordl_internal_get_last, put=__cordl_internal_set_last)) ::Mirror::TransformSnapshot  last;

/// @brief Field lastClientCount, offset 0x168, size 0x4 
 __declspec(property(get=__cordl_internal_get_lastClientCount, put=__cordl_internal_set_lastClientCount)) int32_t  lastClientCount;

/// @brief Field lastDeserializedPosition, offset 0xe8, size 0x18 
 __declspec(property(get=__cordl_internal_get_lastDeserializedPosition, put=__cordl_internal_set_lastDeserializedPosition)) ::Mirror::Vector3Long  lastDeserializedPosition;

/// @brief Field lastDeserializedScale, offset 0x118, size 0x18 
 __declspec(property(get=__cordl_internal_get_lastDeserializedScale, put=__cordl_internal_set_lastDeserializedScale)) ::Mirror::Vector3Long  lastDeserializedScale;

/// @brief Field lastSendIntervalTime, offset 0xb0, size 0x8 
 __declspec(property(get=__cordl_internal_get_lastSendIntervalTime, put=__cordl_internal_set_lastSendIntervalTime)) double_t  lastSendIntervalTime;

/// @brief Field lastSerializedPosition, offset 0xd0, size 0x18 
 __declspec(property(get=__cordl_internal_get_lastSerializedPosition, put=__cordl_internal_set_lastSerializedPosition)) ::Mirror::Vector3Long  lastSerializedPosition;

/// @brief Field lastSerializedScale, offset 0x100, size 0x18 
 __declspec(property(get=__cordl_internal_get_lastSerializedScale, put=__cordl_internal_set_lastSerializedScale)) ::Mirror::Vector3Long  lastSerializedScale;

/// @brief Field onlySyncOnChange, offset 0xa8, size 0x1 
 __declspec(property(get=__cordl_internal_get_onlySyncOnChange, put=__cordl_internal_set_onlySyncOnChange)) bool  onlySyncOnChange;

/// @brief Field onlySyncOnChangeCorrectionMultiplier, offset 0xb8, size 0x4 
 __declspec(property(get=__cordl_internal_get_onlySyncOnChangeCorrectionMultiplier, put=__cordl_internal_set_onlySyncOnChangeCorrectionMultiplier)) float_t  onlySyncOnChangeCorrectionMultiplier;

/// @brief Field positionPrecision, offset 0xc4, size 0x4 
 __declspec(property(get=__cordl_internal_get_positionPrecision, put=__cordl_internal_set_positionPrecision)) float_t  positionPrecision;

/// @brief Field rotationSensitivity, offset 0xbc, size 0x4 
 __declspec(property(get=__cordl_internal_get_rotationSensitivity, put=__cordl_internal_set_rotationSensitivity)) float_t  rotationSensitivity;

/// @brief Field scalePrecision, offset 0xc8, size 0x4 
 __declspec(property(get=__cordl_internal_get_scalePrecision, put=__cordl_internal_set_scalePrecision)) float_t  scalePrecision;

/// @brief Field sendIntervalCounter, offset 0xac, size 0x4 
 __declspec(property(get=__cordl_internal_get_sendIntervalCounter, put=__cordl_internal_set_sendIntervalCounter)) uint32_t  sendIntervalCounter;

/// @brief Method Changed, addr 0x181528790, size 0x150, virtual true, abstract: false, final false
inline bool Changed(::Mirror::TransformSnapshot  current) ;

/// @brief Method CheckLastSendTime, addr 0x1815288e0, size 0x80, virtual true, abstract: false, final false
inline void CheckLastSendTime() ;

/// @brief Method LateUpdate, addr 0x181528960, size 0x110, virtual false, abstract: false, final false
inline void LateUpdate() ;

/// @brief Method MirrorProcessed, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void MirrorProcessed() ;

/// @brief Method NeedsCorrection, addr 0x181528a70, size 0xf0, virtual false, abstract: false, final false
static inline bool NeedsCorrection(::System::Collections::Generic::SortedList_2<double_t,::Mirror::TransformSnapshot>*  snapshots, double_t  remoteTimestamp, double_t  bufferTime, double_t  toleranceMultiplier) ;

static inline ::Mirror::NetworkTransformReliable* New_ctor() ;

/// @brief Method OnClientToServerSync, addr 0x181528b60, size 0x380, virtual true, abstract: false, final false
inline void OnClientToServerSync(::System::Nullable_1<::UnityEngine::Vector3>  position, ::System::Nullable_1<::UnityEngine::Quaternion>  rotation, ::System::Nullable_1<::UnityEngine::Vector3>  scale) ;

/// @brief Method OnDeserialize, addr 0x181528ee0, size 0x4b0, virtual true, abstract: false, final false
inline void OnDeserialize(::Mirror::NetworkReader*  reader, bool  initialState) ;

/// @brief Method OnSerialize, addr 0x181529390, size 0x590, virtual true, abstract: false, final false
inline void OnSerialize(::Mirror::NetworkWriter*  writer, bool  initialState) ;

/// @brief Method OnServerToClientSync, addr 0x181529920, size 0x3d0, virtual true, abstract: false, final false
inline void OnServerToClientSync(::System::Nullable_1<::UnityEngine::Vector3>  position, ::System::Nullable_1<::UnityEngine::Quaternion>  rotation, ::System::Nullable_1<::UnityEngine::Vector3>  scale) ;

/// @brief Method QuantizedChanged, addr 0x181517be0, size 0x170, virtual false, abstract: false, final false
inline bool QuantizedChanged(::UnityEngine::Vector3  u, ::UnityEngine::Vector3  v, float_t  precision) ;

/// @brief Method Reset, addr 0x181529cf0, size 0x120, virtual true, abstract: false, final false
inline void Reset() ;

/// @brief Method RewriteHistory, addr 0x181529e10, size 0x130, virtual false, abstract: false, final false
static inline void RewriteHistory(::System::Collections::Generic::SortedList_2<double_t,::Mirror::TransformSnapshot>*  snapshots, double_t  remoteTimeStamp, double_t  localTime, double_t  sendInterval, ::UnityEngine::Vector3  position, ::UnityEngine::Quaternion  rotation, ::UnityEngine::Vector3  scale) ;

/// @brief Method Update, addr 0x18152a2d0, size 0x60, virtual false, abstract: false, final false
inline void Update() ;

/// @brief Method UpdateClient, addr 0x181529f40, size 0x1c0, virtual true, abstract: false, final false
inline void UpdateClient() ;

/// @brief Method UpdateServer, addr 0x18152a100, size 0x1d0, virtual true, abstract: false, final false
inline void UpdateServer() ;

constexpr bool const& __cordl_internal_get_compressRotation() const;

constexpr bool& __cordl_internal_get_compressRotation() ;

constexpr ::Mirror::TransformSnapshot const& __cordl_internal_get_last() const;

constexpr ::Mirror::TransformSnapshot& __cordl_internal_get_last() ;

constexpr int32_t const& __cordl_internal_get_lastClientCount() const;

constexpr int32_t& __cordl_internal_get_lastClientCount() ;

constexpr ::Mirror::Vector3Long const& __cordl_internal_get_lastDeserializedPosition() const;

constexpr ::Mirror::Vector3Long& __cordl_internal_get_lastDeserializedPosition() ;

constexpr ::Mirror::Vector3Long const& __cordl_internal_get_lastDeserializedScale() const;

constexpr ::Mirror::Vector3Long& __cordl_internal_get_lastDeserializedScale() ;

constexpr double_t const& __cordl_internal_get_lastSendIntervalTime() const;

constexpr double_t& __cordl_internal_get_lastSendIntervalTime() ;

constexpr ::Mirror::Vector3Long const& __cordl_internal_get_lastSerializedPosition() const;

constexpr ::Mirror::Vector3Long& __cordl_internal_get_lastSerializedPosition() ;

constexpr ::Mirror::Vector3Long const& __cordl_internal_get_lastSerializedScale() const;

constexpr ::Mirror::Vector3Long& __cordl_internal_get_lastSerializedScale() ;

constexpr bool const& __cordl_internal_get_onlySyncOnChange() const;

constexpr bool& __cordl_internal_get_onlySyncOnChange() ;

constexpr float_t const& __cordl_internal_get_onlySyncOnChangeCorrectionMultiplier() const;

constexpr float_t& __cordl_internal_get_onlySyncOnChangeCorrectionMultiplier() ;

constexpr float_t const& __cordl_internal_get_positionPrecision() const;

constexpr float_t& __cordl_internal_get_positionPrecision() ;

constexpr float_t const& __cordl_internal_get_rotationSensitivity() const;

constexpr float_t& __cordl_internal_get_rotationSensitivity() ;

constexpr float_t const& __cordl_internal_get_scalePrecision() const;

constexpr float_t& __cordl_internal_get_scalePrecision() ;

constexpr uint32_t const& __cordl_internal_get_sendIntervalCounter() const;

constexpr uint32_t& __cordl_internal_get_sendIntervalCounter() ;

constexpr void __cordl_internal_set_compressRotation(bool  value) ;

constexpr void __cordl_internal_set_last(::Mirror::TransformSnapshot  value) ;

constexpr void __cordl_internal_set_lastClientCount(int32_t  value) ;

constexpr void __cordl_internal_set_lastDeserializedPosition(::Mirror::Vector3Long  value) ;

constexpr void __cordl_internal_set_lastDeserializedScale(::Mirror::Vector3Long  value) ;

constexpr void __cordl_internal_set_lastSendIntervalTime(double_t  value) ;

constexpr void __cordl_internal_set_lastSerializedPosition(::Mirror::Vector3Long  value) ;

constexpr void __cordl_internal_set_lastSerializedScale(::Mirror::Vector3Long  value) ;

constexpr void __cordl_internal_set_onlySyncOnChange(bool  value) ;

constexpr void __cordl_internal_set_onlySyncOnChangeCorrectionMultiplier(float_t  value) ;

constexpr void __cordl_internal_set_positionPrecision(float_t  value) ;

constexpr void __cordl_internal_set_rotationSensitivity(float_t  value) ;

constexpr void __cordl_internal_set_scalePrecision(float_t  value) ;

constexpr void __cordl_internal_set_sendIntervalCounter(uint32_t  value) ;

/// @brief Method .ctor, addr 0x18152a330, size 0x130, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NetworkTransformReliable() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NetworkTransformReliable", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
NetworkTransformReliable(NetworkTransformReliable && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NetworkTransformReliable", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
NetworkTransformReliable(NetworkTransformReliable const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19245};

/// @brief Field onlySyncOnChange, offset: 0xa8, size: 0x1, def value: None
 bool  ___onlySyncOnChange;

/// @brief Field sendIntervalCounter, offset: 0xac, size: 0x4, def value: None
 uint32_t  ___sendIntervalCounter;

/// @brief Field lastSendIntervalTime, offset: 0xb0, size: 0x8, def value: None
 double_t  ___lastSendIntervalTime;

/// @brief Field onlySyncOnChangeCorrectionMultiplier, offset: 0xb8, size: 0x4, def value: None
 float_t  ___onlySyncOnChangeCorrectionMultiplier;

/// @brief Field rotationSensitivity, offset: 0xbc, size: 0x4, def value: None
 float_t  ___rotationSensitivity;

/// @brief Field compressRotation, offset: 0xc0, size: 0x1, def value: None
 bool  ___compressRotation;

/// @brief Field positionPrecision, offset: 0xc4, size: 0x4, def value: None
 float_t  ___positionPrecision;

/// @brief Field scalePrecision, offset: 0xc8, size: 0x4, def value: None
 float_t  ___scalePrecision;

/// @brief Field lastSerializedPosition, offset: 0xd0, size: 0x18, def value: None
 ::Mirror::Vector3Long  ___lastSerializedPosition;

/// @brief Field lastDeserializedPosition, offset: 0xe8, size: 0x18, def value: None
 ::Mirror::Vector3Long  ___lastDeserializedPosition;

/// @brief Field lastSerializedScale, offset: 0x100, size: 0x18, def value: None
 ::Mirror::Vector3Long  ___lastSerializedScale;

/// @brief Field lastDeserializedScale, offset: 0x118, size: 0x18, def value: None
 ::Mirror::Vector3Long  ___lastDeserializedScale;

/// @brief Field last, offset: 0x130, size: 0x38, def value: None
 ::Mirror::TransformSnapshot  ___last;

/// @brief Field lastClientCount, offset: 0x168, size: 0x4, def value: None
 int32_t  ___lastClientCount;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Mirror::NetworkTransformReliable, ___onlySyncOnChange) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::Mirror::NetworkTransformReliable, ___sendIntervalCounter) == 0xac, "Offset mismatch!");

static_assert(offsetof(::Mirror::NetworkTransformReliable, ___lastSendIntervalTime) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::Mirror::NetworkTransformReliable, ___onlySyncOnChangeCorrectionMultiplier) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::Mirror::NetworkTransformReliable, ___rotationSensitivity) == 0xbc, "Offset mismatch!");

static_assert(offsetof(::Mirror::NetworkTransformReliable, ___compressRotation) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::Mirror::NetworkTransformReliable, ___positionPrecision) == 0xc4, "Offset mismatch!");

static_assert(offsetof(::Mirror::NetworkTransformReliable, ___scalePrecision) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::Mirror::NetworkTransformReliable, ___lastSerializedPosition) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::Mirror::NetworkTransformReliable, ___lastDeserializedPosition) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::Mirror::NetworkTransformReliable, ___lastSerializedScale) == 0x100, "Offset mismatch!");

static_assert(offsetof(::Mirror::NetworkTransformReliable, ___lastDeserializedScale) == 0x118, "Offset mismatch!");

static_assert(offsetof(::Mirror::NetworkTransformReliable, ___last) == 0x130, "Offset mismatch!");

static_assert(offsetof(::Mirror::NetworkTransformReliable, ___lastClientCount) == 0x168, "Offset mismatch!");

static_assert(sizeof(::Mirror::NetworkTransformReliable) == 0x170, "Size mismatch!");

} // namespace end def Mirror

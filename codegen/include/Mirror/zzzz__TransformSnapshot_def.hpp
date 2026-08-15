#pragma once
// IWYU pragma private; include "Mirror/TransformSnapshot.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(TransformSnapshot)
namespace Mirror {
class Snapshot;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace Mirror {
struct TransformSnapshot;
}
// Write type traits
MARK_VAL_T(::Mirror::TransformSnapshot);
DEFINE_IL2CPP_CLASS(::Mirror::TransformSnapshot, "Mirror", "TransformSnapshot");
// Dependencies UnityEngine.Quaternion, UnityEngine.Vector3
namespace Mirror {
// Is value type: true
// CS Name: Mirror.TransformSnapshot
struct CORDL_TYPE TransformSnapshot {
public:
// Declarations
 __declspec(property(get=get_localTime, put=set_localTime)) double_t  localTime;

 __declspec(property(get=get_remoteTime, put=set_remoteTime)) double_t  remoteTime;

/// @brief Convert operator to "::Mirror::Snapshot"
constexpr operator  ::Mirror::Snapshot*() ;

/// @brief Method Interpolate, addr 0x18152fd20, size 0x170, virtual false, abstract: false, final false
static inline ::Mirror::TransformSnapshot Interpolate(::Mirror::TransformSnapshot  from, ::Mirror::TransformSnapshot  to, double_t  t) ;

/// @brief Method .ctor, addr 0x18152fe90, size 0xc0, virtual false, abstract: false, final false
inline void _ctor(double_t  remoteTime, double_t  localTime, ::UnityEngine::Vector3  position, ::UnityEngine::Quaternion  rotation, ::UnityEngine::Vector3  scale) ;

/// @brief Method get_localTime, addr 0x18052ca20, size 0x10, virtual true, abstract: false, final true
inline double_t get_localTime() ;

/// @brief Method get_remoteTime, addr 0x180862f00, size 0x16430, virtual true, abstract: false, final true
inline double_t get_remoteTime() ;

/// @brief Convert to "::Mirror::Snapshot"
constexpr ::Mirror::Snapshot* i___Mirror__Snapshot() ;

/// @brief Method set_localTime, addr 0x18052ca30, size 0x10, virtual true, abstract: false, final true
inline void set_localTime(double_t  value) ;

/// @brief Method set_remoteTime, addr 0x181517da0, size 0x10, virtual true, abstract: false, final true
inline void set_remoteTime(double_t  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr TransformSnapshot() ;

// Ctor Parameters [CppParam { name: "_remoteTime_k__BackingField", ty: "double_t", modifiers: "", def_value: None }, CppParam { name: "_localTime_k__BackingField", ty: "double_t", modifiers: "", def_value: None }, CppParam { name: "position", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name: "rotation", ty: "::UnityEngine::Quaternion", modifiers: "", def_value: None }, CppParam { name: "scale", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None }]
constexpr TransformSnapshot(double_t  _remoteTime_k__BackingField, double_t  _localTime_k__BackingField, ::UnityEngine::Vector3  position, ::UnityEngine::Quaternion  rotation, ::UnityEngine::Vector3  scale) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19248};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x38};

/// @brief Field <remoteTime>k__BackingField, offset: 0x0, size: 0x8, def value: None
 double_t  _remoteTime_k__BackingField;

/// @brief Field <localTime>k__BackingField, offset: 0x8, size: 0x8, def value: None
 double_t  _localTime_k__BackingField;

/// @brief Field position, offset: 0x10, size: 0xc, def value: None
 ::UnityEngine::Vector3  position;

/// @brief Field rotation, offset: 0x1c, size: 0x10, def value: None
 ::UnityEngine::Quaternion  rotation;

/// @brief Field scale, offset: 0x2c, size: 0xc, def value: None
 ::UnityEngine::Vector3  scale;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Mirror::TransformSnapshot, _remoteTime_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Mirror::TransformSnapshot, _localTime_k__BackingField) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Mirror::TransformSnapshot, position) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Mirror::TransformSnapshot, rotation) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::Mirror::TransformSnapshot, scale) == 0x2c, "Offset mismatch!");

static_assert(sizeof(::Mirror::TransformSnapshot) == 0x38, "Size mismatch!");

} // namespace end def Mirror

#pragma once
// IWYU pragma private; include "Mirror/Examples/SnapshotInterpolationDemo/Snapshot3D.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(Snapshot3D)
namespace Mirror {
class Snapshot;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace Mirror::Examples::SnapshotInterpolationDemo {
struct Snapshot3D;
}
// Write type traits
MARK_VAL_T(::Mirror::Examples::SnapshotInterpolationDemo::Snapshot3D);
DEFINE_IL2CPP_CLASS(::Mirror::Examples::SnapshotInterpolationDemo::Snapshot3D, "Mirror.Examples.SnapshotInterpolationDemo", "Snapshot3D");
// Dependencies UnityEngine.Vector3
namespace Mirror::Examples::SnapshotInterpolationDemo {
// Is value type: true
// CS Name: Mirror.Examples.SnapshotInterpolationDemo.Snapshot3D
struct CORDL_TYPE Snapshot3D {
public:
// Declarations
 __declspec(property(get=get_localTime, put=set_localTime)) double_t  localTime;

 __declspec(property(get=get_remoteTime, put=set_remoteTime)) double_t  remoteTime;

/// @brief Convert operator to "::Mirror::Snapshot"
constexpr operator  ::Mirror::Snapshot*() ;

/// @brief Method Interpolate, addr 0x181563d80, size 0x80, virtual false, abstract: false, final false
static inline ::Mirror::Examples::SnapshotInterpolationDemo::Snapshot3D Interpolate(::Mirror::Examples::SnapshotInterpolationDemo::Snapshot3D  from, ::Mirror::Examples::SnapshotInterpolationDemo::Snapshot3D  to, double_t  t) ;

/// @brief Method .ctor, addr 0x181563e00, size 0x50, virtual false, abstract: false, final false
inline void _ctor(double_t  remoteTime, double_t  localTime, ::UnityEngine::Vector3  position) ;

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
constexpr Snapshot3D() ;

// Ctor Parameters [CppParam { name: "_remoteTime_k__BackingField", ty: "double_t", modifiers: "", def_value: None }, CppParam { name: "_localTime_k__BackingField", ty: "double_t", modifiers: "", def_value: None }, CppParam { name: "position", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None }]
constexpr Snapshot3D(double_t  _remoteTime_k__BackingField, double_t  _localTime_k__BackingField, ::UnityEngine::Vector3  position) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19279};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

/// @brief Field <remoteTime>k__BackingField, offset: 0x0, size: 0x8, def value: None
 double_t  _remoteTime_k__BackingField;

/// @brief Field <localTime>k__BackingField, offset: 0x8, size: 0x8, def value: None
 double_t  _localTime_k__BackingField;

/// @brief Field position, offset: 0x10, size: 0xc, def value: None
 ::UnityEngine::Vector3  position;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Mirror::Examples::SnapshotInterpolationDemo::Snapshot3D, _remoteTime_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Mirror::Examples::SnapshotInterpolationDemo::Snapshot3D, _localTime_k__BackingField) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Mirror::Examples::SnapshotInterpolationDemo::Snapshot3D, position) == 0x10, "Offset mismatch!");

static_assert(sizeof(::Mirror::Examples::SnapshotInterpolationDemo::Snapshot3D) == 0x20, "Size mismatch!");

} // namespace end def Mirror::Examples::SnapshotInterpolationDemo

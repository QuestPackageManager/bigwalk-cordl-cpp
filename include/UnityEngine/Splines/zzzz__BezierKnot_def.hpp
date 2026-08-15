#pragma once
// IWYU pragma private; include "UnityEngine/Splines/BezierKnot.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Mathematics/zzzz__float3_def.hpp"
#include "Unity/Mathematics/zzzz__quaternion_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(BezierKnot)
namespace System {
template<typename T>
class IEquatable_1;
}
namespace System {
class Object;
}
namespace Unity::Mathematics {
struct float3;
}
namespace Unity::Mathematics {
struct float4x4;
}
namespace Unity::Mathematics {
struct quaternion;
}
namespace UnityEngine::Splines {
struct BezierTangent;
}
namespace UnityEngine {
class ISerializationCallbackReceiver;
}
// Forward declare root types
namespace UnityEngine::Splines {
struct BezierKnot;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Splines::BezierKnot);
DEFINE_IL2CPP_CLASS(::UnityEngine::Splines::BezierKnot, "UnityEngine.Splines", "BezierKnot");
// Dependencies Unity.Mathematics.float3, Unity.Mathematics.quaternion
namespace UnityEngine::Splines {
// Is value type: true
// CS Name: UnityEngine.Splines.BezierKnot
struct CORDL_TYPE BezierKnot {
public:
// Declarations
/// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::Splines::BezierKnot>"
constexpr operator  ::System::IEquatable_1<::UnityEngine::Splines::BezierKnot>*() ;

/// @brief Convert operator to "::UnityEngine::ISerializationCallbackReceiver"
constexpr operator  ::UnityEngine::ISerializationCallbackReceiver*() ;

/// @brief Method BakeTangentDirectionToRotation, addr 0x182161640, size 0x6c0, virtual false, abstract: false, final false
inline ::UnityEngine::Splines::BezierKnot BakeTangentDirectionToRotation(bool  mirrored, ::UnityEngine::Splines::BezierTangent  main) ;

/// @brief Method Equals, addr 0x182161e60, size 0x90, virtual true, abstract: false, final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method Equals, addr 0x182161d00, size 0x160, virtual true, abstract: false, final true
inline bool Equals(::UnityEngine::Splines::BezierKnot  other) ;

/// @brief Method GetHashCode, addr 0x182161ef0, size 0x80, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

/// @brief Method OnAfterDeserialize, addr 0x182161f70, size 0x50, virtual true, abstract: false, final true
inline void OnAfterDeserialize() ;

/// @brief Method OnBeforeSerialize, addr 0x1802d9d80, size 0x10, virtual true, abstract: false, final true
inline void OnBeforeSerialize() ;

/// @brief Method ToString, addr 0x182161fc0, size 0x110, virtual true, abstract: false, final false
inline ::StringW ToString() ;

/// @brief Method Transform, addr 0x1821620d0, size 0x720, virtual false, abstract: false, final false
inline ::UnityEngine::Splines::BezierKnot Transform(::Unity::Mathematics::float4x4  matrix) ;

/// @brief Method .ctor, addr 0x1821628b0, size 0x80, virtual false, abstract: false, final false
inline void _ctor(::Unity::Mathematics::float3  position) ;

/// @brief Method .ctor, addr 0x182162930, size 0xb0, virtual false, abstract: false, final false
inline void _ctor(::Unity::Mathematics::float3  position, ::Unity::Mathematics::float3  tangentIn, ::Unity::Mathematics::float3  tangentOut) ;

/// @brief Method .ctor, addr 0x1821627f0, size 0xc0, virtual false, abstract: false, final false
inline void _ctor(::Unity::Mathematics::float3  position, ::Unity::Mathematics::float3  tangentIn, ::Unity::Mathematics::float3  tangentOut, ::Unity::Mathematics::quaternion  rotation) ;

/// @brief Convert to "::System::IEquatable_1<::UnityEngine::Splines::BezierKnot>"
constexpr ::System::IEquatable_1<::UnityEngine::Splines::BezierKnot>* i___System__IEquatable_1___UnityEngine__Splines__BezierKnot_() ;

/// @brief Convert to "::UnityEngine::ISerializationCallbackReceiver"
constexpr ::UnityEngine::ISerializationCallbackReceiver* i___UnityEngine__ISerializationCallbackReceiver() ;

/// @brief Method op_Addition, addr 0x1821629e0, size 0x70, virtual false, abstract: false, final false
static inline ::UnityEngine::Splines::BezierKnot op_Addition(::UnityEngine::Splines::BezierKnot  knot, ::Unity::Mathematics::float3  rhs) ;

/// @brief Method op_Subtraction, addr 0x182162a50, size 0x70, virtual false, abstract: false, final false
static inline ::UnityEngine::Splines::BezierKnot op_Subtraction(::UnityEngine::Splines::BezierKnot  knot, ::Unity::Mathematics::float3  rhs) ;

// Ctor Parameters []
// @brief default ctor
constexpr BezierKnot() ;

// Ctor Parameters [CppParam { name: "Position", ty: "::Unity::Mathematics::float3", modifiers: "", def_value: None }, CppParam { name: "TangentIn", ty: "::Unity::Mathematics::float3", modifiers: "", def_value: None }, CppParam { name: "TangentOut", ty: "::Unity::Mathematics::float3", modifiers: "", def_value: None }, CppParam { name: "Rotation", ty: "::Unity::Mathematics::quaternion", modifiers: "", def_value: None }]
constexpr BezierKnot(::Unity::Mathematics::float3  Position, ::Unity::Mathematics::float3  TangentIn, ::Unity::Mathematics::float3  TangentOut, ::Unity::Mathematics::quaternion  Rotation) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18678};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x34};

/// @brief Field Position, offset: 0x0, size: 0xc, def value: None
 ::Unity::Mathematics::float3  Position;

/// @brief Field TangentIn, offset: 0xc, size: 0xc, def value: None
 ::Unity::Mathematics::float3  TangentIn;

/// @brief Field TangentOut, offset: 0x18, size: 0xc, def value: None
 ::Unity::Mathematics::float3  TangentOut;

/// @brief Field Rotation, offset: 0x24, size: 0x10, def value: None
 ::Unity::Mathematics::quaternion  Rotation;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Splines::BezierKnot, Position) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Splines::BezierKnot, TangentIn) == 0xc, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Splines::BezierKnot, TangentOut) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Splines::BezierKnot, Rotation) == 0x24, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Splines::BezierKnot) == 0x34, "Size mismatch!");

} // namespace end def UnityEngine::Splines

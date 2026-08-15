#pragma once
// IWYU pragma private; include "MA/Flora/AABB.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Mathematics/zzzz__float4_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AABB)
namespace MA::Flora {
struct AxisAlignedBox;
}
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
struct float4;
}
namespace Unity::Mathematics {
struct float4x4;
}
namespace UnityEngine {
struct Bounds;
}
// Forward declare root types
namespace MA::Flora {
struct AABB;
}
// Write type traits
MARK_VAL_T(::MA::Flora::AABB);
DEFINE_IL2CPP_CLASS(::MA::Flora::AABB, "MA.Flora", "AABB");
// Dependencies Unity.Mathematics.float4
namespace MA::Flora {
// Is value type: true
// CS Name: MA.Flora.AABB
struct CORDL_TYPE AABB {
public:
// Declarations
 __declspec(property(get=get_Max)) ::Unity::Mathematics::float4  Max;

 __declspec(property(get=get_Min)) ::Unity::Mathematics::float4  Min;

/// @brief Convert operator to "::System::IEquatable_1<::MA::Flora::AABB>"
constexpr operator  ::System::IEquatable_1<::MA::Flora::AABB>*() ;

/// @brief Method Contains, addr 0x1814d94c0, size 0x40, virtual false, abstract: false, final false
inline bool Contains(::Unity::Mathematics::float4  point) ;

/// @brief Method Equals, addr 0x180673c80, size 0x1f0, virtual true, abstract: false, final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method Equals, addr 0x180673a80, size 0xa0, virtual true, abstract: false, final true
inline bool Equals(::MA::Flora::AABB  other) ;

/// @brief Method GetHashCode, addr 0x1814d92c0, size 0x120, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

/// @brief Method IntersectsAABB, addr 0x1814e2210, size 0x60, virtual false, abstract: false, final false
static inline bool IntersectsAABB(::MA::Flora::AABB  a, ::MA::Flora::AABB  b) ;

/// @brief Method IntersectsSphere, addr 0x1814e2270, size 0xa0, virtual false, abstract: false, final false
static inline bool IntersectsSphere(::MA::Flora::AABB  aabb, ::Unity::Mathematics::float3  sphereCenter, float_t  sphereRadius) ;

/// @brief Method IntersectsSphere, addr 0x1814e2310, size 0x110, virtual false, abstract: false, final false
static inline bool IntersectsSphere(::MA::Flora::AABB  aabb, ::Unity::Mathematics::float4  sphereCenter, float_t  sphereRadius) ;

/// @brief Method IsEmpty, addr 0x1814d9500, size 0x40, virtual false, abstract: false, final false
inline bool IsEmpty() ;

/// @brief Method ToBounds, addr 0x1814649d0, size 0x130, virtual false, abstract: false, final false
inline ::UnityEngine::Bounds ToBounds() ;

/// @brief Method ToBox, addr 0x1814d9540, size 0x60, virtual false, abstract: false, final false
inline ::MA::Flora::AxisAlignedBox ToBox() ;

/// @brief Method ToString, addr 0x1814d95a0, size 0x70, virtual true, abstract: false, final false
inline ::StringW ToString() ;

/// @brief Method TransformAABB, addr 0x1814e2420, size 0xf0, virtual false, abstract: false, final false
static inline ::MA::Flora::AABB TransformAABB(::Unity::Mathematics::float4x4  matrix, ::MA::Flora::AABB  aabb) ;

/// @brief Method .ctor, addr 0x18149a8c0, size 0x50, virtual false, abstract: false, final false
inline void _ctor(::Unity::Mathematics::float3  center, ::Unity::Mathematics::float3  extent) ;

/// @brief Method .ctor, addr 0x180673c50, size 0x30, virtual false, abstract: false, final false
inline void _ctor(::Unity::Mathematics::float4  center, ::Unity::Mathematics::float4  extent) ;

/// @brief Method get_Empty, addr 0x1814e2510, size 0x60, virtual false, abstract: false, final false
static inline ::MA::Flora::AABB get_Empty() ;

/// @brief Method get_Max, addr 0x1814e2570, size 0x40, virtual false, abstract: false, final false
inline ::Unity::Mathematics::float4 get_Max() ;

/// @brief Method get_Min, addr 0x1814e25b0, size 0x40, virtual false, abstract: false, final false
inline ::Unity::Mathematics::float4 get_Min() ;

/// @brief Convert to "::System::IEquatable_1<::MA::Flora::AABB>"
constexpr ::System::IEquatable_1<::MA::Flora::AABB>* i___System__IEquatable_1___MA__Flora__AABB_() ;

/// @brief Method op_Implicit, addr 0x1814e26a0, size 0x200, virtual false, abstract: false, final false
static inline ::MA::Flora::AABB op_Implicit___MA__Flora__AABB(::UnityEngine::Bounds  bounds) ;

/// @brief Method op_Implicit, addr 0x1814e25f0, size 0xb0, virtual false, abstract: false, final false
static inline ::MA::Flora::AABB op_Implicit___MA__Flora__AABB(::MA::Flora::AxisAlignedBox  box) ;

// Ctor Parameters []
// @brief default ctor
constexpr AABB() ;

// Ctor Parameters [CppParam { name: "Center", ty: "::Unity::Mathematics::float4", modifiers: "", def_value: None }, CppParam { name: "Extent", ty: "::Unity::Mathematics::float4", modifiers: "", def_value: None }]
constexpr AABB(::Unity::Mathematics::float4  Center, ::Unity::Mathematics::float4  Extent) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13307};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

/// @brief Field Center, offset: 0x0, size: 0x10, def value: None
 ::Unity::Mathematics::float4  Center;

/// @brief Field Extent, offset: 0x10, size: 0x10, def value: None
 ::Unity::Mathematics::float4  Extent;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::MA::Flora::AABB, Center) == 0x0, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::AABB, Extent) == 0x10, "Offset mismatch!");

static_assert(sizeof(::MA::Flora::AABB) == 0x20, "Size mismatch!");

} // namespace end def MA::Flora

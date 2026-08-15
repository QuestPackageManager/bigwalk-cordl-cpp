#pragma once
// IWYU pragma private; include "MA/Flora/AABBMinMax.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Mathematics/zzzz__float4_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AABBMinMax)
namespace MA::Flora {
struct AABB;
}
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
namespace UnityEngine {
struct Bounds;
}
// Forward declare root types
namespace MA::Flora {
struct AABBMinMax;
}
// Write type traits
MARK_VAL_T(::MA::Flora::AABBMinMax);
DEFINE_IL2CPP_CLASS(::MA::Flora::AABBMinMax, "MA.Flora", "AABBMinMax");
// Dependencies Unity.Mathematics.float4
namespace MA::Flora {
// Is value type: true
// CS Name: MA.Flora.AABBMinMax
struct CORDL_TYPE AABBMinMax {
public:
// Declarations
/// @brief Convert operator to "::System::IEquatable_1<::MA::Flora::AABBMinMax>"
constexpr operator  ::System::IEquatable_1<::MA::Flora::AABBMinMax>*() ;

/// @brief Method Equals, addr 0x180673b20, size 0x130, virtual true, abstract: false, final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method Equals, addr 0x180673a80, size 0xa0, virtual true, abstract: false, final true
inline bool Equals(::MA::Flora::AABBMinMax  other) ;

/// @brief Method GetHashCode, addr 0x1814d92c0, size 0x120, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

/// @brief Method IsEmpty, addr 0x1814d93e0, size 0x30, virtual false, abstract: false, final false
inline bool IsEmpty() ;

/// @brief Method ToBounds, addr 0x1814648b0, size 0x120, virtual false, abstract: false, final false
inline ::UnityEngine::Bounds ToBounds() ;

/// @brief Method ToBox, addr 0x1814d9410, size 0x40, virtual false, abstract: false, final false
inline ::MA::Flora::AxisAlignedBox ToBox() ;

/// @brief Method ToString, addr 0x1814d9450, size 0x70, virtual true, abstract: false, final false
inline ::StringW ToString() ;

/// @brief Method .ctor, addr 0x18149a8c0, size 0x50, virtual false, abstract: false, final false
inline void _ctor(::Unity::Mathematics::float3  min, ::Unity::Mathematics::float3  max) ;

/// @brief Method .ctor, addr 0x180673c50, size 0x30, virtual false, abstract: false, final false
inline void _ctor(::Unity::Mathematics::float4  min, ::Unity::Mathematics::float4  max) ;

/// @brief Method get_Empty, addr 0x1814e2020, size 0x60, virtual false, abstract: false, final false
static inline ::MA::Flora::AABBMinMax get_Empty() ;

/// @brief Convert to "::System::IEquatable_1<::MA::Flora::AABBMinMax>"
constexpr ::System::IEquatable_1<::MA::Flora::AABBMinMax>* i___System__IEquatable_1___MA__Flora__AABBMinMax_() ;

/// @brief Method op_Addition, addr 0x1814e2080, size 0x90, virtual false, abstract: false, final false
static inline ::MA::Flora::AABBMinMax op_Addition(::MA::Flora::AABBMinMax  a, ::MA::Flora::AABBMinMax  b) ;

/// @brief Method op_Implicit, addr 0x1814e2170, size 0xa0, virtual false, abstract: false, final false
static inline ::MA::Flora::AABB op_Implicit___MA__Flora__AABB(::MA::Flora::AABBMinMax  aabb) ;

/// @brief Method op_Implicit, addr 0x1814e2110, size 0x60, virtual false, abstract: false, final false
static inline ::MA::Flora::AABBMinMax op_Implicit___MA__Flora__AABBMinMax(::MA::Flora::AABB  aabb) ;

// Ctor Parameters []
// @brief default ctor
constexpr AABBMinMax() ;

// Ctor Parameters [CppParam { name: "Min", ty: "::Unity::Mathematics::float4", modifiers: "", def_value: None }, CppParam { name: "Max", ty: "::Unity::Mathematics::float4", modifiers: "", def_value: None }]
constexpr AABBMinMax(::Unity::Mathematics::float4  Min, ::Unity::Mathematics::float4  Max) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13308};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

/// @brief Field Min, offset: 0x0, size: 0x10, def value: None
 ::Unity::Mathematics::float4  Min;

/// @brief Field Max, offset: 0x10, size: 0x10, def value: None
 ::Unity::Mathematics::float4  Max;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::MA::Flora::AABBMinMax, Min) == 0x0, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::AABBMinMax, Max) == 0x10, "Offset mismatch!");

static_assert(sizeof(::MA::Flora::AABBMinMax) == 0x20, "Size mismatch!");

} // namespace end def MA::Flora

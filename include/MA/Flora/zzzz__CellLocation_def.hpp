#pragma once
// IWYU pragma private; include "MA/Flora/CellLocation.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Mathematics/zzzz__int4_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(CellLocation)
namespace MA::Flora {
struct AABB;
}
namespace MA::Flora {
struct BlockLocation;
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
struct int3;
}
namespace Unity::Mathematics {
struct int4;
}
// Forward declare root types
namespace MA::Flora {
struct CellLocation;
}
// Write type traits
MARK_VAL_T(::MA::Flora::CellLocation);
DEFINE_IL2CPP_CLASS(::MA::Flora::CellLocation, "MA.Flora", "CellLocation");
// Dependencies Unity.Mathematics.int4
namespace MA::Flora {
// Is value type: true
// CS Name: MA.Flora.CellLocation
struct CORDL_TYPE CellLocation {
public:
// Declarations
 __declspec(property(get=get_AABB)) ::MA::Flora::AABB  AABB;

 __declspec(property(get=get_Block)) ::MA::Flora::BlockLocation  Block;

 __declspec(property(get=get_CellSize)) float_t  CellSize;

 __declspec(property(get=get_Coords)) ::Unity::Mathematics::int3  Coords;

 __declspec(property(get=get_Level)) int32_t  Level;

/// @brief Field None, offset 0xffffffff, size 0x10 
 __declspec(property(get=getStaticF_None, put=setStaticF_None)) ::MA::Flora::CellLocation  None;

 __declspec(property(get=get_PaddedAABB)) ::MA::Flora::AABB  PaddedAABB;

 __declspec(property(get=get_Position)) ::Unity::Mathematics::float3  Position;

/// @brief Convert operator to "::System::IEquatable_1<::MA::Flora::CellLocation>"
constexpr operator  ::System::IEquatable_1<::MA::Flora::CellLocation>*() ;

/// @brief Method Distance, addr 0x18149c730, size 0x60, virtual false, abstract: false, final false
static inline int32_t Distance(::MA::Flora::CellLocation  a, ::MA::Flora::CellLocation  b) ;

/// @brief Method Equals, addr 0x180645ba0, size 0x90, virtual true, abstract: false, final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method Equals, addr 0x180645b60, size 0x40, virtual true, abstract: false, final true
inline bool Equals(::MA::Flora::CellLocation  other) ;

/// @brief Method FromAABB, addr 0x18149c790, size 0xb0, virtual false, abstract: false, final false
static inline ::MA::Flora::CellLocation FromAABB(::MA::Flora::AABB  aabb) ;

/// @brief Method FromAABB, addr 0x18149c840, size 0xa0, virtual false, abstract: false, final false
static inline ::MA::Flora::CellLocation FromAABB(::Unity::Mathematics::float3  center, ::Unity::Mathematics::float3  extent) ;

/// @brief Method FromBlock, addr 0x18149c8e0, size 0x60, virtual false, abstract: false, final false
static inline ::MA::Flora::CellLocation FromBlock(::MA::Flora::BlockLocation  block, int32_t  indexInBlock) ;

/// @brief Method FromPositionAndSize, addr 0x18149c940, size 0x130, virtual false, abstract: false, final false
static inline ::MA::Flora::CellLocation FromPositionAndSize(::Unity::Mathematics::float3  position, float_t  size) ;

/// @brief Method GetBlockLocalCellCoords, addr 0x18149b450, size 0x40, virtual false, abstract: false, final false
inline ::Unity::Mathematics::int3 GetBlockLocalCellCoords() ;

/// @brief Method GetHashCode, addr 0x1808fb580, size 0x6320, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

/// @brief Method GetIndexInBlock, addr 0x18149b490, size 0x40, virtual false, abstract: false, final false
inline int32_t GetIndexInBlock() ;

/// @brief Method IsValid, addr 0x18149b4d0, size 0x20, virtual false, abstract: false, final false
inline bool IsValid() ;

/// @brief Method ToString, addr 0x18149b4f0, size 0x80, virtual true, abstract: false, final false
inline ::StringW ToString() ;

/// @brief Method .ctor, addr 0x1803bdb10, size 0x20, virtual false, abstract: false, final false
inline void _ctor(::Unity::Mathematics::int4  value) ;

/// @brief Method .ctor, addr 0x18149b170, size 0x30, virtual false, abstract: false, final false
inline void _ctor(int32_t  x, int32_t  y, int32_t  z, int32_t  level) ;

static inline ::MA::Flora::CellLocation getStaticF_None() ;

/// @brief Method get_AABB, addr 0x18149b1a0, size 0x80, virtual false, abstract: false, final false
inline ::MA::Flora::AABB get_AABB() ;

/// @brief Method get_Block, addr 0x18149b570, size 0x50, virtual false, abstract: false, final false
inline ::MA::Flora::BlockLocation get_Block() ;

/// @brief Method get_CellSize, addr 0x18149b220, size 0x20, virtual false, abstract: false, final false
inline float_t get_CellSize() ;

/// @brief Method get_Coords, addr 0x1803bdaa0, size 0x20, virtual false, abstract: false, final false
inline ::Unity::Mathematics::int3 get_Coords() ;

/// @brief Method get_Level, addr 0x1803bdb30, size 0x10, virtual false, abstract: false, final false
inline int32_t get_Level() ;

/// @brief Method get_PaddedAABB, addr 0x18149b5c0, size 0x70, virtual false, abstract: false, final false
inline ::MA::Flora::AABB get_PaddedAABB() ;

/// @brief Method get_Position, addr 0x18149b630, size 0x60, virtual false, abstract: false, final false
inline ::Unity::Mathematics::float3 get_Position() ;

/// @brief Convert to "::System::IEquatable_1<::MA::Flora::CellLocation>"
constexpr ::System::IEquatable_1<::MA::Flora::CellLocation>* i___System__IEquatable_1___MA__Flora__CellLocation_() ;

/// @brief Method op_Equality, addr 0x180645b60, size 0x40, virtual false, abstract: false, final false
static inline bool op_Equality(::MA::Flora::CellLocation  left, ::MA::Flora::CellLocation  right) ;

/// @brief Method op_Inequality, addr 0x18149c1a0, size 0x40, virtual false, abstract: false, final false
static inline bool op_Inequality(::MA::Flora::CellLocation  left, ::MA::Flora::CellLocation  right) ;

static inline void setStaticF_None(::MA::Flora::CellLocation  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr CellLocation() ;

// Ctor Parameters [CppParam { name: "Value", ty: "::Unity::Mathematics::int4", modifiers: "", def_value: None }]
constexpr CellLocation(::Unity::Mathematics::int4  Value) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13101};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field Value, offset: 0x0, size: 0x10, def value: None
 ::Unity::Mathematics::int4  Value;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::MA::Flora::CellLocation, Value) == 0x0, "Offset mismatch!");

static_assert(sizeof(::MA::Flora::CellLocation) == 0x10, "Size mismatch!");

} // namespace end def MA::Flora

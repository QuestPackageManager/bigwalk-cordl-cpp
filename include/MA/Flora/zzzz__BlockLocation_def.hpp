#pragma once
// IWYU pragma private; include "MA/Flora/BlockLocation.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Mathematics/zzzz__int4_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(BlockLocation)
namespace MA::Flora {
struct AABB;
}
namespace MA::Flora {
struct CellIndex;
}
namespace MA::Flora {
struct CellLocation;
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
struct BlockLocation;
}
// Write type traits
MARK_VAL_T(::MA::Flora::BlockLocation);
DEFINE_IL2CPP_CLASS(::MA::Flora::BlockLocation, "MA.Flora", "BlockLocation");
// Dependencies Unity.Mathematics.int4
namespace MA::Flora {
// Is value type: true
// CS Name: MA.Flora.BlockLocation
struct CORDL_TYPE BlockLocation {
public:
// Declarations
 __declspec(property(get=get_AABB)) ::MA::Flora::AABB  AABB;

 __declspec(property(get=get_BlockSize)) float_t  BlockSize;

 __declspec(property(get=get_CellSize)) float_t  CellSize;

 __declspec(property(get=get_Center)) ::Unity::Mathematics::float3  Center;

 __declspec(property(get=get_Coords)) ::Unity::Mathematics::int3  Coords;

 __declspec(property(get=get_Level)) int32_t  Level;

/// @brief Field None, offset 0xffffffff, size 0x10 
 __declspec(property(get=getStaticF_None, put=setStaticF_None)) ::MA::Flora::BlockLocation  None;

 __declspec(property(get=get_PaddedAABB)) ::MA::Flora::AABB  PaddedAABB;

 __declspec(property(get=get_Position)) ::Unity::Mathematics::float3  Position;

/// @brief Convert operator to "::System::IEquatable_1<::MA::Flora::BlockLocation>"
constexpr operator  ::System::IEquatable_1<::MA::Flora::BlockLocation>*() ;

/// @brief Method Equals, addr 0x180673fe0, size 0x90, virtual true, abstract: false, final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method Equals, addr 0x180645b60, size 0x40, virtual true, abstract: false, final true
inline bool Equals(::MA::Flora::BlockLocation  other) ;

/// @brief Method FromAABB, addr 0x18149bd60, size 0xe0, virtual false, abstract: false, final false
static inline ::MA::Flora::BlockLocation FromAABB(::MA::Flora::AABB  aabb) ;

/// @brief Method FromAABB, addr 0x18149be40, size 0xe0, virtual false, abstract: false, final false
static inline ::MA::Flora::BlockLocation FromAABB(::Unity::Mathematics::float3  center, ::Unity::Mathematics::float3  extent) ;

/// @brief Method FromPosition, addr 0x18149bf20, size 0x280, virtual false, abstract: false, final false
static inline ::MA::Flora::BlockLocation FromPosition(::Unity::Mathematics::float3  position, float_t  size) ;

/// @brief Method GetHashCode, addr 0x1808fb580, size 0x6320, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

/// @brief Method GetLocalCellCoord, addr 0x18149b020, size 0x30, virtual false, abstract: false, final false
inline ::Unity::Mathematics::int3 GetLocalCellCoord(::MA::Flora::CellIndex  cellIndex) ;

/// @brief Method GetLocalCellCoord, addr 0x18149b0a0, size 0x30, virtual false, abstract: false, final false
inline ::Unity::Mathematics::int3 GetLocalCellCoord(int32_t  indexInBlock) ;

/// @brief Method GetLocalCellCoord, addr 0x18149b050, size 0x50, virtual false, abstract: false, final false
inline ::Unity::Mathematics::int3 GetLocalCellCoord(::MA::Flora::CellLocation  location) ;

/// @brief Method IsValid, addr 0x18149b0d0, size 0x20, virtual false, abstract: false, final false
inline bool IsValid() ;

/// @brief Method ToString, addr 0x18149b0f0, size 0x80, virtual true, abstract: false, final false
inline ::StringW ToString() ;

/// @brief Method .ctor, addr 0x1803bdb10, size 0x20, virtual false, abstract: false, final false
inline void _ctor(::Unity::Mathematics::int4  value) ;

/// @brief Method .ctor, addr 0x18149b170, size 0x30, virtual false, abstract: false, final false
inline void _ctor(int32_t  x, int32_t  y, int32_t  z, int32_t  level) ;

static inline ::MA::Flora::BlockLocation getStaticF_None() ;

/// @brief Method get_AABB, addr 0x18149b1a0, size 0x80, virtual false, abstract: false, final false
inline ::MA::Flora::AABB get_AABB() ;

/// @brief Method get_BlockSize, addr 0x18149b220, size 0x20, virtual false, abstract: false, final false
inline float_t get_BlockSize() ;

/// @brief Method get_CellSize, addr 0x18149b240, size 0x20, virtual false, abstract: false, final false
inline float_t get_CellSize() ;

/// @brief Method get_Center, addr 0x18149b260, size 0x80, virtual false, abstract: false, final false
inline ::Unity::Mathematics::float3 get_Center() ;

/// @brief Method get_Coords, addr 0x1803bdaa0, size 0x20, virtual false, abstract: false, final false
inline ::Unity::Mathematics::int3 get_Coords() ;

/// @brief Method get_Level, addr 0x1803bdb30, size 0x10, virtual false, abstract: false, final false
inline int32_t get_Level() ;

/// @brief Method get_PaddedAABB, addr 0x18149b2e0, size 0xb0, virtual false, abstract: false, final false
inline ::MA::Flora::AABB get_PaddedAABB() ;

/// @brief Method get_Position, addr 0x18149b390, size 0x50, virtual false, abstract: false, final false
inline ::Unity::Mathematics::float3 get_Position() ;

/// @brief Convert to "::System::IEquatable_1<::MA::Flora::BlockLocation>"
constexpr ::System::IEquatable_1<::MA::Flora::BlockLocation>* i___System__IEquatable_1___MA__Flora__BlockLocation_() ;

/// @brief Method op_Equality, addr 0x180645b60, size 0x40, virtual false, abstract: false, final false
static inline bool op_Equality(::MA::Flora::BlockLocation  left, ::MA::Flora::BlockLocation  right) ;

/// @brief Method op_Inequality, addr 0x18149c1a0, size 0x40, virtual false, abstract: false, final false
static inline bool op_Inequality(::MA::Flora::BlockLocation  left, ::MA::Flora::BlockLocation  right) ;

static inline void setStaticF_None(::MA::Flora::BlockLocation  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr BlockLocation() ;

// Ctor Parameters [CppParam { name: "Value", ty: "::Unity::Mathematics::int4", modifiers: "", def_value: None }]
constexpr BlockLocation(::Unity::Mathematics::int4  Value) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13100};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field Value, offset: 0x0, size: 0x10, def value: None
 ::Unity::Mathematics::int4  Value;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::MA::Flora::BlockLocation, Value) == 0x0, "Offset mismatch!");

static_assert(sizeof(::MA::Flora::BlockLocation) == 0x10, "Size mismatch!");

} // namespace end def MA::Flora

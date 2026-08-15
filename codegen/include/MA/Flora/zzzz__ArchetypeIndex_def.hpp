#pragma once
// IWYU pragma private; include "MA/Flora/ArchetypeIndex.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ArchetypeIndex)
namespace MA::Flora {
struct AABB;
}
namespace MA::Flora {
struct ArchetypeKey;
}
namespace System {
template<typename T>
class IComparable_1;
}
namespace System {
template<typename T>
class IEquatable_1;
}
namespace System {
class Object;
}
// Forward declare root types
namespace MA::Flora {
struct ArchetypeIndex;
}
// Write type traits
MARK_VAL_T(::MA::Flora::ArchetypeIndex);
DEFINE_IL2CPP_CLASS(::MA::Flora::ArchetypeIndex, "MA.Flora", "ArchetypeIndex");
// Dependencies 
namespace MA::Flora {
// Is value type: true
// CS Name: MA.Flora.ArchetypeIndex
struct CORDL_TYPE ArchetypeIndex {
public:
// Declarations
 __declspec(property(get=get_ChunkCount, put=set_ChunkCount)) int32_t  ChunkCount;

 __declspec(property(get=get_Enabled)) bool  Enabled;

 __declspec(property(get=get_HasRandomID)) bool  HasRandomID;

 __declspec(property(get=get_HasVariationColor)) bool  HasVariationColor;

 __declspec(property(get=get_InstanceCount, put=set_InstanceCount)) int32_t  InstanceCount;

 __declspec(property(get=get_Key)) ::MA::Flora::ArchetypeKey  Key;

 __declspec(property(get=get_LocalAABB)) ::MA::Flora::AABB  LocalAABB;

 __declspec(property(get=get_Version, put=set_Version)) int32_t  Version;

/// @brief Convert operator to "::System::IComparable_1<::MA::Flora::ArchetypeIndex>"
constexpr operator  ::System::IComparable_1<::MA::Flora::ArchetypeIndex>*() ;

/// @brief Convert operator to "::System::IEquatable_1<::MA::Flora::ArchetypeIndex>"
constexpr operator  ::System::IEquatable_1<::MA::Flora::ArchetypeIndex>*() ;

/// @brief Method CompareTo, addr 0x1805aa020, size 0x20, virtual true, abstract: false, final true
inline int32_t CompareTo(::MA::Flora::ArchetypeIndex  other) ;

/// @brief Method Equals, addr 0x181455990, size 0x70, virtual true, abstract: false, final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method Equals, addr 0x1805a82e0, size 0x20, virtual true, abstract: false, final true
inline bool Equals(::MA::Flora::ArchetypeIndex  other) ;

/// @brief Method GetHashCode, addr 0x1803474c0, size 0x10, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

/// @brief Method ToString, addr 0x181455a00, size 0xb0, virtual true, abstract: false, final false
inline ::StringW ToString() ;

/// @brief Method .ctor, addr 0x180379030, size 0x10, virtual false, abstract: false, final false
inline void _ctor(int32_t  index) ;

/// @brief Method get_ChunkCount, addr 0x181453750, size 0x40, virtual false, abstract: false, final false
inline int32_t get_ChunkCount() ;

/// @brief Method get_Enabled, addr 0x181453790, size 0x40, virtual false, abstract: false, final false
inline bool get_Enabled() ;

/// @brief Method get_HasRandomID, addr 0x1814537d0, size 0x60, virtual false, abstract: false, final false
inline bool get_HasRandomID() ;

/// @brief Method get_HasVariationColor, addr 0x181453830, size 0x60, virtual false, abstract: false, final false
inline bool get_HasVariationColor() ;

/// @brief Method get_InstanceCount, addr 0x181453890, size 0x40, virtual false, abstract: false, final false
inline int32_t get_InstanceCount() ;

/// @brief Method get_Key, addr 0x1814538d0, size 0x40, virtual false, abstract: false, final false
inline ::by_ref<::MA::Flora::ArchetypeKey> get_Key() ;

/// @brief Method get_LocalAABB, addr 0x181453910, size 0x50, virtual false, abstract: false, final false
inline ::by_ref<::MA::Flora::AABB> get_LocalAABB() ;

/// @brief Method get_None, addr 0x1802dd520, size 0x10, virtual false, abstract: false, final false
static inline ::MA::Flora::ArchetypeIndex get_None() ;

/// @brief Method get_Version, addr 0x181453960, size 0x40, virtual false, abstract: false, final false
inline int32_t get_Version() ;

/// @brief Convert to "::System::IComparable_1<::MA::Flora::ArchetypeIndex>"
constexpr ::System::IComparable_1<::MA::Flora::ArchetypeIndex>* i___System__IComparable_1___MA__Flora__ArchetypeIndex_() ;

/// @brief Convert to "::System::IEquatable_1<::MA::Flora::ArchetypeIndex>"
constexpr ::System::IEquatable_1<::MA::Flora::ArchetypeIndex>* i___System__IEquatable_1___MA__Flora__ArchetypeIndex_() ;

/// @brief Method op_Equality, addr 0x1805a8340, size 0x10, virtual false, abstract: false, final false
static inline bool op_Equality(::MA::Flora::ArchetypeIndex  a, ::MA::Flora::ArchetypeIndex  b) ;

/// @brief Method op_GreaterThan, addr 0x181455ab0, size 0x10, virtual false, abstract: false, final false
static inline bool op_GreaterThan(::MA::Flora::ArchetypeIndex  a, ::MA::Flora::ArchetypeIndex  b) ;

/// @brief Method op_Implicit, addr 0x180543890, size 0x10, virtual false, abstract: false, final false
static inline int32_t op_Implicit_int32_t(::MA::Flora::ArchetypeIndex  index) ;

/// @brief Method op_Inequality, addr 0x1805a8350, size 0x10, virtual false, abstract: false, final false
static inline bool op_Inequality(::MA::Flora::ArchetypeIndex  a, ::MA::Flora::ArchetypeIndex  b) ;

/// @brief Method op_LessThan, addr 0x181455ac0, size 0x30, virtual false, abstract: false, final false
static inline bool op_LessThan(::MA::Flora::ArchetypeIndex  a, ::MA::Flora::ArchetypeIndex  b) ;

/// @brief Method set_ChunkCount, addr 0x1814539a0, size 0x50, virtual false, abstract: false, final false
inline void set_ChunkCount(int32_t  value) ;

/// @brief Method set_InstanceCount, addr 0x1814539f0, size 0x50, virtual false, abstract: false, final false
inline void set_InstanceCount(int32_t  value) ;

/// @brief Method set_Version, addr 0x181453a40, size 0x50, virtual false, abstract: false, final false
inline void set_Version(int32_t  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr ArchetypeIndex() ;

// Ctor Parameters [CppParam { name: "Index", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ArchetypeIndex(int32_t  Index) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12906};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field Index, offset: 0x0, size: 0x4, def value: None
 int32_t  Index;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::MA::Flora::ArchetypeIndex, Index) == 0x0, "Offset mismatch!");

static_assert(sizeof(::MA::Flora::ArchetypeIndex) == 0x4, "Size mismatch!");

} // namespace end def MA::Flora

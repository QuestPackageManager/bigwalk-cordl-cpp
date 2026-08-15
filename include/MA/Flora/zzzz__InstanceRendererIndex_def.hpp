#pragma once
// IWYU pragma private; include "MA/Flora/InstanceRendererIndex.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(InstanceRendererIndex)
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
struct InstanceRendererIndex;
}
// Write type traits
MARK_VAL_T(::MA::Flora::InstanceRendererIndex);
DEFINE_IL2CPP_CLASS(::MA::Flora::InstanceRendererIndex, "MA.Flora", "InstanceRendererIndex");
// Dependencies 
namespace MA::Flora {
// Is value type: true
// CS Name: MA.Flora.InstanceRendererIndex
struct CORDL_TYPE InstanceRendererIndex {
public:
// Declarations
 __declspec(property(get=get_IsCreated)) bool  IsCreated;

/// @brief Field None, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_None, put=setStaticF_None)) ::MA::Flora::InstanceRendererIndex  None;

/// @brief Convert operator to "::System::IComparable_1<::MA::Flora::InstanceRendererIndex>"
constexpr operator  ::System::IComparable_1<::MA::Flora::InstanceRendererIndex>*() ;

/// @brief Convert operator to "::System::IEquatable_1<::MA::Flora::InstanceRendererIndex>"
constexpr operator  ::System::IEquatable_1<::MA::Flora::InstanceRendererIndex>*() ;

/// @brief Method CompareTo, addr 0x181453a90, size 0x10, virtual true, abstract: false, final true
inline int32_t CompareTo(::MA::Flora::InstanceRendererIndex  other) ;

/// @brief Method Equals, addr 0x1814834f0, size 0x70, virtual true, abstract: false, final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method Equals, addr 0x1805a82e0, size 0x20, virtual true, abstract: false, final true
inline bool Equals(::MA::Flora::InstanceRendererIndex  other) ;

/// @brief Method GetHashCode, addr 0x1803474c0, size 0x10, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

/// @brief Method ToString, addr 0x181483560, size 0x60, virtual true, abstract: false, final false
inline ::StringW ToString() ;

/// @brief Method .ctor, addr 0x180379030, size 0x10, virtual false, abstract: false, final false
inline void _ctor(int32_t  index) ;

static inline ::MA::Flora::InstanceRendererIndex getStaticF_None() ;

/// @brief Method get_IsCreated, addr 0x180785420, size 0x60, virtual false, abstract: false, final false
inline bool get_IsCreated() ;

/// @brief Convert to "::System::IComparable_1<::MA::Flora::InstanceRendererIndex>"
constexpr ::System::IComparable_1<::MA::Flora::InstanceRendererIndex>* i___System__IComparable_1___MA__Flora__InstanceRendererIndex_() ;

/// @brief Convert to "::System::IEquatable_1<::MA::Flora::InstanceRendererIndex>"
constexpr ::System::IEquatable_1<::MA::Flora::InstanceRendererIndex>* i___System__IEquatable_1___MA__Flora__InstanceRendererIndex_() ;

/// @brief Method op_Equality, addr 0x1805a8340, size 0x10, virtual false, abstract: false, final false
static inline bool op_Equality(::MA::Flora::InstanceRendererIndex  a, ::MA::Flora::InstanceRendererIndex  b) ;

/// @brief Method op_Implicit, addr 0x180543890, size 0x10, virtual false, abstract: false, final false
static inline int32_t op_Implicit_int32_t(::MA::Flora::InstanceRendererIndex  prefab) ;

/// @brief Method op_Inequality, addr 0x1805a8350, size 0x10, virtual false, abstract: false, final false
static inline bool op_Inequality(::MA::Flora::InstanceRendererIndex  a, ::MA::Flora::InstanceRendererIndex  b) ;

static inline void setStaticF_None(::MA::Flora::InstanceRendererIndex  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr InstanceRendererIndex() ;

// Ctor Parameters [CppParam { name: "Index", ty: "int32_t", modifiers: "", def_value: None }]
constexpr InstanceRendererIndex(int32_t  Index) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13047};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field Index, offset: 0x0, size: 0x4, def value: None
 int32_t  Index;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::MA::Flora::InstanceRendererIndex, Index) == 0x0, "Offset mismatch!");

static_assert(sizeof(::MA::Flora::InstanceRendererIndex) == 0x4, "Size mismatch!");

} // namespace end def MA::Flora

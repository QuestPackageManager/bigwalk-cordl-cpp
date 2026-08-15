#pragma once
// IWYU pragma private; include "MA/Flora/FloraInstanceHandle.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(FloraInstanceHandle)
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
namespace Unity::Collections {
struct FixedString64Bytes;
}
// Forward declare root types
namespace MA::Flora {
struct FloraInstanceHandle;
}
// Write type traits
MARK_VAL_T(::MA::Flora::FloraInstanceHandle);
DEFINE_IL2CPP_CLASS(::MA::Flora::FloraInstanceHandle, "MA.Flora", "FloraInstanceHandle");
// Dependencies 
namespace MA::Flora {
// Is value type: true
// CS Name: MA.Flora.FloraInstanceHandle
struct CORDL_TYPE FloraInstanceHandle {
public:
// Declarations
/// @brief Convert operator to "::System::IComparable_1<::MA::Flora::FloraInstanceHandle>"
constexpr operator  ::System::IComparable_1<::MA::Flora::FloraInstanceHandle>*() ;

/// @brief Convert operator to "::System::IEquatable_1<::MA::Flora::FloraInstanceHandle>"
constexpr operator  ::System::IEquatable_1<::MA::Flora::FloraInstanceHandle>*() ;

/// @brief Method CompareTo, addr 0x181453a90, size 0x10, virtual true, abstract: false, final true
inline int32_t CompareTo(::MA::Flora::FloraInstanceHandle  other) ;

/// @brief Method Equals, addr 0x18147c910, size 0x70, virtual true, abstract: false, final false
inline bool Equals(::System::Object*  compare) ;

/// @brief Method Equals, addr 0x18147c8f0, size 0x20, virtual true, abstract: false, final true
inline bool Equals(::MA::Flora::FloraInstanceHandle  instance) ;

/// @brief Method Exists, addr 0x18147c980, size 0xa0, virtual false, abstract: false, final false
inline bool Exists() ;

/// @brief Method GetHashCode, addr 0x1803474c0, size 0x10, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

/// @brief Method ToFixedString, addr 0x18147ca20, size 0x170, virtual false, abstract: false, final false
inline ::Unity::Collections::FixedString64Bytes ToFixedString() ;

/// @brief Method ToString, addr 0x18147cb90, size 0x90, virtual true, abstract: false, final false
inline ::StringW ToString() ;

/// @brief Method get_Null, addr 0x1802dd520, size 0x10, virtual false, abstract: false, final false
static inline ::MA::Flora::FloraInstanceHandle get_Null() ;

/// @brief Convert to "::System::IComparable_1<::MA::Flora::FloraInstanceHandle>"
constexpr ::System::IComparable_1<::MA::Flora::FloraInstanceHandle>* i___System__IComparable_1___MA__Flora__FloraInstanceHandle_() ;

/// @brief Convert to "::System::IEquatable_1<::MA::Flora::FloraInstanceHandle>"
constexpr ::System::IEquatable_1<::MA::Flora::FloraInstanceHandle>* i___System__IEquatable_1___MA__Flora__FloraInstanceHandle_() ;

/// @brief Method op_Equality, addr 0x18147cc20, size 0x20, virtual false, abstract: false, final false
static inline bool op_Equality(::MA::Flora::FloraInstanceHandle  lhs, ::MA::Flora::FloraInstanceHandle  rhs) ;

/// @brief Method op_Inequality, addr 0x18147cc40, size 0x20, virtual false, abstract: false, final false
static inline bool op_Inequality(::MA::Flora::FloraInstanceHandle  lhs, ::MA::Flora::FloraInstanceHandle  rhs) ;

// Ctor Parameters []
// @brief default ctor
constexpr FloraInstanceHandle() ;

// Ctor Parameters [CppParam { name: "Index", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "Version", ty: "int32_t", modifiers: "", def_value: None }]
constexpr FloraInstanceHandle(int32_t  Index, int32_t  Version) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13021};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field Index, offset: 0x0, size: 0x4, def value: None
 int32_t  Index;

/// @brief Field Version, offset: 0x4, size: 0x4, def value: None
 int32_t  Version;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::MA::Flora::FloraInstanceHandle, Index) == 0x0, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::FloraInstanceHandle, Version) == 0x4, "Offset mismatch!");

static_assert(sizeof(::MA::Flora::FloraInstanceHandle) == 0x8, "Size mismatch!");

} // namespace end def MA::Flora

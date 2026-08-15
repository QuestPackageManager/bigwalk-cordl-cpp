#pragma once
// IWYU pragma private; include "System/Collections/Generic/ByteEqualityComparer.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Collections/Generic/zzzz__EqualityComparer_1_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ByteEqualityComparer)
namespace System {
class Object;
}
// Forward declare root types
namespace System::Collections::Generic {
class ByteEqualityComparer;
}
// Write type traits
MARK_REF_T(::System::Collections::Generic::ByteEqualityComparer*);
DEFINE_IL2CPP_CLASS(::System::Collections::Generic::ByteEqualityComparer*, "System.Collections.Generic", "ByteEqualityComparer");
// Dependencies System.Collections.Generic.EqualityComparer`1<T>
namespace System::Collections::Generic {
// Is value type: false
// CS Name: System.Collections.Generic.ByteEqualityComparer
class CORDL_TYPE ByteEqualityComparer : public ::System::Collections::Generic::EqualityComparer_1<uint8_t> {
public:
// Declarations
/// @brief Method Equals, addr 0x1816c51d0, size 0x60, virtual true, abstract: false, final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method Equals, addr 0x1810e93e0, size 0x2a0, virtual true, abstract: false, final false
inline bool Equals(uint8_t  x, uint8_t  y) ;

/// @brief Method GetHashCode, addr 0x18098cc60, size 0x1a0, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

/// @brief Method GetHashCode, addr 0x180c88960, size 0x6a70, virtual true, abstract: false, final false
inline int32_t GetHashCode(uint8_t  b) ;

/// @brief Method IndexOf, addr 0x1816c5230, size 0xf0, virtual true, abstract: false, final false
inline int32_t IndexOf(::ArrayW<uint8_t>  array, uint8_t  value, int32_t  startIndex, int32_t  count) ;

/// @brief Method LastIndexOf, addr 0x1816c5320, size 0x30, virtual true, abstract: false, final false
inline int32_t LastIndexOf(::ArrayW<uint8_t>  array, uint8_t  value, int32_t  startIndex, int32_t  count) ;

static inline ::System::Collections::Generic::ByteEqualityComparer* New_ctor() ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ByteEqualityComparer() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ByteEqualityComparer", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ByteEqualityComparer(ByteEqualityComparer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ByteEqualityComparer", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ByteEqualityComparer(ByteEqualityComparer const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1573};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::System::Collections::Generic::ByteEqualityComparer) == 0x10, "Size mismatch!");

} // namespace end def System::Collections::Generic

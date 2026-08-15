#pragma once
// IWYU pragma private; include "System/ParseNumbers.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ParseNumbers)
namespace System {
template<typename T>
struct ReadOnlySpan_1;
}
// Forward declare root types
namespace System {
class ParseNumbers;
}
// Write type traits
MARK_REF_T(::System::ParseNumbers*);
DEFINE_IL2CPP_CLASS(::System::ParseNumbers*, "System", "ParseNumbers");
// Dependencies System.Object
namespace System {
// Is value type: false
// CS Name: System.ParseNumbers
class CORDL_TYPE ParseNumbers : public ::System::Object {
public:
// Declarations
/// @brief Method EatWhiteSpace, addr 0x181722390, size 0x80, virtual false, abstract: false, final false
static inline void EatWhiteSpace(::System::ReadOnlySpan_1<char16_t>  s, ::by_ref<int32_t>  i) ;

/// @brief Method GrabInts, addr 0x181722410, size 0x1b0, virtual false, abstract: false, final false
static inline int32_t GrabInts(int32_t  radix, ::System::ReadOnlySpan_1<char16_t>  s, ::by_ref<int32_t>  i, bool  isUnsigned) ;

/// @brief Method GrabLongs, addr 0x1817225c0, size 0x190, virtual false, abstract: false, final false
static inline int64_t GrabLongs(int32_t  radix, ::System::ReadOnlySpan_1<char16_t>  s, ::by_ref<int32_t>  i, bool  isUnsigned) ;

/// @brief Method IntToString, addr 0x181722750, size 0x280, virtual false, abstract: false, final false
static inline ::StringW IntToString(int32_t  n, int32_t  radix, int32_t  width, char16_t  paddingChar, int32_t  flags) ;

/// @brief Method IsDigit, addr 0x1817229d0, size 0x60, virtual false, abstract: false, final false
static inline bool IsDigit(char16_t  c, int32_t  radix, ::by_ref<int32_t>  result) ;

/// @brief Method LongToString, addr 0x181722a30, size 0x300, virtual false, abstract: false, final false
static inline ::StringW LongToString(int64_t  n, int32_t  radix, int32_t  width, char16_t  paddingChar, int32_t  flags) ;

/// @brief Method StringToInt, addr 0x181722d30, size 0x30, virtual false, abstract: false, final false
static inline int32_t StringToInt(::System::ReadOnlySpan_1<char16_t>  s, int32_t  radix, int32_t  flags) ;

/// @brief Method StringToInt, addr 0x181722d60, size 0x3e0, virtual false, abstract: false, final false
static inline int32_t StringToInt(::System::ReadOnlySpan_1<char16_t>  s, int32_t  radix, int32_t  flags, ::by_ref<int32_t>  currPos) ;

/// @brief Method StringToLong, addr 0x1817234a0, size 0x30, virtual false, abstract: false, final false
static inline int64_t StringToLong(::System::ReadOnlySpan_1<char16_t>  s, int32_t  radix, int32_t  flags) ;

/// @brief Method StringToLong, addr 0x181723140, size 0x360, virtual false, abstract: false, final false
static inline int64_t StringToLong(::System::ReadOnlySpan_1<char16_t>  s, int32_t  radix, int32_t  flags, ::by_ref<int32_t>  currPos) ;

/// @brief Method ThrowOverflowInt32Exception, addr 0x1816a0770, size 0x50, virtual false, abstract: false, final false
static inline void ThrowOverflowInt32Exception() ;

/// @brief Method ThrowOverflowInt64Exception, addr 0x1816a07c0, size 0x50, virtual false, abstract: false, final false
static inline void ThrowOverflowInt64Exception() ;

/// @brief Method ThrowOverflowUInt32Exception, addr 0x1816a08b0, size 0x50, virtual false, abstract: false, final false
static inline void ThrowOverflowUInt32Exception() ;

/// @brief Method ThrowOverflowUInt64Exception, addr 0x1816a0900, size 0x50, virtual false, abstract: false, final false
static inline void ThrowOverflowUInt64Exception() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ParseNumbers() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ParseNumbers", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ParseNumbers(ParseNumbers && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ParseNumbers", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ParseNumbers(ParseNumbers const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{292};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::System::ParseNumbers) == 0x10, "Size mismatch!");

} // namespace end def System

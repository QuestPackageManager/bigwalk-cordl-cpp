#pragma once
// IWYU pragma private; include "System/MemoryExtensions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MemoryExtensions)
namespace System {
template<typename T>
struct ArraySegment_1;
}
namespace System {
template<typename T>
struct ReadOnlySpan_1;
}
namespace System {
template<typename T>
struct Span_1;
}
namespace System {
struct StringComparison;
}
// Forward declare root types
namespace System {
class MemoryExtensions;
}
// Write type traits
MARK_REF_T(::System::MemoryExtensions*);
DEFINE_IL2CPP_CLASS(::System::MemoryExtensions*, "System", "MemoryExtensions");
// Dependencies System.Object
namespace System {
// Is value type: false
// CS Name: System.MemoryExtensions
class CORDL_TYPE MemoryExtensions : public ::System::Object {
public:
// Declarations
/// @brief Method AsSpan, addr 0x18170fd40, size 0x60, virtual false, abstract: false, final false
static inline ::System::ReadOnlySpan_1<char16_t> AsSpan(::StringW  text) ;

/// @brief Method AsSpan, addr 0x18170fe40, size 0x90, virtual false, abstract: false, final false
static inline ::System::ReadOnlySpan_1<char16_t> AsSpan(::StringW  text, int32_t  start) ;

/// @brief Method AsSpan, addr 0x18170fda0, size 0xa0, virtual false, abstract: false, final false
static inline ::System::ReadOnlySpan_1<char16_t> AsSpan(::StringW  text, int32_t  start, int32_t  length) ;

/// @brief Method AsSpan, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline ::System::Span_1<T> AsSpan(::ArrayW<T>  array) ;

/// @brief Method AsSpan, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline ::System::Span_1<T> AsSpan(::ArrayW<T>  array, int32_t  start) ;

/// @brief Method AsSpan, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline ::System::Span_1<T> AsSpan(::ArrayW<T>  array, int32_t  start, int32_t  length) ;

/// @brief Method AsSpan, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline ::System::Span_1<T> AsSpan(::System::ArraySegment_1<T>  segment) ;

/// @brief Method AsSpan, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline ::System::Span_1<T> AsSpan(::System::ArraySegment_1<T>  segment, int32_t  start) ;

/// @brief Method Contains, addr 0x1817100d0, size 0x30, virtual false, abstract: false, final false
static inline bool Contains(::System::ReadOnlySpan_1<char16_t>  source, char16_t  value) ;

/// @brief Method Contains, addr 0x18170fed0, size 0x200, virtual false, abstract: false, final false
static inline bool Contains(::System::ReadOnlySpan_1<char16_t>  span, ::System::ReadOnlySpan_1<char16_t>  value, ::System::StringComparison  comparisonType) ;

/// @brief Method CopyTo, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline void CopyTo(::ArrayW<T>  source, ::System::Span_1<T>  destination) ;

/// @brief Method EndsWith, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline bool EndsWith(::System::ReadOnlySpan_1<T>  span, ::System::ReadOnlySpan_1<T>  value) ;

/// @brief Method EndsWith, addr 0x181710100, size 0x2d0, virtual false, abstract: false, final false
static inline bool EndsWith(::System::ReadOnlySpan_1<char16_t>  span, ::System::ReadOnlySpan_1<char16_t>  value, ::System::StringComparison  comparisonType) ;

/// @brief Method Equals, addr 0x181710470, size 0x330, virtual false, abstract: false, final false
static inline bool Equals(::System::ReadOnlySpan_1<char16_t>  span, ::System::ReadOnlySpan_1<char16_t>  other, ::System::StringComparison  comparisonType) ;

/// @brief Method EqualsOrdinal, addr 0x181710420, size 0x50, virtual false, abstract: false, final false
static inline bool EqualsOrdinal(::System::ReadOnlySpan_1<char16_t>  span, ::System::ReadOnlySpan_1<char16_t>  value) ;

/// @brief Method EqualsOrdinalIgnoreCase, addr 0x1817103d0, size 0x50, virtual false, abstract: false, final false
static inline bool EqualsOrdinalIgnoreCase(::System::ReadOnlySpan_1<char16_t>  span, ::System::ReadOnlySpan_1<char16_t>  value) ;

/// @brief Method IndexOf, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline int32_t IndexOf(::System::ReadOnlySpan_1<T>  span, T  value) ;

/// @brief Method IndexOf, addr 0x1817107a0, size 0x2f0, virtual false, abstract: false, final false
static inline int32_t IndexOf(::System::ReadOnlySpan_1<char16_t>  span, ::System::ReadOnlySpan_1<char16_t>  value, ::System::StringComparison  comparisonType) ;

/// @brief Method IndexOf, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline int32_t IndexOf(::System::Span_1<T>  span, ::System::ReadOnlySpan_1<T>  value) ;

/// @brief Method IndexOf, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline int32_t IndexOf(::System::Span_1<T>  span, T  value) ;

/// @brief Method IndexOfAny, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline int32_t IndexOfAny(::System::ReadOnlySpan_1<T>  span, ::System::ReadOnlySpan_1<T>  values) ;

/// @brief Method IsTypeComparableAsBytes, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline bool IsTypeComparableAsBytes(::by_ref<uint64_t>  size) ;

/// @brief Method SequenceEqual, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline bool SequenceEqual(::System::ReadOnlySpan_1<T>  span, ::System::ReadOnlySpan_1<T>  other) ;

/// @brief Method StartsWith, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline bool StartsWith(::System::ReadOnlySpan_1<T>  span, ::System::ReadOnlySpan_1<T>  value) ;

/// @brief Method StartsWith, addr 0x181710a90, size 0x240, virtual false, abstract: false, final false
static inline bool StartsWith(::System::ReadOnlySpan_1<char16_t>  span, ::System::ReadOnlySpan_1<char16_t>  value, ::System::StringComparison  comparisonType) ;

/// @brief Method ToUpperInvariant, addr 0x181710cd0, size 0x100, virtual false, abstract: false, final false
static inline int32_t ToUpperInvariant(::System::ReadOnlySpan_1<char16_t>  source, ::System::Span_1<char16_t>  destination) ;

/// @brief Method Trim, addr 0x181710f00, size 0xd0, virtual false, abstract: false, final false
static inline ::System::ReadOnlySpan_1<char16_t> Trim(::System::ReadOnlySpan_1<char16_t>  span) ;

/// @brief Method TrimEnd, addr 0x181710dd0, size 0x90, virtual false, abstract: false, final false
static inline ::System::ReadOnlySpan_1<char16_t> TrimEnd(::System::ReadOnlySpan_1<char16_t>  span) ;

/// @brief Method TrimStart, addr 0x181710e60, size 0xa0, virtual false, abstract: false, final false
static inline ::System::ReadOnlySpan_1<char16_t> TrimStart(::System::ReadOnlySpan_1<char16_t>  span) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MemoryExtensions() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MemoryExtensions", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MemoryExtensions(MemoryExtensions && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MemoryExtensions", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MemoryExtensions(MemoryExtensions const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{272};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::System::MemoryExtensions) == 0x10, "Size mismatch!");

} // namespace end def System

#pragma once
// IWYU pragma private; include "System/SpanHelpers.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SpanHelpers)
namespace System::Globalization {
class CompareInfo;
}
namespace System::Numerics {
template<typename T>
struct Vector_1;
}
namespace System {
struct IntPtr;
}
namespace System {
template<typename T>
struct ReadOnlySpan_1;
}
// Forward declare root types
namespace System {
class SpanHelpers;
}
// Write type traits
MARK_REF_T(::System::SpanHelpers*);
DEFINE_IL2CPP_CLASS(::System::SpanHelpers*, "System", "SpanHelpers");
// Dependencies System.Object
namespace System {
// Is value type: false
// CS Name: System.SpanHelpers
class CORDL_TYPE SpanHelpers : public ::System::Object {
public:
// Declarations
/// @brief Method ClearWithReferences, addr 0x181725420, size 0xa0, virtual false, abstract: false, final false
static inline void ClearWithReferences(::by_ref<::System::IntPtr>  ip, uint64_t  pointerSizeLength) ;

/// @brief Method ClearWithoutReferences, addr 0x1817254c0, size 0x260, virtual false, abstract: false, final false
static inline void ClearWithoutReferences(::by_ref<uint8_t>  b, uint64_t  byteLength) ;

/// @brief Method EndsWithCultureHelper, addr 0x181725720, size 0x1e0, virtual false, abstract: false, final false
static inline bool EndsWithCultureHelper(::System::ReadOnlySpan_1<char16_t>  span, ::System::ReadOnlySpan_1<char16_t>  value, ::System::Globalization::CompareInfo*  compareInfo) ;

/// @brief Method EndsWithCultureIgnoreCaseHelper, addr 0x181725900, size 0x120, virtual false, abstract: false, final false
static inline bool EndsWithCultureIgnoreCaseHelper(::System::ReadOnlySpan_1<char16_t>  span, ::System::ReadOnlySpan_1<char16_t>  value, ::System::Globalization::CompareInfo*  compareInfo) ;

/// @brief Method EndsWithOrdinalIgnoreCaseHelper, addr 0x181725a20, size 0x80, virtual false, abstract: false, final false
static inline bool EndsWithOrdinalIgnoreCaseHelper(::System::ReadOnlySpan_1<char16_t>  span, ::System::ReadOnlySpan_1<char16_t>  value) ;

/// @brief Method IndexOf, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline int32_t IndexOf(::by_ref<T>  searchSpace, int32_t  searchSpaceLength, ::by_ref<T>  value, int32_t  valueLength) ;

/// @brief Method IndexOf, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline int32_t IndexOf(::by_ref<T>  searchSpace, T  value, int32_t  length) ;

/// @brief Method IndexOf, addr 0x181725d70, size 0x80, virtual false, abstract: false, final false
static inline int32_t IndexOf(::by_ref<char16_t>  searchSpace, char16_t  value, int32_t  length) ;

/// @brief Method IndexOf, addr 0x181725df0, size 0xb0, virtual false, abstract: false, final false
static inline int32_t IndexOf(::by_ref<uint8_t>  searchSpace, int32_t  searchSpaceLength, ::by_ref<uint8_t>  value, int32_t  valueLength) ;

/// @brief Method IndexOf, addr 0x181725ea0, size 0xc0, virtual false, abstract: false, final false
static inline int32_t IndexOf(::by_ref<uint8_t>  searchSpace, uint8_t  value, int32_t  length) ;

/// @brief Method IndexOfAny, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline int32_t IndexOfAny(::by_ref<T>  searchSpace, int32_t  searchSpaceLength, ::by_ref<T>  value, int32_t  valueLength) ;

/// @brief Method IndexOfAny, addr 0x181725aa0, size 0x80, virtual false, abstract: false, final false
static inline int32_t IndexOfAny(::by_ref<uint8_t>  searchSpace, int32_t  searchSpaceLength, ::by_ref<uint8_t>  value, int32_t  valueLength) ;

/// @brief Method IndexOfCultureHelper, addr 0x181725b20, size 0xb0, virtual false, abstract: false, final false
static inline int32_t IndexOfCultureHelper(::System::ReadOnlySpan_1<char16_t>  span, ::System::ReadOnlySpan_1<char16_t>  value, ::System::Globalization::CompareInfo*  compareInfo) ;

/// @brief Method IndexOfCultureIgnoreCaseHelper, addr 0x181725bd0, size 0xb0, virtual false, abstract: false, final false
static inline int32_t IndexOfCultureIgnoreCaseHelper(::System::ReadOnlySpan_1<char16_t>  span, ::System::ReadOnlySpan_1<char16_t>  value, ::System::Globalization::CompareInfo*  compareInfo) ;

/// @brief Method IndexOfOrdinalHelper, addr 0x181725c80, size 0xf0, virtual false, abstract: false, final false
static inline int32_t IndexOfOrdinalHelper(::System::ReadOnlySpan_1<char16_t>  span, ::System::ReadOnlySpan_1<char16_t>  value, bool  ignoreCase) ;

/// @brief Method LastIndexOf, addr 0x181725f60, size 0xb0, virtual false, abstract: false, final false
static inline int32_t LastIndexOf(::by_ref<char16_t>  searchSpace, char16_t  value, int32_t  length) ;

/// @brief Method LocateFirstFoundChar, addr 0x181726030, size 0x110, virtual false, abstract: false, final false
static inline int32_t LocateFirstFoundChar(::System::Numerics::Vector_1<uint16_t>  match) ;

/// @brief Method LocateFirstFoundChar, addr 0x181726010, size 0x20, virtual false, abstract: false, final false
static inline int32_t LocateFirstFoundChar(uint64_t  match) ;

/// @brief Method LocateLastFoundChar, addr 0x181726140, size 0x100, virtual false, abstract: false, final false
static inline int32_t LocateLastFoundChar(::System::Numerics::Vector_1<uint16_t>  match) ;

/// @brief Method LocateLastFoundChar, addr 0x181726240, size 0x20, virtual false, abstract: false, final false
static inline int32_t LocateLastFoundChar(uint64_t  match) ;

/// @brief Method SequenceCompareTo, addr 0x181726260, size 0xd0, virtual false, abstract: false, final false
static inline int32_t SequenceCompareTo(::by_ref<char16_t>  first, int32_t  firstLength, ::by_ref<char16_t>  second, int32_t  secondLength) ;

/// @brief Method SequenceEqual, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline bool SequenceEqual(::by_ref<T>  first, ::by_ref<T>  second, int32_t  length) ;

/// @brief Method SequenceEqual, addr 0x181726330, size 0x80, virtual false, abstract: false, final false
static inline bool SequenceEqual(::by_ref<uint8_t>  first, ::by_ref<uint8_t>  second, uint64_t  length) ;

/// @brief Method StartsWithCultureHelper, addr 0x1817263b0, size 0x1e0, virtual false, abstract: false, final false
static inline bool StartsWithCultureHelper(::System::ReadOnlySpan_1<char16_t>  span, ::System::ReadOnlySpan_1<char16_t>  value, ::System::Globalization::CompareInfo*  compareInfo) ;

/// @brief Method StartsWithCultureIgnoreCaseHelper, addr 0x181726590, size 0x110, virtual false, abstract: false, final false
static inline bool StartsWithCultureIgnoreCaseHelper(::System::ReadOnlySpan_1<char16_t>  span, ::System::ReadOnlySpan_1<char16_t>  value, ::System::Globalization::CompareInfo*  compareInfo) ;

/// @brief Method StartsWithOrdinalIgnoreCaseHelper, addr 0x1817266a0, size 0x70, virtual false, abstract: false, final false
static inline bool StartsWithOrdinalIgnoreCaseHelper(::System::ReadOnlySpan_1<char16_t>  span, ::System::ReadOnlySpan_1<char16_t>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SpanHelpers() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SpanHelpers", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SpanHelpers(SpanHelpers && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SpanHelpers", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SpanHelpers(SpanHelpers const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{305};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::System::SpanHelpers) == 0x10, "Size mismatch!");

} // namespace end def System

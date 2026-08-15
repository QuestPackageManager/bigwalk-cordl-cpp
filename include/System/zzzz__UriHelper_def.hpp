#pragma once
// IWYU pragma private; include "System/UriHelper.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(UriHelper)
namespace System {
struct UnescapeMode;
}
namespace System {
class UriParser;
}
// Forward declare root types
namespace System {
class UriHelper;
}
// Write type traits
MARK_REF_T(::System::UriHelper*);
DEFINE_IL2CPP_CLASS(::System::UriHelper*, "System", "UriHelper");
// Dependencies System.Object
namespace System {
// Is value type: false
// CS Name: System.UriHelper
class CORDL_TYPE UriHelper : public ::System::Object {
public:
// Declarations
/// @brief Field HexUpperChars, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_HexUpperChars, put=setStaticF_HexUpperChars)) ::ArrayW<char16_t>  HexUpperChars;

/// @brief Method EnsureDestinationSize, addr 0x181dc1280, size 0xe0, virtual false, abstract: false, final false
static inline ::ArrayW<char16_t> EnsureDestinationSize(char16_t*  pStr, ::ArrayW<char16_t>  dest, int32_t  currentInputPos, int16_t  charsToAdd, int16_t  minReallocateChars, ::by_ref<int32_t>  destPos, int32_t  prevInputPos) ;

/// @brief Method EscapeAsciiChar, addr 0x181dc1360, size 0x80, virtual false, abstract: false, final false
static inline void EscapeAsciiChar(char16_t  ch, ::ArrayW<char16_t>  to, ::by_ref<int32_t>  pos) ;

/// @brief Method EscapeString, addr 0x181dc13e0, size 0x700, virtual false, abstract: false, final false
static inline ::ArrayW<char16_t> EscapeString(::StringW  input, int32_t  start, int32_t  end, ::ArrayW<char16_t>  dest, ::by_ref<int32_t>  destPos, bool  isUriString, char16_t  force1, char16_t  force2, char16_t  rsvd) ;

/// @brief Method EscapedAscii, addr 0x181dc1ae0, size 0xa0, virtual false, abstract: false, final false
static inline char16_t EscapedAscii(char16_t  digit, char16_t  next) ;

/// @brief Method Is3986Unreserved, addr 0x181dc1b80, size 0x40, virtual false, abstract: false, final false
static inline bool Is3986Unreserved(char16_t  c) ;

/// @brief Method IsNotSafeForUnescape, addr 0x181dc1bc0, size 0x50, virtual false, abstract: false, final false
static inline bool IsNotSafeForUnescape(char16_t  ch) ;

/// @brief Method IsReservedUnreservedOrHash, addr 0x181dc1c10, size 0xb0, virtual false, abstract: false, final false
static inline bool IsReservedUnreservedOrHash(char16_t  c) ;

/// @brief Method IsUnreserved, addr 0x181dc1cc0, size 0xa0, virtual false, abstract: false, final false
static inline bool IsUnreserved(char16_t  c) ;

/// @brief Method MatchUTF8Sequence, addr 0x181dc1d60, size 0x3b0, virtual false, abstract: false, final false
static inline void MatchUTF8Sequence(char16_t*  pDest, ::ArrayW<char16_t>  dest, ::by_ref<int32_t>  destOffset, ::ArrayW<char16_t>  unescapedChars, int32_t  charCount, ::ArrayW<uint8_t>  bytes, int32_t  byteCount, bool  isQuery, bool  iriParsing) ;

/// @brief Method TestForSubPath, addr 0x181dc2110, size 0x140, virtual false, abstract: false, final false
static inline bool TestForSubPath(char16_t*  pMe, uint16_t  meLength, char16_t*  pShe, uint16_t  sheLength, bool  ignoreCase) ;

/// @brief Method UnescapeString, addr 0x181dc2250, size 0xb0, virtual false, abstract: false, final false
static inline ::ArrayW<char16_t> UnescapeString(::StringW  input, int32_t  start, int32_t  end, ::ArrayW<char16_t>  dest, ::by_ref<int32_t>  destPosition, char16_t  rsvd1, char16_t  rsvd2, char16_t  rsvd3, ::System::UnescapeMode  unescapeMode, ::System::UriParser*  syntax, bool  isQuery) ;

/// @brief Method UnescapeString, addr 0x181dc2300, size 0x820, virtual false, abstract: false, final false
static inline ::ArrayW<char16_t> UnescapeString(char16_t*  pStr, int32_t  start, int32_t  end, ::ArrayW<char16_t>  dest, ::by_ref<int32_t>  destPosition, char16_t  rsvd1, char16_t  rsvd2, char16_t  rsvd3, ::System::UnescapeMode  unescapeMode, ::System::UriParser*  syntax, bool  isQuery) ;

static inline ::ArrayW<char16_t> getStaticF_HexUpperChars() ;

static inline void setStaticF_HexUpperChars(::ArrayW<char16_t>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UriHelper() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UriHelper", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
UriHelper(UriHelper && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UriHelper", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
UriHelper(UriHelper const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11537};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::System::UriHelper) == 0x10, "Size mismatch!");

} // namespace end def System

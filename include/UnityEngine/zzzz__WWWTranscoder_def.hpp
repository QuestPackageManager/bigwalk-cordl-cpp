#pragma once
// IWYU pragma private; include "UnityEngine/WWWTranscoder.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(WWWTranscoder)
namespace System::Text {
class Encoding;
}
// Forward declare root types
namespace UnityEngine {
class WWWTranscoder;
}
// Write type traits
MARK_REF_T(::UnityEngine::WWWTranscoder*);
DEFINE_IL2CPP_CLASS(::UnityEngine::WWWTranscoder*, "UnityEngine", "WWWTranscoder");
// Dependencies System.Object
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.WWWTranscoder
class CORDL_TYPE WWWTranscoder : public ::System::Object {
public:
// Declarations
/// @brief Field dataSpace, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_dataSpace, put=setStaticF_dataSpace)) ::ArrayW<uint8_t>  dataSpace;

/// @brief Field lcHexChars, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_lcHexChars, put=setStaticF_lcHexChars)) ::ArrayW<uint8_t>  lcHexChars;

/// @brief Field qpEscapeChar, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF_qpEscapeChar, put=setStaticF_qpEscapeChar)) uint8_t  qpEscapeChar;

/// @brief Field qpForbidden, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_qpForbidden, put=setStaticF_qpForbidden)) ::ArrayW<uint8_t>  qpForbidden;

/// @brief Field qpSpace, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_qpSpace, put=setStaticF_qpSpace)) ::ArrayW<uint8_t>  qpSpace;

/// @brief Field ucHexChars, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_ucHexChars, put=setStaticF_ucHexChars)) ::ArrayW<uint8_t>  ucHexChars;

/// @brief Field urlEscapeChar, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF_urlEscapeChar, put=setStaticF_urlEscapeChar)) uint8_t  urlEscapeChar;

/// @brief Field urlForbidden, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_urlForbidden, put=setStaticF_urlForbidden)) ::ArrayW<uint8_t>  urlForbidden;

/// @brief Field urlSpace, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_urlSpace, put=setStaticF_urlSpace)) ::ArrayW<uint8_t>  urlSpace;

/// @brief Method Byte2Hex, addr 0x18254bbb0, size 0x30, virtual false, abstract: false, final false
static inline void Byte2Hex(uint8_t  b, ::ArrayW<uint8_t>  hexChars, ::by_ref<uint8_t>  byte0, ::by_ref<uint8_t>  byte1) ;

/// @brief Method ByteArrayContains, addr 0x18254bbe0, size 0x30, virtual false, abstract: false, final false
static inline bool ByteArrayContains(::ArrayW<uint8_t>  array, uint8_t  b) ;

/// @brief Method ByteSubArrayEquals, addr 0x18254bc10, size 0x50, virtual false, abstract: false, final false
static inline bool ByteSubArrayEquals(::ArrayW<uint8_t>  array, int32_t  index, ::ArrayW<uint8_t>  comperand) ;

/// @brief Method DataEncode, addr 0x18254bc60, size 0xb0, virtual false, abstract: false, final false
static inline ::StringW DataEncode(::StringW  toEncode) ;

/// @brief Method DataEncode, addr 0x18254bd10, size 0xb0, virtual false, abstract: false, final false
static inline ::StringW DataEncode(::StringW  toEncode, ::System::Text::Encoding*  e) ;

/// @brief Method Decode, addr 0x18254bdc0, size 0x220, virtual false, abstract: false, final false
static inline ::ArrayW<uint8_t> Decode(::ArrayW<uint8_t>  input, uint8_t  escapeChar, ::ArrayW<uint8_t>  space) ;

/// @brief Method Encode, addr 0x18254bfe0, size 0x2d0, virtual false, abstract: false, final false
static inline ::ArrayW<uint8_t> Encode(::ArrayW<uint8_t>  input, uint8_t  escapeChar, ::ArrayW<uint8_t>  space, ::ArrayW<uint8_t>  forbidden, bool  uppercase) ;

/// @brief Method Hex2Byte, addr 0x18254c2b0, size 0x60, virtual false, abstract: false, final false
static inline uint8_t Hex2Byte(::ArrayW<uint8_t>  b, int32_t  offset) ;

/// @brief Method URLDecode, addr 0x18254c310, size 0x50, virtual false, abstract: false, final false
static inline ::ArrayW<uint8_t> URLDecode(::ArrayW<uint8_t>  toEncode) ;

static inline ::ArrayW<uint8_t> getStaticF_dataSpace() ;

static inline ::ArrayW<uint8_t> getStaticF_lcHexChars() ;

static inline uint8_t getStaticF_qpEscapeChar() ;

static inline ::ArrayW<uint8_t> getStaticF_qpForbidden() ;

static inline ::ArrayW<uint8_t> getStaticF_qpSpace() ;

static inline ::ArrayW<uint8_t> getStaticF_ucHexChars() ;

static inline uint8_t getStaticF_urlEscapeChar() ;

static inline ::ArrayW<uint8_t> getStaticF_urlForbidden() ;

static inline ::ArrayW<uint8_t> getStaticF_urlSpace() ;

static inline void setStaticF_dataSpace(::ArrayW<uint8_t>  value) ;

static inline void setStaticF_lcHexChars(::ArrayW<uint8_t>  value) ;

static inline void setStaticF_qpEscapeChar(uint8_t  value) ;

static inline void setStaticF_qpForbidden(::ArrayW<uint8_t>  value) ;

static inline void setStaticF_qpSpace(::ArrayW<uint8_t>  value) ;

static inline void setStaticF_ucHexChars(::ArrayW<uint8_t>  value) ;

static inline void setStaticF_urlEscapeChar(uint8_t  value) ;

static inline void setStaticF_urlForbidden(::ArrayW<uint8_t>  value) ;

static inline void setStaticF_urlSpace(::ArrayW<uint8_t>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr WWWTranscoder() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "WWWTranscoder", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
WWWTranscoder(WWWTranscoder && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "WWWTranscoder", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
WWWTranscoder(WWWTranscoder const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20846};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::WWWTranscoder) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine

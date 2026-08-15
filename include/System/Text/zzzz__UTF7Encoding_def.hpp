#pragma once
// IWYU pragma private; include "System/Text/UTF7Encoding.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Text/zzzz__DecoderFallbackBuffer_def.hpp"
#include "System/Text/zzzz__DecoderFallback_def.hpp"
#include "System/Text/zzzz__DecoderNLS_def.hpp"
#include "System/Text/zzzz__EncoderNLS_def.hpp"
#include "System/Text/zzzz__Encoding_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(UTF7Encoding)
namespace System::Text {
class DecoderFallbackBuffer;
}
namespace System::Text {
class DecoderNLS;
}
namespace System::Text {
class Decoder;
}
namespace System::Text {
class EncoderNLS;
}
namespace System::Text {
class Encoder;
}
namespace System::Text {
class UTF7Encoding_DecoderUTF7FallbackBuffer;
}
namespace System::Text {
class UTF7Encoding_DecoderUTF7Fallback;
}
namespace System::Text {
class UTF7Encoding_Decoder;
}
namespace System::Text {
class UTF7Encoding_Encoder;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Text {
class UTF7Encoding;
}
namespace System::Text {
class UTF7Encoding_Decoder;
}
namespace System::Text {
class UTF7Encoding_DecoderUTF7Fallback;
}
namespace System::Text {
class UTF7Encoding_DecoderUTF7FallbackBuffer;
}
namespace System::Text {
class UTF7Encoding_Encoder;
}
// Write type traits
MARK_REF_T(::System::Text::UTF7Encoding*);
MARK_REF_T(::System::Text::UTF7Encoding_Decoder*);
MARK_REF_T(::System::Text::UTF7Encoding_DecoderUTF7Fallback*);
MARK_REF_T(::System::Text::UTF7Encoding_DecoderUTF7FallbackBuffer*);
MARK_REF_T(::System::Text::UTF7Encoding_Encoder*);
DEFINE_IL2CPP_CLASS(::System::Text::UTF7Encoding*, "System.Text", "UTF7Encoding");
DEFINE_IL2CPP_CLASS(::System::Text::UTF7Encoding_Decoder*, "System.Text", "UTF7Encoding/Decoder");
DEFINE_IL2CPP_CLASS(::System::Text::UTF7Encoding_DecoderUTF7Fallback*, "System.Text", "UTF7Encoding/DecoderUTF7Fallback");
DEFINE_IL2CPP_CLASS(::System::Text::UTF7Encoding_DecoderUTF7FallbackBuffer*, "System.Text", "UTF7Encoding/DecoderUTF7FallbackBuffer");
DEFINE_IL2CPP_CLASS(::System::Text::UTF7Encoding_Encoder*, "System.Text", "UTF7Encoding/Encoder");
// Dependencies System.Text.DecoderNLS
namespace System::Text {
// Is value type: false
// CS Name: System.Text.UTF7Encoding/Decoder
class CORDL_TYPE UTF7Encoding_Decoder : public ::System::Text::DecoderNLS {
public:
// Declarations
 __declspec(property(get=get_HasState)) bool  HasState;

/// @brief Field bitCount, offset 0x34, size 0x4 
 __declspec(property(get=__cordl_internal_get_bitCount, put=__cordl_internal_set_bitCount)) int32_t  bitCount;

/// @brief Field bits, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_bits, put=__cordl_internal_set_bits)) int32_t  bits;

/// @brief Field firstByte, offset 0x38, size 0x1 
 __declspec(property(get=__cordl_internal_get_firstByte, put=__cordl_internal_set_firstByte)) bool  firstByte;

static inline ::System::Text::UTF7Encoding_Decoder* New_ctor(::System::Text::UTF7Encoding*  encoding) ;

/// @brief Method Reset, addr 0x1815e86a0, size 0x40, virtual true, abstract: false, final false
inline void Reset() ;

constexpr int32_t const& __cordl_internal_get_bitCount() const;

constexpr int32_t& __cordl_internal_get_bitCount() ;

constexpr int32_t const& __cordl_internal_get_bits() const;

constexpr int32_t& __cordl_internal_get_bits() ;

constexpr bool const& __cordl_internal_get_firstByte() const;

constexpr bool& __cordl_internal_get_firstByte() ;

constexpr void __cordl_internal_set_bitCount(int32_t  value) ;

constexpr void __cordl_internal_set_bits(int32_t  value) ;

constexpr void __cordl_internal_set_firstByte(bool  value) ;

/// @brief Method .ctor, addr 0x1815e86e0, size 0x10, virtual false, abstract: false, final false
inline void _ctor(::System::Text::UTF7Encoding*  encoding) ;

/// @brief Method get_HasState, addr 0x1815e86f0, size 0x10, virtual true, abstract: false, final false
inline bool get_HasState() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UTF7Encoding_Decoder() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UTF7Encoding_Decoder", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
UTF7Encoding_Decoder(UTF7Encoding_Decoder && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UTF7Encoding_Decoder", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
UTF7Encoding_Decoder(UTF7Encoding_Decoder const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{694};

/// @brief Field bits, offset: 0x30, size: 0x4, def value: None
 int32_t  ___bits;

/// @brief Field bitCount, offset: 0x34, size: 0x4, def value: None
 int32_t  ___bitCount;

/// @brief Field firstByte, offset: 0x38, size: 0x1, def value: None
 bool  ___firstByte;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Text::UTF7Encoding_Decoder, ___bits) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::Text::UTF7Encoding_Decoder, ___bitCount) == 0x34, "Offset mismatch!");

static_assert(offsetof(::System::Text::UTF7Encoding_Decoder, ___firstByte) == 0x38, "Offset mismatch!");

static_assert(sizeof(::System::Text::UTF7Encoding_Decoder) == 0x40, "Size mismatch!");

} // namespace end def System::Text
// Dependencies System.Text.EncoderNLS
namespace System::Text {
// Is value type: false
// CS Name: System.Text.UTF7Encoding/Encoder
class CORDL_TYPE UTF7Encoding_Encoder : public ::System::Text::EncoderNLS {
public:
// Declarations
 __declspec(property(get=get_HasState)) bool  HasState;

/// @brief Field bitCount, offset 0x3c, size 0x4 
 __declspec(property(get=__cordl_internal_get_bitCount, put=__cordl_internal_set_bitCount)) int32_t  bitCount;

/// @brief Field bits, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get_bits, put=__cordl_internal_set_bits)) int32_t  bits;

static inline ::System::Text::UTF7Encoding_Encoder* New_ctor(::System::Text::UTF7Encoding*  encoding) ;

/// @brief Method Reset, addr 0x1815ea260, size 0x30, virtual true, abstract: false, final false
inline void Reset() ;

constexpr int32_t const& __cordl_internal_get_bitCount() const;

constexpr int32_t& __cordl_internal_get_bitCount() ;

constexpr int32_t const& __cordl_internal_get_bits() const;

constexpr int32_t& __cordl_internal_get_bits() ;

constexpr void __cordl_internal_set_bitCount(int32_t  value) ;

constexpr void __cordl_internal_set_bits(int32_t  value) ;

/// @brief Method .ctor, addr 0x1815e9640, size 0x50, virtual false, abstract: false, final false
inline void _ctor(::System::Text::UTF7Encoding*  encoding) ;

/// @brief Method get_HasState, addr 0x1815ea420, size 0x20, virtual true, abstract: false, final false
inline bool get_HasState() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UTF7Encoding_Encoder() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UTF7Encoding_Encoder", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
UTF7Encoding_Encoder(UTF7Encoding_Encoder && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UTF7Encoding_Encoder", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
UTF7Encoding_Encoder(UTF7Encoding_Encoder const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{695};

/// @brief Field bits, offset: 0x38, size: 0x4, def value: None
 int32_t  ___bits;

/// @brief Field bitCount, offset: 0x3c, size: 0x4, def value: None
 int32_t  ___bitCount;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Text::UTF7Encoding_Encoder, ___bits) == 0x38, "Offset mismatch!");

static_assert(offsetof(::System::Text::UTF7Encoding_Encoder, ___bitCount) == 0x3c, "Offset mismatch!");

static_assert(sizeof(::System::Text::UTF7Encoding_Encoder) == 0x40, "Size mismatch!");

} // namespace end def System::Text
// Dependencies System.Text.DecoderFallback
namespace System::Text {
// Is value type: false
// CS Name: System.Text.UTF7Encoding/DecoderUTF7Fallback
class CORDL_TYPE UTF7Encoding_DecoderUTF7Fallback : public ::System::Text::DecoderFallback {
public:
// Declarations
 __declspec(property(get=get_MaxCharCount)) int32_t  MaxCharCount;

/// @brief Method CreateFallbackBuffer, addr 0x1815e8650, size 0x20, virtual true, abstract: false, final false
inline ::System::Text::DecoderFallbackBuffer* CreateFallbackBuffer() ;

/// @brief Method Equals, addr 0x1815e8670, size 0x20, virtual true, abstract: false, final false
inline bool Equals(::System::Object*  value) ;

/// @brief Method GetHashCode, addr 0x1815e8690, size 0x10, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

static inline ::System::Text::UTF7Encoding_DecoderUTF7Fallback* New_ctor() ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_MaxCharCount, addr 0x1802edd00, size 0x10, virtual true, abstract: false, final false
inline int32_t get_MaxCharCount() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UTF7Encoding_DecoderUTF7Fallback() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UTF7Encoding_DecoderUTF7Fallback", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
UTF7Encoding_DecoderUTF7Fallback(UTF7Encoding_DecoderUTF7Fallback && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UTF7Encoding_DecoderUTF7Fallback", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
UTF7Encoding_DecoderUTF7Fallback(UTF7Encoding_DecoderUTF7Fallback const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{696};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::System::Text::UTF7Encoding_DecoderUTF7Fallback) == 0x10, "Size mismatch!");

} // namespace end def System::Text
// Dependencies System.Text.DecoderFallbackBuffer
namespace System::Text {
// Is value type: false
// CS Name: System.Text.UTF7Encoding/DecoderUTF7FallbackBuffer
class CORDL_TYPE UTF7Encoding_DecoderUTF7FallbackBuffer : public ::System::Text::DecoderFallbackBuffer {
public:
// Declarations
 __declspec(property(get=get_Remaining)) int32_t  Remaining;

/// @brief Field cFallback, offset 0x20, size 0x2 
 __declspec(property(get=__cordl_internal_get_cFallback, put=__cordl_internal_set_cFallback)) char16_t  cFallback;

/// @brief Field iCount, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get_iCount, put=__cordl_internal_set_iCount)) int32_t  iCount;

/// @brief Field iSize, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_iSize, put=__cordl_internal_set_iSize)) int32_t  iSize;

/// @brief Method Fallback, addr 0x1815e85a0, size 0x30, virtual true, abstract: false, final false
inline bool Fallback(::ArrayW<uint8_t>  bytesUnknown, int32_t  index) ;

/// @brief Method GetNextChar, addr 0x1815e85d0, size 0x20, virtual true, abstract: false, final false
inline char16_t GetNextChar() ;

/// @brief Method InternalFallback, addr 0x1815e85f0, size 0x30, virtual true, abstract: false, final false
inline int32_t InternalFallback(::ArrayW<uint8_t>  bytes, uint8_t*  pBytes) ;

static inline ::System::Text::UTF7Encoding_DecoderUTF7FallbackBuffer* New_ctor(::System::Text::UTF7Encoding_DecoderUTF7Fallback*  fallback) ;

/// @brief Method Reset, addr 0x1815e8620, size 0x10, virtual true, abstract: false, final false
inline void Reset() ;

constexpr char16_t const& __cordl_internal_get_cFallback() const;

constexpr char16_t& __cordl_internal_get_cFallback() ;

constexpr int32_t const& __cordl_internal_get_iCount() const;

constexpr int32_t& __cordl_internal_get_iCount() ;

constexpr int32_t const& __cordl_internal_get_iSize() const;

constexpr int32_t& __cordl_internal_get_iSize() ;

constexpr void __cordl_internal_set_cFallback(char16_t  value) ;

constexpr void __cordl_internal_set_iCount(int32_t  value) ;

constexpr void __cordl_internal_set_iSize(int32_t  value) ;

/// @brief Method .ctor, addr 0x1815e8630, size 0x10, virtual false, abstract: false, final false
inline void _ctor(::System::Text::UTF7Encoding_DecoderUTF7Fallback*  fallback) ;

/// @brief Method get_Remaining, addr 0x1815e8640, size 0x10, virtual true, abstract: false, final false
inline int32_t get_Remaining() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UTF7Encoding_DecoderUTF7FallbackBuffer() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UTF7Encoding_DecoderUTF7FallbackBuffer", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
UTF7Encoding_DecoderUTF7FallbackBuffer(UTF7Encoding_DecoderUTF7FallbackBuffer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UTF7Encoding_DecoderUTF7FallbackBuffer", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
UTF7Encoding_DecoderUTF7FallbackBuffer(UTF7Encoding_DecoderUTF7FallbackBuffer const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{697};

/// @brief Field cFallback, offset: 0x20, size: 0x2, def value: None
 char16_t  ___cFallback;

/// @brief Field iCount, offset: 0x24, size: 0x4, def value: None
 int32_t  ___iCount;

/// @brief Field iSize, offset: 0x28, size: 0x4, def value: None
 int32_t  ___iSize;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Text::UTF7Encoding_DecoderUTF7FallbackBuffer, ___cFallback) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Text::UTF7Encoding_DecoderUTF7FallbackBuffer, ___iCount) == 0x24, "Offset mismatch!");

static_assert(offsetof(::System::Text::UTF7Encoding_DecoderUTF7FallbackBuffer, ___iSize) == 0x28, "Offset mismatch!");

static_assert(sizeof(::System::Text::UTF7Encoding_DecoderUTF7FallbackBuffer) == 0x30, "Size mismatch!");

} // namespace end def System::Text
// Dependencies System.Text.Encoding
namespace System::Text {
// Is value type: false
// CS Name: System.Text.UTF7Encoding
class CORDL_TYPE UTF7Encoding : public ::System::Text::Encoding {
public:
// Declarations
using Decoder = ::System::Text::UTF7Encoding_Decoder;

using DecoderUTF7Fallback = ::System::Text::UTF7Encoding_DecoderUTF7Fallback;

using DecoderUTF7FallbackBuffer = ::System::Text::UTF7Encoding_DecoderUTF7FallbackBuffer;

using Encoder = ::System::Text::UTF7Encoding_Encoder;

/// @brief Field _allowOptionals, offset 0x50, size 0x1 
 __declspec(property(get=__cordl_internal_get__allowOptionals, put=__cordl_internal_set__allowOptionals)) bool  _allowOptionals;

/// @brief Field _base64Bytes, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__base64Bytes, put=__cordl_internal_set__base64Bytes)) ::ArrayW<uint8_t>  _base64Bytes;

/// @brief Field _base64Values, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__base64Values, put=__cordl_internal_set__base64Values)) ::ArrayW<int8_t>  _base64Values;

/// @brief Field _directEncode, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__directEncode, put=__cordl_internal_set__directEncode)) ::ArrayW<bool>  _directEncode;

/// @brief Field s_default, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_default, put=setStaticF_s_default)) ::System::Text::UTF7Encoding*  s_default;

/// @brief Method Equals, addr 0x1815f1120, size 0xa0, virtual true, abstract: false, final false
inline bool Equals(::System::Object*  value) ;

/// @brief Method GetByteCount, addr 0x1815ea520, size 0xc0, virtual true, abstract: false, final false
inline int32_t GetByteCount(::ArrayW<char16_t>  chars, int32_t  index, int32_t  count) ;

/// @brief Method GetByteCount, addr 0x1815ea4b0, size 0x70, virtual true, abstract: false, final false
inline int32_t GetByteCount(char16_t*  chars, int32_t  count) ;

/// @brief Method GetByteCount, addr 0x1815f11c0, size 0x40, virtual true, abstract: false, final false
inline int32_t GetByteCount(char16_t*  chars, int32_t  count, ::System::Text::EncoderNLS*  baseEncoder) ;

/// @brief Method GetByteCount, addr 0x1815ea440, size 0x70, virtual true, abstract: false, final false
inline int32_t GetByteCount(::StringW  s) ;

/// @brief Method GetBytes, addr 0x1815ea830, size 0x1a0, virtual true, abstract: false, final false
inline int32_t GetBytes(::ArrayW<char16_t>  chars, int32_t  charIndex, int32_t  charCount, ::ArrayW<uint8_t>  bytes, int32_t  byteIndex) ;

/// @brief Method GetBytes, addr 0x1815ea780, size 0xb0, virtual true, abstract: false, final false
inline int32_t GetBytes(char16_t*  chars, int32_t  charCount, uint8_t*  bytes, int32_t  byteCount) ;

/// @brief Method GetBytes, addr 0x1815f1200, size 0x310, virtual true, abstract: false, final false
inline int32_t GetBytes(char16_t*  chars, int32_t  charCount, uint8_t*  bytes, int32_t  byteCount, ::System::Text::EncoderNLS*  baseEncoder) ;

/// @brief Method GetBytes, addr 0x1815ea5e0, size 0x1a0, virtual true, abstract: false, final false
inline int32_t GetBytes(::StringW  s, int32_t  charIndex, int32_t  charCount, ::ArrayW<uint8_t>  bytes, int32_t  byteIndex) ;

/// @brief Method GetCharCount, addr 0x1815ea9d0, size 0xc0, virtual true, abstract: false, final false
inline int32_t GetCharCount(::ArrayW<uint8_t>  bytes, int32_t  index, int32_t  count) ;

/// @brief Method GetCharCount, addr 0x1815eaa90, size 0x70, virtual true, abstract: false, final false
inline int32_t GetCharCount(uint8_t*  bytes, int32_t  count) ;

/// @brief Method GetCharCount, addr 0x1815f1510, size 0x40, virtual true, abstract: false, final false
inline int32_t GetCharCount(uint8_t*  bytes, int32_t  count, ::System::Text::DecoderNLS*  baseDecoder) ;

/// @brief Method GetChars, addr 0x1815eaba0, size 0x1a0, virtual true, abstract: false, final false
inline int32_t GetChars(::ArrayW<uint8_t>  bytes, int32_t  byteIndex, int32_t  byteCount, ::ArrayW<char16_t>  chars, int32_t  charIndex) ;

/// @brief Method GetChars, addr 0x1815eab00, size 0xa0, virtual true, abstract: false, final false
inline int32_t GetChars(uint8_t*  bytes, int32_t  byteCount, char16_t*  chars, int32_t  charCount) ;

/// @brief Method GetChars, addr 0x1815f1550, size 0x210, virtual true, abstract: false, final false
inline int32_t GetChars(uint8_t*  bytes, int32_t  byteCount, char16_t*  chars, int32_t  charCount, ::System::Text::DecoderNLS*  baseDecoder) ;

/// @brief Method GetDecoder, addr 0x1815f1760, size 0x40, virtual true, abstract: false, final false
inline ::System::Text::Decoder* GetDecoder() ;

/// @brief Method GetEncoder, addr 0x1815f17a0, size 0x70, virtual true, abstract: false, final false
inline ::System::Text::Encoder* GetEncoder() ;

/// @brief Method GetHashCode, addr 0x1815f1810, size 0x70, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

/// @brief Method GetMaxByteCount, addr 0x1815f1880, size 0x60, virtual true, abstract: false, final false
inline int32_t GetMaxByteCount(int32_t  charCount) ;

/// @brief Method GetMaxCharCount, addr 0x1815f18e0, size 0x30, virtual true, abstract: false, final false
inline int32_t GetMaxCharCount(int32_t  byteCount) ;

/// @brief Method GetString, addr 0x1815eadf0, size 0xd0, virtual true, abstract: false, final false
inline ::StringW GetString(::ArrayW<uint8_t>  bytes, int32_t  index, int32_t  count) ;

/// @brief Method MakeTables, addr 0x1815f1910, size 0x1b0, virtual false, abstract: false, final false
inline void MakeTables() ;

static inline ::System::Text::UTF7Encoding* New_ctor() ;

static inline ::System::Text::UTF7Encoding* New_ctor(bool  allowOptionals) ;

/// @brief Method SetDefaultFallbacks, addr 0x1815f1ac0, size 0x80, virtual true, abstract: false, final false
inline void SetDefaultFallbacks() ;

constexpr bool const& __cordl_internal_get__allowOptionals() const;

constexpr bool& __cordl_internal_get__allowOptionals() ;

constexpr ::ArrayW<uint8_t> const& __cordl_internal_get__base64Bytes() const;

constexpr ::ArrayW<uint8_t>& __cordl_internal_get__base64Bytes() ;

constexpr ::ArrayW<int8_t> const& __cordl_internal_get__base64Values() const;

constexpr ::ArrayW<int8_t>& __cordl_internal_get__base64Values() ;

constexpr ::ArrayW<bool> const& __cordl_internal_get__directEncode() const;

constexpr ::ArrayW<bool>& __cordl_internal_get__directEncode() ;

constexpr void __cordl_internal_set__allowOptionals(bool  value) ;

constexpr void __cordl_internal_set__base64Bytes(::ArrayW<uint8_t>  value) ;

constexpr void __cordl_internal_set__base64Values(::ArrayW<int8_t>  value) ;

constexpr void __cordl_internal_set__directEncode(::ArrayW<bool>  value) ;

/// @brief Method .ctor, addr 0x1815f1d40, size 0x1c0, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x1815f1f00, size 0x1c0, virtual false, abstract: false, final false
inline void _ctor(bool  allowOptionals) ;

static inline ::System::Text::UTF7Encoding* getStaticF_s_default() ;

static inline void setStaticF_s_default(::System::Text::UTF7Encoding*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UTF7Encoding() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UTF7Encoding", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
UTF7Encoding(UTF7Encoding && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UTF7Encoding", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
UTF7Encoding(UTF7Encoding const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{698};

/// @brief Field _base64Bytes, offset: 0x38, size: 0x8, def value: None
 ::ArrayW<uint8_t>  ____base64Bytes;

/// @brief Field _base64Values, offset: 0x40, size: 0x8, def value: None
 ::ArrayW<int8_t>  ____base64Values;

/// @brief Field _directEncode, offset: 0x48, size: 0x8, def value: None
 ::ArrayW<bool>  ____directEncode;

/// @brief Field _allowOptionals, offset: 0x50, size: 0x1, def value: None
 bool  ____allowOptionals;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Text::UTF7Encoding, ____base64Bytes) == 0x38, "Offset mismatch!");

static_assert(offsetof(::System::Text::UTF7Encoding, ____base64Values) == 0x40, "Offset mismatch!");

static_assert(offsetof(::System::Text::UTF7Encoding, ____directEncode) == 0x48, "Offset mismatch!");

static_assert(offsetof(::System::Text::UTF7Encoding, ____allowOptionals) == 0x50, "Offset mismatch!");

static_assert(sizeof(::System::Text::UTF7Encoding) == 0x58, "Size mismatch!");

} // namespace end def System::Text

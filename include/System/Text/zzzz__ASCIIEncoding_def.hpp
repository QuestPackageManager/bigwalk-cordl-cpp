#pragma once
// IWYU pragma private; include "System/Text/ASCIIEncoding.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Text/zzzz__Encoding_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ASCIIEncoding)
namespace GlobalNamespace {
class ASCIIEncoding_ASCIIEncodingSealed;
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
// Forward declare root types
namespace System::Text {
class ASCIIEncoding;
}
// Write type traits
MARK_REF_T(::System::Text::ASCIIEncoding*);
DEFINE_IL2CPP_CLASS(::System::Text::ASCIIEncoding*, "System.Text", "ASCIIEncoding");
// Dependencies System.Text.Encoding
namespace System::Text {
// Is value type: false
// CS Name: System.Text.ASCIIEncoding
class CORDL_TYPE ASCIIEncoding : public ::System::Text::Encoding {
public:
// Declarations
using ASCIIEncodingSealed = ::GlobalNamespace::ASCIIEncoding_ASCIIEncodingSealed;

/// @brief Field s_default, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_default, put=setStaticF_s_default)) ::GlobalNamespace::ASCIIEncoding_ASCIIEncodingSealed*  s_default;

/// @brief Method GetByteCount, addr 0x1815ea520, size 0xc0, virtual true, abstract: false, final false
inline int32_t GetByteCount(::ArrayW<char16_t>  chars, int32_t  index, int32_t  count) ;

/// @brief Method GetByteCount, addr 0x18176a2f0, size 0x70, virtual true, abstract: false, final false
inline int32_t GetByteCount(::StringW  chars) ;

/// @brief Method GetByteCount, addr 0x18176a040, size 0x2b0, virtual true, abstract: false, final false
inline int32_t GetByteCount(char16_t*  chars, int32_t  charCount, ::System::Text::EncoderNLS*  encoder) ;

/// @brief Method GetByteCount, addr 0x1815ea4b0, size 0x70, virtual true, abstract: false, final false
inline int32_t GetByteCount(char16_t*  chars, int32_t  count) ;

/// @brief Method GetBytes, addr 0x181602f00, size 0x1b0, virtual true, abstract: false, final false
inline int32_t GetBytes(::ArrayW<char16_t>  chars, int32_t  charIndex, int32_t  charCount, ::ArrayW<uint8_t>  bytes, int32_t  byteIndex) ;

/// @brief Method GetBytes, addr 0x18176a7a0, size 0x1a0, virtual true, abstract: false, final false
inline int32_t GetBytes(::StringW  chars, int32_t  charIndex, int32_t  charCount, ::ArrayW<uint8_t>  bytes, int32_t  byteIndex) ;

/// @brief Method GetBytes, addr 0x1816030b0, size 0xb0, virtual true, abstract: false, final false
inline int32_t GetBytes(char16_t*  chars, int32_t  charCount, uint8_t*  bytes, int32_t  byteCount) ;

/// @brief Method GetBytes, addr 0x18176a360, size 0x440, virtual true, abstract: false, final false
inline int32_t GetBytes(char16_t*  chars, int32_t  charCount, uint8_t*  bytes, int32_t  byteCount, ::System::Text::EncoderNLS*  encoder) ;

/// @brief Method GetCharCount, addr 0x1815ea9d0, size 0xc0, virtual true, abstract: false, final false
inline int32_t GetCharCount(::ArrayW<uint8_t>  bytes, int32_t  index, int32_t  count) ;

/// @brief Method GetCharCount, addr 0x1815eaa90, size 0x70, virtual true, abstract: false, final false
inline int32_t GetCharCount(uint8_t*  bytes, int32_t  count) ;

/// @brief Method GetCharCount, addr 0x18176a940, size 0x150, virtual true, abstract: false, final false
inline int32_t GetCharCount(uint8_t*  bytes, int32_t  count, ::System::Text::DecoderNLS*  decoder) ;

/// @brief Method GetChars, addr 0x1816041e0, size 0x1a0, virtual true, abstract: false, final false
inline int32_t GetChars(::ArrayW<uint8_t>  bytes, int32_t  byteIndex, int32_t  byteCount, ::ArrayW<char16_t>  chars, int32_t  charIndex) ;

/// @brief Method GetChars, addr 0x181604130, size 0xb0, virtual true, abstract: false, final false
inline int32_t GetChars(uint8_t*  bytes, int32_t  byteCount, char16_t*  chars, int32_t  charCount) ;

/// @brief Method GetChars, addr 0x18176aa90, size 0x2b0, virtual true, abstract: false, final false
inline int32_t GetChars(uint8_t*  bytes, int32_t  byteCount, char16_t*  chars, int32_t  charCount, ::System::Text::DecoderNLS*  decoder) ;

/// @brief Method GetDecoder, addr 0x18176ad40, size 0x70, virtual true, abstract: false, final false
inline ::System::Text::Decoder* GetDecoder() ;

/// @brief Method GetEncoder, addr 0x1816043c0, size 0x40, virtual true, abstract: false, final false
inline ::System::Text::Encoder* GetEncoder() ;

/// @brief Method GetMaxByteCount, addr 0x1815ebf70, size 0xa0, virtual true, abstract: false, final false
inline int32_t GetMaxByteCount(int32_t  charCount) ;

/// @brief Method GetMaxCharCount, addr 0x1815ec010, size 0xb0, virtual true, abstract: false, final false
inline int32_t GetMaxCharCount(int32_t  byteCount) ;

/// @brief Method GetString, addr 0x18176adb0, size 0xd0, virtual true, abstract: false, final false
inline ::StringW GetString(::ArrayW<uint8_t>  bytes, int32_t  byteIndex, int32_t  byteCount) ;

static inline ::System::Text::ASCIIEncoding* New_ctor() ;

/// @brief Method SetDefaultFallbacks, addr 0x18176ae80, size 0x40, virtual true, abstract: false, final false
inline void SetDefaultFallbacks() ;

/// @brief Method .ctor, addr 0x18176a030, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::GlobalNamespace::ASCIIEncoding_ASCIIEncodingSealed* getStaticF_s_default() ;

static inline void setStaticF_s_default(::GlobalNamespace::ASCIIEncoding_ASCIIEncodingSealed*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ASCIIEncoding() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ASCIIEncoding", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ASCIIEncoding(ASCIIEncoding && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ASCIIEncoding", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ASCIIEncoding(ASCIIEncoding const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{663};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::System::Text::ASCIIEncoding) == 0x38, "Size mismatch!");

} // namespace end def System::Text

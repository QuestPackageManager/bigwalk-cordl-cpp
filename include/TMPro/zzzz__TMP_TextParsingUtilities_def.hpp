#pragma once
// IWYU pragma private; include "TMPro/TMP_TextParsingUtilities.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(TMP_TextParsingUtilities)
namespace System::Collections::Generic {
template<typename T>
class HashSet_1;
}
// Forward declare root types
namespace TMPro {
class TMP_TextParsingUtilities;
}
// Write type traits
MARK_REF_T(::TMPro::TMP_TextParsingUtilities*);
DEFINE_IL2CPP_CLASS(::TMPro::TMP_TextParsingUtilities*, "TMPro", "TMP_TextParsingUtilities");
// Dependencies System.Object
namespace TMPro {
// Is value type: false
// CS Name: TMPro.TMP_TextParsingUtilities
class CORDL_TYPE TMP_TextParsingUtilities : public ::System::Object {
public:
// Declarations
/// @brief Field k_EmojiLookup, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_k_EmojiLookup, put=setStaticF_k_EmojiLookup)) ::System::Collections::Generic::HashSet_1<uint32_t>*  k_EmojiLookup;

/// @brief Field k_EmojiPresentationFormLookup, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_k_EmojiPresentationFormLookup, put=setStaticF_k_EmojiPresentationFormLookup)) ::System::Collections::Generic::HashSet_1<uint32_t>*  k_EmojiPresentationFormLookup;

/// @brief Field s_Instance, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_Instance, put=setStaticF_s_Instance)) ::TMPro::TMP_TextParsingUtilities*  s_Instance;

/// @brief Method ConvertToUTF32, addr 0x1821d46b0, size 0x10, virtual false, abstract: false, final false
static inline uint32_t ConvertToUTF32(uint32_t  highSurrogate, uint32_t  lowSurrogate) ;

/// @brief Method GetHashCode, addr 0x1821d4710, size 0x90, virtual false, abstract: false, final false
static inline int32_t GetHashCode(::StringW  s) ;

/// @brief Method GetHashCodeCaseSensitive, addr 0x1821d46c0, size 0x50, virtual false, abstract: false, final false
static inline int32_t GetHashCodeCaseSensitive(::StringW  s) ;

/// @brief Method IsBaseGlyph, addr 0x1821d47a0, size 0x110, virtual false, abstract: false, final false
static inline bool IsBaseGlyph(uint32_t  c) ;

/// @brief Method IsCJK, addr 0x1821d48b0, size 0xe0, virtual false, abstract: false, final false
static inline bool IsCJK(uint32_t  c) ;

/// @brief Method IsDiacriticalMark, addr 0x1821d4990, size 0x50, virtual false, abstract: false, final false
static inline bool IsDiacriticalMark(uint32_t  c) ;

/// @brief Method IsEmoji, addr 0x1821d4a30, size 0x50, virtual false, abstract: false, final false
static inline bool IsEmoji(uint32_t  c) ;

/// @brief Method IsEmojiPresentationForm, addr 0x1821d49e0, size 0x50, virtual false, abstract: false, final false
static inline bool IsEmojiPresentationForm(uint32_t  c) ;

/// @brief Method IsHangul, addr 0x1821d4a80, size 0x60, virtual false, abstract: false, final false
static inline bool IsHangul(uint32_t  c) ;

/// @brief Method IsHighSurrogate, addr 0x1821d4ae0, size 0x20, virtual false, abstract: false, final false
static inline bool IsHighSurrogate(uint32_t  c) ;

/// @brief Method IsIgnorableForLigature, addr 0x1821d4b00, size 0x30, virtual false, abstract: false, final false
static inline bool IsIgnorableForLigature(uint32_t  cp) ;

/// @brief Method IsLowSurrogate, addr 0x1821d4b30, size 0x20, virtual false, abstract: false, final false
static inline bool IsLowSurrogate(uint32_t  c) ;

static inline ::TMPro::TMP_TextParsingUtilities* New_ctor() ;

/// @brief Method ToLowerASCIIFast, addr 0x1821d4b50, size 0x30, virtual false, abstract: false, final false
static inline char16_t ToLowerASCIIFast(char16_t  c) ;

/// @brief Method ToLowerASCIIFast, addr 0x1821d4b80, size 0x40, virtual false, abstract: false, final false
static inline uint32_t ToLowerASCIIFast(uint32_t  c) ;

/// @brief Method ToUpperASCIIFast, addr 0x1821d4c00, size 0x30, virtual false, abstract: false, final false
static inline char16_t ToUpperASCIIFast(char16_t  c) ;

/// @brief Method ToUpperASCIIFast, addr 0x1821d4bc0, size 0x40, virtual false, abstract: false, final false
static inline uint32_t ToUpperASCIIFast(uint32_t  c) ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::System::Collections::Generic::HashSet_1<uint32_t>* getStaticF_k_EmojiLookup() ;

static inline ::System::Collections::Generic::HashSet_1<uint32_t>* getStaticF_k_EmojiPresentationFormLookup() ;

static inline ::TMPro::TMP_TextParsingUtilities* getStaticF_s_Instance() ;

/// @brief Method get_instance, addr 0x1821d4c30, size 0x40, virtual false, abstract: false, final false
static inline ::TMPro::TMP_TextParsingUtilities* get_instance() ;

static inline void setStaticF_k_EmojiLookup(::System::Collections::Generic::HashSet_1<uint32_t>*  value) ;

static inline void setStaticF_k_EmojiPresentationFormLookup(::System::Collections::Generic::HashSet_1<uint32_t>*  value) ;

static inline void setStaticF_s_Instance(::TMPro::TMP_TextParsingUtilities*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TMP_TextParsingUtilities() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TMP_TextParsingUtilities", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TMP_TextParsingUtilities(TMP_TextParsingUtilities && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TMP_TextParsingUtilities", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TMP_TextParsingUtilities(TMP_TextParsingUtilities const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{15268};

/// @brief Field k_LookupStringL offset 0xffffffff size 0x8
static constexpr ::ConstString  k_LookupStringL{u"-------------------------------- !-#$%&-()*+,-./0123456789:;<=>?@abcdefghijklmnopqrstuvwxyz[-]^_`abcdefghijklmnopqrstuvwxyz{|}~-"};

/// @brief Field k_LookupStringU offset 0xffffffff size 0x8
static constexpr ::ConstString  k_LookupStringU{u"-------------------------------- !-#$%&-()*+,-./0123456789:;<=>?@ABCDEFGHIJKLMNOPQRSTUVWXYZ[-]^_`ABCDEFGHIJKLMNOPQRSTUVWXYZ{|}~-"};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::TMPro::TMP_TextParsingUtilities) == 0x10, "Size mismatch!");

} // namespace end def TMPro

#pragma once
// IWYU pragma private; include "UnityEngine/TextCore/Text/TextGeneratorUtilities.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(TextGeneratorUtilities)
namespace System::Collections::Generic {
template<typename T>
class HashSet_1;
}
namespace UnityEngine::TextCore::LowLevel {
struct GlyphRenderMode;
}
namespace UnityEngine::TextCore::Text {
struct FontStyles;
}
namespace UnityEngine::TextCore::Text {
struct TextAlignment;
}
namespace UnityEngine::TextCore::Text {
struct TextBackingContainer;
}
namespace UnityEngine::TextCore::Text {
class TextGenerationSettings;
}
namespace UnityEngine::TextCore::Text {
class TextInfo;
}
namespace UnityEngine::TextCore::Text {
struct TextProcessingElement;
}
namespace UnityEngine::TextCore::Text {
template<typename T>
struct TextProcessingStack_1;
}
namespace UnityEngine::TextCore::Text {
class TextStyle;
}
namespace UnityEngine::TextCore {
struct HorizontalAlignment;
}
namespace UnityEngine::TextCore {
struct VerticalAlignment;
}
namespace UnityEngine {
struct Color32;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
struct FontStyle;
}
namespace UnityEngine {
struct TextAnchor;
}
// Forward declare root types
namespace UnityEngine::TextCore::Text {
class TextGeneratorUtilities;
}
// Write type traits
MARK_REF_T(::UnityEngine::TextCore::Text::TextGeneratorUtilities*);
DEFINE_IL2CPP_CLASS(::UnityEngine::TextCore::Text::TextGeneratorUtilities*, "UnityEngine.TextCore.Text", "TextGeneratorUtilities");
// Dependencies System.Object, UnityEngine.Vector2
namespace UnityEngine::TextCore::Text {
// Is value type: false
// CS Name: UnityEngine.TextCore.Text.TextGeneratorUtilities
class CORDL_TYPE TextGeneratorUtilities : public ::System::Object {
public:
// Declarations
/// @brief Field k_EmojiLookup, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_k_EmojiLookup, put=setStaticF_k_EmojiLookup)) ::System::Collections::Generic::HashSet_1<uint32_t>*  k_EmojiLookup;

/// @brief Field k_EmojiPresentationFormLookup, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_k_EmojiPresentationFormLookup, put=setStaticF_k_EmojiPresentationFormLookup)) ::System::Collections::Generic::HashSet_1<uint32_t>*  k_EmojiPresentationFormLookup;

/// @brief Field largeNegativeVector2, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_largeNegativeVector2, put=setStaticF_largeNegativeVector2)) ::UnityEngine::Vector2  largeNegativeVector2;

/// @brief Field largePositiveVector2, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_largePositiveVector2, put=setStaticF_largePositiveVector2)) ::UnityEngine::Vector2  largePositiveVector2;

/// @brief Method AdjustLineOffset, addr 0x18234c1c0, size 0x2b0, virtual false, abstract: false, final false
static inline void AdjustLineOffset(int32_t  startIndex, int32_t  endIndex, float_t  offset, ::UnityEngine::TextCore::Text::TextInfo*  textInfo) ;

/// @brief Method Approximately, addr 0x18234c470, size 0x30, virtual false, abstract: false, final false
static inline bool Approximately(float_t  a, float_t  b) ;

/// @brief Method ConvertToFloat, addr 0x18234c600, size 0x20, virtual false, abstract: false, final false
static inline float_t ConvertToFloat(::ArrayW<char16_t>  chars, int32_t  startIndex, int32_t  length) ;

/// @brief Method ConvertToFloat, addr 0x18234c4a0, size 0x160, virtual false, abstract: false, final false
static inline float_t ConvertToFloat(::ArrayW<char16_t>  chars, int32_t  startIndex, int32_t  length, ::by_ref<int32_t>  lastIndex) ;

/// @brief Method ConvertToUTF32, addr 0x1821d46b0, size 0x10, virtual false, abstract: false, final false
static inline uint32_t ConvertToUTF32(uint32_t  highSurrogate, uint32_t  lowSurrogate) ;

/// @brief Method FillCharacterVertexBuffers, addr 0x18234c620, size 0x680, virtual false, abstract: false, final false
static inline void FillCharacterVertexBuffers(int32_t  i, bool  convertToLinearSpace, ::UnityEngine::TextCore::Text::TextGenerationSettings*  generationSettings, ::UnityEngine::TextCore::Text::TextInfo*  textInfo, bool  needToRound) ;

/// @brief Method FillSpriteVertexBuffers, addr 0x18234cca0, size 0x5f0, virtual false, abstract: false, final false
static inline void FillSpriteVertexBuffers(int32_t  i, bool  convertToLinearSpace, ::UnityEngine::TextCore::Text::TextGenerationSettings*  generationSettings, ::UnityEngine::TextCore::Text::TextInfo*  textInfo) ;

/// @brief Method GammaToLinear, addr 0x18234d290, size 0x50, virtual false, abstract: false, final false
static inline ::UnityEngine::Color32 GammaToLinear(::UnityEngine::Color32  c) ;

/// @brief Method GammaToLinear, addr 0x18234d2e0, size 0xb0, virtual false, abstract: false, final false
static inline uint8_t GammaToLinear(uint8_t  value) ;

/// @brief Method GetAttributeParameters, addr 0x18234d390, size 0x1a0, virtual false, abstract: false, final false
static inline int32_t GetAttributeParameters(::ArrayW<char16_t>  chars, int32_t  startIndex, int32_t  length, ::by_ref<::ArrayW<float_t>>  parameters) ;

/// @brief Method GetHorizontalAlignment, addr 0x18234d530, size 0x50, virtual false, abstract: false, final false
static inline ::UnityEngine::TextCore::HorizontalAlignment GetHorizontalAlignment(::UnityEngine::TextAnchor  anchor) ;

/// @brief Method GetMarkupTagHashCode, addr 0x18234d580, size 0x80, virtual false, abstract: false, final false
static inline int32_t GetMarkupTagHashCode(::ArrayW<uint32_t>  styleDefinition, int32_t  readIndex) ;

/// @brief Method GetMarkupTagHashCode, addr 0x18234d600, size 0x90, virtual false, abstract: false, final false
static inline int32_t GetMarkupTagHashCode(::UnityEngine::TextCore::Text::TextBackingContainer  styleDefinition, int32_t  readIndex) ;

/// @brief Method GetStyle, addr 0x18234d750, size 0x80, virtual false, abstract: false, final false
static inline ::UnityEngine::TextCore::Text::TextStyle* GetStyle(::UnityEngine::TextCore::Text::TextGenerationSettings*  generationSetting, int32_t  hashCode) ;

/// @brief Method GetStyleHashCode, addr 0x18234d690, size 0xc0, virtual false, abstract: false, final false
static inline int32_t GetStyleHashCode(::by_ref<::ArrayW<uint32_t>>  text, int32_t  index, ::by_ref<int32_t>  closeIndex) ;

/// @brief Method GetStyleHashCode, addr 0x18234d690, size 0xc0, virtual false, abstract: false, final false
static inline int32_t GetStyleHashCode(::by_ref<::UnityEngine::TextCore::Text::TextBackingContainer>  text, int32_t  index, ::by_ref<int32_t>  closeIndex) ;

/// @brief Method GetUTF16, addr 0x18234d850, size 0x70, virtual false, abstract: false, final false
static inline uint32_t GetUTF16(::ArrayW<uint32_t>  text, int32_t  i) ;

/// @brief Method GetUTF16, addr 0x18234d7d0, size 0x80, virtual false, abstract: false, final false
static inline uint32_t GetUTF16(::UnityEngine::TextCore::Text::TextBackingContainer  text, int32_t  i) ;

/// @brief Method GetUTF32, addr 0x18234d8c0, size 0xb0, virtual false, abstract: false, final false
static inline uint32_t GetUTF32(::ArrayW<uint32_t>  text, int32_t  i) ;

/// @brief Method GetUTF32, addr 0x18234d970, size 0xd0, virtual false, abstract: false, final false
static inline uint32_t GetUTF32(::UnityEngine::TextCore::Text::TextBackingContainer  text, int32_t  i) ;

/// @brief Method GetVerticalAlignment, addr 0x18234da40, size 0x50, virtual false, abstract: false, final false
static inline ::UnityEngine::TextCore::VerticalAlignment GetVerticalAlignment(::UnityEngine::TextAnchor  anchor) ;

/// @brief Method HexCharsToColor, addr 0x18234da90, size 0x240, virtual false, abstract: false, final false
static inline ::UnityEngine::Color32 HexCharsToColor(::ArrayW<char16_t>  hexChars, int32_t  startIndex, int32_t  tagCount) ;

/// @brief Method HexToInt, addr 0x1821ecc40, size 0x120, virtual false, abstract: false, final false
static inline uint32_t HexToInt(char16_t  hex) ;

/// @brief Method InsertClosingStyleTag, addr 0x18234dcd0, size 0x90, virtual false, abstract: false, final false
static inline void InsertClosingStyleTag(::by_ref<::ArrayW<::UnityEngine::TextCore::Text::TextProcessingElement>>  charBuffer, ::by_ref<int32_t>  writeIndex, ::by_ref<int32_t>  textStyleStackDepth, ::by_ref<::ArrayW<::UnityEngine::TextCore::Text::TextProcessingStack_1<int32_t>>>  textStyleStacks, ::by_ref<::UnityEngine::TextCore::Text::TextGenerationSettings*>  generationSettings) ;

/// @brief Method InsertClosingTextStyle, addr 0x18234dd60, size 0xa0, virtual false, abstract: false, final false
static inline void InsertClosingTextStyle(::UnityEngine::TextCore::Text::TextStyle*  style, ::by_ref<::ArrayW<::UnityEngine::TextCore::Text::TextProcessingElement>>  charBuffer, ::by_ref<int32_t>  writeIndex, ::by_ref<int32_t>  textStyleStackDepth, ::by_ref<::ArrayW<::UnityEngine::TextCore::Text::TextProcessingStack_1<int32_t>>>  textStyleStacks, ::by_ref<::UnityEngine::TextCore::Text::TextGenerationSettings*>  generationSettings) ;

/// @brief Method InsertOpeningStyleTag, addr 0x18234de00, size 0xa0, virtual false, abstract: false, final false
static inline void InsertOpeningStyleTag(::UnityEngine::TextCore::Text::TextStyle*  style, ::by_ref<::ArrayW<::UnityEngine::TextCore::Text::TextProcessingElement>>  charBuffer, ::by_ref<int32_t>  writeIndex, ::by_ref<int32_t>  textStyleStackDepth, ::by_ref<::ArrayW<::UnityEngine::TextCore::Text::TextProcessingStack_1<int32_t>>>  textStyleStacks, ::by_ref<::UnityEngine::TextCore::Text::TextGenerationSettings*>  generationSettings) ;

/// @brief Method InsertOpeningTextStyle, addr 0x18234dea0, size 0xa0, virtual false, abstract: false, final false
static inline void InsertOpeningTextStyle(::UnityEngine::TextCore::Text::TextStyle*  style, ::by_ref<::ArrayW<::UnityEngine::TextCore::Text::TextProcessingElement>>  charBuffer, ::by_ref<int32_t>  writeIndex, ::by_ref<int32_t>  textStyleStackDepth, ::by_ref<::ArrayW<::UnityEngine::TextCore::Text::TextProcessingStack_1<int32_t>>>  textStyleStacks, ::by_ref<::UnityEngine::TextCore::Text::TextGenerationSettings*>  generationSettings) ;

/// @brief Method InsertTextStyleInTextProcessingArray, addr 0x18234df40, size 0x560, virtual false, abstract: false, final false
static inline void InsertTextStyleInTextProcessingArray(::by_ref<::ArrayW<::UnityEngine::TextCore::Text::TextProcessingElement>>  charBuffer, ::by_ref<int32_t>  writeIndex, ::ArrayW<uint32_t>  styleDefinition, ::by_ref<int32_t>  textStyleStackDepth, ::by_ref<::ArrayW<::UnityEngine::TextCore::Text::TextProcessingStack_1<int32_t>>>  textStyleStacks, ::by_ref<::UnityEngine::TextCore::Text::TextGenerationSettings*>  generationSettings) ;

/// @brief Method IsBaseGlyph, addr 0x18234e4a0, size 0x110, virtual false, abstract: false, final false
static inline bool IsBaseGlyph(uint32_t  c) ;

/// @brief Method IsBitmapRendering, addr 0x18234e5b0, size 0x30, virtual false, abstract: false, final false
static inline bool IsBitmapRendering(::UnityEngine::TextCore::LowLevel::GlyphRenderMode  glyphRenderMode) ;

/// @brief Method IsCJK, addr 0x18234e5e0, size 0xc0, virtual false, abstract: false, final false
static inline bool IsCJK(uint32_t  c) ;

/// @brief Method IsEmoji, addr 0x18234e6f0, size 0x50, virtual false, abstract: false, final false
static inline bool IsEmoji(uint32_t  c) ;

/// @brief Method IsEmojiPresentationForm, addr 0x18234e6a0, size 0x50, virtual false, abstract: false, final false
static inline bool IsEmojiPresentationForm(uint32_t  c) ;

/// @brief Method IsHangul, addr 0x18234e740, size 0x60, virtual false, abstract: false, final false
static inline bool IsHangul(uint32_t  c) ;

/// @brief Method IsValidUTF16, addr 0x18234e7a0, size 0x50, virtual false, abstract: false, final false
static inline bool IsValidUTF16(::UnityEngine::TextCore::Text::TextBackingContainer  text, int32_t  index) ;

/// @brief Method IsValidUTF32, addr 0x18234e7f0, size 0x50, virtual false, abstract: false, final false
static inline bool IsValidUTF32(::UnityEngine::TextCore::Text::TextBackingContainer  text, int32_t  index) ;

/// @brief Method LegacyAlignmentToNewAlignment, addr 0x18234e840, size 0x80, virtual false, abstract: false, final false
static inline ::UnityEngine::TextCore::Text::TextAlignment LegacyAlignmentToNewAlignment(::UnityEngine::TextAnchor  anchor) ;

/// @brief Method LegacyStyleToNewStyle, addr 0x18234e8c0, size 0x30, virtual false, abstract: false, final false
static inline ::UnityEngine::TextCore::Text::FontStyles LegacyStyleToNewStyle(::UnityEngine::FontStyle  fontStyle) ;

/// @brief Method MinAlpha, addr 0x1821efc10, size 0x30, virtual false, abstract: false, final false
static inline ::UnityEngine::Color MinAlpha(::UnityEngine::Color  c1, ::UnityEngine::Color  c2) ;

/// @brief Method ReplaceClosingStyleTag, addr 0x18234e8f0, size 0xa0, virtual false, abstract: false, final false
static inline void ReplaceClosingStyleTag(::by_ref<::ArrayW<::UnityEngine::TextCore::Text::TextProcessingElement>>  charBuffer, ::by_ref<int32_t>  writeIndex, ::by_ref<int32_t>  textStyleStackDepth, ::by_ref<::ArrayW<::UnityEngine::TextCore::Text::TextProcessingStack_1<int32_t>>>  textStyleStacks, ::by_ref<::UnityEngine::TextCore::Text::TextGenerationSettings*>  generationSettings) ;

/// @brief Method ReplaceOpeningStyleTag, addr 0x18234e990, size 0x150, virtual false, abstract: false, final false
static inline bool ReplaceOpeningStyleTag(::by_ref<::ArrayW<uint32_t>>  sourceText, int32_t  srcIndex, ::by_ref<int32_t>  srcOffset, ::by_ref<::ArrayW<::UnityEngine::TextCore::Text::TextProcessingElement>>  charBuffer, ::by_ref<int32_t>  writeIndex, ::by_ref<int32_t>  textStyleStackDepth, ::by_ref<::ArrayW<::UnityEngine::TextCore::Text::TextProcessingStack_1<int32_t>>>  textStyleStacks, ::by_ref<::UnityEngine::TextCore::Text::TextGenerationSettings*>  generationSettings) ;

/// @brief Method ReplaceOpeningStyleTag, addr 0x18234e990, size 0x150, virtual false, abstract: false, final false
static inline bool ReplaceOpeningStyleTag(::by_ref<::UnityEngine::TextCore::Text::TextBackingContainer>  sourceText, int32_t  srcIndex, ::by_ref<int32_t>  srcOffset, ::by_ref<::ArrayW<::UnityEngine::TextCore::Text::TextProcessingElement>>  charBuffer, ::by_ref<int32_t>  writeIndex, ::by_ref<int32_t>  textStyleStackDepth, ::by_ref<::ArrayW<::UnityEngine::TextCore::Text::TextProcessingStack_1<int32_t>>>  textStyleStacks, ::by_ref<::UnityEngine::TextCore::Text::TextGenerationSettings*>  generationSettings) ;

/// @brief Method ResizeInternalArray, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline void ResizeInternalArray(::by_ref<::ArrayW<T>>  array) ;

/// @brief Method ResizeInternalArray, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline void ResizeInternalArray(::by_ref<::ArrayW<T>>  array, int32_t  size) ;

/// @brief Method ResizeLineExtents, addr 0x18234eae0, size 0x160, virtual false, abstract: false, final false
static inline void ResizeLineExtents(int32_t  size, ::UnityEngine::TextCore::Text::TextInfo*  textInfo) ;

/// @brief Method ToUpperASCIIFast, addr 0x1821d4c00, size 0x30, virtual false, abstract: false, final false
static inline char16_t ToUpperASCIIFast(char16_t  c) ;

/// @brief Method ToUpperASCIIFast, addr 0x1821d4bc0, size 0x40, virtual false, abstract: false, final false
static inline uint32_t ToUpperASCIIFast(uint32_t  c) ;

/// @brief Method ToUpperFast, addr 0x1821d4c00, size 0x30, virtual false, abstract: false, final false
static inline char16_t ToUpperFast(char16_t  c) ;

static inline ::System::Collections::Generic::HashSet_1<uint32_t>* getStaticF_k_EmojiLookup() ;

static inline ::System::Collections::Generic::HashSet_1<uint32_t>* getStaticF_k_EmojiPresentationFormLookup() ;

static inline ::UnityEngine::Vector2 getStaticF_largeNegativeVector2() ;

static inline ::UnityEngine::Vector2 getStaticF_largePositiveVector2() ;

static inline void setStaticF_k_EmojiLookup(::System::Collections::Generic::HashSet_1<uint32_t>*  value) ;

static inline void setStaticF_k_EmojiPresentationFormLookup(::System::Collections::Generic::HashSet_1<uint32_t>*  value) ;

static inline void setStaticF_largeNegativeVector2(::UnityEngine::Vector2  value) ;

static inline void setStaticF_largePositiveVector2(::UnityEngine::Vector2  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TextGeneratorUtilities() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TextGeneratorUtilities", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TextGeneratorUtilities(TextGeneratorUtilities && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TextGeneratorUtilities", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TextGeneratorUtilities(TextGeneratorUtilities const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17238};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::TextCore::Text::TextGeneratorUtilities) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine::TextCore::Text

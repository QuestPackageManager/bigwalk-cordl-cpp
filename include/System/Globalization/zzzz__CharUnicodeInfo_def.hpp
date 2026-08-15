#pragma once
// IWYU pragma private; include "System/Globalization/CharUnicodeInfo.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(CharUnicodeInfo)
namespace System::Globalization {
struct UnicodeCategory;
}
namespace System {
template<typename T>
struct ReadOnlySpan_1;
}
// Forward declare root types
namespace System::Globalization {
class CharUnicodeInfo;
}
// Write type traits
MARK_REF_T(::System::Globalization::CharUnicodeInfo*);
DEFINE_IL2CPP_CLASS(::System::Globalization::CharUnicodeInfo*, "System.Globalization", "CharUnicodeInfo");
// Dependencies System.Object
namespace System::Globalization {
// Is value type: false
// CS Name: System.Globalization.CharUnicodeInfo
class CORDL_TYPE CharUnicodeInfo : public ::System::Object {
public:
// Declarations
/// @brief Method GetUnicodeCategory, addr 0x181673a70, size 0x60, virtual false, abstract: false, final false
static inline ::System::Globalization::UnicodeCategory GetUnicodeCategory(char16_t  ch) ;

/// @brief Method GetUnicodeCategory, addr 0x181673900, size 0x60, virtual false, abstract: false, final false
static inline ::System::Globalization::UnicodeCategory GetUnicodeCategory(int32_t  codePoint) ;

/// @brief Method GetUnicodeCategory, addr 0x181673960, size 0x110, virtual false, abstract: false, final false
static inline ::System::Globalization::UnicodeCategory GetUnicodeCategory(::StringW  s, int32_t  index) ;

/// @brief Method InternalConvertToUtf32, addr 0x181673ad0, size 0x90, virtual false, abstract: false, final false
static inline int32_t InternalConvertToUtf32(::StringW  s, int32_t  index) ;

/// @brief Method InternalConvertToUtf32, addr 0x181673b60, size 0xa0, virtual false, abstract: false, final false
static inline int32_t InternalConvertToUtf32(::StringW  s, int32_t  index, ::by_ref<int32_t>  charLength) ;

/// @brief Method InternalGetCategoryValue, addr 0x181673c00, size 0x80, virtual false, abstract: false, final false
static inline uint8_t InternalGetCategoryValue(int32_t  ch, int32_t  offset) ;

/// @brief Method InternalGetUnicodeCategory, addr 0x181673d50, size 0xf0, virtual false, abstract: false, final false
static inline ::System::Globalization::UnicodeCategory InternalGetUnicodeCategory(::StringW  str, int32_t  index, ::by_ref<int32_t>  charLength) ;

/// @brief Method InternalGetUnicodeCategory, addr 0x181673c80, size 0xd0, virtual false, abstract: false, final false
static inline ::System::Globalization::UnicodeCategory InternalGetUnicodeCategory(::StringW  value, int32_t  index) ;

/// @brief Method IsCombiningCategory, addr 0x181673e40, size 0x20, virtual false, abstract: false, final false
static inline bool IsCombiningCategory(::System::Globalization::UnicodeCategory  uc) ;

/// @brief Method IsWhiteSpace, addr 0x181673e60, size 0x70, virtual false, abstract: false, final false
static inline bool IsWhiteSpace(char16_t  c) ;

/// @brief Method IsWhiteSpace, addr 0x181673ed0, size 0x110, virtual false, abstract: false, final false
static inline bool IsWhiteSpace(::StringW  s, int32_t  index) ;

/// @brief Method get_CategoriesValue, addr 0x181673fe0, size 0x20, virtual false, abstract: false, final false
static inline ::System::ReadOnlySpan_1<uint8_t> get_CategoriesValue() ;

/// @brief Method get_CategoryLevel1Index, addr 0x181674000, size 0x20, virtual false, abstract: false, final false
static inline ::System::ReadOnlySpan_1<uint8_t> get_CategoryLevel1Index() ;

/// @brief Method get_CategoryLevel2Index, addr 0x181674020, size 0x20, virtual false, abstract: false, final false
static inline ::System::ReadOnlySpan_1<uint8_t> get_CategoryLevel2Index() ;

/// @brief Method get_CategoryLevel3Index, addr 0x181674040, size 0x20, virtual false, abstract: false, final false
static inline ::System::ReadOnlySpan_1<uint8_t> get_CategoryLevel3Index() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CharUnicodeInfo() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CharUnicodeInfo", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
CharUnicodeInfo(CharUnicodeInfo && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CharUnicodeInfo", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
CharUnicodeInfo(CharUnicodeInfo const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1347};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::System::Globalization::CharUnicodeInfo) == 0x10, "Size mismatch!");

} // namespace end def System::Globalization

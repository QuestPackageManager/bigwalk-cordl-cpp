#pragma once
// IWYU pragma private; include "UnityEngine/TextCore/TextPreprocessor.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(TextPreprocessor)
namespace System {
template<typename T>
struct ReadOnlySpan_1;
}
namespace UnityEngine::TextCore::Text {
class TextSettings;
}
namespace UnityEngine::TextCore::Text {
class TextStyle;
}
namespace UnityEngine::TextCore {
struct PreProcessFlags;
}
// Forward declare root types
namespace UnityEngine::TextCore {
class TextPreprocessor;
}
// Write type traits
MARK_REF_T(::UnityEngine::TextCore::TextPreprocessor*);
DEFINE_IL2CPP_CLASS(::UnityEngine::TextCore::TextPreprocessor*, "UnityEngine.TextCore", "TextPreprocessor");
// Dependencies System.Object
namespace UnityEngine::TextCore {
// Is value type: false
// CS Name: UnityEngine.TextCore.TextPreprocessor
class CORDL_TYPE TextPreprocessor : public ::System::Object {
public:
// Declarations
/// @brief Method GetStyle, addr 0x18232e160, size 0x50, virtual false, abstract: false, final false
static inline ::UnityEngine::TextCore::Text::TextStyle* GetStyle(::UnityEngine::TextCore::Text::TextSettings*  textSettings, int32_t  hashCode) ;

/// @brief Method GetStyleHashCode, addr 0x18232e110, size 0x50, virtual false, abstract: false, final false
static inline int32_t GetStyleHashCode(::System::ReadOnlySpan_1<char16_t>  text) ;

/// @brief Method PreProcessString, addr 0x18232e1b0, size 0x6d0, virtual false, abstract: false, final false
static inline void PreProcessString(::by_ref<::StringW>  text, ::UnityEngine::TextCore::PreProcessFlags  flags, ::UnityEngine::TextCore::Text::TextSettings*  textSettings) ;

/// @brief Method ReplaceNobrTags, addr 0x18232e880, size 0x3a0, virtual false, abstract: false, final false
static inline ::StringW ReplaceNobrTags(::StringW  text) ;

/// @brief Method ReplaceStyleTags, addr 0x18232ec20, size 0x4e0, virtual false, abstract: false, final false
static inline ::StringW ReplaceStyleTags(::StringW  text, ::UnityEngine::TextCore::Text::TextSettings*  textSettings) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TextPreprocessor() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TextPreprocessor", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TextPreprocessor(TextPreprocessor && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TextPreprocessor", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TextPreprocessor(TextPreprocessor const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17173};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::TextCore::TextPreprocessor) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine::TextCore

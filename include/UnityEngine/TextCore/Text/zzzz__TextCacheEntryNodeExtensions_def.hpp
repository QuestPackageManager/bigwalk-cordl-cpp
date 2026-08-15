#pragma once
// IWYU pragma private; include "UnityEngine/TextCore/Text/TextCacheEntryNodeExtensions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(TextCacheEntryNodeExtensions)
namespace System::Collections::Generic {
template<typename T>
class LinkedListNode_1;
}
namespace UnityEngine::TextCore::Text {
struct TextCacheEntry;
}
namespace UnityEngine::TextCore::Text {
class TextHandle;
}
// Forward declare root types
namespace UnityEngine::TextCore::Text {
class TextCacheEntryNodeExtensions;
}
// Write type traits
MARK_REF_T(::UnityEngine::TextCore::Text::TextCacheEntryNodeExtensions*);
DEFINE_IL2CPP_CLASS(::UnityEngine::TextCore::Text::TextCacheEntryNodeExtensions*, "UnityEngine.TextCore.Text", "TextCacheEntryNodeExtensions");
// Dependencies System.Object
namespace UnityEngine::TextCore::Text {
// Is value type: false
// CS Name: UnityEngine.TextCore.Text.TextCacheEntryNodeExtensions
class CORDL_TYPE TextCacheEntryNodeExtensions : public ::System::Object {
public:
// Declarations
/// @brief Method SetTextHandle, addr 0x1823548e0, size 0x90, virtual false, abstract: false, final false
static inline void SetTextHandle(::System::Collections::Generic::LinkedListNode_1<::UnityEngine::TextCore::Text::TextCacheEntry>*  node, ::UnityEngine::TextCore::Text::TextHandle*  newTextHandle) ;

/// @brief Method SetTime, addr 0x182354970, size 0x30, virtual false, abstract: false, final false
static inline void SetTime(::System::Collections::Generic::LinkedListNode_1<::UnityEngine::TextCore::Text::TextCacheEntry>*  node, float_t  newTime) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TextCacheEntryNodeExtensions() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TextCacheEntryNodeExtensions", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TextCacheEntryNodeExtensions(TextCacheEntryNodeExtensions && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TextCacheEntryNodeExtensions", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TextCacheEntryNodeExtensions(TextCacheEntryNodeExtensions const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17247};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::TextCore::Text::TextCacheEntryNodeExtensions) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine::TextCore::Text

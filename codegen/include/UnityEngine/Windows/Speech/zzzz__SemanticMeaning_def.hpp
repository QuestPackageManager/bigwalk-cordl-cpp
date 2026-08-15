#pragma once
// IWYU pragma private; include "UnityEngine/Windows/Speech/SemanticMeaning.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(SemanticMeaning)
// Forward declare root types
namespace UnityEngine::Windows::Speech {
struct SemanticMeaning;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Windows::Speech::SemanticMeaning);
DEFINE_IL2CPP_CLASS(::UnityEngine::Windows::Speech::SemanticMeaning, "UnityEngine.Windows.Speech", "SemanticMeaning");
// Dependencies 
namespace UnityEngine::Windows::Speech {
// Is value type: true
// CS Name: UnityEngine.Windows.Speech.SemanticMeaning
struct CORDL_TYPE SemanticMeaning {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr SemanticMeaning() ;

// Ctor Parameters [CppParam { name: "key", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "values", ty: "::ArrayW<::StringW>", modifiers: "", def_value: None }]
constexpr SemanticMeaning(::StringW  key, ::ArrayW<::StringW>  values) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10809};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field key, offset: 0x0, size: 0x8, def value: None
 ::StringW  key;

/// @brief Field values, offset: 0x8, size: 0x8, def value: None
 ::ArrayW<::StringW>  values;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Windows::Speech::SemanticMeaning, key) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Windows::Speech::SemanticMeaning, values) == 0x8, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Windows::Speech::SemanticMeaning) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine::Windows::Speech

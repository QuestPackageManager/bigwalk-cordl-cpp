#pragma once
// IWYU pragma private; include "GlobalNamespace/FontMappingData.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__FontMappingScaling_def.hpp"
#include "GlobalNamespace/zzzz__FontMappingTransfer_def.hpp"
#include "GlobalNamespace/zzzz__LocalizationLanguage_def.hpp"
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(FontMappingData)
namespace GlobalNamespace {
struct FontMappingData_FontMappingLanguage;
}
namespace GlobalNamespace {
struct FontMappingScaling_UseCase;
}
namespace GlobalNamespace {
struct FontMappingScaling;
}
namespace GlobalNamespace {
class FontMappingTransfer;
}
namespace GlobalNamespace {
struct LocalizationLanguage;
}
namespace TMPro {
class TMP_FontAsset;
}
namespace UnityEngine {
class Shader;
}
// Forward declare root types
namespace GlobalNamespace {
class FontMappingData;
}
namespace GlobalNamespace {
struct FontMappingData_FontMappingLanguage;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::FontMappingData*);
MARK_VAL_T(::GlobalNamespace::FontMappingData_FontMappingLanguage);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::FontMappingData*, "", "FontMappingData");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::FontMappingData_FontMappingLanguage, "", "FontMappingData/FontMappingLanguage");
// Dependencies FontMappingScaling, FontMappingTransfer, LocalizationLanguage
namespace GlobalNamespace {
// Is value type: true
// CS Name: FontMappingData/FontMappingLanguage
struct CORDL_TYPE FontMappingData_FontMappingLanguage {
public:
// Declarations
/// @brief Method GetScaling, addr 0x1803e73b0, size 0xa0, virtual false, abstract: false, final false
inline float_t GetScaling(::GlobalNamespace::FontMappingScaling_UseCase  useCase) ;

// Ctor Parameters []
// @brief default ctor
constexpr FontMappingData_FontMappingLanguage() ;

// Ctor Parameters [CppParam { name: "language", ty: "::GlobalNamespace::LocalizationLanguage", modifiers: "", def_value: None }, CppParam { name: "useLatinTransfers", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "transfers", ty: "::ArrayW<::GlobalNamespace::FontMappingTransfer*>", modifiers: "", def_value: None }, CppParam { name: "scalings", ty: "::ArrayW<::GlobalNamespace::FontMappingScaling>", modifiers: "", def_value: None }]
constexpr FontMappingData_FontMappingLanguage(::GlobalNamespace::LocalizationLanguage  language, bool  useLatinTransfers, ::ArrayW<::GlobalNamespace::FontMappingTransfer*>  transfers, ::ArrayW<::GlobalNamespace::FontMappingScaling>  scalings) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4993};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field language, offset: 0x0, size: 0x4, def value: None
 ::GlobalNamespace::LocalizationLanguage  language;

/// @brief Field useLatinTransfers, offset: 0x4, size: 0x1, def value: None
 bool  useLatinTransfers;

/// @brief Field transfers, offset: 0x8, size: 0x8, def value: None
 ::ArrayW<::GlobalNamespace::FontMappingTransfer*>  transfers;

/// @brief Field scalings, offset: 0x10, size: 0x8, def value: None
 ::ArrayW<::GlobalNamespace::FontMappingScaling>  scalings;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::FontMappingData_FontMappingLanguage, language) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FontMappingData_FontMappingLanguage, useLatinTransfers) == 0x4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FontMappingData_FontMappingLanguage, transfers) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FontMappingData_FontMappingLanguage, scalings) == 0x10, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::FontMappingData_FontMappingLanguage) == 0x18, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies FontMappingData::FontMappingLanguage, UnityEngine.ScriptableObject
namespace GlobalNamespace {
// Is value type: false
// CS Name: FontMappingData
class CORDL_TYPE FontMappingData : public ::UnityEngine::ScriptableObject {
public:
// Declarations
using FontMappingLanguage = ::GlobalNamespace::FontMappingData_FontMappingLanguage;

/// @brief Field languages, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_languages, put=__cordl_internal_set_languages)) ::ArrayW<::GlobalNamespace::FontMappingData_FontMappingLanguage>  languages;

/// @brief Field latinScript, offset 0x28, size 0x18 
 __declspec(property(get=__cordl_internal_get_latinScript, put=__cordl_internal_set_latinScript)) ::GlobalNamespace::FontMappingData_FontMappingLanguage  latinScript;

/// @brief Field textOpaqueShader, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_textOpaqueShader, put=__cordl_internal_set_textOpaqueShader)) ::UnityW<::UnityEngine::Shader>  textOpaqueShader;

/// @brief Field useMappings, offset 0x18, size 0x1 
 __declspec(property(get=__cordl_internal_get_useMappings, put=__cordl_internal_set_useMappings)) bool  useMappings;

/// @brief Method GetLanguage, addr 0x1803e7100, size 0x70, virtual false, abstract: false, final false
inline ::GlobalNamespace::FontMappingData_FontMappingLanguage GetLanguage(::GlobalNamespace::LocalizationLanguage  language) ;

/// @brief Method GetScaling, addr 0x1803e7170, size 0xb0, virtual false, abstract: false, final false
inline float_t GetScaling(::GlobalNamespace::LocalizationLanguage  language, ::GlobalNamespace::FontMappingScaling_UseCase  useCase) ;

/// @brief Method GetTransfer, addr 0x1803e7220, size 0x160, virtual false, abstract: false, final false
static inline bool GetTransfer(::GlobalNamespace::LocalizationLanguage  language, ::TMPro::TMP_FontAsset*  fontAsset, ::by_ref<::GlobalNamespace::FontMappingTransfer*>  fontMappingTransfer) ;

static inline ::GlobalNamespace::FontMappingData* New_ctor() ;

constexpr ::ArrayW<::GlobalNamespace::FontMappingData_FontMappingLanguage> const& __cordl_internal_get_languages() const;

constexpr ::ArrayW<::GlobalNamespace::FontMappingData_FontMappingLanguage>& __cordl_internal_get_languages() ;

constexpr ::GlobalNamespace::FontMappingData_FontMappingLanguage const& __cordl_internal_get_latinScript() const;

constexpr ::GlobalNamespace::FontMappingData_FontMappingLanguage& __cordl_internal_get_latinScript() ;

constexpr ::UnityW<::UnityEngine::Shader> const& __cordl_internal_get_textOpaqueShader() const;

constexpr ::UnityW<::UnityEngine::Shader>& __cordl_internal_get_textOpaqueShader() ;

constexpr bool const& __cordl_internal_get_useMappings() const;

constexpr bool& __cordl_internal_get_useMappings() ;

constexpr void __cordl_internal_set_languages(::ArrayW<::GlobalNamespace::FontMappingData_FontMappingLanguage>  value) ;

constexpr void __cordl_internal_set_latinScript(::GlobalNamespace::FontMappingData_FontMappingLanguage  value) ;

constexpr void __cordl_internal_set_textOpaqueShader(::UnityW<::UnityEngine::Shader>  value) ;

constexpr void __cordl_internal_set_useMappings(bool  value) ;

/// @brief Method .ctor, addr 0x1803e7380, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_instance, addr 0x1803e7390, size 0x20, virtual false, abstract: false, final false
static inline ::UnityW<::GlobalNamespace::FontMappingData> get_instance() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FontMappingData() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FontMappingData", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
FontMappingData(FontMappingData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FontMappingData", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
FontMappingData(FontMappingData const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4994};

/// @brief Field useMappings, offset: 0x18, size: 0x1, def value: None
 bool  ___useMappings;

/// @brief Field textOpaqueShader, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Shader>  ___textOpaqueShader;

/// @brief Field latinScript, offset: 0x28, size: 0x18, def value: None
 ::GlobalNamespace::FontMappingData_FontMappingLanguage  ___latinScript;

/// @brief Field languages, offset: 0x40, size: 0x8, def value: None
 ::ArrayW<::GlobalNamespace::FontMappingData_FontMappingLanguage>  ___languages;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::FontMappingData, ___useMappings) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FontMappingData, ___textOpaqueShader) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FontMappingData, ___latinScript) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FontMappingData, ___languages) == 0x40, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::FontMappingData) == 0x48, "Size mismatch!");

} // namespace end def GlobalNamespace

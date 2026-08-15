#pragma once
// IWYU pragma private; include "GlobalNamespace/FontFallbackData.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__LocalizationLanguage_def.hpp"
#include "TMPro/zzzz__TMP_FontAsset_def.hpp"
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(FontFallbackData)
namespace GlobalNamespace {
struct FontFallbackData_FallbackPrototype;
}
namespace GlobalNamespace {
struct LocalizationLanguage;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace TMPro {
class TMP_FontAsset;
}
// Forward declare root types
namespace GlobalNamespace {
class FontFallbackData;
}
namespace GlobalNamespace {
struct FontFallbackData_FallbackPrototype;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::FontFallbackData*);
MARK_VAL_T(::GlobalNamespace::FontFallbackData_FallbackPrototype);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::FontFallbackData*, "", "FontFallbackData");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::FontFallbackData_FallbackPrototype, "", "FontFallbackData/FallbackPrototype");
// Dependencies LocalizationLanguage, TMPro.TMP_FontAsset
namespace GlobalNamespace {
// Is value type: true
// CS Name: FontFallbackData/FallbackPrototype
struct CORDL_TYPE FontFallbackData_FallbackPrototype {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr FontFallbackData_FallbackPrototype() ;

// Ctor Parameters [CppParam { name: "defaultFallbackLanguages", ty: "::ArrayW<::GlobalNamespace::LocalizationLanguage>", modifiers: "", def_value: None }, CppParam { name: "fontAssets", ty: "::ArrayW<::UnityW<::TMPro::TMP_FontAsset>>", modifiers: "", def_value: None }]
constexpr FontFallbackData_FallbackPrototype(::ArrayW<::GlobalNamespace::LocalizationLanguage>  defaultFallbackLanguages, ::ArrayW<::UnityW<::TMPro::TMP_FontAsset>>  fontAssets) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4987};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field defaultFallbackLanguages, offset: 0x0, size: 0x8, def value: None
 ::ArrayW<::GlobalNamespace::LocalizationLanguage>  defaultFallbackLanguages;

/// @brief Field fontAssets, offset: 0x8, size: 0x8, def value: None
 ::ArrayW<::UnityW<::TMPro::TMP_FontAsset>>  fontAssets;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::FontFallbackData_FallbackPrototype, defaultFallbackLanguages) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FontFallbackData_FallbackPrototype, fontAssets) == 0x8, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::FontFallbackData_FallbackPrototype) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies FontFallbackData::FallbackPrototype, UnityEngine.ScriptableObject
namespace GlobalNamespace {
// Is value type: false
// CS Name: FontFallbackData
class CORDL_TYPE FontFallbackData : public ::UnityEngine::ScriptableObject {
public:
// Declarations
using FallbackPrototype = ::GlobalNamespace::FontFallbackData_FallbackPrototype;

/// @brief Field fallbackPrototypes, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_fallbackPrototypes, put=__cordl_internal_set_fallbackPrototypes)) ::ArrayW<::GlobalNamespace::FontFallbackData_FallbackPrototype>  fallbackPrototypes;

/// @brief Field originalFallbacks, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_originalFallbacks, put=__cordl_internal_set_originalFallbacks)) ::System::Collections::Generic::Dictionary_2<::UnityW<::TMPro::TMP_FontAsset>,::System::Collections::Generic::List_1<::UnityW<::TMPro::TMP_FontAsset>>*>*  originalFallbacks;

/// @brief Method CleanUp, addr 0x1803e67d0, size 0xf0, virtual false, abstract: false, final false
inline void CleanUp() ;

static inline ::GlobalNamespace::FontFallbackData* New_ctor() ;

/// @brief Method OnDestroy, addr 0x1803e67d0, size 0xf0, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method SetLanguage, addr 0x1803e6980, size 0x1f0, virtual false, abstract: false, final false
inline void SetLanguage(::TMPro::TMP_FontAsset*  fontAsset, ::ArrayW<::GlobalNamespace::LocalizationLanguage>  defaultFallbackLanguages, ::GlobalNamespace::LocalizationLanguage  targetLanguage) ;

/// @brief Method SetLanguage, addr 0x1803e68c0, size 0xc0, virtual false, abstract: false, final false
inline void SetLanguage(::GlobalNamespace::LocalizationLanguage  language) ;

constexpr ::ArrayW<::GlobalNamespace::FontFallbackData_FallbackPrototype> const& __cordl_internal_get_fallbackPrototypes() const;

constexpr ::ArrayW<::GlobalNamespace::FontFallbackData_FallbackPrototype>& __cordl_internal_get_fallbackPrototypes() ;

constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::TMPro::TMP_FontAsset>,::System::Collections::Generic::List_1<::UnityW<::TMPro::TMP_FontAsset>>*>* const& __cordl_internal_get_originalFallbacks() const;

constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::TMPro::TMP_FontAsset>,::System::Collections::Generic::List_1<::UnityW<::TMPro::TMP_FontAsset>>*>*& __cordl_internal_get_originalFallbacks() ;

constexpr void __cordl_internal_set_fallbackPrototypes(::ArrayW<::GlobalNamespace::FontFallbackData_FallbackPrototype>  value) ;

constexpr void __cordl_internal_set_originalFallbacks(::System::Collections::Generic::Dictionary_2<::UnityW<::TMPro::TMP_FontAsset>,::System::Collections::Generic::List_1<::UnityW<::TMPro::TMP_FontAsset>>*>*  value) ;

/// @brief Method .ctor, addr 0x1803e6b70, size 0x50, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_instance, addr 0x1803e6bc0, size 0x20, virtual false, abstract: false, final false
static inline ::UnityW<::GlobalNamespace::FontFallbackData> get_instance() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FontFallbackData() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FontFallbackData", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
FontFallbackData(FontFallbackData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FontFallbackData", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
FontFallbackData(FontFallbackData const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4988};

/// @brief Field originalFallbacks, offset: 0x18, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::UnityW<::TMPro::TMP_FontAsset>,::System::Collections::Generic::List_1<::UnityW<::TMPro::TMP_FontAsset>>*>*  ___originalFallbacks;

/// @brief Field fallbackPrototypes, offset: 0x20, size: 0x8, def value: None
 ::ArrayW<::GlobalNamespace::FontFallbackData_FallbackPrototype>  ___fallbackPrototypes;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::FontFallbackData, ___originalFallbacks) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FontFallbackData, ___fallbackPrototypes) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::FontFallbackData) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace

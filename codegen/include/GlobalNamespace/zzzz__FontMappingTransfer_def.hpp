#pragma once
// IWYU pragma private; include "GlobalNamespace/FontMappingTransfer.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(FontMappingTransfer)
namespace TMPro {
class TMP_FontAsset;
}
namespace UnityEngine {
class Material;
}
// Forward declare root types
namespace GlobalNamespace {
class FontMappingTransfer;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::FontMappingTransfer*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::FontMappingTransfer*, "", "FontMappingTransfer");
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: FontMappingTransfer
class CORDL_TYPE FontMappingTransfer : public ::System::Object {
public:
// Declarations
/// @brief Field _cutoutMaterial, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__cutoutMaterial, put=__cordl_internal_set__cutoutMaterial)) ::UnityW<::UnityEngine::Material>  _cutoutMaterial;

 __declspec(property(get=get_cutoutMaterial)) ::UnityW<::UnityEngine::Material>  cutoutMaterial;

/// @brief Field mappedFont, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_mappedFont, put=__cordl_internal_set_mappedFont)) ::UnityW<::TMPro::TMP_FontAsset>  mappedFont;

/// @brief Field originalFont, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_originalFont, put=__cordl_internal_set_originalFont)) ::UnityW<::TMPro::TMP_FontAsset>  originalFont;

static inline ::GlobalNamespace::FontMappingTransfer* New_ctor() ;

constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get__cutoutMaterial() const;

constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get__cutoutMaterial() ;

constexpr ::UnityW<::TMPro::TMP_FontAsset> const& __cordl_internal_get_mappedFont() const;

constexpr ::UnityW<::TMPro::TMP_FontAsset>& __cordl_internal_get_mappedFont() ;

constexpr ::UnityW<::TMPro::TMP_FontAsset> const& __cordl_internal_get_originalFont() const;

constexpr ::UnityW<::TMPro::TMP_FontAsset>& __cordl_internal_get_originalFont() ;

constexpr void __cordl_internal_set__cutoutMaterial(::UnityW<::UnityEngine::Material>  value) ;

constexpr void __cordl_internal_set_mappedFont(::UnityW<::TMPro::TMP_FontAsset>  value) ;

constexpr void __cordl_internal_set_originalFont(::UnityW<::TMPro::TMP_FontAsset>  value) ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_cutoutMaterial, addr 0x1803e7450, size 0xb0, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Material> get_cutoutMaterial() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FontMappingTransfer() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FontMappingTransfer", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
FontMappingTransfer(FontMappingTransfer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FontMappingTransfer", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
FontMappingTransfer(FontMappingTransfer const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4990};

/// @brief Field originalFont, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::TMPro::TMP_FontAsset>  ___originalFont;

/// @brief Field mappedFont, offset: 0x18, size: 0x8, def value: None
 ::UnityW<::TMPro::TMP_FontAsset>  ___mappedFont;

/// @brief Field _cutoutMaterial, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Material>  ____cutoutMaterial;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::FontMappingTransfer, ___originalFont) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FontMappingTransfer, ___mappedFont) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FontMappingTransfer, ____cutoutMaterial) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::FontMappingTransfer) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace

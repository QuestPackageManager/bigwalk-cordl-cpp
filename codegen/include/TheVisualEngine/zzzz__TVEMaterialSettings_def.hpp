#pragma once
// IWYU pragma private; include "TheVisualEngine/TVEMaterialSettings.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(TVEMaterialSettings)
// Forward declare root types
namespace TheVisualEngine {
class TVEMaterialSettings;
}
// Write type traits
MARK_REF_T(::TheVisualEngine::TVEMaterialSettings*);
DEFINE_IL2CPP_CLASS(::TheVisualEngine::TVEMaterialSettings*, "TheVisualEngine", "TVEMaterialSettings");
// Dependencies System.Object
namespace TheVisualEngine {
// Is value type: false
// CS Name: TheVisualEngine.TVEMaterialSettings
class CORDL_TYPE TVEMaterialSettings : public ::System::Object {
public:
// Declarations
/// @brief Field baseMask, offset 0x10, size 0x1 
 __declspec(property(get=__cordl_internal_get_baseMask, put=__cordl_internal_set_baseMask)) bool  baseMask;

/// @brief Field meshMaskBA, offset 0x13, size 0x1 
 __declspec(property(get=__cordl_internal_get_meshMaskBA, put=__cordl_internal_set_meshMaskBA)) bool  meshMaskBA;

/// @brief Field meshMaskRG, offset 0x12, size 0x1 
 __declspec(property(get=__cordl_internal_get_meshMaskRG, put=__cordl_internal_set_meshMaskRG)) bool  meshMaskRG;

/// @brief Field texCoords, offset 0x16, size 0x1 
 __declspec(property(get=__cordl_internal_get_texCoords, put=__cordl_internal_set_texCoords)) bool  texCoords;

/// @brief Field useImpostorFeature, offset 0x18, size 0x1 
 __declspec(property(get=__cordl_internal_get_useImpostorFeature, put=__cordl_internal_set_useImpostorFeature)) bool  useImpostorFeature;

/// @brief Field useImpostorShader, offset 0x17, size 0x1 
 __declspec(property(get=__cordl_internal_get_useImpostorShader, put=__cordl_internal_set_useImpostorShader)) bool  useImpostorShader;

/// @brief Field useLumaMask, offset 0x15, size 0x1 
 __declspec(property(get=__cordl_internal_get_useLumaMask, put=__cordl_internal_set_useLumaMask)) bool  useLumaMask;

/// @brief Field useMultiMask, offset 0x11, size 0x1 
 __declspec(property(get=__cordl_internal_get_useMultiMask, put=__cordl_internal_set_useMultiMask)) bool  useMultiMask;

/// @brief Field useProjMask, offset 0x14, size 0x1 
 __declspec(property(get=__cordl_internal_get_useProjMask, put=__cordl_internal_set_useProjMask)) bool  useProjMask;

static inline ::TheVisualEngine::TVEMaterialSettings* New_ctor() ;

constexpr bool const& __cordl_internal_get_baseMask() const;

constexpr bool& __cordl_internal_get_baseMask() ;

constexpr bool const& __cordl_internal_get_meshMaskBA() const;

constexpr bool& __cordl_internal_get_meshMaskBA() ;

constexpr bool const& __cordl_internal_get_meshMaskRG() const;

constexpr bool& __cordl_internal_get_meshMaskRG() ;

constexpr bool const& __cordl_internal_get_texCoords() const;

constexpr bool& __cordl_internal_get_texCoords() ;

constexpr bool const& __cordl_internal_get_useImpostorFeature() const;

constexpr bool& __cordl_internal_get_useImpostorFeature() ;

constexpr bool const& __cordl_internal_get_useImpostorShader() const;

constexpr bool& __cordl_internal_get_useImpostorShader() ;

constexpr bool const& __cordl_internal_get_useLumaMask() const;

constexpr bool& __cordl_internal_get_useLumaMask() ;

constexpr bool const& __cordl_internal_get_useMultiMask() const;

constexpr bool& __cordl_internal_get_useMultiMask() ;

constexpr bool const& __cordl_internal_get_useProjMask() const;

constexpr bool& __cordl_internal_get_useProjMask() ;

constexpr void __cordl_internal_set_baseMask(bool  value) ;

constexpr void __cordl_internal_set_meshMaskBA(bool  value) ;

constexpr void __cordl_internal_set_meshMaskRG(bool  value) ;

constexpr void __cordl_internal_set_texCoords(bool  value) ;

constexpr void __cordl_internal_set_useImpostorFeature(bool  value) ;

constexpr void __cordl_internal_set_useImpostorShader(bool  value) ;

constexpr void __cordl_internal_set_useLumaMask(bool  value) ;

constexpr void __cordl_internal_set_useMultiMask(bool  value) ;

constexpr void __cordl_internal_set_useProjMask(bool  value) ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TVEMaterialSettings() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TVEMaterialSettings", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TVEMaterialSettings(TVEMaterialSettings && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TVEMaterialSettings", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TVEMaterialSettings(TVEMaterialSettings const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19594};

/// @brief Field baseMask, offset: 0x10, size: 0x1, def value: None
 bool  ___baseMask;

/// @brief Field useMultiMask, offset: 0x11, size: 0x1, def value: None
 bool  ___useMultiMask;

/// @brief Field meshMaskRG, offset: 0x12, size: 0x1, def value: None
 bool  ___meshMaskRG;

/// @brief Field meshMaskBA, offset: 0x13, size: 0x1, def value: None
 bool  ___meshMaskBA;

/// @brief Field useProjMask, offset: 0x14, size: 0x1, def value: None
 bool  ___useProjMask;

/// @brief Field useLumaMask, offset: 0x15, size: 0x1, def value: None
 bool  ___useLumaMask;

/// @brief Field texCoords, offset: 0x16, size: 0x1, def value: None
 bool  ___texCoords;

/// @brief Field useImpostorShader, offset: 0x17, size: 0x1, def value: None
 bool  ___useImpostorShader;

/// @brief Field useImpostorFeature, offset: 0x18, size: 0x1, def value: None
 bool  ___useImpostorFeature;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::TheVisualEngine::TVEMaterialSettings, ___baseMask) == 0x10, "Offset mismatch!");

static_assert(offsetof(::TheVisualEngine::TVEMaterialSettings, ___useMultiMask) == 0x11, "Offset mismatch!");

static_assert(offsetof(::TheVisualEngine::TVEMaterialSettings, ___meshMaskRG) == 0x12, "Offset mismatch!");

static_assert(offsetof(::TheVisualEngine::TVEMaterialSettings, ___meshMaskBA) == 0x13, "Offset mismatch!");

static_assert(offsetof(::TheVisualEngine::TVEMaterialSettings, ___useProjMask) == 0x14, "Offset mismatch!");

static_assert(offsetof(::TheVisualEngine::TVEMaterialSettings, ___useLumaMask) == 0x15, "Offset mismatch!");

static_assert(offsetof(::TheVisualEngine::TVEMaterialSettings, ___texCoords) == 0x16, "Offset mismatch!");

static_assert(offsetof(::TheVisualEngine::TVEMaterialSettings, ___useImpostorShader) == 0x17, "Offset mismatch!");

static_assert(offsetof(::TheVisualEngine::TVEMaterialSettings, ___useImpostorFeature) == 0x18, "Offset mismatch!");

static_assert(sizeof(::TheVisualEngine::TVEMaterialSettings) == 0x20, "Size mismatch!");

} // namespace end def TheVisualEngine

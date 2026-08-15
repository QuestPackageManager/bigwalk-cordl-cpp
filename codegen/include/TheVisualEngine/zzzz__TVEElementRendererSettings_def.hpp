#pragma once
// IWYU pragma private; include "TheVisualEngine/TVEElementRendererSettings.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "TheVisualEngine/zzzz__TVEElementType_def.hpp"
#include "TheVisualEngine/zzzz__TVETextureFormat_def.hpp"
#include "TheVisualEngine/zzzz__TVETextureSize_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(TVEElementRendererSettings)
// Forward declare root types
namespace TheVisualEngine {
class TVEElementRendererSettings;
}
// Write type traits
MARK_REF_T(::TheVisualEngine::TVEElementRendererSettings*);
DEFINE_IL2CPP_CLASS(::TheVisualEngine::TVEElementRendererSettings*, "TheVisualEngine", "TVEElementRendererSettings");
// Dependencies System.Object, TheVisualEngine.TVEElementType, TheVisualEngine.TVETextureFormat, TheVisualEngine.TVETextureSize
namespace TheVisualEngine {
// Is value type: false
// CS Name: TheVisualEngine.TVEElementRendererSettings
class CORDL_TYPE TVEElementRendererSettings : public ::System::Object {
public:
// Declarations
/// @brief Field baseFormat, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get_baseFormat, put=__cordl_internal_set_baseFormat)) ::TheVisualEngine::TVETextureFormat  baseFormat;

/// @brief Field baseTexture, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_baseTexture, put=__cordl_internal_set_baseTexture)) ::TheVisualEngine::TVETextureSize  baseTexture;

/// @brief Field isInitialized, offset 0x18, size 0x1 
 __declspec(property(get=__cordl_internal_get_isInitialized, put=__cordl_internal_set_isInitialized)) bool  isInitialized;

/// @brief Field name, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_name, put=__cordl_internal_set_name)) ::StringW  name;

/// @brief Field nearFormat, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get_nearFormat, put=__cordl_internal_set_nearFormat)) ::TheVisualEngine::TVETextureFormat  nearFormat;

/// @brief Field nearTexture, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_nearTexture, put=__cordl_internal_set_nearTexture)) ::TheVisualEngine::TVETextureSize  nearTexture;

/// @brief Field rendererData, offset 0x1c, size 0x4 
 __declspec(property(get=__cordl_internal_get_rendererData, put=__cordl_internal_set_rendererData)) ::TheVisualEngine::TVEElementType  rendererData;

static inline ::TheVisualEngine::TVEElementRendererSettings* New_ctor() ;

constexpr ::TheVisualEngine::TVETextureFormat const& __cordl_internal_get_baseFormat() const;

constexpr ::TheVisualEngine::TVETextureFormat& __cordl_internal_get_baseFormat() ;

constexpr ::TheVisualEngine::TVETextureSize const& __cordl_internal_get_baseTexture() const;

constexpr ::TheVisualEngine::TVETextureSize& __cordl_internal_get_baseTexture() ;

constexpr bool const& __cordl_internal_get_isInitialized() const;

constexpr bool& __cordl_internal_get_isInitialized() ;

constexpr ::StringW const& __cordl_internal_get_name() const;

constexpr ::StringW& __cordl_internal_get_name() ;

constexpr ::TheVisualEngine::TVETextureFormat const& __cordl_internal_get_nearFormat() const;

constexpr ::TheVisualEngine::TVETextureFormat& __cordl_internal_get_nearFormat() ;

constexpr ::TheVisualEngine::TVETextureSize const& __cordl_internal_get_nearTexture() const;

constexpr ::TheVisualEngine::TVETextureSize& __cordl_internal_get_nearTexture() ;

constexpr ::TheVisualEngine::TVEElementType const& __cordl_internal_get_rendererData() const;

constexpr ::TheVisualEngine::TVEElementType& __cordl_internal_get_rendererData() ;

constexpr void __cordl_internal_set_baseFormat(::TheVisualEngine::TVETextureFormat  value) ;

constexpr void __cordl_internal_set_baseTexture(::TheVisualEngine::TVETextureSize  value) ;

constexpr void __cordl_internal_set_isInitialized(bool  value) ;

constexpr void __cordl_internal_set_name(::StringW  value) ;

constexpr void __cordl_internal_set_nearFormat(::TheVisualEngine::TVETextureFormat  value) ;

constexpr void __cordl_internal_set_nearTexture(::TheVisualEngine::TVETextureSize  value) ;

constexpr void __cordl_internal_set_rendererData(::TheVisualEngine::TVEElementType  value) ;

/// @brief Method .ctor, addr 0x1804b92d0, size 0x50, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TVEElementRendererSettings() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TVEElementRendererSettings", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TVEElementRendererSettings(TVEElementRendererSettings && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TVEElementRendererSettings", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TVEElementRendererSettings(TVEElementRendererSettings const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19602};

/// @brief Field name, offset: 0x10, size: 0x8, def value: None
 ::StringW  ___name;

/// @brief Field isInitialized, offset: 0x18, size: 0x1, def value: None
 bool  ___isInitialized;

/// @brief Field rendererData, offset: 0x1c, size: 0x4, def value: None
 ::TheVisualEngine::TVEElementType  ___rendererData;

/// @brief Field baseTexture, offset: 0x20, size: 0x4, def value: None
 ::TheVisualEngine::TVETextureSize  ___baseTexture;

/// @brief Field baseFormat, offset: 0x24, size: 0x4, def value: None
 ::TheVisualEngine::TVETextureFormat  ___baseFormat;

/// @brief Field nearTexture, offset: 0x28, size: 0x4, def value: None
 ::TheVisualEngine::TVETextureSize  ___nearTexture;

/// @brief Field nearFormat, offset: 0x2c, size: 0x4, def value: None
 ::TheVisualEngine::TVETextureFormat  ___nearFormat;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::TheVisualEngine::TVEElementRendererSettings, ___name) == 0x10, "Offset mismatch!");

static_assert(offsetof(::TheVisualEngine::TVEElementRendererSettings, ___isInitialized) == 0x18, "Offset mismatch!");

static_assert(offsetof(::TheVisualEngine::TVEElementRendererSettings, ___rendererData) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::TheVisualEngine::TVEElementRendererSettings, ___baseTexture) == 0x20, "Offset mismatch!");

static_assert(offsetof(::TheVisualEngine::TVEElementRendererSettings, ___baseFormat) == 0x24, "Offset mismatch!");

static_assert(offsetof(::TheVisualEngine::TVEElementRendererSettings, ___nearTexture) == 0x28, "Offset mismatch!");

static_assert(offsetof(::TheVisualEngine::TVEElementRendererSettings, ___nearFormat) == 0x2c, "Offset mismatch!");

static_assert(sizeof(::TheVisualEngine::TVEElementRendererSettings) == 0x30, "Size mismatch!");

} // namespace end def TheVisualEngine

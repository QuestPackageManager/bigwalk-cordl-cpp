#pragma once
// IWYU pragma private; include "TheVisualEngine/TVEElementBufferData.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "TheVisualEngine/zzzz__TVEBool_def.hpp"
#include "TheVisualEngine/zzzz__TVETextureFormat_def.hpp"
#include "TheVisualEngine/zzzz__TVETextureSize_def.hpp"
#include "UnityEngine/Rendering/zzzz__CommandBuffer_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(TVEElementBufferData)
namespace UnityEngine {
class RenderTexture;
}
// Forward declare root types
namespace TheVisualEngine {
class TVEElementBufferData;
}
// Write type traits
MARK_REF_T(::TheVisualEngine::TVEElementBufferData*);
DEFINE_IL2CPP_CLASS(::TheVisualEngine::TVEElementBufferData*, "TheVisualEngine", "TVEElementBufferData");
// Dependencies System.Object, TheVisualEngine.TVEBool, TheVisualEngine.TVETextureFormat, TheVisualEngine.TVETextureSize, UnityEngine.Color, UnityEngine.Rendering.CommandBuffer
namespace TheVisualEngine {
// Is value type: false
// CS Name: TheVisualEngine.TVEElementBufferData
class CORDL_TYPE TVEElementBufferData : public ::System::Object {
public:
// Declarations
/// @brief Field baseFormat, offset 0x5c, size 0x4 
 __declspec(property(get=__cordl_internal_get_baseFormat, put=__cordl_internal_set_baseFormat)) ::TheVisualEngine::TVETextureFormat  baseFormat;

/// @brief Field baseMipmap, offset 0x60, size 0x4 
 __declspec(property(get=__cordl_internal_get_baseMipmap, put=__cordl_internal_set_baseMipmap)) int32_t  baseMipmap;

/// @brief Field baseObjectRT, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_baseObjectRT, put=__cordl_internal_set_baseObjectRT)) ::UnityW<::UnityEngine::RenderTexture>  baseObjectRT;

/// @brief Field baseTexCoord, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get_baseTexCoord, put=__cordl_internal_set_baseTexCoord)) ::StringW  baseTexCoord;

/// @brief Field baseTexName, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get_baseTexName, put=__cordl_internal_set_baseTexName)) ::StringW  baseTexName;

/// @brief Field baseTexture, offset 0x58, size 0x4 
 __declspec(property(get=__cordl_internal_get_baseTexture, put=__cordl_internal_set_baseTexture)) ::TheVisualEngine::TVETextureSize  baseTexture;

/// @brief Field bufferSize, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get_bufferSize, put=__cordl_internal_set_bufferSize)) int32_t  bufferSize;

/// @brief Field bufferUsage, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_bufferUsage, put=__cordl_internal_set_bufferUsage)) ::ArrayW<float_t>  bufferUsage;

/// @brief Field commandBuffers, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get_commandBuffers, put=__cordl_internal_set_commandBuffers)) ::ArrayW<::UnityEngine::Rendering::CommandBuffer*>  commandBuffers;

/// @brief Field isInitialized, offset 0x18, size 0x1 
 __declspec(property(get=__cordl_internal_get_isInitialized, put=__cordl_internal_set_isInitialized)) bool  isInitialized;

/// @brief Field isRendering, offset 0x38, size 0x1 
 __declspec(property(get=__cordl_internal_get_isRendering, put=__cordl_internal_set_isRendering)) bool  isRendering;

/// @brief Field name, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_name, put=__cordl_internal_set_name)) ::StringW  name;

/// @brief Field nearFormat, offset 0x74, size 0x4 
 __declspec(property(get=__cordl_internal_get_nearFormat, put=__cordl_internal_set_nearFormat)) ::TheVisualEngine::TVETextureFormat  nearFormat;

/// @brief Field nearMipmap, offset 0x78, size 0x4 
 __declspec(property(get=__cordl_internal_get_nearMipmap, put=__cordl_internal_set_nearMipmap)) int32_t  nearMipmap;

/// @brief Field nearObjectRT, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_nearObjectRT, put=__cordl_internal_set_nearObjectRT)) ::UnityW<::UnityEngine::RenderTexture>  nearObjectRT;

/// @brief Field nearTexCoord, offset 0xa0, size 0x8 
 __declspec(property(get=__cordl_internal_get_nearTexCoord, put=__cordl_internal_set_nearTexCoord)) ::StringW  nearTexCoord;

/// @brief Field nearTexName, offset 0x98, size 0x8 
 __declspec(property(get=__cordl_internal_get_nearTexName, put=__cordl_internal_set_nearTexName)) ::StringW  nearTexName;

/// @brief Field nearTexture, offset 0x70, size 0x4 
 __declspec(property(get=__cordl_internal_get_nearTexture, put=__cordl_internal_set_nearTexture)) ::TheVisualEngine::TVETextureSize  nearTexture;

/// @brief Field renderDataID, offset 0x3c, size 0x4 
 __declspec(property(get=__cordl_internal_get_renderDataID, put=__cordl_internal_set_renderDataID)) int32_t  renderDataID;

/// @brief Field renderMode, offset 0x1c, size 0x4 
 __declspec(property(get=__cordl_internal_get_renderMode, put=__cordl_internal_set_renderMode)) ::TheVisualEngine::TVEBool  renderMode;

/// @brief Field renderName, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_renderName, put=__cordl_internal_set_renderName)) ::StringW  renderName;

/// @brief Field texLayers, offset 0xb0, size 0x8 
 __declspec(property(get=__cordl_internal_get_texLayers, put=__cordl_internal_set_texLayers)) ::StringW  texLayers;

/// @brief Field texParams, offset 0xa8, size 0x8 
 __declspec(property(get=__cordl_internal_get_texParams, put=__cordl_internal_set_texParams)) ::StringW  texParams;

/// @brief Field textureColor, offset 0x28, size 0x10 
 __declspec(property(get=__cordl_internal_get_textureColor, put=__cordl_internal_set_textureColor)) ::UnityEngine::Color  textureColor;

static inline ::TheVisualEngine::TVEElementBufferData* New_ctor() ;

constexpr ::TheVisualEngine::TVETextureFormat const& __cordl_internal_get_baseFormat() const;

constexpr ::TheVisualEngine::TVETextureFormat& __cordl_internal_get_baseFormat() ;

constexpr int32_t const& __cordl_internal_get_baseMipmap() const;

constexpr int32_t& __cordl_internal_get_baseMipmap() ;

constexpr ::UnityW<::UnityEngine::RenderTexture> const& __cordl_internal_get_baseObjectRT() const;

constexpr ::UnityW<::UnityEngine::RenderTexture>& __cordl_internal_get_baseObjectRT() ;

constexpr ::StringW const& __cordl_internal_get_baseTexCoord() const;

constexpr ::StringW& __cordl_internal_get_baseTexCoord() ;

constexpr ::StringW const& __cordl_internal_get_baseTexName() const;

constexpr ::StringW& __cordl_internal_get_baseTexName() ;

constexpr ::TheVisualEngine::TVETextureSize const& __cordl_internal_get_baseTexture() const;

constexpr ::TheVisualEngine::TVETextureSize& __cordl_internal_get_baseTexture() ;

constexpr int32_t const& __cordl_internal_get_bufferSize() const;

constexpr int32_t& __cordl_internal_get_bufferSize() ;

constexpr ::ArrayW<float_t> const& __cordl_internal_get_bufferUsage() const;

constexpr ::ArrayW<float_t>& __cordl_internal_get_bufferUsage() ;

constexpr ::ArrayW<::UnityEngine::Rendering::CommandBuffer*> const& __cordl_internal_get_commandBuffers() const;

constexpr ::ArrayW<::UnityEngine::Rendering::CommandBuffer*>& __cordl_internal_get_commandBuffers() ;

constexpr bool const& __cordl_internal_get_isInitialized() const;

constexpr bool& __cordl_internal_get_isInitialized() ;

constexpr bool const& __cordl_internal_get_isRendering() const;

constexpr bool& __cordl_internal_get_isRendering() ;

constexpr ::StringW const& __cordl_internal_get_name() const;

constexpr ::StringW& __cordl_internal_get_name() ;

constexpr ::TheVisualEngine::TVETextureFormat const& __cordl_internal_get_nearFormat() const;

constexpr ::TheVisualEngine::TVETextureFormat& __cordl_internal_get_nearFormat() ;

constexpr int32_t const& __cordl_internal_get_nearMipmap() const;

constexpr int32_t& __cordl_internal_get_nearMipmap() ;

constexpr ::UnityW<::UnityEngine::RenderTexture> const& __cordl_internal_get_nearObjectRT() const;

constexpr ::UnityW<::UnityEngine::RenderTexture>& __cordl_internal_get_nearObjectRT() ;

constexpr ::StringW const& __cordl_internal_get_nearTexCoord() const;

constexpr ::StringW& __cordl_internal_get_nearTexCoord() ;

constexpr ::StringW const& __cordl_internal_get_nearTexName() const;

constexpr ::StringW& __cordl_internal_get_nearTexName() ;

constexpr ::TheVisualEngine::TVETextureSize const& __cordl_internal_get_nearTexture() const;

constexpr ::TheVisualEngine::TVETextureSize& __cordl_internal_get_nearTexture() ;

constexpr int32_t const& __cordl_internal_get_renderDataID() const;

constexpr int32_t& __cordl_internal_get_renderDataID() ;

constexpr ::TheVisualEngine::TVEBool const& __cordl_internal_get_renderMode() const;

constexpr ::TheVisualEngine::TVEBool& __cordl_internal_get_renderMode() ;

constexpr ::StringW const& __cordl_internal_get_renderName() const;

constexpr ::StringW& __cordl_internal_get_renderName() ;

constexpr ::StringW const& __cordl_internal_get_texLayers() const;

constexpr ::StringW& __cordl_internal_get_texLayers() ;

constexpr ::StringW const& __cordl_internal_get_texParams() const;

constexpr ::StringW& __cordl_internal_get_texParams() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get_textureColor() const;

constexpr ::UnityEngine::Color& __cordl_internal_get_textureColor() ;

constexpr void __cordl_internal_set_baseFormat(::TheVisualEngine::TVETextureFormat  value) ;

constexpr void __cordl_internal_set_baseMipmap(int32_t  value) ;

constexpr void __cordl_internal_set_baseObjectRT(::UnityW<::UnityEngine::RenderTexture>  value) ;

constexpr void __cordl_internal_set_baseTexCoord(::StringW  value) ;

constexpr void __cordl_internal_set_baseTexName(::StringW  value) ;

constexpr void __cordl_internal_set_baseTexture(::TheVisualEngine::TVETextureSize  value) ;

constexpr void __cordl_internal_set_bufferSize(int32_t  value) ;

constexpr void __cordl_internal_set_bufferUsage(::ArrayW<float_t>  value) ;

constexpr void __cordl_internal_set_commandBuffers(::ArrayW<::UnityEngine::Rendering::CommandBuffer*>  value) ;

constexpr void __cordl_internal_set_isInitialized(bool  value) ;

constexpr void __cordl_internal_set_isRendering(bool  value) ;

constexpr void __cordl_internal_set_name(::StringW  value) ;

constexpr void __cordl_internal_set_nearFormat(::TheVisualEngine::TVETextureFormat  value) ;

constexpr void __cordl_internal_set_nearMipmap(int32_t  value) ;

constexpr void __cordl_internal_set_nearObjectRT(::UnityW<::UnityEngine::RenderTexture>  value) ;

constexpr void __cordl_internal_set_nearTexCoord(::StringW  value) ;

constexpr void __cordl_internal_set_nearTexName(::StringW  value) ;

constexpr void __cordl_internal_set_nearTexture(::TheVisualEngine::TVETextureSize  value) ;

constexpr void __cordl_internal_set_renderDataID(int32_t  value) ;

constexpr void __cordl_internal_set_renderMode(::TheVisualEngine::TVEBool  value) ;

constexpr void __cordl_internal_set_renderName(::StringW  value) ;

constexpr void __cordl_internal_set_texLayers(::StringW  value) ;

constexpr void __cordl_internal_set_texParams(::StringW  value) ;

constexpr void __cordl_internal_set_textureColor(::UnityEngine::Color  value) ;

/// @brief Method .ctor, addr 0x1804b91c0, size 0x80, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TVEElementBufferData() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TVEElementBufferData", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TVEElementBufferData(TVEElementBufferData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TVEElementBufferData", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TVEElementBufferData(TVEElementBufferData const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19603};

/// @brief Field name, offset: 0x10, size: 0x8, def value: None
 ::StringW  ___name;

/// @brief Field isInitialized, offset: 0x18, size: 0x1, def value: None
 bool  ___isInitialized;

/// @brief Field renderMode, offset: 0x1c, size: 0x4, def value: None
 ::TheVisualEngine::TVEBool  ___renderMode;

/// @brief Field renderName, offset: 0x20, size: 0x8, def value: None
 ::StringW  ___renderName;

/// @brief Field textureColor, offset: 0x28, size: 0x10, def value: None
 ::UnityEngine::Color  ___textureColor;

/// @brief Field isRendering, offset: 0x38, size: 0x1, def value: None
 bool  ___isRendering;

/// @brief Field renderDataID, offset: 0x3c, size: 0x4, def value: None
 int32_t  ___renderDataID;

/// @brief Field bufferSize, offset: 0x40, size: 0x4, def value: None
 int32_t  ___bufferSize;

/// @brief Field bufferUsage, offset: 0x48, size: 0x8, def value: None
 ::ArrayW<float_t>  ___bufferUsage;

/// @brief Field baseObjectRT, offset: 0x50, size: 0x8, def value: None
 ::UnityW<::UnityEngine::RenderTexture>  ___baseObjectRT;

/// @brief Field baseTexture, offset: 0x58, size: 0x4, def value: None
 ::TheVisualEngine::TVETextureSize  ___baseTexture;

/// @brief Field baseFormat, offset: 0x5c, size: 0x4, def value: None
 ::TheVisualEngine::TVETextureFormat  ___baseFormat;

/// @brief Field baseMipmap, offset: 0x60, size: 0x4, def value: None
 int32_t  ___baseMipmap;

/// @brief Field nearObjectRT, offset: 0x68, size: 0x8, def value: None
 ::UnityW<::UnityEngine::RenderTexture>  ___nearObjectRT;

/// @brief Field nearTexture, offset: 0x70, size: 0x4, def value: None
 ::TheVisualEngine::TVETextureSize  ___nearTexture;

/// @brief Field nearFormat, offset: 0x74, size: 0x4, def value: None
 ::TheVisualEngine::TVETextureFormat  ___nearFormat;

/// @brief Field nearMipmap, offset: 0x78, size: 0x4, def value: None
 int32_t  ___nearMipmap;

/// @brief Field commandBuffers, offset: 0x80, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::Rendering::CommandBuffer*>  ___commandBuffers;

/// @brief Field baseTexName, offset: 0x88, size: 0x8, def value: None
 ::StringW  ___baseTexName;

/// @brief Field baseTexCoord, offset: 0x90, size: 0x8, def value: None
 ::StringW  ___baseTexCoord;

/// @brief Field nearTexName, offset: 0x98, size: 0x8, def value: None
 ::StringW  ___nearTexName;

/// @brief Field nearTexCoord, offset: 0xa0, size: 0x8, def value: None
 ::StringW  ___nearTexCoord;

/// @brief Field texParams, offset: 0xa8, size: 0x8, def value: None
 ::StringW  ___texParams;

/// @brief Field texLayers, offset: 0xb0, size: 0x8, def value: None
 ::StringW  ___texLayers;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::TheVisualEngine::TVEElementBufferData, ___name) == 0x10, "Offset mismatch!");

static_assert(offsetof(::TheVisualEngine::TVEElementBufferData, ___isInitialized) == 0x18, "Offset mismatch!");

static_assert(offsetof(::TheVisualEngine::TVEElementBufferData, ___renderMode) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::TheVisualEngine::TVEElementBufferData, ___renderName) == 0x20, "Offset mismatch!");

static_assert(offsetof(::TheVisualEngine::TVEElementBufferData, ___textureColor) == 0x28, "Offset mismatch!");

static_assert(offsetof(::TheVisualEngine::TVEElementBufferData, ___isRendering) == 0x38, "Offset mismatch!");

static_assert(offsetof(::TheVisualEngine::TVEElementBufferData, ___renderDataID) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::TheVisualEngine::TVEElementBufferData, ___bufferSize) == 0x40, "Offset mismatch!");

static_assert(offsetof(::TheVisualEngine::TVEElementBufferData, ___bufferUsage) == 0x48, "Offset mismatch!");

static_assert(offsetof(::TheVisualEngine::TVEElementBufferData, ___baseObjectRT) == 0x50, "Offset mismatch!");

static_assert(offsetof(::TheVisualEngine::TVEElementBufferData, ___baseTexture) == 0x58, "Offset mismatch!");

static_assert(offsetof(::TheVisualEngine::TVEElementBufferData, ___baseFormat) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::TheVisualEngine::TVEElementBufferData, ___baseMipmap) == 0x60, "Offset mismatch!");

static_assert(offsetof(::TheVisualEngine::TVEElementBufferData, ___nearObjectRT) == 0x68, "Offset mismatch!");

static_assert(offsetof(::TheVisualEngine::TVEElementBufferData, ___nearTexture) == 0x70, "Offset mismatch!");

static_assert(offsetof(::TheVisualEngine::TVEElementBufferData, ___nearFormat) == 0x74, "Offset mismatch!");

static_assert(offsetof(::TheVisualEngine::TVEElementBufferData, ___nearMipmap) == 0x78, "Offset mismatch!");

static_assert(offsetof(::TheVisualEngine::TVEElementBufferData, ___commandBuffers) == 0x80, "Offset mismatch!");

static_assert(offsetof(::TheVisualEngine::TVEElementBufferData, ___baseTexName) == 0x88, "Offset mismatch!");

static_assert(offsetof(::TheVisualEngine::TVEElementBufferData, ___baseTexCoord) == 0x90, "Offset mismatch!");

static_assert(offsetof(::TheVisualEngine::TVEElementBufferData, ___nearTexName) == 0x98, "Offset mismatch!");

static_assert(offsetof(::TheVisualEngine::TVEElementBufferData, ___nearTexCoord) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::TheVisualEngine::TVEElementBufferData, ___texParams) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::TheVisualEngine::TVEElementBufferData, ___texLayers) == 0xb0, "Offset mismatch!");

static_assert(sizeof(::TheVisualEngine::TVEElementBufferData) == 0xb8, "Size mismatch!");

} // namespace end def TheVisualEngine

#pragma once
// IWYU pragma private; include "UnityEngine/Texture.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Object_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(Texture)
namespace System {
struct IntPtr;
}
namespace UnityEngine::Experimental::Rendering {
struct GraphicsFormatUsage;
}
namespace UnityEngine::Experimental::Rendering {
struct GraphicsFormat;
}
namespace UnityEngine::Rendering {
struct TextureDimension;
}
namespace UnityEngine {
struct ColorSpace;
}
namespace UnityEngine {
struct FilterMode;
}
namespace UnityEngine {
struct TextureColorSpace;
}
namespace UnityEngine {
struct TextureFormat;
}
namespace UnityEngine {
struct TextureWrapMode;
}
namespace UnityEngine {
class UnityException;
}
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace UnityEngine {
class Texture;
}
// Write type traits
MARK_REF_T(::UnityEngine::Texture*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Texture*, "UnityEngine", "Texture");
// Dependencies UnityEngine.Object
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.Texture
class CORDL_TYPE Texture : public ::UnityEngine::Object {
public:
// Declarations
/// @brief Field GenerateAllMips, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_GenerateAllMips, put=setStaticF_GenerateAllMips)) int32_t  GenerateAllMips;

 __declspec(property(get=get_activeTextureColorSpace)) ::UnityEngine::ColorSpace  activeTextureColorSpace;

 __declspec(property(get=get_anisoLevel, put=set_anisoLevel)) int32_t  anisoLevel;

 __declspec(property(get=get_dimension, put=set_dimension)) ::UnityEngine::Rendering::TextureDimension  dimension;

 __declspec(property(get=get_filterMode, put=set_filterMode)) ::UnityEngine::FilterMode  filterMode;

 __declspec(property(get=get_graphicsFormat)) ::UnityEngine::Experimental::Rendering::GraphicsFormat  graphicsFormat;

 __declspec(property(get=get_height, put=set_height)) int32_t  height;

 __declspec(property(get=get_isDataSRGB)) bool  isDataSRGB;

 __declspec(property(get=get_isReadable)) bool  isReadable;

 __declspec(property(get=get_mipMapBias, put=set_mipMapBias)) float_t  mipMapBias;

 __declspec(property(get=get_mipmapCount)) int32_t  mipmapCount;

 __declspec(property(get=get_texelSize)) ::UnityEngine::Vector2  texelSize;

 __declspec(property(get=get_updateCount)) uint32_t  updateCount;

 __declspec(property(get=get_width, put=set_width)) int32_t  width;

 __declspec(property(get=get_wrapMode, put=set_wrapMode)) ::UnityEngine::TextureWrapMode  wrapMode;

 __declspec(property(put=set_wrapModeU)) ::UnityEngine::TextureWrapMode  wrapModeU;

 __declspec(property(put=set_wrapModeV)) ::UnityEngine::TextureWrapMode  wrapModeV;

 __declspec(property(put=set_wrapModeW)) ::UnityEngine::TextureWrapMode  wrapModeW;

/// @brief Method CreateNativeArrayLengthOverflowException, addr 0x182261070, size 0x30, virtual false, abstract: false, final false
inline ::UnityEngine::UnityException* CreateNativeArrayLengthOverflowException() ;

/// @brief Method CreateNonReadableException, addr 0x1822610a0, size 0x60, virtual false, abstract: false, final false
inline ::UnityEngine::UnityException* CreateNonReadableException(::UnityEngine::Texture*  t) ;

/// @brief Method GetDataHeight, addr 0x182261110, size 0x30, virtual false, abstract: false, final false
inline int32_t GetDataHeight() ;

/// @brief Method GetDataHeight_Injected, addr 0x182261100, size 0x10, virtual false, abstract: false, final false
static inline int32_t GetDataHeight_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method GetDataWidth, addr 0x182261150, size 0x30, virtual false, abstract: false, final false
inline int32_t GetDataWidth() ;

/// @brief Method GetDataWidth_Injected, addr 0x182261140, size 0x10, virtual false, abstract: false, final false
static inline int32_t GetDataWidth_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method GetDimension, addr 0x182261190, size 0x30, virtual false, abstract: false, final false
inline ::UnityEngine::Rendering::TextureDimension GetDimension() ;

/// @brief Method GetDimension_Injected, addr 0x182261180, size 0x10, virtual false, abstract: false, final false
static inline ::UnityEngine::Rendering::TextureDimension GetDimension_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method GetNativeTexturePtr, addr 0x1822611d0, size 0x30, virtual false, abstract: false, final false
inline ::System::IntPtr GetNativeTexturePtr() ;

/// @brief Method GetNativeTexturePtr_Injected, addr 0x1822611c0, size 0x10, virtual false, abstract: false, final false
static inline ::System::IntPtr GetNativeTexturePtr_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method GetPixelDataOffset, addr 0x182261210, size 0x40, virtual false, abstract: false, final false
inline uint64_t GetPixelDataOffset(int32_t  mipLevel, int32_t  element) ;

/// @brief Method GetPixelDataOffset_Injected, addr 0x182261200, size 0x10, virtual false, abstract: false, final false
static inline uint64_t GetPixelDataOffset_Injected(::System::IntPtr  _unity_self, int32_t  mipLevel, int32_t  element) ;

/// @brief Method GetPixelDataSize, addr 0x182261260, size 0x40, virtual false, abstract: false, final false
inline uint64_t GetPixelDataSize(int32_t  mipLevel, int32_t  element) ;

/// @brief Method GetPixelDataSize_Injected, addr 0x182261250, size 0x10, virtual false, abstract: false, final false
static inline uint64_t GetPixelDataSize_Injected(::System::IntPtr  _unity_self, int32_t  mipLevel, int32_t  element) ;

/// @brief Method GetTextureColorSpace, addr 0x1822612a0, size 0x20, virtual false, abstract: false, final false
inline ::UnityEngine::TextureColorSpace GetTextureColorSpace(::UnityEngine::Experimental::Rendering::GraphicsFormat  format) ;

/// @brief Method GetTextureColorSpace, addr 0x1822612c0, size 0x10, virtual false, abstract: false, final false
inline ::UnityEngine::TextureColorSpace GetTextureColorSpace(bool  linear) ;

/// @brief Method IncrementUpdateCount, addr 0x1822612e0, size 0x30, virtual false, abstract: false, final false
inline void IncrementUpdateCount() ;

/// @brief Method IncrementUpdateCount_Injected, addr 0x1822612d0, size 0x10, virtual false, abstract: false, final false
static inline void IncrementUpdateCount_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method Internal_GetActiveTextureColorSpace, addr 0x182261320, size 0x30, virtual false, abstract: false, final false
inline int32_t Internal_GetActiveTextureColorSpace() ;

/// @brief Method Internal_GetActiveTextureColorSpace_Injected, addr 0x182261310, size 0x10, virtual false, abstract: false, final false
static inline int32_t Internal_GetActiveTextureColorSpace_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method Internal_GetStoredColorSpace, addr 0x182261360, size 0x30, virtual false, abstract: false, final false
inline ::UnityEngine::TextureColorSpace Internal_GetStoredColorSpace() ;

/// @brief Method Internal_GetStoredColorSpace_Injected, addr 0x182261350, size 0x10, virtual false, abstract: false, final false
static inline ::UnityEngine::TextureColorSpace Internal_GetStoredColorSpace_Injected(::System::IntPtr  _unity_self) ;

static inline ::UnityEngine::Texture* New_ctor() ;

/// @brief Method SetStreamingTextureMaterialDebugProperties, addr 0x182261390, size 0x10, virtual false, abstract: false, final false
static inline void SetStreamingTextureMaterialDebugProperties(int32_t  materialTextureSlot) ;

/// @brief Method SetStreamingTextureMaterialDebugPropertiesWithSlot, addr 0x182261390, size 0x10, virtual false, abstract: false, final false
static inline void SetStreamingTextureMaterialDebugPropertiesWithSlot(int32_t  materialTextureSlot) ;

/// @brief Method ValidateFormat, addr 0x182261490, size 0xc0, virtual false, abstract: false, final false
inline bool ValidateFormat(::UnityEngine::Experimental::Rendering::GraphicsFormat  format, ::UnityEngine::Experimental::Rendering::GraphicsFormatUsage  usage) ;

/// @brief Method ValidateFormat, addr 0x1822613a0, size 0xf0, virtual false, abstract: false, final false
inline bool ValidateFormat(::UnityEngine::TextureFormat  format) ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

static inline int32_t getStaticF_GenerateAllMips() ;

/// @brief Method get_activeTextureColorSpace, addr 0x182261580, size 0x40, virtual false, abstract: false, final false
inline ::UnityEngine::ColorSpace get_activeTextureColorSpace() ;

/// @brief Method get_anisoLevel, addr 0x1822615d0, size 0x30, virtual false, abstract: false, final false
inline int32_t get_anisoLevel() ;

/// @brief Method get_anisoLevel_Injected, addr 0x1822615c0, size 0x10, virtual false, abstract: false, final false
static inline int32_t get_anisoLevel_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_dimension, addr 0x182261190, size 0x30, virtual true, abstract: false, final false
inline ::UnityEngine::Rendering::TextureDimension get_dimension() ;

/// @brief Method get_filterMode, addr 0x182261610, size 0x30, virtual false, abstract: false, final false
inline ::UnityEngine::FilterMode get_filterMode() ;

/// @brief Method get_filterMode_Injected, addr 0x182261600, size 0x10, virtual false, abstract: false, final false
static inline ::UnityEngine::FilterMode get_filterMode_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_graphicsFormat, addr 0x182261640, size 0x10, virtual true, abstract: false, final false
inline ::UnityEngine::Experimental::Rendering::GraphicsFormat get_graphicsFormat() ;

/// @brief Method get_height, addr 0x182261110, size 0x30, virtual true, abstract: false, final false
inline int32_t get_height() ;

/// @brief Method get_isDataSRGB, addr 0x182261650, size 0x30, virtual false, abstract: false, final false
inline bool get_isDataSRGB() ;

/// @brief Method get_isReadable, addr 0x182261690, size 0x30, virtual true, abstract: false, final false
inline bool get_isReadable() ;

/// @brief Method get_isReadable_Injected, addr 0x182261680, size 0x10, virtual false, abstract: false, final false
static inline bool get_isReadable_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_mipMapBias, addr 0x1822616d0, size 0x30, virtual false, abstract: false, final false
inline float_t get_mipMapBias() ;

/// @brief Method get_mipMapBias_Injected, addr 0x1822616c0, size 0x10, virtual false, abstract: false, final false
static inline float_t get_mipMapBias_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_mipmapCount, addr 0x182261710, size 0x30, virtual false, abstract: false, final false
inline int32_t get_mipmapCount() ;

/// @brief Method get_mipmapCount_Injected, addr 0x182261700, size 0x10, virtual false, abstract: false, final false
static inline int32_t get_mipmapCount_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_streamingTextureDiscardUnusedMips, addr 0x182261740, size 0x10, virtual false, abstract: false, final false
static inline bool get_streamingTextureDiscardUnusedMips() ;

/// @brief Method get_texelSize, addr 0x182261760, size 0x40, virtual false, abstract: false, final false
inline ::UnityEngine::Vector2 get_texelSize() ;

/// @brief Method get_texelSize_Injected, addr 0x182261750, size 0x10, virtual false, abstract: false, final false
static inline void get_texelSize_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Vector2>  ret) ;

/// @brief Method get_updateCount, addr 0x1822617b0, size 0x30, virtual false, abstract: false, final false
inline uint32_t get_updateCount() ;

/// @brief Method get_updateCount_Injected, addr 0x1822617a0, size 0x10, virtual false, abstract: false, final false
static inline uint32_t get_updateCount_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_width, addr 0x182261150, size 0x30, virtual true, abstract: false, final false
inline int32_t get_width() ;

/// @brief Method get_wrapMode, addr 0x1822617f0, size 0x30, virtual false, abstract: false, final false
inline ::UnityEngine::TextureWrapMode get_wrapMode() ;

/// @brief Method get_wrapMode_Injected, addr 0x1822617e0, size 0x10, virtual false, abstract: false, final false
static inline ::UnityEngine::TextureWrapMode get_wrapMode_Injected(::System::IntPtr  _unity_self) ;

static inline void setStaticF_GenerateAllMips(int32_t  value) ;

/// @brief Method set_anisoLevel, addr 0x182261830, size 0x30, virtual false, abstract: false, final false
inline void set_anisoLevel(int32_t  value) ;

/// @brief Method set_anisoLevel_Injected, addr 0x182261820, size 0x10, virtual false, abstract: false, final false
static inline void set_anisoLevel_Injected(::System::IntPtr  _unity_self, int32_t  value) ;

/// @brief Method set_dimension, addr 0x1805b4350, size 0x30, virtual true, abstract: false, final false
inline void set_dimension(::UnityEngine::Rendering::TextureDimension  value) ;

/// @brief Method set_filterMode, addr 0x182261870, size 0x30, virtual false, abstract: false, final false
inline void set_filterMode(::UnityEngine::FilterMode  value) ;

/// @brief Method set_filterMode_Injected, addr 0x182261860, size 0x10, virtual false, abstract: false, final false
static inline void set_filterMode_Injected(::System::IntPtr  _unity_self, ::UnityEngine::FilterMode  value) ;

/// @brief Method set_height, addr 0x1805b4350, size 0x30, virtual true, abstract: false, final false
inline void set_height(int32_t  value) ;

/// @brief Method set_mipMapBias, addr 0x1822618b0, size 0x40, virtual false, abstract: false, final false
inline void set_mipMapBias(float_t  value) ;

/// @brief Method set_mipMapBias_Injected, addr 0x1822618a0, size 0x10, virtual false, abstract: false, final false
static inline void set_mipMapBias_Injected(::System::IntPtr  _unity_self, float_t  value) ;

/// @brief Method set_streamingTextureDiscardUnusedMips, addr 0x1822618f0, size 0x10, virtual false, abstract: false, final false
static inline void set_streamingTextureDiscardUnusedMips(bool  value) ;

/// @brief Method set_width, addr 0x1805b4350, size 0x30, virtual true, abstract: false, final false
inline void set_width(int32_t  value) ;

/// @brief Method set_wrapMode, addr 0x1822619d0, size 0x310, virtual false, abstract: false, final false
inline void set_wrapMode(::UnityEngine::TextureWrapMode  value) ;

/// @brief Method set_wrapModeU, addr 0x182261910, size 0x30, virtual false, abstract: false, final false
inline void set_wrapModeU(::UnityEngine::TextureWrapMode  value) ;

/// @brief Method set_wrapModeU_Injected, addr 0x182261900, size 0x10, virtual false, abstract: false, final false
static inline void set_wrapModeU_Injected(::System::IntPtr  _unity_self, ::UnityEngine::TextureWrapMode  value) ;

/// @brief Method set_wrapModeV, addr 0x182261950, size 0x30, virtual false, abstract: false, final false
inline void set_wrapModeV(::UnityEngine::TextureWrapMode  value) ;

/// @brief Method set_wrapModeV_Injected, addr 0x182261940, size 0x10, virtual false, abstract: false, final false
static inline void set_wrapModeV_Injected(::System::IntPtr  _unity_self, ::UnityEngine::TextureWrapMode  value) ;

/// @brief Method set_wrapModeW, addr 0x182261990, size 0x30, virtual false, abstract: false, final false
inline void set_wrapModeW(::UnityEngine::TextureWrapMode  value) ;

/// @brief Method set_wrapModeW_Injected, addr 0x182261980, size 0x10, virtual false, abstract: false, final false
static inline void set_wrapModeW_Injected(::System::IntPtr  _unity_self, ::UnityEngine::TextureWrapMode  value) ;

/// @brief Method set_wrapMode_Injected, addr 0x1822619c0, size 0x10, virtual false, abstract: false, final false
static inline void set_wrapMode_Injected(::System::IntPtr  _unity_self, ::UnityEngine::TextureWrapMode  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Texture() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Texture", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Texture(Texture && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Texture", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Texture(Texture const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10582};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Texture) == 0x18, "Size mismatch!");

} // namespace end def UnityEngine

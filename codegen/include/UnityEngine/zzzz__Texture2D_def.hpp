#pragma once
// IWYU pragma private; include "UnityEngine/Texture2D.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Texture_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(Texture2D)
namespace System {
struct IntPtr;
}
namespace Unity::Collections {
template<typename T>
struct NativeArray_1;
}
namespace UnityEngine::Bindings {
struct ManagedSpanWrapper;
}
namespace UnityEngine::Experimental::Rendering {
struct GraphicsFormat;
}
namespace UnityEngine::Experimental::Rendering {
struct TextureCreationFlags;
}
namespace UnityEngine {
struct Color32;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
struct MipmapLimitDescriptor;
}
namespace UnityEngine {
struct Rect;
}
namespace UnityEngine {
struct TextureColorSpace;
}
namespace UnityEngine {
struct TextureFormat;
}
// Forward declare root types
namespace UnityEngine {
class Texture2D;
}
// Write type traits
MARK_REF_T(::UnityEngine::Texture2D*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Texture2D*, "UnityEngine", "Texture2D");
// Dependencies UnityEngine.Texture
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.Texture2D
class CORDL_TYPE Texture2D : public ::UnityEngine::Texture {
public:
// Declarations
 __declspec(property(get=get_format)) ::UnityEngine::TextureFormat  format;

 __declspec(property(get=get_isReadable)) bool  isReadable;

/// @brief Method Apply, addr 0x18225e770, size 0x60, virtual false, abstract: false, final false
inline void Apply() ;

/// @brief Method Apply, addr 0x18225e7d0, size 0x70, virtual false, abstract: false, final false
inline void Apply(bool  updateMipmaps) ;

/// @brief Method Apply, addr 0x18225e6f0, size 0x80, virtual false, abstract: false, final false
inline void Apply(bool  updateMipmaps, bool  makeNoLongerReadable) ;

/// @brief Method ApplyImpl, addr 0x18225e6a0, size 0x50, virtual false, abstract: false, final false
inline void ApplyImpl(bool  updateMipmaps, bool  makeNoLongerReadable) ;

/// @brief Method ApplyImpl_Injected, addr 0x18225e690, size 0x10, virtual false, abstract: false, final false
static inline void ApplyImpl_Injected(::System::IntPtr  _unity_self, bool  updateMipmaps, bool  makeNoLongerReadable) ;

/// @brief Method GetImageDataSize, addr 0x18225e850, size 0x30, virtual false, abstract: false, final false
inline uint64_t GetImageDataSize() ;

/// @brief Method GetImageDataSize_Injected, addr 0x18225e840, size 0x10, virtual false, abstract: false, final false
static inline uint64_t GetImageDataSize_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method GetPixel, addr 0x18225ea20, size 0xa0, virtual false, abstract: false, final false
inline ::UnityEngine::Color GetPixel(int32_t  x, int32_t  y) ;

/// @brief Method GetPixelBilinear, addr 0x18225e900, size 0xa0, virtual false, abstract: false, final false
inline ::UnityEngine::Color GetPixelBilinear(float_t  u, float_t  v) ;

/// @brief Method GetPixelBilinearImpl, addr 0x18225e890, size 0x70, virtual false, abstract: false, final false
inline ::UnityEngine::Color GetPixelBilinearImpl(int32_t  image, int32_t  mip, float_t  u, float_t  v) ;

/// @brief Method GetPixelBilinearImpl_Injected, addr 0x18225e880, size 0x10, virtual false, abstract: false, final false
static inline void GetPixelBilinearImpl_Injected(::System::IntPtr  _unity_self, int32_t  image, int32_t  mip, float_t  u, float_t  v, ::by_ref<::UnityEngine::Color>  ret) ;

/// @brief Method GetPixelImpl, addr 0x18225e9b0, size 0x70, virtual false, abstract: false, final false
inline ::UnityEngine::Color GetPixelImpl(int32_t  image, int32_t  mip, int32_t  x, int32_t  y) ;

/// @brief Method GetPixelImpl_Injected, addr 0x18225e9a0, size 0x10, virtual false, abstract: false, final false
static inline void GetPixelImpl_Injected(::System::IntPtr  _unity_self, int32_t  image, int32_t  mip, int32_t  x, int32_t  y, ::by_ref<::UnityEngine::Color>  ret) ;

/// @brief Method GetPixels, addr 0x18225ec10, size 0xa0, virtual false, abstract: false, final false
inline ::ArrayW<::UnityEngine::Color> GetPixels() ;

/// @brief Method GetPixels, addr 0x18225eb50, size 0xc0, virtual false, abstract: false, final false
inline ::ArrayW<::UnityEngine::Color> GetPixels(int32_t  miplevel) ;

/// @brief Method GetPixels, addr 0x18225ecb0, size 0x50, virtual false, abstract: false, final false
inline ::ArrayW<::UnityEngine::Color> GetPixels(int32_t  x, int32_t  y, int32_t  blockWidth, int32_t  blockHeight, int32_t  miplevel) ;

/// @brief Method GetPixels32, addr 0x18225eb10, size 0x30, virtual false, abstract: false, final false
inline ::ArrayW<::UnityEngine::Color32> GetPixels32() ;

/// @brief Method GetPixels32, addr 0x18225ead0, size 0x40, virtual false, abstract: false, final false
inline ::ArrayW<::UnityEngine::Color32> GetPixels32(int32_t  miplevel) ;

/// @brief Method GetPixels32_Injected, addr 0x18225eac0, size 0x10, virtual false, abstract: false, final false
static inline ::ArrayW<::UnityEngine::Color32> GetPixels32_Injected(::System::IntPtr  _unity_self, int32_t  miplevel) ;

/// @brief Method GetPixels_Injected, addr 0x18225eb40, size 0x10, virtual false, abstract: false, final false
static inline ::ArrayW<::UnityEngine::Color> GetPixels_Injected(::System::IntPtr  _unity_self, int32_t  x, int32_t  y, int32_t  blockWidth, int32_t  blockHeight, int32_t  miplevel) ;

/// @brief Method GetRawTextureData, addr 0x18225ed10, size 0x30, virtual false, abstract: false, final false
inline ::ArrayW<uint8_t> GetRawTextureData() ;

/// @brief Method GetRawTextureData, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
inline ::Unity::Collections::NativeArray_1<T> GetRawTextureData() ;

/// @brief Method GetRawTextureData_Injected, addr 0x18225ed00, size 0x10, virtual false, abstract: false, final false
static inline ::ArrayW<uint8_t> GetRawTextureData_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method GetWritableImageData, addr 0x18225ed50, size 0x40, virtual false, abstract: false, final false
inline ::System::IntPtr GetWritableImageData(int32_t  frame) ;

/// @brief Method GetWritableImageData_Injected, addr 0x18225ed40, size 0x10, virtual false, abstract: false, final false
static inline ::System::IntPtr GetWritableImageData_Injected(::System::IntPtr  _unity_self, int32_t  frame) ;

/// @brief Method Internal_Create, addr 0x18225ef60, size 0xb0, virtual false, abstract: false, final false
static inline void Internal_Create(::UnityEngine::Texture2D*  mono, int32_t  w, int32_t  h, int32_t  mipCount, ::UnityEngine::Experimental::Rendering::GraphicsFormat  format, ::UnityEngine::TextureColorSpace  colorSpace, ::UnityEngine::Experimental::Rendering::TextureCreationFlags  flags, ::System::IntPtr  nativeTex, bool  ignoreMipmapLimit, ::StringW  mipmapLimitGroupName) ;

/// @brief Method Internal_CreateEmptyImpl, addr 0x18225ed90, size 0x10, virtual false, abstract: false, final false
static inline bool Internal_CreateEmptyImpl(::UnityEngine::Texture2D*  mono) ;

/// @brief Method Internal_CreateImpl, addr 0x18225edc0, size 0x1a0, virtual false, abstract: false, final false
static inline bool Internal_CreateImpl(::UnityEngine::Texture2D*  mono, int32_t  w, int32_t  h, int32_t  mipCount, ::UnityEngine::Experimental::Rendering::GraphicsFormat  format, ::UnityEngine::TextureColorSpace  colorSpace, ::UnityEngine::Experimental::Rendering::TextureCreationFlags  flags, ::System::IntPtr  nativeTex, bool  ignoreMipmapLimit, ::StringW  mipmapLimitGroupName) ;

/// @brief Method Internal_CreateImpl_Injected, addr 0x18225eda0, size 0x20, virtual false, abstract: false, final false
static inline bool Internal_CreateImpl_Injected(::UnityEngine::Texture2D*  mono, int32_t  w, int32_t  h, int32_t  mipCount, ::UnityEngine::Experimental::Rendering::GraphicsFormat  format, ::UnityEngine::TextureColorSpace  colorSpace, ::UnityEngine::Experimental::Rendering::TextureCreationFlags  flags, ::System::IntPtr  nativeTex, bool  ignoreMipmapLimit, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  mipmapLimitGroupName) ;

/// @brief Method LoadRawTextureData, addr 0x18225f0b0, size 0x120, virtual false, abstract: false, final false
inline void LoadRawTextureData(::ArrayW<uint8_t>  data) ;

/// @brief Method LoadRawTextureDataImplArray, addr 0x18225f020, size 0x90, virtual false, abstract: false, final false
inline bool LoadRawTextureDataImplArray(::ArrayW<uint8_t>  data) ;

/// @brief Method LoadRawTextureDataImplArray_Injected, addr 0x18225f010, size 0x10, virtual false, abstract: false, final false
static inline bool LoadRawTextureDataImplArray_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  data) ;

static inline ::UnityEngine::Texture2D* New_ctor(int32_t  width, int32_t  height) ;

static inline ::UnityEngine::Texture2D* New_ctor(int32_t  width, int32_t  height, ::UnityEngine::Experimental::Rendering::GraphicsFormat  format, ::UnityEngine::Experimental::Rendering::TextureCreationFlags  flags) ;

static inline ::UnityEngine::Texture2D* New_ctor(int32_t  width, int32_t  height, ::UnityEngine::Experimental::Rendering::GraphicsFormat  format, ::UnityEngine::Experimental::Rendering::TextureCreationFlags  flags, int32_t  mipCount, ::System::IntPtr  nativeTex, ::UnityEngine::MipmapLimitDescriptor  mipmapLimitDescriptor) ;

static inline ::UnityEngine::Texture2D* New_ctor(int32_t  width, int32_t  height, ::UnityEngine::TextureFormat  textureFormat, bool  mipChain) ;

static inline ::UnityEngine::Texture2D* New_ctor(int32_t  width, int32_t  height, ::UnityEngine::TextureFormat  textureFormat, bool  mipChain, bool  linear) ;

static inline ::UnityEngine::Texture2D* New_ctor(int32_t  width, int32_t  height, ::UnityEngine::TextureFormat  textureFormat, int32_t  mipCount, bool  linear) ;

static inline ::UnityEngine::Texture2D* New_ctor(int32_t  width, int32_t  height, ::UnityEngine::TextureFormat  textureFormat, int32_t  mipCount, bool  linear, ::System::IntPtr  nativeTex, bool  createUninitialized, ::UnityEngine::MipmapLimitDescriptor  mipmapLimitDescriptor) ;

/// @brief Method ReadPixels, addr 0x18225f240, size 0xa0, virtual false, abstract: false, final false
inline void ReadPixels(::UnityEngine::Rect  source, int32_t  destX, int32_t  destY) ;

/// @brief Method ReadPixels, addr 0x18225f2e0, size 0xa0, virtual false, abstract: false, final false
inline void ReadPixels(::UnityEngine::Rect  source, int32_t  destX, int32_t  destY, bool  recalculateMipMaps) ;

/// @brief Method ReadPixelsImpl, addr 0x18225f1e0, size 0x60, virtual false, abstract: false, final false
inline void ReadPixelsImpl(::UnityEngine::Rect  source, int32_t  destX, int32_t  destY, bool  recalculateMipMaps) ;

/// @brief Method ReadPixelsImpl_Injected, addr 0x18225f1d0, size 0x10, virtual false, abstract: false, final false
static inline void ReadPixelsImpl_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Rect>  source, int32_t  destX, int32_t  destY, bool  recalculateMipMaps) ;

/// @brief Method Reinitialize, addr 0x18225f450, size 0x80, virtual false, abstract: false, final false
inline bool Reinitialize(int32_t  width, int32_t  height) ;

/// @brief Method Reinitialize, addr 0x18225f3f0, size 0x60, virtual false, abstract: false, final false
inline bool Reinitialize(int32_t  width, int32_t  height, ::UnityEngine::TextureFormat  format, bool  hasMipMap) ;

/// @brief Method ReinitializeImpl, addr 0x18225f390, size 0x40, virtual false, abstract: false, final false
inline bool ReinitializeImpl(int32_t  width, int32_t  height) ;

/// @brief Method ReinitializeImpl_Injected, addr 0x18225f380, size 0x10, virtual false, abstract: false, final false
static inline bool ReinitializeImpl_Injected(::System::IntPtr  _unity_self, int32_t  width, int32_t  height) ;

/// @brief Method ReinitializeWithTextureFormatImpl, addr 0x18225f3f0, size 0x60, virtual false, abstract: false, final false
inline bool ReinitializeWithTextureFormatImpl(int32_t  width, int32_t  height, ::UnityEngine::TextureFormat  textureFormat, bool  hasMipMap) ;

/// @brief Method ReinitializeWithTextureFormatImpl_Injected, addr 0x18225f3d0, size 0x20, virtual false, abstract: false, final false
static inline bool ReinitializeWithTextureFormatImpl_Injected(::System::IntPtr  _unity_self, int32_t  width, int32_t  height, ::UnityEngine::TextureFormat  textureFormat, bool  hasMipMap) ;

/// @brief Method SetAllPixels32, addr 0x18225f4e0, size 0xa0, virtual false, abstract: false, final false
inline void SetAllPixels32(::ArrayW<::UnityEngine::Color32>  colors, int32_t  miplevel) ;

/// @brief Method SetAllPixels32_Injected, addr 0x18225f4d0, size 0x10, virtual false, abstract: false, final false
static inline void SetAllPixels32_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  colors, int32_t  miplevel) ;

/// @brief Method SetPixel, addr 0x18225f5f0, size 0xa0, virtual false, abstract: false, final false
inline void SetPixel(int32_t  x, int32_t  y, ::UnityEngine::Color  color) ;

/// @brief Method SetPixelImpl, addr 0x18225f590, size 0x60, virtual false, abstract: false, final false
inline void SetPixelImpl(int32_t  image, int32_t  mip, int32_t  x, int32_t  y, ::UnityEngine::Color  color) ;

/// @brief Method SetPixelImpl_Injected, addr 0x18225f580, size 0x10, virtual false, abstract: false, final false
static inline void SetPixelImpl_Injected(::System::IntPtr  _unity_self, int32_t  image, int32_t  mip, int32_t  x, int32_t  y, ::by_ref<::UnityEngine::Color>  color) ;

/// @brief Method SetPixels, addr 0x18225f930, size 0x140, virtual false, abstract: false, final false
inline void SetPixels(::ArrayW<::UnityEngine::Color>  colors) ;

/// @brief Method SetPixels, addr 0x18225f810, size 0x120, virtual false, abstract: false, final false
inline void SetPixels(int32_t  x, int32_t  y, int32_t  blockWidth, int32_t  blockHeight, ::ArrayW<::UnityEngine::Color>  colors, int32_t  miplevel) ;

/// @brief Method SetPixels32, addr 0x18225f690, size 0x90, virtual false, abstract: false, final false
inline void SetPixels32(::ArrayW<::UnityEngine::Color32>  colors) ;

/// @brief Method SetPixels32, addr 0x18225f4e0, size 0xa0, virtual false, abstract: false, final false
inline void SetPixels32(::ArrayW<::UnityEngine::Color32>  colors, int32_t  miplevel) ;

/// @brief Method SetPixelsImpl, addr 0x18225f730, size 0xe0, virtual false, abstract: false, final false
inline void SetPixelsImpl(int32_t  x, int32_t  y, int32_t  w, int32_t  h, ::ArrayW<::UnityEngine::Color>  pixel, int32_t  miplevel, int32_t  frame) ;

/// @brief Method SetPixelsImpl_Injected, addr 0x18225f720, size 0x10, virtual false, abstract: false, final false
static inline void SetPixelsImpl_Injected(::System::IntPtr  _unity_self, int32_t  x, int32_t  y, int32_t  w, int32_t  h, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  pixel, int32_t  miplevel, int32_t  frame) ;

/// @brief Method ValidateFormat, addr 0x18225dc10, size 0xe0, virtual false, abstract: false, final false
inline bool ValidateFormat(::UnityEngine::Experimental::Rendering::GraphicsFormat  format, int32_t  width, int32_t  height) ;

/// @brief Method ValidateFormat, addr 0x18225dcf0, size 0xd0, virtual false, abstract: false, final false
inline bool ValidateFormat(::UnityEngine::TextureFormat  format, int32_t  width, int32_t  height) ;

/// @brief Method .ctor, addr 0x18225fc40, size 0x120, virtual false, abstract: false, final false
inline void _ctor(int32_t  width, int32_t  height) ;

/// @brief Method .ctor, addr 0x18225fa70, size 0x1d0, virtual false, abstract: false, final false
inline void _ctor(int32_t  width, int32_t  height, ::UnityEngine::Experimental::Rendering::GraphicsFormat  format, ::UnityEngine::Experimental::Rendering::TextureCreationFlags  flags) ;

/// @brief Method .ctor, addr 0x18225fd60, size 0x180, virtual false, abstract: false, final false
inline void _ctor(int32_t  width, int32_t  height, ::UnityEngine::Experimental::Rendering::GraphicsFormat  format, ::UnityEngine::Experimental::Rendering::TextureCreationFlags  flags, int32_t  mipCount, ::System::IntPtr  nativeTex, ::UnityEngine::MipmapLimitDescriptor  mipmapLimitDescriptor) ;

/// @brief Method .ctor, addr 0x1822602c0, size 0x160, virtual false, abstract: false, final false
inline void _ctor(int32_t  width, int32_t  height, ::UnityEngine::TextureFormat  textureFormat, bool  mipChain) ;

/// @brief Method .ctor, addr 0x182260150, size 0x170, virtual false, abstract: false, final false
inline void _ctor(int32_t  width, int32_t  height, ::UnityEngine::TextureFormat  textureFormat, bool  mipChain, bool  linear) ;

/// @brief Method .ctor, addr 0x182260000, size 0x150, virtual false, abstract: false, final false
inline void _ctor(int32_t  width, int32_t  height, ::UnityEngine::TextureFormat  textureFormat, int32_t  mipCount, bool  linear) ;

/// @brief Method .ctor, addr 0x18225fee0, size 0x120, virtual false, abstract: false, final false
inline void _ctor(int32_t  width, int32_t  height, ::UnityEngine::TextureFormat  textureFormat, int32_t  mipCount, bool  linear, ::System::IntPtr  nativeTex, bool  createUninitialized, ::UnityEngine::MipmapLimitDescriptor  mipmapLimitDescriptor) ;

/// @brief Method get_blackTexture, addr 0x182260430, size 0x20, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::Texture2D> get_blackTexture() ;

/// @brief Method get_blackTexture_Injected, addr 0x182260420, size 0x10, virtual false, abstract: false, final false
static inline ::System::IntPtr get_blackTexture_Injected() ;

/// @brief Method get_format, addr 0x182260460, size 0x30, virtual false, abstract: false, final false
inline ::UnityEngine::TextureFormat get_format() ;

/// @brief Method get_format_Injected, addr 0x182260450, size 0x10, virtual false, abstract: false, final false
static inline ::UnityEngine::TextureFormat get_format_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_grayTexture, addr 0x1822604a0, size 0x20, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::Texture2D> get_grayTexture() ;

/// @brief Method get_grayTexture_Injected, addr 0x182260490, size 0x10, virtual false, abstract: false, final false
static inline ::System::IntPtr get_grayTexture_Injected() ;

/// @brief Method get_isReadable, addr 0x1822604d0, size 0x30, virtual true, abstract: false, final false
inline bool get_isReadable() ;

/// @brief Method get_isReadable_Injected, addr 0x1822604c0, size 0x10, virtual false, abstract: false, final false
static inline bool get_isReadable_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_linearGrayTexture, addr 0x182260510, size 0x20, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::Texture2D> get_linearGrayTexture() ;

/// @brief Method get_linearGrayTexture_Injected, addr 0x182260500, size 0x10, virtual false, abstract: false, final false
static inline ::System::IntPtr get_linearGrayTexture_Injected() ;

/// @brief Method get_normalTexture, addr 0x182260540, size 0x20, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::Texture2D> get_normalTexture() ;

/// @brief Method get_normalTexture_Injected, addr 0x182260530, size 0x10, virtual false, abstract: false, final false
static inline ::System::IntPtr get_normalTexture_Injected() ;

/// @brief Method get_redTexture, addr 0x182260570, size 0x20, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::Texture2D> get_redTexture() ;

/// @brief Method get_redTexture_Injected, addr 0x182260560, size 0x10, virtual false, abstract: false, final false
static inline ::System::IntPtr get_redTexture_Injected() ;

/// @brief Method get_whiteTexture, addr 0x1822605a0, size 0x20, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::Texture2D> get_whiteTexture() ;

/// @brief Method get_whiteTexture_Injected, addr 0x182260590, size 0x10, virtual false, abstract: false, final false
static inline ::System::IntPtr get_whiteTexture_Injected() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Texture2D() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Texture2D", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Texture2D(Texture2D && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Texture2D", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Texture2D(Texture2D const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10583};

/// @brief Field streamingMipmapsPriorityMax offset 0xffffffff size 0x4
static constexpr int32_t  streamingMipmapsPriorityMax{static_cast<int32_t>(0x7f)};

/// @brief Field streamingMipmapsPriorityMin offset 0xffffffff size 0x4
static constexpr int32_t  streamingMipmapsPriorityMin{static_cast<int32_t>(0xffffff80)};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Texture2D) == 0x18, "Size mismatch!");

} // namespace end def UnityEngine

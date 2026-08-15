#pragma once
// IWYU pragma private; include "UnityEngine/Texture2DArray.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Texture_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Texture2DArray)
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
struct DefaultFormat;
}
namespace UnityEngine::Experimental::Rendering {
struct GraphicsFormat;
}
namespace UnityEngine::Experimental::Rendering {
struct TextureCreationFlags;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
struct MipmapLimitDescriptor;
}
namespace UnityEngine {
struct TextureColorSpace;
}
namespace UnityEngine {
struct TextureFormat;
}
// Forward declare root types
namespace UnityEngine {
class Texture2DArray;
}
// Write type traits
MARK_REF_T(::UnityEngine::Texture2DArray*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Texture2DArray*, "UnityEngine", "Texture2DArray");
// Dependencies UnityEngine.Texture
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.Texture2DArray
class CORDL_TYPE Texture2DArray : public ::UnityEngine::Texture {
public:
// Declarations
 __declspec(property(get=get_depth)) int32_t  depth;

 __declspec(property(get=get_isReadable)) bool  isReadable;

/// @brief Method Apply, addr 0x18225d6a0, size 0x60, virtual false, abstract: false, final false
inline void Apply() ;

/// @brief Method Apply, addr 0x18225d700, size 0x80, virtual false, abstract: false, final false
inline void Apply(bool  updateMipmaps, bool  makeNoLongerReadable) ;

/// @brief Method ApplyImpl, addr 0x18225d650, size 0x50, virtual false, abstract: false, final false
inline void ApplyImpl(bool  updateMipmaps, bool  makeNoLongerReadable) ;

/// @brief Method ApplyImpl_Injected, addr 0x18225d640, size 0x10, virtual false, abstract: false, final false
static inline void ApplyImpl_Injected(::System::IntPtr  _unity_self, bool  updateMipmaps, bool  makeNoLongerReadable) ;

/// @brief Method GetPixels, addr 0x18225d790, size 0x40, virtual false, abstract: false, final false
inline ::ArrayW<::UnityEngine::Color> GetPixels(int32_t  arrayElement, int32_t  miplevel) ;

/// @brief Method GetPixels_Injected, addr 0x18225d780, size 0x10, virtual false, abstract: false, final false
static inline ::ArrayW<::UnityEngine::Color> GetPixels_Injected(::System::IntPtr  _unity_self, int32_t  arrayElement, int32_t  miplevel) ;

/// @brief Method Internal_Create, addr 0x18225d990, size 0xb0, virtual false, abstract: false, final false
static inline void Internal_Create(::UnityEngine::Texture2DArray*  mono, int32_t  w, int32_t  h, int32_t  d, int32_t  mipCount, ::UnityEngine::Experimental::Rendering::GraphicsFormat  format, ::UnityEngine::TextureColorSpace  colorSpace, ::UnityEngine::Experimental::Rendering::TextureCreationFlags  flags, bool  ignoreMipmapLimit, ::StringW  mipmapLimitGroupName) ;

/// @brief Method Internal_CreateImpl, addr 0x18225d7f0, size 0x1a0, virtual false, abstract: false, final false
static inline bool Internal_CreateImpl(::UnityEngine::Texture2DArray*  mono, int32_t  w, int32_t  h, int32_t  d, int32_t  mipCount, ::UnityEngine::Experimental::Rendering::GraphicsFormat  format, ::UnityEngine::TextureColorSpace  colorSpace, ::UnityEngine::Experimental::Rendering::TextureCreationFlags  flags, bool  ignoreMipmapLimit, ::StringW  mipmapLimitGroupName) ;

/// @brief Method Internal_CreateImpl_Injected, addr 0x18225d7d0, size 0x20, virtual false, abstract: false, final false
static inline bool Internal_CreateImpl_Injected(::UnityEngine::Texture2DArray*  mono, int32_t  w, int32_t  h, int32_t  d, int32_t  mipCount, ::UnityEngine::Experimental::Rendering::GraphicsFormat  format, ::UnityEngine::TextureColorSpace  colorSpace, ::UnityEngine::Experimental::Rendering::TextureCreationFlags  flags, bool  ignoreMipmapLimit, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  mipmapLimitGroupName) ;

static inline ::UnityEngine::Texture2DArray* New_ctor(int32_t  width, int32_t  height, int32_t  depth, ::UnityEngine::Experimental::Rendering::DefaultFormat  format, ::UnityEngine::Experimental::Rendering::TextureCreationFlags  flags) ;

static inline ::UnityEngine::Texture2DArray* New_ctor(int32_t  width, int32_t  height, int32_t  depth, ::UnityEngine::Experimental::Rendering::DefaultFormat  format, ::UnityEngine::Experimental::Rendering::TextureCreationFlags  flags, int32_t  mipCount) ;

static inline ::UnityEngine::Texture2DArray* New_ctor(int32_t  width, int32_t  height, int32_t  depth, ::UnityEngine::Experimental::Rendering::DefaultFormat  format, ::UnityEngine::Experimental::Rendering::TextureCreationFlags  flags, int32_t  mipCount, ::UnityEngine::MipmapLimitDescriptor  mipmapLimitDescriptor) ;

static inline ::UnityEngine::Texture2DArray* New_ctor(int32_t  width, int32_t  height, int32_t  depth, ::UnityEngine::Experimental::Rendering::GraphicsFormat  format, ::UnityEngine::Experimental::Rendering::TextureCreationFlags  flags) ;

static inline ::UnityEngine::Texture2DArray* New_ctor(int32_t  width, int32_t  height, int32_t  depth, ::UnityEngine::Experimental::Rendering::GraphicsFormat  format, ::UnityEngine::Experimental::Rendering::TextureCreationFlags  flags, int32_t  mipCount) ;

static inline ::UnityEngine::Texture2DArray* New_ctor(int32_t  width, int32_t  height, int32_t  depth, ::UnityEngine::Experimental::Rendering::GraphicsFormat  format, ::UnityEngine::Experimental::Rendering::TextureCreationFlags  flags, int32_t  mipCount, ::UnityEngine::MipmapLimitDescriptor  mipmapLimitDescriptor) ;

static inline ::UnityEngine::Texture2DArray* New_ctor(int32_t  width, int32_t  height, int32_t  depth, ::UnityEngine::TextureFormat  textureFormat, bool  mipChain) ;

static inline ::UnityEngine::Texture2DArray* New_ctor(int32_t  width, int32_t  height, int32_t  depth, ::UnityEngine::TextureFormat  textureFormat, bool  mipChain, bool  linear) ;

static inline ::UnityEngine::Texture2DArray* New_ctor(int32_t  width, int32_t  height, int32_t  depth, ::UnityEngine::TextureFormat  textureFormat, bool  mipChain, bool  linear, bool  createUninitialized) ;

static inline ::UnityEngine::Texture2DArray* New_ctor(int32_t  width, int32_t  height, int32_t  depth, ::UnityEngine::TextureFormat  textureFormat, int32_t  mipCount, bool  linear) ;

static inline ::UnityEngine::Texture2DArray* New_ctor(int32_t  width, int32_t  height, int32_t  depth, ::UnityEngine::TextureFormat  textureFormat, int32_t  mipCount, bool  linear, bool  createUninitialized) ;

static inline ::UnityEngine::Texture2DArray* New_ctor(int32_t  width, int32_t  height, int32_t  depth, ::UnityEngine::TextureFormat  textureFormat, int32_t  mipCount, bool  linear, bool  createUninitialized, ::UnityEngine::MipmapLimitDescriptor  mipmapLimitDescriptor) ;

/// @brief Method SetPixelData, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
inline void SetPixelData(::Unity::Collections::NativeArray_1<T>  data, int32_t  mipLevel, int32_t  element, int32_t  sourceDataStartIndex) ;

/// @brief Method SetPixelDataImpl, addr 0x18225da50, size 0x60, virtual false, abstract: false, final false
inline bool SetPixelDataImpl(::System::IntPtr  data, int32_t  mipLevel, int32_t  element, int32_t  elementSize, int32_t  dataArraySize, int32_t  sourceDataStartIndex) ;

/// @brief Method SetPixelDataImpl_Injected, addr 0x18225da40, size 0x10, virtual false, abstract: false, final false
static inline bool SetPixelDataImpl_Injected(::System::IntPtr  _unity_self, ::System::IntPtr  data, int32_t  mipLevel, int32_t  element, int32_t  elementSize, int32_t  dataArraySize, int32_t  sourceDataStartIndex) ;

/// @brief Method SetPixels, addr 0x18225dac0, size 0xa0, virtual false, abstract: false, final false
inline void SetPixels(::ArrayW<::UnityEngine::Color>  colors, int32_t  arrayElement) ;

/// @brief Method SetPixels, addr 0x18225db60, size 0xb0, virtual false, abstract: false, final false
inline void SetPixels(::ArrayW<::UnityEngine::Color>  colors, int32_t  arrayElement, int32_t  miplevel) ;

/// @brief Method SetPixels_Injected, addr 0x18225dab0, size 0x10, virtual false, abstract: false, final false
static inline void SetPixels_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  colors, int32_t  arrayElement, int32_t  miplevel) ;

/// @brief Method ValidateFormat, addr 0x18225dc10, size 0xe0, virtual false, abstract: false, final false
inline bool ValidateFormat(::UnityEngine::Experimental::Rendering::GraphicsFormat  format, int32_t  width, int32_t  height) ;

/// @brief Method ValidateFormat, addr 0x18225dcf0, size 0xd0, virtual false, abstract: false, final false
inline bool ValidateFormat(::UnityEngine::TextureFormat  format, int32_t  width, int32_t  height) ;

/// @brief Method ValidateIsNotCrunched, addr 0x18225ddc0, size 0x20, virtual false, abstract: false, final false
static inline void ValidateIsNotCrunched(::UnityEngine::Experimental::Rendering::TextureCreationFlags  flags) ;

/// @brief Method .ctor, addr 0x18225e560, size 0xa0, virtual false, abstract: false, final false
inline void _ctor(int32_t  width, int32_t  height, int32_t  depth, ::UnityEngine::Experimental::Rendering::DefaultFormat  format, ::UnityEngine::Experimental::Rendering::TextureCreationFlags  flags) ;

/// @brief Method .ctor, addr 0x18225de50, size 0x90, virtual false, abstract: false, final false
inline void _ctor(int32_t  width, int32_t  height, int32_t  depth, ::UnityEngine::Experimental::Rendering::DefaultFormat  format, ::UnityEngine::Experimental::Rendering::TextureCreationFlags  flags, int32_t  mipCount) ;

/// @brief Method .ctor, addr 0x18225df40, size 0xa0, virtual false, abstract: false, final false
inline void _ctor(int32_t  width, int32_t  height, int32_t  depth, ::UnityEngine::Experimental::Rendering::DefaultFormat  format, ::UnityEngine::Experimental::Rendering::TextureCreationFlags  flags, int32_t  mipCount, ::UnityEngine::MipmapLimitDescriptor  mipmapLimitDescriptor) ;

/// @brief Method .ctor, addr 0x18225dfe0, size 0x60, virtual false, abstract: false, final false
inline void _ctor(int32_t  width, int32_t  height, int32_t  depth, ::UnityEngine::Experimental::Rendering::GraphicsFormat  format, ::UnityEngine::Experimental::Rendering::TextureCreationFlags  flags) ;

/// @brief Method .ctor, addr 0x18225e1e0, size 0x50, virtual false, abstract: false, final false
inline void _ctor(int32_t  width, int32_t  height, int32_t  depth, ::UnityEngine::Experimental::Rendering::GraphicsFormat  format, ::UnityEngine::Experimental::Rendering::TextureCreationFlags  flags, int32_t  mipCount) ;

/// @brief Method .ctor, addr 0x18225e040, size 0x1a0, virtual false, abstract: false, final false
inline void _ctor(int32_t  width, int32_t  height, int32_t  depth, ::UnityEngine::Experimental::Rendering::GraphicsFormat  format, ::UnityEngine::Experimental::Rendering::TextureCreationFlags  flags, int32_t  mipCount, ::UnityEngine::MipmapLimitDescriptor  mipmapLimitDescriptor) ;

/// @brief Method .ctor, addr 0x18225dde0, size 0x70, virtual false, abstract: false, final false
inline void _ctor(int32_t  width, int32_t  height, int32_t  depth, ::UnityEngine::TextureFormat  textureFormat, bool  mipChain) ;

/// @brief Method .ctor, addr 0x18225e290, size 0x70, virtual false, abstract: false, final false
inline void _ctor(int32_t  width, int32_t  height, int32_t  depth, ::UnityEngine::TextureFormat  textureFormat, bool  mipChain, bool  linear) ;

/// @brief Method .ctor, addr 0x18225e300, size 0x80, virtual false, abstract: false, final false
inline void _ctor(int32_t  width, int32_t  height, int32_t  depth, ::UnityEngine::TextureFormat  textureFormat, bool  mipChain, bool  linear, bool  createUninitialized) ;

/// @brief Method .ctor, addr 0x18225e230, size 0x60, virtual false, abstract: false, final false
inline void _ctor(int32_t  width, int32_t  height, int32_t  depth, ::UnityEngine::TextureFormat  textureFormat, int32_t  mipCount, bool  linear) ;

/// @brief Method .ctor, addr 0x18225dee0, size 0x60, virtual false, abstract: false, final false
inline void _ctor(int32_t  width, int32_t  height, int32_t  depth, ::UnityEngine::TextureFormat  textureFormat, int32_t  mipCount, bool  linear, bool  createUninitialized) ;

/// @brief Method .ctor, addr 0x18225e380, size 0x1e0, virtual false, abstract: false, final false
inline void _ctor(int32_t  width, int32_t  height, int32_t  depth, ::UnityEngine::TextureFormat  textureFormat, int32_t  mipCount, bool  linear, bool  createUninitialized, ::UnityEngine::MipmapLimitDescriptor  mipmapLimitDescriptor) ;

/// @brief Method get_allSlices, addr 0x18225e600, size 0x10, virtual false, abstract: false, final false
static inline int32_t get_allSlices() ;

/// @brief Method get_depth, addr 0x18225e620, size 0x30, virtual false, abstract: false, final false
inline int32_t get_depth() ;

/// @brief Method get_depth_Injected, addr 0x18225e610, size 0x10, virtual false, abstract: false, final false
static inline int32_t get_depth_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_isReadable, addr 0x18225e660, size 0x30, virtual true, abstract: false, final false
inline bool get_isReadable() ;

/// @brief Method get_isReadable_Injected, addr 0x18225e650, size 0x10, virtual false, abstract: false, final false
static inline bool get_isReadable_Injected(::System::IntPtr  _unity_self) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Texture2DArray() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Texture2DArray", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Texture2DArray(Texture2DArray && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Texture2DArray", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Texture2DArray(Texture2DArray const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10586};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Texture2DArray) == 0x18, "Size mismatch!");

} // namespace end def UnityEngine

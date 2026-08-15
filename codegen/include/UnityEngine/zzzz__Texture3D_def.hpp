#pragma once
// IWYU pragma private; include "UnityEngine/Texture3D.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Texture_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Texture3D)
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
struct TextureColorSpace;
}
namespace UnityEngine {
struct TextureFormat;
}
// Forward declare root types
namespace UnityEngine {
class Texture3D;
}
// Write type traits
MARK_REF_T(::UnityEngine::Texture3D*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Texture3D*, "UnityEngine", "Texture3D");
// Dependencies UnityEngine.Texture
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.Texture3D
class CORDL_TYPE Texture3D : public ::UnityEngine::Texture {
public:
// Declarations
 __declspec(property(get=get_depth)) int32_t  depth;

 __declspec(property(get=get_isReadable)) bool  isReadable;

/// @brief Method Apply, addr 0x182260620, size 0x60, virtual false, abstract: false, final false
inline void Apply() ;

/// @brief Method Apply, addr 0x182260680, size 0x70, virtual false, abstract: false, final false
inline void Apply(bool  updateMipmaps) ;

/// @brief Method Apply, addr 0x1822606f0, size 0x80, virtual false, abstract: false, final false
inline void Apply(bool  updateMipmaps, bool  makeNoLongerReadable) ;

/// @brief Method ApplyImpl, addr 0x1822605d0, size 0x50, virtual false, abstract: false, final false
inline void ApplyImpl(bool  updateMipmaps, bool  makeNoLongerReadable) ;

/// @brief Method ApplyImpl_Injected, addr 0x1822605c0, size 0x10, virtual false, abstract: false, final false
static inline void ApplyImpl_Injected(::System::IntPtr  _unity_self, bool  updateMipmaps, bool  makeNoLongerReadable) ;

/// @brief Method GetImageData, addr 0x182260780, size 0x30, virtual false, abstract: false, final false
inline ::System::IntPtr GetImageData() ;

/// @brief Method GetImageData_Injected, addr 0x182260770, size 0x10, virtual false, abstract: false, final false
static inline ::System::IntPtr GetImageData_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method GetPixelData, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
inline ::Unity::Collections::NativeArray_1<T> GetPixelData(int32_t  mipLevel) ;

/// @brief Method Internal_Create, addr 0x1822607c0, size 0xa0, virtual false, abstract: false, final false
static inline void Internal_Create(::UnityEngine::Texture3D*  mono, int32_t  w, int32_t  h, int32_t  d, int32_t  mipCount, ::UnityEngine::Experimental::Rendering::GraphicsFormat  format, ::UnityEngine::TextureColorSpace  colorSpace, ::UnityEngine::Experimental::Rendering::TextureCreationFlags  flags, ::System::IntPtr  nativeTex) ;

/// @brief Method Internal_CreateImpl, addr 0x1822607b0, size 0x10, virtual false, abstract: false, final false
static inline bool Internal_CreateImpl(::UnityEngine::Texture3D*  mono, int32_t  w, int32_t  h, int32_t  d, int32_t  mipCount, ::UnityEngine::Experimental::Rendering::GraphicsFormat  format, ::UnityEngine::TextureColorSpace  colorSpace, ::UnityEngine::Experimental::Rendering::TextureCreationFlags  flags, ::System::IntPtr  nativeTex) ;

static inline ::UnityEngine::Texture3D* New_ctor(int32_t  width, int32_t  height, int32_t  depth, ::UnityEngine::Experimental::Rendering::DefaultFormat  format, ::UnityEngine::Experimental::Rendering::TextureCreationFlags  flags) ;

static inline ::UnityEngine::Texture3D* New_ctor(int32_t  width, int32_t  height, int32_t  depth, ::UnityEngine::Experimental::Rendering::DefaultFormat  format, ::UnityEngine::Experimental::Rendering::TextureCreationFlags  flags, int32_t  mipCount) ;

static inline ::UnityEngine::Texture3D* New_ctor(int32_t  width, int32_t  height, int32_t  depth, ::UnityEngine::Experimental::Rendering::GraphicsFormat  format, ::UnityEngine::Experimental::Rendering::TextureCreationFlags  flags) ;

static inline ::UnityEngine::Texture3D* New_ctor(int32_t  width, int32_t  height, int32_t  depth, ::UnityEngine::Experimental::Rendering::GraphicsFormat  format, ::UnityEngine::Experimental::Rendering::TextureCreationFlags  flags, int32_t  mipCount) ;

static inline ::UnityEngine::Texture3D* New_ctor(int32_t  width, int32_t  height, int32_t  depth, ::UnityEngine::TextureFormat  textureFormat, bool  mipChain) ;

static inline ::UnityEngine::Texture3D* New_ctor(int32_t  width, int32_t  height, int32_t  depth, ::UnityEngine::TextureFormat  textureFormat, bool  mipChain, bool  createUninitialized) ;

static inline ::UnityEngine::Texture3D* New_ctor(int32_t  width, int32_t  height, int32_t  depth, ::UnityEngine::TextureFormat  textureFormat, bool  mipChain, ::System::IntPtr  nativeTex) ;

static inline ::UnityEngine::Texture3D* New_ctor(int32_t  width, int32_t  height, int32_t  depth, ::UnityEngine::TextureFormat  textureFormat, int32_t  mipCount) ;

static inline ::UnityEngine::Texture3D* New_ctor(int32_t  width, int32_t  height, int32_t  depth, ::UnityEngine::TextureFormat  textureFormat, int32_t  mipCount, ::System::IntPtr  nativeTex) ;

static inline ::UnityEngine::Texture3D* New_ctor(int32_t  width, int32_t  height, int32_t  depth, ::UnityEngine::TextureFormat  textureFormat, int32_t  mipCount, ::System::IntPtr  nativeTex, bool  createUninitialized) ;

/// @brief Method SetPixel, addr 0x1822608d0, size 0xb0, virtual false, abstract: false, final false
inline void SetPixel(int32_t  x, int32_t  y, int32_t  z, ::UnityEngine::Color  color, int32_t  mipLevel) ;

/// @brief Method SetPixelImpl, addr 0x182260870, size 0x60, virtual false, abstract: false, final false
inline void SetPixelImpl(int32_t  mip, int32_t  x, int32_t  y, int32_t  z, ::UnityEngine::Color  color) ;

/// @brief Method SetPixelImpl_Injected, addr 0x182260860, size 0x10, virtual false, abstract: false, final false
static inline void SetPixelImpl_Injected(::System::IntPtr  _unity_self, int32_t  mip, int32_t  x, int32_t  y, int32_t  z, ::by_ref<::UnityEngine::Color>  color) ;

/// @brief Method SetPixels, addr 0x182260a30, size 0x90, virtual false, abstract: false, final false
inline void SetPixels(::ArrayW<::UnityEngine::Color>  colors) ;

/// @brief Method SetPixels, addr 0x182260990, size 0xa0, virtual false, abstract: false, final false
inline void SetPixels(::ArrayW<::UnityEngine::Color>  colors, int32_t  miplevel) ;

/// @brief Method SetPixels_Injected, addr 0x182260980, size 0x10, virtual false, abstract: false, final false
static inline void SetPixels_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  colors, int32_t  miplevel) ;

/// @brief Method ValidateIsNotCrunched, addr 0x182260ac0, size 0x20, virtual false, abstract: false, final false
static inline void ValidateIsNotCrunched(::UnityEngine::Experimental::Rendering::TextureCreationFlags  flags) ;

/// @brief Method .ctor, addr 0x182260e90, size 0x80, virtual false, abstract: false, final false
inline void _ctor(int32_t  width, int32_t  height, int32_t  depth, ::UnityEngine::Experimental::Rendering::DefaultFormat  format, ::UnityEngine::Experimental::Rendering::TextureCreationFlags  flags) ;

/// @brief Method .ctor, addr 0x182260b40, size 0x60, virtual false, abstract: false, final false
inline void _ctor(int32_t  width, int32_t  height, int32_t  depth, ::UnityEngine::Experimental::Rendering::DefaultFormat  format, ::UnityEngine::Experimental::Rendering::TextureCreationFlags  flags, int32_t  mipCount) ;

/// @brief Method .ctor, addr 0x182260e50, size 0x40, virtual false, abstract: false, final false
inline void _ctor(int32_t  width, int32_t  height, int32_t  depth, ::UnityEngine::Experimental::Rendering::GraphicsFormat  format, ::UnityEngine::Experimental::Rendering::TextureCreationFlags  flags) ;

/// @brief Method .ctor, addr 0x182260ba0, size 0x100, virtual false, abstract: false, final false
inline void _ctor(int32_t  width, int32_t  height, int32_t  depth, ::UnityEngine::Experimental::Rendering::GraphicsFormat  format, ::UnityEngine::Experimental::Rendering::TextureCreationFlags  flags, int32_t  mipCount) ;

/// @brief Method .ctor, addr 0x182260ae0, size 0x60, virtual false, abstract: false, final false
inline void _ctor(int32_t  width, int32_t  height, int32_t  depth, ::UnityEngine::TextureFormat  textureFormat, bool  mipChain) ;

/// @brief Method .ctor, addr 0x182260ca0, size 0x60, virtual false, abstract: false, final false
inline void _ctor(int32_t  width, int32_t  height, int32_t  depth, ::UnityEngine::TextureFormat  textureFormat, bool  mipChain, bool  createUninitialized) ;

/// @brief Method .ctor, addr 0x182260f10, size 0x60, virtual false, abstract: false, final false
inline void _ctor(int32_t  width, int32_t  height, int32_t  depth, ::UnityEngine::TextureFormat  textureFormat, bool  mipChain, ::System::IntPtr  nativeTex) ;

/// @brief Method .ctor, addr 0x182260fb0, size 0x40, virtual false, abstract: false, final false
inline void _ctor(int32_t  width, int32_t  height, int32_t  depth, ::UnityEngine::TextureFormat  textureFormat, int32_t  mipCount) ;

/// @brief Method .ctor, addr 0x182260f70, size 0x40, virtual false, abstract: false, final false
inline void _ctor(int32_t  width, int32_t  height, int32_t  depth, ::UnityEngine::TextureFormat  textureFormat, int32_t  mipCount, ::System::IntPtr  nativeTex) ;

/// @brief Method .ctor, addr 0x182260d00, size 0x150, virtual false, abstract: false, final false
inline void _ctor(int32_t  width, int32_t  height, int32_t  depth, ::UnityEngine::TextureFormat  textureFormat, int32_t  mipCount, ::System::IntPtr  nativeTex, bool  createUninitialized) ;

/// @brief Method get_depth, addr 0x182261000, size 0x30, virtual false, abstract: false, final false
inline int32_t get_depth() ;

/// @brief Method get_depth_Injected, addr 0x182260ff0, size 0x10, virtual false, abstract: false, final false
static inline int32_t get_depth_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_isReadable, addr 0x182261040, size 0x30, virtual true, abstract: false, final false
inline bool get_isReadable() ;

/// @brief Method get_isReadable_Injected, addr 0x182261030, size 0x10, virtual false, abstract: false, final false
static inline bool get_isReadable_Injected(::System::IntPtr  _unity_self) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Texture3D() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Texture3D", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Texture3D(Texture3D && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Texture3D", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Texture3D(Texture3D const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10585};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Texture3D) == 0x18, "Size mismatch!");

} // namespace end def UnityEngine

#pragma once
// IWYU pragma private; include "UnityEngine/Cubemap.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Texture_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Cubemap)
namespace System {
struct IntPtr;
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
struct CubemapFace;
}
namespace UnityEngine {
struct TextureColorSpace;
}
namespace UnityEngine {
struct TextureFormat;
}
// Forward declare root types
namespace UnityEngine {
class Cubemap;
}
// Write type traits
MARK_REF_T(::UnityEngine::Cubemap*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Cubemap*, "UnityEngine", "Cubemap");
// Dependencies UnityEngine.Texture
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.Cubemap
class CORDL_TYPE Cubemap : public ::UnityEngine::Texture {
public:
// Declarations
 __declspec(property(get=get_isReadable)) bool  isReadable;

/// @brief Method Apply, addr 0x18224d160, size 0x60, virtual false, abstract: false, final false
inline void Apply() ;

/// @brief Method Apply, addr 0x18224d1c0, size 0x80, virtual false, abstract: false, final false
inline void Apply(bool  updateMipmaps, bool  makeNoLongerReadable) ;

/// @brief Method ApplyImpl, addr 0x18224d110, size 0x50, virtual false, abstract: false, final false
inline void ApplyImpl(bool  updateMipmaps, bool  makeNoLongerReadable) ;

/// @brief Method ApplyImpl_Injected, addr 0x18224d100, size 0x10, virtual false, abstract: false, final false
static inline void ApplyImpl_Injected(::System::IntPtr  _unity_self, bool  updateMipmaps, bool  makeNoLongerReadable) ;

/// @brief Method Internal_Create, addr 0x18224d250, size 0x80, virtual false, abstract: false, final false
static inline void Internal_Create(::UnityEngine::Cubemap*  mono, int32_t  ext, int32_t  mipCount, ::UnityEngine::Experimental::Rendering::GraphicsFormat  format, ::UnityEngine::TextureColorSpace  colorSpace, ::UnityEngine::Experimental::Rendering::TextureCreationFlags  flags, ::System::IntPtr  nativeTex) ;

/// @brief Method Internal_CreateImpl, addr 0x18224d240, size 0x10, virtual false, abstract: false, final false
static inline bool Internal_CreateImpl(::UnityEngine::Cubemap*  mono, int32_t  ext, int32_t  mipCount, ::UnityEngine::Experimental::Rendering::GraphicsFormat  format, ::UnityEngine::TextureColorSpace  colorSpace, ::UnityEngine::Experimental::Rendering::TextureCreationFlags  flags, ::System::IntPtr  nativeTex) ;

static inline ::UnityEngine::Cubemap* New_ctor(int32_t  width, ::UnityEngine::Experimental::Rendering::DefaultFormat  format, ::UnityEngine::Experimental::Rendering::TextureCreationFlags  flags) ;

static inline ::UnityEngine::Cubemap* New_ctor(int32_t  width, ::UnityEngine::Experimental::Rendering::DefaultFormat  format, ::UnityEngine::Experimental::Rendering::TextureCreationFlags  flags, int32_t  mipCount) ;

static inline ::UnityEngine::Cubemap* New_ctor(int32_t  width, ::UnityEngine::Experimental::Rendering::GraphicsFormat  format, ::UnityEngine::Experimental::Rendering::TextureCreationFlags  flags) ;

static inline ::UnityEngine::Cubemap* New_ctor(int32_t  width, ::UnityEngine::Experimental::Rendering::GraphicsFormat  format, ::UnityEngine::Experimental::Rendering::TextureCreationFlags  flags, int32_t  mipCount) ;

static inline ::UnityEngine::Cubemap* New_ctor(int32_t  width, ::UnityEngine::TextureFormat  format, int32_t  mipCount) ;

static inline ::UnityEngine::Cubemap* New_ctor(int32_t  width, ::UnityEngine::TextureFormat  format, int32_t  mipCount, bool  createUninitialized) ;

static inline ::UnityEngine::Cubemap* New_ctor(int32_t  width, ::UnityEngine::TextureFormat  textureFormat, bool  mipChain) ;

static inline ::UnityEngine::Cubemap* New_ctor(int32_t  width, ::UnityEngine::TextureFormat  textureFormat, bool  mipChain, bool  createUninitialized) ;

static inline ::UnityEngine::Cubemap* New_ctor(int32_t  width, ::UnityEngine::TextureFormat  textureFormat, int32_t  mipCount, ::System::IntPtr  nativeTex, bool  createUninitialized) ;

/// @brief Method SetPixel, addr 0x18224d340, size 0xb0, virtual false, abstract: false, final false
inline void SetPixel(::UnityEngine::CubemapFace  face, int32_t  x, int32_t  y, ::UnityEngine::Color  color) ;

/// @brief Method SetPixel, addr 0x18224d3f0, size 0xb0, virtual false, abstract: false, final false
inline void SetPixel(::UnityEngine::CubemapFace  face, int32_t  x, int32_t  y, ::UnityEngine::Color  color, int32_t  mip) ;

/// @brief Method SetPixelImpl, addr 0x18224d2e0, size 0x60, virtual false, abstract: false, final false
inline void SetPixelImpl(int32_t  image, int32_t  mip, int32_t  x, int32_t  y, ::UnityEngine::Color  color) ;

/// @brief Method SetPixelImpl_Injected, addr 0x18224d2d0, size 0x10, virtual false, abstract: false, final false
static inline void SetPixelImpl_Injected(::System::IntPtr  _unity_self, int32_t  image, int32_t  mip, int32_t  x, int32_t  y, ::by_ref<::UnityEngine::Color>  color) ;

/// @brief Method ValidateFormat, addr 0x18224d560, size 0xd0, virtual false, abstract: false, final false
inline bool ValidateFormat(::UnityEngine::Experimental::Rendering::GraphicsFormat  format, int32_t  width) ;

/// @brief Method ValidateFormat, addr 0x18224d4a0, size 0xc0, virtual false, abstract: false, final false
inline bool ValidateFormat(::UnityEngine::TextureFormat  format, int32_t  width) ;

/// @brief Method ValidateIsNotCrunched, addr 0x18224d630, size 0x20, virtual false, abstract: false, final false
static inline void ValidateIsNotCrunched(::UnityEngine::Experimental::Rendering::TextureCreationFlags  flags) ;

/// @brief Method .ctor, addr 0x18224d6a0, size 0x60, virtual false, abstract: false, final false
inline void _ctor(int32_t  width, ::UnityEngine::Experimental::Rendering::DefaultFormat  format, ::UnityEngine::Experimental::Rendering::TextureCreationFlags  flags) ;

/// @brief Method .ctor, addr 0x18224d700, size 0x50, virtual false, abstract: false, final false
inline void _ctor(int32_t  width, ::UnityEngine::Experimental::Rendering::DefaultFormat  format, ::UnityEngine::Experimental::Rendering::TextureCreationFlags  flags, int32_t  mipCount) ;

/// @brief Method .ctor, addr 0x18224d750, size 0x30, virtual false, abstract: false, final false
inline void _ctor(int32_t  width, ::UnityEngine::Experimental::Rendering::GraphicsFormat  format, ::UnityEngine::Experimental::Rendering::TextureCreationFlags  flags) ;

/// @brief Method .ctor, addr 0x18224d780, size 0x180, virtual false, abstract: false, final false
inline void _ctor(int32_t  width, ::UnityEngine::Experimental::Rendering::GraphicsFormat  format, ::UnityEngine::Experimental::Rendering::TextureCreationFlags  flags, int32_t  mipCount) ;

/// @brief Method .ctor, addr 0x18224d900, size 0x20, virtual false, abstract: false, final false
inline void _ctor(int32_t  width, ::UnityEngine::TextureFormat  format, int32_t  mipCount) ;

/// @brief Method .ctor, addr 0x18224d960, size 0x30, virtual false, abstract: false, final false
inline void _ctor(int32_t  width, ::UnityEngine::TextureFormat  format, int32_t  mipCount, bool  createUninitialized) ;

/// @brief Method .ctor, addr 0x18224d920, size 0x40, virtual false, abstract: false, final false
inline void _ctor(int32_t  width, ::UnityEngine::TextureFormat  textureFormat, bool  mipChain) ;

/// @brief Method .ctor, addr 0x18224d650, size 0x50, virtual false, abstract: false, final false
inline void _ctor(int32_t  width, ::UnityEngine::TextureFormat  textureFormat, bool  mipChain, bool  createUninitialized) ;

/// @brief Method .ctor, addr 0x18224d990, size 0x1c0, virtual false, abstract: false, final false
inline void _ctor(int32_t  width, ::UnityEngine::TextureFormat  textureFormat, int32_t  mipCount, ::System::IntPtr  nativeTex, bool  createUninitialized) ;

/// @brief Method get_isReadable, addr 0x18224db60, size 0x150, virtual true, abstract: false, final false
inline bool get_isReadable() ;

/// @brief Method get_isReadable_Injected, addr 0x18224db50, size 0x10, virtual false, abstract: false, final false
static inline bool get_isReadable_Injected(::System::IntPtr  _unity_self) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Cubemap() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Cubemap", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Cubemap(Cubemap && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Cubemap", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Cubemap(Cubemap const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10584};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Cubemap) == 0x18, "Size mismatch!");

} // namespace end def UnityEngine

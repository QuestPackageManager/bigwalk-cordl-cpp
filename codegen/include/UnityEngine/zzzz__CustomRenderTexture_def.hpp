#pragma once
// IWYU pragma private; include "UnityEngine/CustomRenderTexture.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__RenderTexture_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(CustomRenderTexture)
namespace System {
struct IntPtr;
}
namespace UnityEngine::Experimental::Rendering {
struct GraphicsFormat;
}
namespace UnityEngine {
struct CustomRenderTextureInitializationSource;
}
namespace UnityEngine {
struct CustomRenderTextureUpdateMode;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
struct RenderTextureFormat;
}
namespace UnityEngine {
struct RenderTextureReadWrite;
}
namespace UnityEngine {
class Texture;
}
// Forward declare root types
namespace UnityEngine {
class CustomRenderTexture;
}
// Write type traits
MARK_REF_T(::UnityEngine::CustomRenderTexture*);
DEFINE_IL2CPP_CLASS(::UnityEngine::CustomRenderTexture*, "UnityEngine", "CustomRenderTexture");
// Dependencies UnityEngine.RenderTexture
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.CustomRenderTexture
class CORDL_TYPE CustomRenderTexture : public ::UnityEngine::RenderTexture {
public:
// Declarations
 __declspec(property(put=set_initializationMode)) ::UnityEngine::CustomRenderTextureUpdateMode  initializationMode;

 __declspec(property(put=set_initializationSource)) ::UnityEngine::CustomRenderTextureInitializationSource  initializationSource;

 __declspec(property(put=set_initializationTexture)) ::UnityW<::UnityEngine::Texture>  initializationTexture;

 __declspec(property(put=set_material)) ::UnityW<::UnityEngine::Material>  material;

 __declspec(property(put=set_updateMode)) ::UnityEngine::CustomRenderTextureUpdateMode  updateMode;

/// @brief Method Initialize, addr 0x182263c10, size 0x40, virtual false, abstract: false, final false
inline void Initialize() ;

/// @brief Method Internal_CreateCustomRenderTexture, addr 0x182263c50, size 0x10, virtual false, abstract: false, final false
static inline void Internal_CreateCustomRenderTexture(::UnityEngine::CustomRenderTexture*  rt) ;

static inline ::UnityEngine::CustomRenderTexture* New_ctor(int32_t  width, int32_t  height, ::UnityEngine::Experimental::Rendering::GraphicsFormat  format) ;

static inline ::UnityEngine::CustomRenderTexture* New_ctor(int32_t  width, int32_t  height, ::UnityEngine::RenderTextureFormat  format, ::UnityEngine::RenderTextureReadWrite  readWrite) ;

/// @brief Method TriggerInitialization, addr 0x182263c70, size 0x30, virtual false, abstract: false, final false
inline void TriggerInitialization() ;

/// @brief Method TriggerInitialization_Injected, addr 0x182263c60, size 0x10, virtual false, abstract: false, final false
static inline void TriggerInitialization_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method TriggerUpdate, addr 0x182263cb0, size 0x30, virtual false, abstract: false, final false
inline void TriggerUpdate(int32_t  count) ;

/// @brief Method TriggerUpdate_Injected, addr 0x182263ca0, size 0x10, virtual false, abstract: false, final false
static inline void TriggerUpdate_Injected(::System::IntPtr  _unity_self, int32_t  count) ;

/// @brief Method Update, addr 0x182263ce0, size 0x40, virtual false, abstract: false, final false
inline void Update() ;

/// @brief Method Update, addr 0x182263d20, size 0x40, virtual false, abstract: false, final false
inline void Update(int32_t  count) ;

/// @brief Method .ctor, addr 0x182263ea0, size 0xe0, virtual false, abstract: false, final false
inline void _ctor(int32_t  width, int32_t  height, ::UnityEngine::Experimental::Rendering::GraphicsFormat  format) ;

/// @brief Method .ctor, addr 0x182263d60, size 0x140, virtual false, abstract: false, final false
inline void _ctor(int32_t  width, int32_t  height, ::UnityEngine::RenderTextureFormat  format, ::UnityEngine::RenderTextureReadWrite  readWrite) ;

/// @brief Method set_initializationMode, addr 0x182263f90, size 0x30, virtual false, abstract: false, final false
inline void set_initializationMode(::UnityEngine::CustomRenderTextureUpdateMode  value) ;

/// @brief Method set_initializationMode_Injected, addr 0x182263f80, size 0x10, virtual false, abstract: false, final false
static inline void set_initializationMode_Injected(::System::IntPtr  _unity_self, ::UnityEngine::CustomRenderTextureUpdateMode  value) ;

/// @brief Method set_initializationSource, addr 0x182263fd0, size 0x30, virtual false, abstract: false, final false
inline void set_initializationSource(::UnityEngine::CustomRenderTextureInitializationSource  value) ;

/// @brief Method set_initializationSource_Injected, addr 0x182263fc0, size 0x10, virtual false, abstract: false, final false
static inline void set_initializationSource_Injected(::System::IntPtr  _unity_self, ::UnityEngine::CustomRenderTextureInitializationSource  value) ;

/// @brief Method set_initializationTexture, addr 0x182264010, size 0x50, virtual false, abstract: false, final false
inline void set_initializationTexture(::UnityEngine::Texture*  value) ;

/// @brief Method set_initializationTexture_Injected, addr 0x182264000, size 0x10, virtual false, abstract: false, final false
static inline void set_initializationTexture_Injected(::System::IntPtr  _unity_self, ::System::IntPtr  value) ;

/// @brief Method set_material, addr 0x182264070, size 0x50, virtual false, abstract: false, final false
inline void set_material(::UnityEngine::Material*  value) ;

/// @brief Method set_material_Injected, addr 0x182264060, size 0x10, virtual false, abstract: false, final false
static inline void set_material_Injected(::System::IntPtr  _unity_self, ::System::IntPtr  value) ;

/// @brief Method set_updateMode, addr 0x1822640d0, size 0x30, virtual false, abstract: false, final false
inline void set_updateMode(::UnityEngine::CustomRenderTextureUpdateMode  value) ;

/// @brief Method set_updateMode_Injected, addr 0x1822640c0, size 0x10, virtual false, abstract: false, final false
static inline void set_updateMode_Injected(::System::IntPtr  _unity_self, ::UnityEngine::CustomRenderTextureUpdateMode  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CustomRenderTexture() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CustomRenderTexture", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
CustomRenderTexture(CustomRenderTexture && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CustomRenderTexture", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
CustomRenderTexture(CustomRenderTexture const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10589};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::CustomRenderTexture) == 0x18, "Size mismatch!");

} // namespace end def UnityEngine

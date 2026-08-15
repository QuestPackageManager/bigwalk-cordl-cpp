#pragma once
// IWYU pragma private; include "GlobalNamespace/PaperMapCamera.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(PaperMapCamera)
namespace GlobalNamespace {
struct PaperMapCamera_BlitMode;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine {
class Camera;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
class Texture2D;
}
// Forward declare root types
namespace GlobalNamespace {
struct PaperMapCamera_BlitMode;
}
namespace GlobalNamespace {
class PaperMapCamera;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::PaperMapCamera_BlitMode);
MARK_REF_T(::GlobalNamespace::PaperMapCamera*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PaperMapCamera_BlitMode, "", "PaperMapCamera/BlitMode");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PaperMapCamera*, "", "PaperMapCamera");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: PaperMapCamera/BlitMode
struct CORDL_TYPE PaperMapCamera_BlitMode {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __PaperMapCamera_BlitMode_Unwrapped
enum struct __PaperMapCamera_BlitMode_Unwrapped : int32_t {
__E_CameraOnly = static_cast<int32_t>(0x0),
__E_BlitOnly = static_cast<int32_t>(0x1),
__E_Both = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __PaperMapCamera_BlitMode_Unwrapped () const noexcept {
return static_cast<__PaperMapCamera_BlitMode_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr PaperMapCamera_BlitMode() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr PaperMapCamera_BlitMode(int32_t  value__) noexcept;

/// @brief Field BlitOnly value: I32(1)
static ::GlobalNamespace::PaperMapCamera_BlitMode const BlitOnly;

/// @brief Field Both value: I32(2)
static ::GlobalNamespace::PaperMapCamera_BlitMode const Both;

/// @brief Field CameraOnly value: I32(0)
static ::GlobalNamespace::PaperMapCamera_BlitMode const CameraOnly;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4908};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PaperMapCamera_BlitMode, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::PaperMapCamera_BlitMode) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies PaperMapCamera::BlitMode, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: PaperMapCamera
class CORDL_TYPE PaperMapCamera : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using BlitMode = ::GlobalNamespace::PaperMapCamera_BlitMode;

/// @brief Field blitMaterial, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_blitMaterial, put=__cordl_internal_set_blitMaterial)) ::UnityW<::UnityEngine::Material>  blitMaterial;

/// @brief Field blitMode, offset 0x34, size 0x4 
 __declspec(property(get=__cordl_internal_get_blitMode, put=__cordl_internal_set_blitMode)) ::GlobalNamespace::PaperMapCamera_BlitMode  blitMode;

/// @brief Field blitWithPointFiltering, offset 0x40, size 0x1 
 __declspec(property(get=__cordl_internal_get_blitWithPointFiltering, put=__cordl_internal_set_blitWithPointFiltering)) bool  blitWithPointFiltering;

/// @brief Field customLodBias, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get_customLodBias, put=__cordl_internal_set_customLodBias)) float_t  customLodBias;

/// @brief Field depthOnly, offset 0x30, size 0x1 
 __declspec(property(get=__cordl_internal_get_depthOnly, put=__cordl_internal_set_depthOnly)) bool  depthOnly;

/// @brief Field mapCamera, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_mapCamera, put=__cordl_internal_set_mapCamera)) ::UnityW<::UnityEngine::Camera>  mapCamera;

/// @brief Field replacementTerrainMaterial, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_replacementTerrainMaterial, put=__cordl_internal_set_replacementTerrainMaterial)) ::UnityW<::UnityEngine::Material>  replacementTerrainMaterial;

/// @brief Field savedTexture, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_savedTexture, put=__cordl_internal_set_savedTexture)) ::UnityW<::UnityEngine::Texture2D>  savedTexture;

/// @brief Field treeBlacklist, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_treeBlacklist, put=__cordl_internal_set_treeBlacklist)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  treeBlacklist;

/// @brief Field useCustomLodBias, offset 0x28, size 0x1 
 __declspec(property(get=__cordl_internal_get_useCustomLodBias, put=__cordl_internal_set_useCustomLodBias)) bool  useCustomLodBias;

static inline ::GlobalNamespace::PaperMapCamera* New_ctor() ;

/// @brief Method SetCamera, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void SetCamera() ;

constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_blitMaterial() const;

constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_blitMaterial() ;

constexpr ::GlobalNamespace::PaperMapCamera_BlitMode const& __cordl_internal_get_blitMode() const;

constexpr ::GlobalNamespace::PaperMapCamera_BlitMode& __cordl_internal_get_blitMode() ;

constexpr bool const& __cordl_internal_get_blitWithPointFiltering() const;

constexpr bool& __cordl_internal_get_blitWithPointFiltering() ;

constexpr float_t const& __cordl_internal_get_customLodBias() const;

constexpr float_t& __cordl_internal_get_customLodBias() ;

constexpr bool const& __cordl_internal_get_depthOnly() const;

constexpr bool& __cordl_internal_get_depthOnly() ;

constexpr ::UnityW<::UnityEngine::Camera> const& __cordl_internal_get_mapCamera() const;

constexpr ::UnityW<::UnityEngine::Camera>& __cordl_internal_get_mapCamera() ;

constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_replacementTerrainMaterial() const;

constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_replacementTerrainMaterial() ;

constexpr ::UnityW<::UnityEngine::Texture2D> const& __cordl_internal_get_savedTexture() const;

constexpr ::UnityW<::UnityEngine::Texture2D>& __cordl_internal_get_savedTexture() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>* const& __cordl_internal_get_treeBlacklist() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*& __cordl_internal_get_treeBlacklist() ;

constexpr bool const& __cordl_internal_get_useCustomLodBias() const;

constexpr bool& __cordl_internal_get_useCustomLodBias() ;

constexpr void __cordl_internal_set_blitMaterial(::UnityW<::UnityEngine::Material>  value) ;

constexpr void __cordl_internal_set_blitMode(::GlobalNamespace::PaperMapCamera_BlitMode  value) ;

constexpr void __cordl_internal_set_blitWithPointFiltering(bool  value) ;

constexpr void __cordl_internal_set_customLodBias(float_t  value) ;

constexpr void __cordl_internal_set_depthOnly(bool  value) ;

constexpr void __cordl_internal_set_mapCamera(::UnityW<::UnityEngine::Camera>  value) ;

constexpr void __cordl_internal_set_replacementTerrainMaterial(::UnityW<::UnityEngine::Material>  value) ;

constexpr void __cordl_internal_set_savedTexture(::UnityW<::UnityEngine::Texture2D>  value) ;

constexpr void __cordl_internal_set_treeBlacklist(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  value) ;

constexpr void __cordl_internal_set_useCustomLodBias(bool  value) ;

/// @brief Method .ctor, addr 0x1802dd7c0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PaperMapCamera() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PaperMapCamera", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PaperMapCamera(PaperMapCamera && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PaperMapCamera", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PaperMapCamera(PaperMapCamera const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4909};

/// @brief Field mapCamera, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Camera>  ___mapCamera;

/// @brief Field useCustomLodBias, offset: 0x28, size: 0x1, def value: None
 bool  ___useCustomLodBias;

/// @brief Field customLodBias, offset: 0x2c, size: 0x4, def value: None
 float_t  ___customLodBias;

/// @brief Field depthOnly, offset: 0x30, size: 0x1, def value: None
 bool  ___depthOnly;

/// @brief Field blitMode, offset: 0x34, size: 0x4, def value: None
 ::GlobalNamespace::PaperMapCamera_BlitMode  ___blitMode;

/// @brief Field blitMaterial, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Material>  ___blitMaterial;

/// @brief Field blitWithPointFiltering, offset: 0x40, size: 0x1, def value: None
 bool  ___blitWithPointFiltering;

/// @brief Field savedTexture, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Texture2D>  ___savedTexture;

/// @brief Field replacementTerrainMaterial, offset: 0x50, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Material>  ___replacementTerrainMaterial;

/// @brief Field treeBlacklist, offset: 0x58, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  ___treeBlacklist;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PaperMapCamera, ___mapCamera) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PaperMapCamera, ___useCustomLodBias) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PaperMapCamera, ___customLodBias) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PaperMapCamera, ___depthOnly) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PaperMapCamera, ___blitMode) == 0x34, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PaperMapCamera, ___blitMaterial) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PaperMapCamera, ___blitWithPointFiltering) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PaperMapCamera, ___savedTexture) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PaperMapCamera, ___replacementTerrainMaterial) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PaperMapCamera, ___treeBlacklist) == 0x58, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::PaperMapCamera) == 0x60, "Size mismatch!");

} // namespace end def GlobalNamespace

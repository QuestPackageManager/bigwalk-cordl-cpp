#pragma once
// IWYU pragma private; include "JBooth/MicroVerseCore/MaskTarget.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(MaskTarget)
namespace JBooth::MicroVerseCore {
struct MaskTarget_Resolution;
}
namespace JBooth::MicroVerseCore {
struct MaskTarget_TargetFormat;
}
namespace JBooth::MicroVerseCore {
class MaskTarget_TextureEntry;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
class RenderTexture;
}
namespace UnityEngine {
class TerrainData;
}
namespace UnityEngine {
class Terrain;
}
namespace UnityEngine {
class Texture2D;
}
// Forward declare root types
namespace JBooth::MicroVerseCore {
struct MaskTarget_Resolution;
}
namespace JBooth::MicroVerseCore {
struct MaskTarget_TargetFormat;
}
namespace JBooth::MicroVerseCore {
class MaskTarget;
}
namespace JBooth::MicroVerseCore {
class MaskTarget_TextureEntry;
}
// Write type traits
MARK_VAL_T(::JBooth::MicroVerseCore::MaskTarget_Resolution);
MARK_VAL_T(::JBooth::MicroVerseCore::MaskTarget_TargetFormat);
MARK_REF_T(::JBooth::MicroVerseCore::MaskTarget*);
MARK_REF_T(::JBooth::MicroVerseCore::MaskTarget_TextureEntry*);
DEFINE_IL2CPP_CLASS(::JBooth::MicroVerseCore::MaskTarget_Resolution, "JBooth.MicroVerseCore", "MaskTarget/Resolution");
DEFINE_IL2CPP_CLASS(::JBooth::MicroVerseCore::MaskTarget_TargetFormat, "JBooth.MicroVerseCore", "MaskTarget/TargetFormat");
DEFINE_IL2CPP_CLASS(::JBooth::MicroVerseCore::MaskTarget*, "JBooth.MicroVerseCore", "MaskTarget");
DEFINE_IL2CPP_CLASS(::JBooth::MicroVerseCore::MaskTarget_TextureEntry*, "JBooth.MicroVerseCore", "MaskTarget/TextureEntry");
// Dependencies 
namespace JBooth::MicroVerseCore {
// Is value type: true
// CS Name: JBooth.MicroVerseCore.MaskTarget/Resolution
struct CORDL_TYPE MaskTarget_Resolution {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __MaskTarget_Resolution_Unwrapped
enum struct __MaskTarget_Resolution_Unwrapped : int32_t {
__E_k128 = static_cast<int32_t>(0x80),
__E_k256 = static_cast<int32_t>(0x100),
__E_k512 = static_cast<int32_t>(0x200),
__E_k1024 = static_cast<int32_t>(0x400),
__E_k2048 = static_cast<int32_t>(0x800),
__E_k4096 = static_cast<int32_t>(0x1000),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __MaskTarget_Resolution_Unwrapped () const noexcept {
return static_cast<__MaskTarget_Resolution_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr MaskTarget_Resolution() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr MaskTarget_Resolution(int32_t  value__) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17909};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field k1024 value: I32(1024)
static ::JBooth::MicroVerseCore::MaskTarget_Resolution const k1024;

/// @brief Field k128 value: I32(128)
static ::JBooth::MicroVerseCore::MaskTarget_Resolution const k128;

/// @brief Field k2048 value: I32(2048)
static ::JBooth::MicroVerseCore::MaskTarget_Resolution const k2048;

/// @brief Field k256 value: I32(256)
static ::JBooth::MicroVerseCore::MaskTarget_Resolution const k256;

/// @brief Field k4096 value: I32(4096)
static ::JBooth::MicroVerseCore::MaskTarget_Resolution const k4096;

/// @brief Field k512 value: I32(512)
static ::JBooth::MicroVerseCore::MaskTarget_Resolution const k512;

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::JBooth::MicroVerseCore::MaskTarget_Resolution, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::JBooth::MicroVerseCore::MaskTarget_Resolution) == 0x4, "Size mismatch!");

} // namespace end def JBooth::MicroVerseCore
// Dependencies 
namespace JBooth::MicroVerseCore {
// Is value type: true
// CS Name: JBooth.MicroVerseCore.MaskTarget/TargetFormat
struct CORDL_TYPE MaskTarget_TargetFormat {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __MaskTarget_TargetFormat_Unwrapped
enum struct __MaskTarget_TargetFormat_Unwrapped : int32_t {
__E_R8 = static_cast<int32_t>(0x0),
__E_RGBAColor = static_cast<int32_t>(0x1),
__E_RGBALinear = static_cast<int32_t>(0x2),
__E_SDFMask = static_cast<int32_t>(0x3),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __MaskTarget_TargetFormat_Unwrapped () const noexcept {
return static_cast<__MaskTarget_TargetFormat_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr MaskTarget_TargetFormat() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr MaskTarget_TargetFormat(int32_t  value__) noexcept;

/// @brief Field R8 value: I32(0)
static ::JBooth::MicroVerseCore::MaskTarget_TargetFormat const R8;

/// @brief Field RGBAColor value: I32(1)
static ::JBooth::MicroVerseCore::MaskTarget_TargetFormat const RGBAColor;

/// @brief Field RGBALinear value: I32(2)
static ::JBooth::MicroVerseCore::MaskTarget_TargetFormat const RGBALinear;

/// @brief Field SDFMask value: I32(3)
static ::JBooth::MicroVerseCore::MaskTarget_TargetFormat const SDFMask;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17910};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::JBooth::MicroVerseCore::MaskTarget_TargetFormat, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::JBooth::MicroVerseCore::MaskTarget_TargetFormat) == 0x4, "Size mismatch!");

} // namespace end def JBooth::MicroVerseCore
// Dependencies System.Object
namespace JBooth::MicroVerseCore {
// Is value type: false
// CS Name: JBooth.MicroVerseCore.MaskTarget/TextureEntry
class CORDL_TYPE MaskTarget_TextureEntry : public ::System::Object {
public:
// Declarations
/// @brief Field terrainData, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_terrainData, put=__cordl_internal_set_terrainData)) ::UnityW<::UnityEngine::TerrainData>  terrainData;

/// @brief Field texture, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_texture, put=__cordl_internal_set_texture)) ::UnityW<::UnityEngine::Texture2D>  texture;

static inline ::JBooth::MicroVerseCore::MaskTarget_TextureEntry* New_ctor() ;

constexpr ::UnityW<::UnityEngine::TerrainData> const& __cordl_internal_get_terrainData() const;

constexpr ::UnityW<::UnityEngine::TerrainData>& __cordl_internal_get_terrainData() ;

constexpr ::UnityW<::UnityEngine::Texture2D> const& __cordl_internal_get_texture() const;

constexpr ::UnityW<::UnityEngine::Texture2D>& __cordl_internal_get_texture() ;

constexpr void __cordl_internal_set_terrainData(::UnityW<::UnityEngine::TerrainData>  value) ;

constexpr void __cordl_internal_set_texture(::UnityW<::UnityEngine::Texture2D>  value) ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MaskTarget_TextureEntry() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MaskTarget_TextureEntry", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MaskTarget_TextureEntry(MaskTarget_TextureEntry && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MaskTarget_TextureEntry", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MaskTarget_TextureEntry(MaskTarget_TextureEntry const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17911};

/// @brief Field terrainData, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::UnityEngine::TerrainData>  ___terrainData;

/// @brief Field texture, offset: 0x18, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Texture2D>  ___texture;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::JBooth::MicroVerseCore::MaskTarget_TextureEntry, ___terrainData) == 0x10, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::MaskTarget_TextureEntry, ___texture) == 0x18, "Offset mismatch!");

static_assert(sizeof(::JBooth::MicroVerseCore::MaskTarget_TextureEntry) == 0x20, "Size mismatch!");

} // namespace end def JBooth::MicroVerseCore
// Dependencies JBooth.MicroVerseCore.MaskTarget::Resolution, JBooth.MicroVerseCore.MaskTarget::TargetFormat, UnityEngine.Color, UnityEngine.ScriptableObject
namespace JBooth::MicroVerseCore {
// Is value type: false
// CS Name: JBooth.MicroVerseCore.MaskTarget
class CORDL_TYPE MaskTarget : public ::UnityEngine::ScriptableObject {
public:
// Declarations
using Resolution = ::JBooth::MicroVerseCore::MaskTarget_Resolution;

using TargetFormat = ::JBooth::MicroVerseCore::MaskTarget_TargetFormat;

using TextureEntry = ::JBooth::MicroVerseCore::MaskTarget_TextureEntry;

/// @brief Field clearColor, offset 0x20, size 0x10 
 __declspec(property(get=__cordl_internal_get_clearColor, put=__cordl_internal_set_clearColor)) ::UnityEngine::Color  clearColor;

/// @brief Field format, offset 0x1c, size 0x4 
 __declspec(property(get=__cordl_internal_get_format, put=__cordl_internal_set_format)) ::JBooth::MicroVerseCore::MaskTarget_TargetFormat  format;

/// @brief Field resolution, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_resolution, put=__cordl_internal_set_resolution)) ::JBooth::MicroVerseCore::MaskTarget_Resolution  resolution;

/// @brief Field tempRenderData, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_tempRenderData, put=__cordl_internal_set_tempRenderData)) ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Terrain>,::UnityW<::UnityEngine::RenderTexture>>*  tempRenderData;

/// @brief Field textures, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_textures, put=__cordl_internal_set_textures)) ::System::Collections::Generic::List_1<::JBooth::MicroVerseCore::MaskTarget_TextureEntry*>*  textures;

/// @brief Method ConvertToSDF, addr 0x181408560, size 0x100, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::RenderTexture> ConvertToSDF(::UnityEngine::Terrain*  t) ;

/// @brief Method InitTempData, addr 0x181408660, size 0x210, virtual false, abstract: false, final false
inline void InitTempData(::ArrayW<::UnityEngine::Terrain*>  terrains) ;

static inline ::JBooth::MicroVerseCore::MaskTarget* New_ctor() ;

/// @brief Method RenderToBuffer, addr 0x181408870, size 0xf0, virtual false, abstract: false, final false
inline void RenderToBuffer(::UnityEngine::Terrain*  t, ::UnityEngine::Material*  mat) ;

/// @brief Method SetRenderBuffer, addr 0x181408960, size 0x30, virtual false, abstract: false, final false
inline void SetRenderBuffer(::UnityEngine::Terrain*  t, ::UnityEngine::RenderTexture*  tex) ;

constexpr ::UnityEngine::Color const& __cordl_internal_get_clearColor() const;

constexpr ::UnityEngine::Color& __cordl_internal_get_clearColor() ;

constexpr ::JBooth::MicroVerseCore::MaskTarget_TargetFormat const& __cordl_internal_get_format() const;

constexpr ::JBooth::MicroVerseCore::MaskTarget_TargetFormat& __cordl_internal_get_format() ;

constexpr ::JBooth::MicroVerseCore::MaskTarget_Resolution const& __cordl_internal_get_resolution() const;

constexpr ::JBooth::MicroVerseCore::MaskTarget_Resolution& __cordl_internal_get_resolution() ;

constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Terrain>,::UnityW<::UnityEngine::RenderTexture>>* const& __cordl_internal_get_tempRenderData() const;

constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Terrain>,::UnityW<::UnityEngine::RenderTexture>>*& __cordl_internal_get_tempRenderData() ;

constexpr ::System::Collections::Generic::List_1<::JBooth::MicroVerseCore::MaskTarget_TextureEntry*>* const& __cordl_internal_get_textures() const;

constexpr ::System::Collections::Generic::List_1<::JBooth::MicroVerseCore::MaskTarget_TextureEntry*>*& __cordl_internal_get_textures() ;

constexpr void __cordl_internal_set_clearColor(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set_format(::JBooth::MicroVerseCore::MaskTarget_TargetFormat  value) ;

constexpr void __cordl_internal_set_resolution(::JBooth::MicroVerseCore::MaskTarget_Resolution  value) ;

constexpr void __cordl_internal_set_tempRenderData(::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Terrain>,::UnityW<::UnityEngine::RenderTexture>>*  value) ;

constexpr void __cordl_internal_set_textures(::System::Collections::Generic::List_1<::JBooth::MicroVerseCore::MaskTarget_TextureEntry*>*  value) ;

/// @brief Method .ctor, addr 0x181408990, size 0x90, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MaskTarget() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MaskTarget", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MaskTarget(MaskTarget && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MaskTarget", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MaskTarget(MaskTarget const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17912};

/// @brief Field resolution, offset: 0x18, size: 0x4, def value: None
 ::JBooth::MicroVerseCore::MaskTarget_Resolution  ___resolution;

/// @brief Field format, offset: 0x1c, size: 0x4, def value: None
 ::JBooth::MicroVerseCore::MaskTarget_TargetFormat  ___format;

/// @brief Field clearColor, offset: 0x20, size: 0x10, def value: None
 ::UnityEngine::Color  ___clearColor;

/// @brief Field textures, offset: 0x30, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::JBooth::MicroVerseCore::MaskTarget_TextureEntry*>*  ___textures;

/// @brief Field tempRenderData, offset: 0x38, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Terrain>,::UnityW<::UnityEngine::RenderTexture>>*  ___tempRenderData;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::JBooth::MicroVerseCore::MaskTarget, ___resolution) == 0x18, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::MaskTarget, ___format) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::MaskTarget, ___clearColor) == 0x20, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::MaskTarget, ___textures) == 0x30, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::MaskTarget, ___tempRenderData) == 0x38, "Offset mismatch!");

static_assert(sizeof(::JBooth::MicroVerseCore::MaskTarget) == 0x40, "Size mismatch!");

} // namespace end def JBooth::MicroVerseCore

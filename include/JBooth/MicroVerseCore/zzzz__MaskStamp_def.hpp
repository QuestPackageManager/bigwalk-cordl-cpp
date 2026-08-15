#pragma once
// IWYU pragma private; include "JBooth/MicroVerseCore/MaskStamp.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "JBooth/MicroVerseCore/zzzz__Stamp_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(MaskStamp)
namespace JBooth::MicroVerseCore {
class FilterSet;
}
namespace JBooth::MicroVerseCore {
class IMaskModifier;
}
namespace JBooth::MicroVerseCore {
class IModifier;
}
namespace JBooth::MicroVerseCore {
class MaskData;
}
namespace JBooth::MicroVerseCore {
struct MaskStamp_BlendMode;
}
namespace JBooth::MicroVerseCore {
struct MaskStamp_TargetChannel;
}
namespace JBooth::MicroVerseCore {
class MaskTarget;
}
namespace UnityEngine {
struct Bounds;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
class Shader;
}
namespace UnityEngine {
class Texture2D;
}
// Forward declare root types
namespace JBooth::MicroVerseCore {
struct MaskStamp_BlendMode;
}
namespace JBooth::MicroVerseCore {
struct MaskStamp_TargetChannel;
}
namespace JBooth::MicroVerseCore {
class MaskStamp;
}
// Write type traits
MARK_VAL_T(::JBooth::MicroVerseCore::MaskStamp_BlendMode);
MARK_VAL_T(::JBooth::MicroVerseCore::MaskStamp_TargetChannel);
MARK_REF_T(::JBooth::MicroVerseCore::MaskStamp*);
DEFINE_IL2CPP_CLASS(::JBooth::MicroVerseCore::MaskStamp_BlendMode, "JBooth.MicroVerseCore", "MaskStamp/BlendMode");
DEFINE_IL2CPP_CLASS(::JBooth::MicroVerseCore::MaskStamp_TargetChannel, "JBooth.MicroVerseCore", "MaskStamp/TargetChannel");
DEFINE_IL2CPP_CLASS(::JBooth::MicroVerseCore::MaskStamp*, "JBooth.MicroVerseCore", "MaskStamp");
// Dependencies 
namespace JBooth::MicroVerseCore {
// Is value type: true
// CS Name: JBooth.MicroVerseCore.MaskStamp/TargetChannel
struct CORDL_TYPE MaskStamp_TargetChannel {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __MaskStamp_TargetChannel_Unwrapped
enum struct __MaskStamp_TargetChannel_Unwrapped : int32_t {
__E_RGBA = static_cast<int32_t>(0x0),
__E_RGB = static_cast<int32_t>(0x1),
__E_R = static_cast<int32_t>(0x2),
__E_G = static_cast<int32_t>(0x3),
__E_B = static_cast<int32_t>(0x4),
__E_A = static_cast<int32_t>(0x5),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __MaskStamp_TargetChannel_Unwrapped () const noexcept {
return static_cast<__MaskStamp_TargetChannel_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr MaskStamp_TargetChannel() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr MaskStamp_TargetChannel(int32_t  value__) noexcept;

/// @brief Field A value: I32(5)
static ::JBooth::MicroVerseCore::MaskStamp_TargetChannel const A;

/// @brief Field B value: I32(4)
static ::JBooth::MicroVerseCore::MaskStamp_TargetChannel const B;

/// @brief Field G value: I32(3)
static ::JBooth::MicroVerseCore::MaskStamp_TargetChannel const G;

/// @brief Field R value: I32(2)
static ::JBooth::MicroVerseCore::MaskStamp_TargetChannel const R;

/// @brief Field RGB value: I32(1)
static ::JBooth::MicroVerseCore::MaskStamp_TargetChannel const RGB;

/// @brief Field RGBA value: I32(0)
static ::JBooth::MicroVerseCore::MaskStamp_TargetChannel const RGBA;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17906};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::JBooth::MicroVerseCore::MaskStamp_TargetChannel, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::JBooth::MicroVerseCore::MaskStamp_TargetChannel) == 0x4, "Size mismatch!");

} // namespace end def JBooth::MicroVerseCore
// Dependencies 
namespace JBooth::MicroVerseCore {
// Is value type: true
// CS Name: JBooth.MicroVerseCore.MaskStamp/BlendMode
struct CORDL_TYPE MaskStamp_BlendMode {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __MaskStamp_BlendMode_Unwrapped
enum struct __MaskStamp_BlendMode_Unwrapped : int32_t {
__E_Default = static_cast<int32_t>(0x0),
__E_Add = static_cast<int32_t>(0x1),
__E_Subtract = static_cast<int32_t>(0x2),
__E_Multiply = static_cast<int32_t>(0x3),
__E_Multiply2X = static_cast<int32_t>(0x4),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __MaskStamp_BlendMode_Unwrapped () const noexcept {
return static_cast<__MaskStamp_BlendMode_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr MaskStamp_BlendMode() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr MaskStamp_BlendMode(int32_t  value__) noexcept;

/// @brief Field Add value: I32(1)
static ::JBooth::MicroVerseCore::MaskStamp_BlendMode const Add;

/// @brief Field Default value: I32(0)
static ::JBooth::MicroVerseCore::MaskStamp_BlendMode const Default;

/// @brief Field Multiply value: I32(3)
static ::JBooth::MicroVerseCore::MaskStamp_BlendMode const Multiply;

/// @brief Field Multiply2X value: I32(4)
static ::JBooth::MicroVerseCore::MaskStamp_BlendMode const Multiply2X;

/// @brief Field Subtract value: I32(2)
static ::JBooth::MicroVerseCore::MaskStamp_BlendMode const Subtract;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17907};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::JBooth::MicroVerseCore::MaskStamp_BlendMode, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::JBooth::MicroVerseCore::MaskStamp_BlendMode) == 0x4, "Size mismatch!");

} // namespace end def JBooth::MicroVerseCore
// Dependencies JBooth.MicroVerseCore.MaskStamp::BlendMode, JBooth.MicroVerseCore.MaskStamp::TargetChannel, JBooth.MicroVerseCore.Stamp, UnityEngine.Color
namespace JBooth::MicroVerseCore {
// Is value type: false
// CS Name: JBooth.MicroVerseCore.MaskStamp
class CORDL_TYPE MaskStamp : public ::JBooth::MicroVerseCore::Stamp {
public:
// Declarations
using BlendMode = ::JBooth::MicroVerseCore::MaskStamp_BlendMode;

using TargetChannel = ::JBooth::MicroVerseCore::MaskStamp_TargetChannel;

/// @brief Field blendMode, offset 0x54, size 0x4 
 __declspec(property(get=__cordl_internal_get_blendMode, put=__cordl_internal_set_blendMode)) ::JBooth::MicroVerseCore::MaskStamp_BlendMode  blendMode;

/// @brief Field filterSet, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_filterSet, put=__cordl_internal_set_filterSet)) ::JBooth::MicroVerseCore::FilterSet*  filterSet;

/// @brief Field maskShader, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_maskShader, put=setStaticF_maskShader)) ::UnityW<::UnityEngine::Shader>  maskShader;

/// @brief Field material, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_material, put=__cordl_internal_set_material)) ::UnityW<::UnityEngine::Material>  material;

/// @brief Field target, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_target, put=__cordl_internal_set_target)) ::UnityW<::JBooth::MicroVerseCore::MaskTarget>  target;

/// @brief Field targetChannel, offset 0x50, size 0x4 
 __declspec(property(get=__cordl_internal_get_targetChannel, put=__cordl_internal_set_targetChannel)) ::JBooth::MicroVerseCore::MaskStamp_TargetChannel  targetChannel;

/// @brief Field texture, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_texture, put=__cordl_internal_set_texture)) ::UnityW<::UnityEngine::Texture2D>  texture;

/// @brief Field tint, offset 0x40, size 0x10 
 __declspec(property(get=__cordl_internal_get_tint, put=__cordl_internal_set_tint)) ::UnityEngine::Color  tint;

/// @brief Convert operator to "::JBooth::MicroVerseCore::IMaskModifier"
constexpr operator  ::JBooth::MicroVerseCore::IMaskModifier*() noexcept;

/// @brief Convert operator to "::JBooth::MicroVerseCore::IModifier"
constexpr operator  ::JBooth::MicroVerseCore::IModifier*() noexcept;

/// @brief Method ApplyMaskStamp, addr 0x181407d10, size 0x3d0, virtual true, abstract: false, final true
inline void ApplyMaskStamp(::JBooth::MicroVerseCore::MaskData*  md) ;

/// @brief Method Dispose, addr 0x1802d9d80, size 0x10, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method GetBounds, addr 0x1814080e0, size 0x190, virtual true, abstract: false, final false
inline ::UnityEngine::Bounds GetBounds() ;

/// @brief Method GetFilterSet, addr 0x1802e75e0, size 0x10, virtual true, abstract: false, final false
inline ::JBooth::MicroVerseCore::FilterSet* GetFilterSet() ;

/// @brief Method GetTarget, addr 0x1802d97f0, size 0x10, virtual true, abstract: false, final true
inline ::UnityW<::JBooth::MicroVerseCore::MaskTarget> GetTarget() ;

/// @brief Method Initialize, addr 0x181408270, size 0x120, virtual true, abstract: false, final true
inline void Initialize() ;

/// @brief Method NeedCurvatureMap, addr 0x181408390, size 0x30, virtual true, abstract: false, final true
inline bool NeedCurvatureMap() ;

static inline ::JBooth::MicroVerseCore::MaskStamp* New_ctor() ;

/// @brief Method OnDestroy, addr 0x1814083c0, size 0x40, virtual true, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method OnDrawGizmosSelected, addr 0x181408400, size 0x100, virtual false, abstract: false, final false
inline void OnDrawGizmosSelected() ;

constexpr ::JBooth::MicroVerseCore::MaskStamp_BlendMode const& __cordl_internal_get_blendMode() const;

constexpr ::JBooth::MicroVerseCore::MaskStamp_BlendMode& __cordl_internal_get_blendMode() ;

constexpr ::JBooth::MicroVerseCore::FilterSet* const& __cordl_internal_get_filterSet() const;

constexpr ::JBooth::MicroVerseCore::FilterSet*& __cordl_internal_get_filterSet() ;

constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_material() const;

constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_material() ;

constexpr ::UnityW<::JBooth::MicroVerseCore::MaskTarget> const& __cordl_internal_get_target() const;

constexpr ::UnityW<::JBooth::MicroVerseCore::MaskTarget>& __cordl_internal_get_target() ;

constexpr ::JBooth::MicroVerseCore::MaskStamp_TargetChannel const& __cordl_internal_get_targetChannel() const;

constexpr ::JBooth::MicroVerseCore::MaskStamp_TargetChannel& __cordl_internal_get_targetChannel() ;

constexpr ::UnityW<::UnityEngine::Texture2D> const& __cordl_internal_get_texture() const;

constexpr ::UnityW<::UnityEngine::Texture2D>& __cordl_internal_get_texture() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get_tint() const;

constexpr ::UnityEngine::Color& __cordl_internal_get_tint() ;

constexpr void __cordl_internal_set_blendMode(::JBooth::MicroVerseCore::MaskStamp_BlendMode  value) ;

constexpr void __cordl_internal_set_filterSet(::JBooth::MicroVerseCore::FilterSet*  value) ;

constexpr void __cordl_internal_set_material(::UnityW<::UnityEngine::Material>  value) ;

constexpr void __cordl_internal_set_target(::UnityW<::JBooth::MicroVerseCore::MaskTarget>  value) ;

constexpr void __cordl_internal_set_targetChannel(::JBooth::MicroVerseCore::MaskStamp_TargetChannel  value) ;

constexpr void __cordl_internal_set_texture(::UnityW<::UnityEngine::Texture2D>  value) ;

constexpr void __cordl_internal_set_tint(::UnityEngine::Color  value) ;

/// @brief Method .ctor, addr 0x181408500, size 0x60, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::UnityW<::UnityEngine::Shader> getStaticF_maskShader() ;

/// @brief Convert to "::JBooth::MicroVerseCore::IMaskModifier"
constexpr ::JBooth::MicroVerseCore::IMaskModifier* i___JBooth__MicroVerseCore__IMaskModifier() noexcept;

/// @brief Convert to "::JBooth::MicroVerseCore::IModifier"
constexpr ::JBooth::MicroVerseCore::IModifier* i___JBooth__MicroVerseCore__IModifier() noexcept;

static inline void setStaticF_maskShader(::UnityW<::UnityEngine::Shader>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MaskStamp() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MaskStamp", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MaskStamp(MaskStamp && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MaskStamp", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MaskStamp(MaskStamp const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17908};

/// @brief Field target, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::JBooth::MicroVerseCore::MaskTarget>  ___target;

/// @brief Field texture, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Texture2D>  ___texture;

/// @brief Field tint, offset: 0x40, size: 0x10, def value: None
 ::UnityEngine::Color  ___tint;

/// @brief Field targetChannel, offset: 0x50, size: 0x4, def value: None
 ::JBooth::MicroVerseCore::MaskStamp_TargetChannel  ___targetChannel;

/// @brief Field blendMode, offset: 0x54, size: 0x4, def value: None
 ::JBooth::MicroVerseCore::MaskStamp_BlendMode  ___blendMode;

/// @brief Field filterSet, offset: 0x58, size: 0x8, def value: None
 ::JBooth::MicroVerseCore::FilterSet*  ___filterSet;

/// @brief Field material, offset: 0x60, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Material>  ___material;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::JBooth::MicroVerseCore::MaskStamp, ___target) == 0x30, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::MaskStamp, ___texture) == 0x38, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::MaskStamp, ___tint) == 0x40, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::MaskStamp, ___targetChannel) == 0x50, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::MaskStamp, ___blendMode) == 0x54, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::MaskStamp, ___filterSet) == 0x58, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::MaskStamp, ___material) == 0x60, "Offset mismatch!");

static_assert(sizeof(::JBooth::MicroVerseCore::MaskStamp) == 0x68, "Size mismatch!");

} // namespace end def JBooth::MicroVerseCore

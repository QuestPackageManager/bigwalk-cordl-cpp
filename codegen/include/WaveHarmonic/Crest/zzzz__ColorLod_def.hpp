#pragma once
// IWYU pragma private; include "WaveHarmonic/Crest/ColorLod.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__Vector4_def.hpp"
#include "WaveHarmonic/Crest/zzzz__Lod_def.hpp"
#include "WaveHarmonic/Crest/zzzz__ShorelineVolumeColorSource_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(ColorLod)
namespace UnityEngine::Experimental::Rendering {
struct GraphicsFormat;
}
namespace UnityEngine::Rendering {
class CommandBuffer;
}
namespace UnityEngine::Rendering {
struct RenderTargetIdentifier;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
class MonoBehaviour;
}
namespace UnityEngine {
struct Rect;
}
namespace WaveHarmonic::Crest {
class ColorLod_ShaderIDs;
}
namespace WaveHarmonic::Crest {
class ColorLod_ShorelineColorInput;
}
namespace WaveHarmonic::Crest {
class ILodInput;
}
namespace WaveHarmonic::Crest {
class Lod;
}
namespace WaveHarmonic::Crest {
struct ShorelineVolumeColorSource;
}
namespace WaveHarmonic::Crest {
class WaterRenderer;
}
// Forward declare root types
namespace WaveHarmonic::Crest {
class ColorLod;
}
namespace WaveHarmonic::Crest {
class ColorLod_ShaderIDs;
}
namespace WaveHarmonic::Crest {
class ColorLod_ShorelineColorInput;
}
// Write type traits
MARK_REF_T(::WaveHarmonic::Crest::ColorLod*);
MARK_REF_T(::WaveHarmonic::Crest::ColorLod_ShaderIDs*);
MARK_REF_T(::WaveHarmonic::Crest::ColorLod_ShorelineColorInput*);
DEFINE_IL2CPP_CLASS(::WaveHarmonic::Crest::ColorLod*, "WaveHarmonic.Crest", "ColorLod");
DEFINE_IL2CPP_CLASS(::WaveHarmonic::Crest::ColorLod_ShaderIDs*, "WaveHarmonic.Crest", "ColorLod/ShaderIDs");
DEFINE_IL2CPP_CLASS(::WaveHarmonic::Crest::ColorLod_ShorelineColorInput*, "WaveHarmonic.Crest", "ColorLod/ShorelineColorInput");
// Dependencies System.Object
namespace WaveHarmonic::Crest {
// Is value type: false
// CS Name: WaveHarmonic.Crest.ColorLod/ShaderIDs
class CORDL_TYPE ColorLod_ShaderIDs : public ::System::Object {
public:
// Declarations
/// @brief Field s_ShorelineColor, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_s_ShorelineColor, put=setStaticF_s_ShorelineColor)) int32_t  s_ShorelineColor;

/// @brief Field s_ShorelineColorFalloff, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_s_ShorelineColorFalloff, put=setStaticF_s_ShorelineColorFalloff)) int32_t  s_ShorelineColorFalloff;

/// @brief Field s_ShorelineColorMaximumDistance, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_s_ShorelineColorMaximumDistance, put=setStaticF_s_ShorelineColorMaximumDistance)) int32_t  s_ShorelineColorMaximumDistance;

static inline int32_t getStaticF_s_ShorelineColor() ;

static inline int32_t getStaticF_s_ShorelineColorFalloff() ;

static inline int32_t getStaticF_s_ShorelineColorMaximumDistance() ;

static inline void setStaticF_s_ShorelineColor(int32_t  value) ;

static inline void setStaticF_s_ShorelineColorFalloff(int32_t  value) ;

static inline void setStaticF_s_ShorelineColorMaximumDistance(int32_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ColorLod_ShaderIDs() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ColorLod_ShaderIDs", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ColorLod_ShaderIDs(ColorLod_ShaderIDs && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ColorLod_ShaderIDs", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ColorLod_ShaderIDs(ColorLod_ShaderIDs const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16487};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::WaveHarmonic::Crest::ColorLod_ShaderIDs) == 0x10, "Size mismatch!");

} // namespace end def WaveHarmonic::Crest
// Dependencies System.Object
namespace WaveHarmonic::Crest {
// Is value type: false
// CS Name: WaveHarmonic.Crest.ColorLod/ShorelineColorInput
class CORDL_TYPE ColorLod_ShorelineColorInput : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_Component)) ::UnityW<::UnityEngine::MonoBehaviour>  Component;

 __declspec(property(get=get_Enabled)) bool  Enabled;

 __declspec(property(get=get_IsCompute)) bool  IsCompute;

 __declspec(property(get=get_Pass)) int32_t  Pass;

 __declspec(property(get=get_Queue)) int32_t  Queue;

 __declspec(property(get=get_Rect)) ::UnityEngine::Rect  Rect;

/// @brief Field _VolumeColorLod, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__VolumeColorLod, put=__cordl_internal_set__VolumeColorLod)) ::WaveHarmonic::Crest::ColorLod*  _VolumeColorLod;

/// @brief Convert operator to "::WaveHarmonic::Crest::ILodInput"
constexpr operator  ::WaveHarmonic::Crest::ILodInput*() noexcept;

/// @brief Method Draw, addr 0x1825633c0, size 0x340, virtual true, abstract: false, final true
inline void Draw(::WaveHarmonic::Crest::Lod*  lod, ::UnityEngine::Rendering::CommandBuffer*  buffer, ::UnityEngine::Rendering::RenderTargetIdentifier  target, int32_t  pass, float_t  weight, int32_t  slices) ;

/// @brief Method Filter, addr 0x1802e30f0, size 0x10, virtual true, abstract: false, final true
inline float_t Filter(::WaveHarmonic::Crest::WaterRenderer*  water, int32_t  slice) ;

static inline ::WaveHarmonic::Crest::ColorLod_ShorelineColorInput* New_ctor(::WaveHarmonic::Crest::ColorLod*  lod) ;

constexpr ::WaveHarmonic::Crest::ColorLod* const& __cordl_internal_get__VolumeColorLod() const;

constexpr ::WaveHarmonic::Crest::ColorLod*& __cordl_internal_get__VolumeColorLod() ;

constexpr void __cordl_internal_set__VolumeColorLod(::WaveHarmonic::Crest::ColorLod*  value) ;

/// @brief Method .ctor, addr 0x180308500, size 0x30, virtual false, abstract: false, final false
inline void _ctor(::WaveHarmonic::Crest::ColorLod*  lod) ;

/// @brief Method get_Component, addr 0x1802dd520, size 0x10, virtual true, abstract: false, final true
inline ::UnityW<::UnityEngine::MonoBehaviour> get_Component() ;

/// @brief Method get_Enabled, addr 0x182563700, size 0x50, virtual true, abstract: false, final true
inline bool get_Enabled() ;

/// @brief Method get_IsCompute, addr 0x1802f6470, size 0x10, virtual true, abstract: false, final true
inline bool get_IsCompute() ;

/// @brief Method get_Pass, addr 0x180393450, size 0x10, virtual true, abstract: false, final true
inline int32_t get_Pass() ;

/// @brief Method get_Queue, addr 0x182537df0, size 0x10, virtual true, abstract: false, final true
inline int32_t get_Queue() ;

/// @brief Method get_Rect, addr 0x1821aa7b0, size 0x40, virtual true, abstract: false, final true
inline ::UnityEngine::Rect get_Rect() ;

/// @brief Convert to "::WaveHarmonic::Crest::ILodInput"
constexpr ::WaveHarmonic::Crest::ILodInput* i___WaveHarmonic__Crest__ILodInput() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ColorLod_ShorelineColorInput() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ColorLod_ShorelineColorInput", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ColorLod_ShorelineColorInput(ColorLod_ShorelineColorInput && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ColorLod_ShorelineColorInput", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ColorLod_ShorelineColorInput(ColorLod_ShorelineColorInput const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16488};

/// @brief Field _VolumeColorLod, offset: 0x10, size: 0x8, def value: None
 ::WaveHarmonic::Crest::ColorLod*  ____VolumeColorLod;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::WaveHarmonic::Crest::ColorLod_ShorelineColorInput, ____VolumeColorLod) == 0x10, "Offset mismatch!");

static_assert(sizeof(::WaveHarmonic::Crest::ColorLod_ShorelineColorInput) == 0x18, "Size mismatch!");

} // namespace end def WaveHarmonic::Crest
// Dependencies UnityEngine.Color, UnityEngine.Vector4, WaveHarmonic.Crest.Lod, WaveHarmonic.Crest.ShorelineVolumeColorSource
namespace WaveHarmonic::Crest {
// Is value type: false
// CS Name: WaveHarmonic.Crest.ColorLod
class CORDL_TYPE ColorLod : public ::WaveHarmonic::Crest::Lod {
public:
// Declarations
using ShaderIDs = ::WaveHarmonic::Crest::ColorLod_ShaderIDs;

using ShorelineColorInput = ::WaveHarmonic::Crest::ColorLod_ShorelineColorInput;

 __declspec(property(get=get_GlobalShaderID)) int32_t  GlobalShaderID;

 __declspec(property(get=get_RequestedTextureFormat)) ::UnityEngine::Experimental::Rendering::GraphicsFormat  RequestedTextureFormat;

 __declspec(property(get=get_ShorelineColor, put=set_ShorelineColor)) ::UnityEngine::Color  ShorelineColor;

 __declspec(property(get=get_ShorelineColorFalloff, put=set_ShorelineColorFalloff)) float_t  ShorelineColorFalloff;

 __declspec(property(get=get_ShorelineColorMaximumDistance, put=set_ShorelineColorMaximumDistance)) float_t  ShorelineColorMaximumDistance;

 __declspec(property(get=get_ShorelineColorSource, put=set_ShorelineColorSource)) ::WaveHarmonic::Crest::ShorelineVolumeColorSource  ShorelineColorSource;

 __declspec(property(get=get_SkipEndOfFrame)) bool  SkipEndOfFrame;

/// @brief Field _ShorelineColor, offset 0x98, size 0x10 
 __declspec(property(get=__cordl_internal_get__ShorelineColor, put=__cordl_internal_set__ShorelineColor)) ::UnityEngine::Color  _ShorelineColor;

/// @brief Field _ShorelineColorFalloff, offset 0xac, size 0x4 
 __declspec(property(get=__cordl_internal_get__ShorelineColorFalloff, put=__cordl_internal_set__ShorelineColorFalloff)) float_t  _ShorelineColorFalloff;

/// @brief Field _ShorelineColorInput, offset 0xc0, size 0x8 
 __declspec(property(get=__cordl_internal_get__ShorelineColorInput, put=__cordl_internal_set__ShorelineColorInput)) ::WaveHarmonic::Crest::ColorLod_ShorelineColorInput*  _ShorelineColorInput;

/// @brief Field _ShorelineColorMaximumDistance, offset 0xa8, size 0x4 
 __declspec(property(get=__cordl_internal_get__ShorelineColorMaximumDistance, put=__cordl_internal_set__ShorelineColorMaximumDistance)) float_t  _ShorelineColorMaximumDistance;

/// @brief Field _ShorelineColorSource, offset 0x94, size 0x4 
 __declspec(property(get=__cordl_internal_get__ShorelineColorSource, put=__cordl_internal_set__ShorelineColorSource)) ::WaveHarmonic::Crest::ShorelineVolumeColorSource  _ShorelineColorSource;

/// @brief Field _ShorelineColorValue, offset 0xb0, size 0x10 
 __declspec(property(get=__cordl_internal_get__ShorelineColorValue, put=__cordl_internal_set__ShorelineColorValue)) ::UnityEngine::Vector4  _ShorelineColorValue;

/// @brief Method Disable, addr 0x182553870, size 0x50, virtual true, abstract: false, final false
inline void Disable() ;

/// @brief Method Enable, addr 0x1825538c0, size 0xf0, virtual true, abstract: false, final false
inline void Enable() ;

static inline ::WaveHarmonic::Crest::ColorLod* New_ctor() ;

/// @brief Method SetGlobals, addr 0x1825539b0, size 0x70, virtual true, abstract: false, final false
inline void SetGlobals(bool  enable) ;

/// @brief Method SetShorelineColor, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void SetShorelineColor(::UnityEngine::Color  previous, ::UnityEngine::Color  current) ;

constexpr ::UnityEngine::Color const& __cordl_internal_get__ShorelineColor() const;

constexpr ::UnityEngine::Color& __cordl_internal_get__ShorelineColor() ;

constexpr float_t const& __cordl_internal_get__ShorelineColorFalloff() const;

constexpr float_t& __cordl_internal_get__ShorelineColorFalloff() ;

constexpr ::WaveHarmonic::Crest::ColorLod_ShorelineColorInput* const& __cordl_internal_get__ShorelineColorInput() const;

constexpr ::WaveHarmonic::Crest::ColorLod_ShorelineColorInput*& __cordl_internal_get__ShorelineColorInput() ;

constexpr float_t const& __cordl_internal_get__ShorelineColorMaximumDistance() const;

constexpr float_t& __cordl_internal_get__ShorelineColorMaximumDistance() ;

constexpr ::WaveHarmonic::Crest::ShorelineVolumeColorSource const& __cordl_internal_get__ShorelineColorSource() const;

constexpr ::WaveHarmonic::Crest::ShorelineVolumeColorSource& __cordl_internal_get__ShorelineColorSource() ;

constexpr ::UnityEngine::Vector4 const& __cordl_internal_get__ShorelineColorValue() const;

constexpr ::UnityEngine::Vector4& __cordl_internal_get__ShorelineColorValue() ;

constexpr void __cordl_internal_set__ShorelineColor(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set__ShorelineColorFalloff(float_t  value) ;

constexpr void __cordl_internal_set__ShorelineColorInput(::WaveHarmonic::Crest::ColorLod_ShorelineColorInput*  value) ;

constexpr void __cordl_internal_set__ShorelineColorMaximumDistance(float_t  value) ;

constexpr void __cordl_internal_set__ShorelineColorSource(::WaveHarmonic::Crest::ShorelineVolumeColorSource  value) ;

constexpr void __cordl_internal_set__ShorelineColorValue(::UnityEngine::Vector4  value) ;

/// @brief Method .ctor, addr 0x182553a20, size 0x40, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_GlobalShaderID, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline int32_t get_GlobalShaderID() ;

/// @brief Method get_RequestedTextureFormat, addr 0x182553a60, size 0xa0, virtual true, abstract: false, final false
inline ::UnityEngine::Experimental::Rendering::GraphicsFormat get_RequestedTextureFormat() ;

/// @brief Method get_ShorelineColor, addr 0x1822b4ce0, size 0x40, virtual false, abstract: false, final false
inline ::UnityEngine::Color get_ShorelineColor() ;

/// @brief Method get_ShorelineColorFalloff, addr 0x1803d39c0, size 0x10, virtual false, abstract: false, final false
inline float_t get_ShorelineColorFalloff() ;

/// @brief Method get_ShorelineColorMaximumDistance, addr 0x18033c2e0, size 0x10, virtual false, abstract: false, final false
inline float_t get_ShorelineColorMaximumDistance() ;

/// @brief Method get_ShorelineColorSource, addr 0x180408b50, size 0x10, virtual false, abstract: false, final false
inline ::WaveHarmonic::Crest::ShorelineVolumeColorSource get_ShorelineColorSource() ;

/// @brief Method get_SkipEndOfFrame, addr 0x1802f6470, size 0x10, virtual true, abstract: false, final false
inline bool get_SkipEndOfFrame() ;

/// @brief Method set_ShorelineColor, addr 0x182553b10, size 0x50, virtual false, abstract: false, final false
inline void set_ShorelineColor(::UnityEngine::Color  value) ;

/// @brief Method set_ShorelineColorFalloff, addr 0x1803d3a30, size 0x10, virtual false, abstract: false, final false
inline void set_ShorelineColorFalloff(float_t  value) ;

/// @brief Method set_ShorelineColorMaximumDistance, addr 0x182553b00, size 0x10, virtual false, abstract: false, final false
inline void set_ShorelineColorMaximumDistance(float_t  value) ;

/// @brief Method set_ShorelineColorSource, addr 0x180b9feb0, size 0x2630, virtual false, abstract: false, final false
inline void set_ShorelineColorSource(::WaveHarmonic::Crest::ShorelineVolumeColorSource  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ColorLod() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ColorLod", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ColorLod(ColorLod && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ColorLod", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ColorLod(ColorLod const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16489};

/// @brief Field _ShorelineColorSource, offset: 0x94, size: 0x4, def value: None
 ::WaveHarmonic::Crest::ShorelineVolumeColorSource  ____ShorelineColorSource;

/// @brief Field _ShorelineColor, offset: 0x98, size: 0x10, def value: None
 ::UnityEngine::Color  ____ShorelineColor;

/// @brief Field _ShorelineColorMaximumDistance, offset: 0xa8, size: 0x4, def value: None
 float_t  ____ShorelineColorMaximumDistance;

/// @brief Field _ShorelineColorFalloff, offset: 0xac, size: 0x4, def value: None
 float_t  ____ShorelineColorFalloff;

/// @brief Field _ShorelineColorValue, offset: 0xb0, size: 0x10, def value: None
 ::UnityEngine::Vector4  ____ShorelineColorValue;

/// @brief Field _ShorelineColorInput, offset: 0xc0, size: 0x8, def value: None
 ::WaveHarmonic::Crest::ColorLod_ShorelineColorInput*  ____ShorelineColorInput;

/// @brief Size padding 0xd8 - 0xc8 = 0x10, packed as 0x10
 uint8_t  _cordl_size_padding[0x10];

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::WaveHarmonic::Crest::ColorLod, ____ShorelineColorSource) == 0x94, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::ColorLod, ____ShorelineColor) == 0x98, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::ColorLod, ____ShorelineColorMaximumDistance) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::ColorLod, ____ShorelineColorFalloff) == 0xac, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::ColorLod, ____ShorelineColorValue) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::ColorLod, ____ShorelineColorInput) == 0xc0, "Offset mismatch!");

static_assert(sizeof(::WaveHarmonic::Crest::ColorLod) == 0xd8, "Size mismatch!");

} // namespace end def WaveHarmonic::Crest

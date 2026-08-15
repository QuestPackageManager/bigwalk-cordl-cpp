#pragma once
// IWYU pragma private; include "WaveHarmonic/Crest/ClipLodInput.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Rect_def.hpp"
#include "WaveHarmonic/Crest/zzzz__LodInputPrimitive_def.hpp"
#include "WaveHarmonic/Crest/zzzz__LodInput_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(ClipLodInput)
namespace UnityEngine::Rendering {
class CommandBuffer;
}
namespace UnityEngine::Rendering {
struct LocalKeyword;
}
namespace UnityEngine::Rendering {
struct RenderTargetIdentifier;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
class ComputeShader;
}
namespace UnityEngine {
struct Rect;
}
namespace WaveHarmonic::Crest::Utility {
template<typename TKey,typename TValue>
class SortedList_2;
}
namespace WaveHarmonic::Crest {
class ILodInput;
}
namespace WaveHarmonic::Crest {
struct LodInputMode;
}
namespace WaveHarmonic::Crest {
struct LodInputPrimitive;
}
namespace WaveHarmonic::Crest {
class Lod;
}
namespace WaveHarmonic::Crest {
class SampleCollisionHelper;
}
namespace WaveHarmonic::Crest {
class WaterRenderer;
}
// Forward declare root types
namespace WaveHarmonic::Crest {
class ClipLodInput;
}
// Write type traits
MARK_REF_T(::WaveHarmonic::Crest::ClipLodInput*);
DEFINE_IL2CPP_CLASS(::WaveHarmonic::Crest::ClipLodInput*, "WaveHarmonic.Crest", "ClipLodInput");
// Dependencies UnityEngine.Rect, WaveHarmonic.Crest.LodInput, WaveHarmonic.Crest.LodInputPrimitive
namespace WaveHarmonic::Crest {
// Is value type: false
// CS Name: WaveHarmonic.Crest.ClipLodInput
class CORDL_TYPE ClipLodInput : public ::WaveHarmonic::Crest::LodInput {
public:
// Declarations
 __declspec(property(get=get_DefaultMode)) ::WaveHarmonic::Crest::LodInputMode  DefaultMode;

 __declspec(property(get=get_Enabled)) bool  Enabled;

 __declspec(property(get=get_FollowHorizontalMotion)) bool  FollowHorizontalMotion;

 __declspec(property(get=get_GizmoColor)) ::UnityEngine::Color  GizmoColor;

 __declspec(property(get=get_Inputs)) ::WaveHarmonic::Crest::Utility::SortedList_2<int32_t,::WaveHarmonic::Crest::ILodInput*>*  Inputs;

 __declspec(property(get=get_Inverted, put=set_Inverted)) bool  Inverted;

 __declspec(property(get=get_Primitive, put=set_Primitive)) ::WaveHarmonic::Crest::LodInputPrimitive  Primitive;

 __declspec(property(get=get_PrimitiveShader)) ::UnityW<::UnityEngine::ComputeShader>  PrimitiveShader;

 __declspec(property(get=get_Rect)) ::UnityEngine::Rect  Rect;

 __declspec(property(get=get_WaterHeightDistanceCulling, put=set_WaterHeightDistanceCulling)) bool  WaterHeightDistanceCulling;

/// @brief Field _Enabled, offset 0xc0, size 0x1 
 __declspec(property(get=__cordl_internal_get__Enabled, put=__cordl_internal_set__Enabled)) bool  _Enabled;

/// @brief Field _Inverted, offset 0xb4, size 0x1 
 __declspec(property(get=__cordl_internal_get__Inverted, put=__cordl_internal_set__Inverted)) bool  _Inverted;

/// @brief Field _Primitive, offset 0xb0, size 0x4 
 __declspec(property(get=__cordl_internal_get__Primitive, put=__cordl_internal_set__Primitive)) ::WaveHarmonic::Crest::LodInputPrimitive  _Primitive;

/// @brief Field _Rect, offset 0xc4, size 0x10 
 __declspec(property(get=__cordl_internal_get__Rect, put=__cordl_internal_set__Rect)) ::UnityEngine::Rect  _Rect;

/// @brief Field _SampleHeightHelper, offset 0xb8, size 0x8 
 __declspec(property(get=__cordl_internal_get__SampleHeightHelper, put=__cordl_internal_set__SampleHeightHelper)) ::WaveHarmonic::Crest::SampleCollisionHelper*  _SampleHeightHelper;

/// @brief Field _WaterHeightDistanceCulling, offset 0xb5, size 0x1 
 __declspec(property(get=__cordl_internal_get__WaterHeightDistanceCulling, put=__cordl_internal_set__WaterHeightDistanceCulling)) bool  _WaterHeightDistanceCulling;

/// @brief Method Draw, addr 0x182552820, size 0x510, virtual true, abstract: false, final false
inline void Draw(::WaveHarmonic::Crest::Lod*  simulation, ::UnityEngine::Rendering::CommandBuffer*  buffer, ::UnityEngine::Rendering::RenderTargetIdentifier  target, int32_t  pass, float_t  weight, int32_t  slices) ;

/// @brief Method InferBlend, addr 0x181c9c1e0, size 0x10, virtual true, abstract: false, final false
inline void InferBlend() ;

static inline ::WaveHarmonic::Crest::ClipLodInput* New_ctor() ;

/// @brief Method OnUpdate, addr 0x182552d30, size 0x240, virtual true, abstract: false, final false
inline void OnUpdate(::WaveHarmonic::Crest::WaterRenderer*  water) ;

constexpr bool const& __cordl_internal_get__Enabled() const;

constexpr bool& __cordl_internal_get__Enabled() ;

constexpr bool const& __cordl_internal_get__Inverted() const;

constexpr bool& __cordl_internal_get__Inverted() ;

constexpr ::WaveHarmonic::Crest::LodInputPrimitive const& __cordl_internal_get__Primitive() const;

constexpr ::WaveHarmonic::Crest::LodInputPrimitive& __cordl_internal_get__Primitive() ;

constexpr ::UnityEngine::Rect const& __cordl_internal_get__Rect() const;

constexpr ::UnityEngine::Rect& __cordl_internal_get__Rect() ;

constexpr ::WaveHarmonic::Crest::SampleCollisionHelper* const& __cordl_internal_get__SampleHeightHelper() const;

constexpr ::WaveHarmonic::Crest::SampleCollisionHelper*& __cordl_internal_get__SampleHeightHelper() ;

constexpr bool const& __cordl_internal_get__WaterHeightDistanceCulling() const;

constexpr bool& __cordl_internal_get__WaterHeightDistanceCulling() ;

constexpr void __cordl_internal_set__Enabled(bool  value) ;

constexpr void __cordl_internal_set__Inverted(bool  value) ;

constexpr void __cordl_internal_set__Primitive(::WaveHarmonic::Crest::LodInputPrimitive  value) ;

constexpr void __cordl_internal_set__Rect(::UnityEngine::Rect  value) ;

constexpr void __cordl_internal_set__SampleHeightHelper(::WaveHarmonic::Crest::SampleCollisionHelper*  value) ;

constexpr void __cordl_internal_set__WaterHeightDistanceCulling(bool  value) ;

/// @brief Method .ctor, addr 0x182552f70, size 0xb0, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_DefaultMode, addr 0x180309580, size 0x10, virtual true, abstract: false, final false
inline ::WaveHarmonic::Crest::LodInputMode get_DefaultMode() ;

/// @brief Method get_Enabled, addr 0x182553020, size 0xa0, virtual true, abstract: false, final false
inline bool get_Enabled() ;

/// @brief Method get_FollowHorizontalMotion, addr 0x1802f6470, size 0x10, virtual true, abstract: false, final false
inline bool get_FollowHorizontalMotion() ;

/// @brief Method get_GizmoColor, addr 0x1825530c0, size 0x40, virtual true, abstract: false, final false
inline ::UnityEngine::Color get_GizmoColor() ;

/// @brief Method get_Inputs, addr 0x182553100, size 0x40, virtual true, abstract: false, final false
inline ::WaveHarmonic::Crest::Utility::SortedList_2<int32_t,::WaveHarmonic::Crest::ILodInput*>* get_Inputs() ;

/// @brief Method get_Inverted, addr 0x1825508f0, size 0x10, virtual false, abstract: false, final false
inline bool get_Inverted() ;

/// @brief Method get_KeywordCube, addr 0x182553140, size 0x80, virtual false, abstract: false, final false
static inline ::UnityEngine::Rendering::LocalKeyword get_KeywordCube() ;

/// @brief Method get_KeywordInverted, addr 0x1825531c0, size 0x80, virtual false, abstract: false, final false
static inline ::UnityEngine::Rendering::LocalKeyword get_KeywordInverted() ;

/// @brief Method get_KeywordRectangle, addr 0x182553240, size 0x80, virtual false, abstract: false, final false
static inline ::UnityEngine::Rendering::LocalKeyword get_KeywordRectangle() ;

/// @brief Method get_KeywordSphere, addr 0x1825532c0, size 0x80, virtual false, abstract: false, final false
static inline ::UnityEngine::Rendering::LocalKeyword get_KeywordSphere() ;

/// @brief Method get_Primitive, addr 0x1803b2d80, size 0x10, virtual false, abstract: false, final false
inline ::WaveHarmonic::Crest::LodInputPrimitive get_Primitive() ;

/// @brief Method get_PrimitiveShader, addr 0x182553340, size 0x70, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::ComputeShader> get_PrimitiveShader() ;

/// @brief Method get_Rect, addr 0x1825533b0, size 0x1a0, virtual true, abstract: false, final false
inline ::UnityEngine::Rect get_Rect() ;

/// @brief Method get_WaterHeightDistanceCulling, addr 0x182553550, size 0x10, virtual false, abstract: false, final false
inline bool get_WaterHeightDistanceCulling() ;

/// @brief Method set_Inverted, addr 0x1825509a0, size 0x10, virtual false, abstract: false, final false
inline void set_Inverted(bool  value) ;

/// @brief Method set_Primitive, addr 0x1817eed30, size 0x10, virtual false, abstract: false, final false
inline void set_Primitive(::WaveHarmonic::Crest::LodInputPrimitive  value) ;

/// @brief Method set_WaterHeightDistanceCulling, addr 0x182553560, size 0x10, virtual false, abstract: false, final false
inline void set_WaterHeightDistanceCulling(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ClipLodInput() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ClipLodInput", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ClipLodInput(ClipLodInput && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ClipLodInput", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ClipLodInput(ClipLodInput const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16508};

/// @brief Field _Primitive, offset: 0xb0, size: 0x4, def value: None
 ::WaveHarmonic::Crest::LodInputPrimitive  ____Primitive;

/// @brief Field _Inverted, offset: 0xb4, size: 0x1, def value: None
 bool  ____Inverted;

/// @brief Field _WaterHeightDistanceCulling, offset: 0xb5, size: 0x1, def value: None
 bool  ____WaterHeightDistanceCulling;

/// @brief Field _SampleHeightHelper, offset: 0xb8, size: 0x8, def value: None
 ::WaveHarmonic::Crest::SampleCollisionHelper*  ____SampleHeightHelper;

/// @brief Field _Enabled, offset: 0xc0, size: 0x1, def value: None
 bool  ____Enabled;

/// @brief Field _Rect, offset: 0xc4, size: 0x10, def value: None
 ::UnityEngine::Rect  ____Rect;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::WaveHarmonic::Crest::ClipLodInput, ____Primitive) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::ClipLodInput, ____Inverted) == 0xb4, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::ClipLodInput, ____WaterHeightDistanceCulling) == 0xb5, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::ClipLodInput, ____SampleHeightHelper) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::ClipLodInput, ____Enabled) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::ClipLodInput, ____Rect) == 0xc4, "Offset mismatch!");

static_assert(sizeof(::WaveHarmonic::Crest::ClipLodInput) == 0xd8, "Size mismatch!");

} // namespace end def WaveHarmonic::Crest

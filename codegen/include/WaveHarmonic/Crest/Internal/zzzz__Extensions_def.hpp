#pragma once
// IWYU pragma private; include "WaveHarmonic/Crest/Internal/Extensions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(Extensions)
namespace UnityEngine::Events {
template<typename T0>
class UnityEvent_1;
}
namespace UnityEngine::Events {
class UnityEvent;
}
namespace UnityEngine::Rendering {
class CommandBuffer;
}
namespace UnityEngine::SceneManagement {
struct Scene;
}
namespace UnityEngine {
struct Bounds;
}
namespace UnityEngine {
class Camera;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
class ComputeShader;
}
namespace UnityEngine {
class Light;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
struct Rect;
}
namespace UnityEngine {
struct RenderTextureDescriptor;
}
namespace UnityEngine {
class Texture;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine {
struct Vector4;
}
// Forward declare root types
namespace WaveHarmonic::Crest::Internal {
class Extensions;
}
// Write type traits
MARK_REF_T(::WaveHarmonic::Crest::Internal::Extensions*);
DEFINE_IL2CPP_CLASS(::WaveHarmonic::Crest::Internal::Extensions*, "WaveHarmonic.Crest.Internal", "Extensions");
// Dependencies System.Object, UnityEngine.Vector3
namespace WaveHarmonic::Crest::Internal {
// Is value type: false
// CS Name: WaveHarmonic.Crest.Internal.Extensions
class CORDL_TYPE Extensions : public ::System::Object {
public:
// Declarations
/// @brief Field s_BoundsPoints, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_BoundsPoints, put=setStaticF_s_BoundsPoints)) ::ArrayW<::UnityEngine::Vector3>  s_BoundsPoints;

/// @brief Method Absolute, addr 0x182565fe0, size 0x30, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector2 Absolute(::UnityEngine::Vector2  v) ;

/// @brief Method Bounds, addr 0x182566010, size 0x6e0, virtual false, abstract: false, final false
static inline ::UnityEngine::Bounds Bounds(::UnityEngine::Transform*  transform) ;

/// @brief Method Clamped01, addr 0x1825666f0, size 0x80, virtual false, abstract: false, final false
static inline ::UnityEngine::Color Clamped01(::UnityEngine::Color  c) ;

/// @brief Method ContainsXZ, addr 0x1825667c0, size 0x70, virtual false, abstract: false, final false
static inline bool ContainsXZ(::UnityEngine::Bounds  bounds, ::UnityEngine::Bounds  other) ;

/// @brief Method ContainsXZ, addr 0x182566770, size 0x50, virtual false, abstract: false, final false
static inline bool ContainsXZ(::UnityEngine::Bounds  bounds, ::UnityEngine::Vector3  position) ;

/// @brief Method Encapsulates, addr 0x182566830, size 0x90, virtual false, abstract: false, final false
static inline bool Encapsulates(::UnityEngine::Rect  r1, ::UnityEngine::Rect  r2) ;

/// @brief Method FinalColor, addr 0x1825668c0, size 0x2b0, virtual false, abstract: false, final false
static inline ::UnityEngine::Color FinalColor(::UnityEngine::Light*  light) ;

/// @brief Method GetBoolean, addr 0x182566b70, size 0x30, virtual false, abstract: false, final false
static inline bool GetBoolean(::UnityEngine::Material*  material, int32_t  id) ;

/// @brief Method GetDescriptor, addr 0x182566ba0, size 0x190, virtual false, abstract: false, final false
static inline ::UnityEngine::RenderTextureDescriptor GetDescriptor(::UnityEngine::Texture*  texture) ;

/// @brief Method GetRawSceneHandle, addr 0x182566d30, size 0x30, virtual false, abstract: false, final false
static inline uint64_t GetRawSceneHandle(::UnityEngine::SceneManagement::Scene  _cordl_this) ;

/// @brief Method IntersectsXZ, addr 0x182566d60, size 0x70, virtual false, abstract: false, final false
static inline bool IntersectsXZ(::UnityEngine::Bounds  a, ::UnityEngine::Bounds  b) ;

/// @brief Method IsEmpty, addr 0x180769270, size 0xd90, virtual false, abstract: false, final false
static inline bool IsEmpty(::UnityEngine::Events::UnityEvent*  event) ;

/// @brief Method IsEmpty, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline bool IsEmpty(::UnityEngine::Events::UnityEvent_1<T>*  event) ;

/// @brief Method Maximum, addr 0x1820bca20, size 0x20, virtual false, abstract: false, final false
static inline float_t Maximum(::UnityEngine::Vector3  v) ;

/// @brief Method MaybeGamma, addr 0x182042f40, size 0xa0, virtual false, abstract: false, final false
static inline ::UnityEngine::Color MaybeGamma(::UnityEngine::Color  color) ;

/// @brief Method MaybeLinear, addr 0x182042fe0, size 0xa0, virtual false, abstract: false, final false
static inline ::UnityEngine::Color MaybeLinear(::UnityEngine::Color  color) ;

/// @brief Method NNZ, addr 0x182566e00, size 0x20, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector3 NNZ(::UnityEngine::Vector3  v, float_t  n) ;

/// @brief Method NNZW, addr 0x182566dd0, size 0x30, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector4 NNZW(::UnityEngine::Vector2  v, float_t  n) ;

/// @brief Method NYN, addr 0x182566e20, size 0x20, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector3 NYN(::UnityEngine::Vector3  v, float_t  n) ;

/// @brief Method RectXZ, addr 0x182566e40, size 0x50, virtual false, abstract: false, final false
static inline ::UnityEngine::Rect RectXZ(::UnityEngine::Bounds  bounds) ;

/// @brief Method RectXZ, addr 0x182566e90, size 0x1f0, virtual false, abstract: false, final false
static inline ::UnityEngine::Rect RectXZ(::UnityEngine::Transform*  transform) ;

/// @brief Method Rotate, addr 0x182567080, size 0x120, virtual false, abstract: false, final false
static inline ::UnityEngine::Bounds Rotate(::UnityEngine::Bounds  bounds, ::UnityEngine::Quaternion  rotation) ;

/// @brief Method RotationXZ, addr 0x1825671a0, size 0x80, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector2 RotationXZ(::UnityEngine::Transform*  transform) ;

/// @brief Method SetBoolean, addr 0x182567220, size 0x30, virtual false, abstract: false, final false
static inline void SetBoolean(::UnityEngine::Material*  material, int32_t  id, bool  value) ;

/// @brief Method SetGlobalBoolean, addr 0x182567250, size 0x30, virtual false, abstract: false, final false
static inline void SetGlobalBoolean(::UnityEngine::Rendering::CommandBuffer*  buffer, int32_t  id, bool  value) ;

/// @brief Method SetKeyword, addr 0x1804bb660, size 0x40, virtual false, abstract: false, final false
static inline void SetKeyword(::UnityEngine::Material*  material, ::StringW  keyword, bool  enabled) ;

/// @brief Method SetKeyword, addr 0x182567280, size 0x40, virtual false, abstract: false, final false
static inline void SetKeyword(::UnityEngine::ComputeShader*  shader, ::StringW  keyword, bool  enabled) ;

/// @brief Method SetMSAASamples, addr 0x1825672c0, size 0x140, virtual false, abstract: false, final false
static inline void SetMSAASamples(::by_ref<::UnityEngine::RenderTextureDescriptor>  descriptor, ::UnityEngine::Camera*  camera) ;

/// @brief Method SetShaderKeyword, addr 0x182567400, size 0x40, virtual false, abstract: false, final false
static inline void SetShaderKeyword(::UnityEngine::Rendering::CommandBuffer*  buffer, ::StringW  keyword, bool  enabled) ;

/// @brief Method TransformBounds, addr 0x182567440, size 0x2e0, virtual false, abstract: false, final false
static inline ::UnityEngine::Bounds TransformBounds(::UnityEngine::Transform*  transform, ::UnityEngine::Bounds  bounds) ;

/// @brief Method XNN, addr 0x182567720, size 0x20, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector3 XNN(::UnityEngine::Vector3  v, float_t  n) ;

/// @brief Method XNZ, addr 0x18049bcc0, size 0x30, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector3 XNZ(::UnityEngine::Vector2  v, float_t  n) ;

/// @brief Method XNZ, addr 0x18049b7d0, size 0x20, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector3 XNZ(::UnityEngine::Vector3  v, float_t  n) ;

/// @brief Method XNZW, addr 0x182567740, size 0x20, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector4 XNZW(::UnityEngine::Vector4  v, float_t  n) ;

/// @brief Method XY, addr 0x180646ca0, size 0x20, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector2 XY(::UnityEngine::Vector4  v) ;

/// @brief Method XYNN, addr 0x181eeebd0, size 0x40, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector4 XYNN(::UnityEngine::Vector2  v, ::UnityEngine::Vector2  n) ;

/// @brief Method XYNN, addr 0x182567760, size 0x30, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector4 XYNN(::UnityEngine::Vector2  v, float_t  n) ;

/// @brief Method XYZ, addr 0x1803bdaa0, size 0x20, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector3 XYZ(::UnityEngine::Vector4  v) ;

/// @brief Method XYZN, addr 0x182567790, size 0x20, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector4 XYZN(::UnityEngine::Vector3  v, float_t  n) ;

/// @brief Method XZ, addr 0x18049bca0, size 0x20, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector2 XZ(::UnityEngine::Vector3  v) ;

/// @brief Method ZW, addr 0x180646ce0, size 0x20, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector2 ZW(::UnityEngine::Vector4  v) ;

static inline ::ArrayW<::UnityEngine::Vector3> getStaticF_s_BoundsPoints() ;

static inline void setStaticF_s_BoundsPoints(::ArrayW<::UnityEngine::Vector3>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Extensions() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Extensions", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Extensions(Extensions && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Extensions", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Extensions(Extensions const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20161};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::WaveHarmonic::Crest::Internal::Extensions) == 0x10, "Size mismatch!");

} // namespace end def WaveHarmonic::Crest::Internal

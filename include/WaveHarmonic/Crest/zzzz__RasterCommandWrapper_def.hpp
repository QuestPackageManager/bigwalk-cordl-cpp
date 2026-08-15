#pragma once
// IWYU pragma private; include "WaveHarmonic/Crest/RasterCommandWrapper.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(RasterCommandWrapper)
namespace UnityEngine::Rendering {
class RasterCommandBuffer;
}
namespace UnityEngine {
class MaterialPropertyBlock;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
struct Matrix4x4;
}
namespace UnityEngine {
class Mesh;
}
namespace UnityEngine {
class Texture;
}
namespace UnityEngine {
struct Vector4;
}
namespace WaveHarmonic::Crest {
class ICommandWrapper;
}
namespace WaveHarmonic::Crest {
class IPropertyWrapper;
}
// Forward declare root types
namespace WaveHarmonic::Crest {
struct RasterCommandWrapper;
}
// Write type traits
MARK_VAL_T(::WaveHarmonic::Crest::RasterCommandWrapper);
DEFINE_IL2CPP_CLASS(::WaveHarmonic::Crest::RasterCommandWrapper, "WaveHarmonic.Crest", "RasterCommandWrapper");
// Dependencies 
namespace WaveHarmonic::Crest {
// Is value type: true
// CS Name: WaveHarmonic.Crest.RasterCommandWrapper
struct CORDL_TYPE RasterCommandWrapper {
public:
// Declarations
 __declspec(property(get=get_Commands)) ::UnityEngine::Rendering::RasterCommandBuffer*  Commands;

/// @brief Convert operator to "::WaveHarmonic::Crest::ICommandWrapper"
constexpr operator  ::WaveHarmonic::Crest::ICommandWrapper*() ;

/// @brief Convert operator to "::WaveHarmonic::Crest::IPropertyWrapper"
constexpr operator  ::WaveHarmonic::Crest::IPropertyWrapper*() ;

/// @brief Method DrawFullScreenTriangle, addr 0x18256c4e0, size 0xc0, virtual true, abstract: false, final true
inline void DrawFullScreenTriangle(::UnityEngine::Material*  material, int32_t  pass, ::UnityEngine::MaterialPropertyBlock*  block) ;

/// @brief Method DrawMesh, addr 0x18256c5a0, size 0xe0, virtual true, abstract: false, final true
inline void DrawMesh(::UnityEngine::Mesh*  mesh, ::UnityEngine::Matrix4x4  matrix, ::UnityEngine::Material*  material, int32_t  pass, ::UnityEngine::MaterialPropertyBlock*  block) ;

/// @brief Method GetBlock, addr 0x1802d9d80, size 0x10, virtual true, abstract: false, final true
inline void GetBlock() ;

/// @brief Method SetBlock, addr 0x1802d9d80, size 0x10, virtual true, abstract: false, final true
inline void SetBlock() ;

/// @brief Method SetBoolean, addr 0x18256c680, size 0x40, virtual true, abstract: false, final true
inline void SetBoolean(int32_t  param, bool  value) ;

/// @brief Method SetFloat, addr 0x18256c6f0, size 0x30, virtual true, abstract: false, final true
inline void SetFloat(int32_t  param, float_t  value) ;

/// @brief Method SetFloatArray, addr 0x18256c6c0, size 0x30, virtual true, abstract: false, final true
inline void SetFloatArray(int32_t  param, ::ArrayW<float_t>  value) ;

/// @brief Method SetInteger, addr 0x18256c720, size 0x30, virtual true, abstract: false, final true
inline void SetInteger(int32_t  param, int32_t  value) ;

/// @brief Method SetInvertCulling, addr 0x18256c750, size 0x30, virtual true, abstract: false, final true
inline void SetInvertCulling(bool  invert) ;

/// @brief Method SetMatrix, addr 0x18256c780, size 0x90, virtual true, abstract: false, final true
inline void SetMatrix(int32_t  param, ::UnityEngine::Matrix4x4  value) ;

/// @brief Method SetTexture, addr 0x18256c810, size 0x90, virtual true, abstract: false, final true
inline void SetTexture(int32_t  param, ::UnityEngine::Texture*  value) ;

/// @brief Method SetVector, addr 0x18256c8d0, size 0x90, virtual true, abstract: false, final true
inline void SetVector(int32_t  param, ::UnityEngine::Vector4  value) ;

/// @brief Method SetVectorArray, addr 0x18256c8a0, size 0x30, virtual true, abstract: false, final true
inline void SetVectorArray(int32_t  param, ::ArrayW<::UnityEngine::Vector4>  value) ;

/// @brief Method .ctor, addr 0x180378fd0, size 0x10, virtual false, abstract: false, final false
inline void _ctor(::UnityEngine::Rendering::RasterCommandBuffer*  commands) ;

/// @brief Method get_Commands, addr 0x1803a88d0, size 0x10, virtual false, abstract: false, final false
inline ::UnityEngine::Rendering::RasterCommandBuffer* get_Commands() ;

/// @brief Convert to "::WaveHarmonic::Crest::ICommandWrapper"
constexpr ::WaveHarmonic::Crest::ICommandWrapper* i___WaveHarmonic__Crest__ICommandWrapper() ;

/// @brief Convert to "::WaveHarmonic::Crest::IPropertyWrapper"
constexpr ::WaveHarmonic::Crest::IPropertyWrapper* i___WaveHarmonic__Crest__IPropertyWrapper() ;

// Ctor Parameters []
// @brief default ctor
constexpr RasterCommandWrapper() ;

// Ctor Parameters [CppParam { name: "_Commands_k__BackingField", ty: "::UnityEngine::Rendering::RasterCommandBuffer*", modifiers: "", def_value: None }]
constexpr RasterCommandWrapper(::UnityEngine::Rendering::RasterCommandBuffer*  _Commands_k__BackingField) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20133};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field <Commands>k__BackingField, offset: 0x0, size: 0x8, def value: None
 ::UnityEngine::Rendering::RasterCommandBuffer*  _Commands_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::WaveHarmonic::Crest::RasterCommandWrapper, _Commands_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(sizeof(::WaveHarmonic::Crest::RasterCommandWrapper) == 0x8, "Size mismatch!");

} // namespace end def WaveHarmonic::Crest

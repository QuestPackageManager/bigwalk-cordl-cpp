#pragma once
// IWYU pragma private; include "WaveHarmonic/Crest/PropertyWrapperBuffer.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(PropertyWrapperBuffer)
namespace UnityEngine::Rendering {
class CommandBuffer;
}
namespace UnityEngine {
struct Matrix4x4;
}
namespace UnityEngine {
class Texture;
}
namespace UnityEngine {
struct Vector4;
}
namespace WaveHarmonic::Crest {
class IPropertyWrapper;
}
// Forward declare root types
namespace WaveHarmonic::Crest {
struct PropertyWrapperBuffer;
}
// Write type traits
MARK_VAL_T(::WaveHarmonic::Crest::PropertyWrapperBuffer);
DEFINE_IL2CPP_CLASS(::WaveHarmonic::Crest::PropertyWrapperBuffer, "WaveHarmonic.Crest", "PropertyWrapperBuffer");
// Dependencies 
namespace WaveHarmonic::Crest {
// Is value type: true
// CS Name: WaveHarmonic.Crest.PropertyWrapperBuffer
struct CORDL_TYPE PropertyWrapperBuffer {
public:
// Declarations
 __declspec(property(get=get_Buffer)) ::UnityEngine::Rendering::CommandBuffer*  Buffer;

/// @brief Convert operator to "::WaveHarmonic::Crest::IPropertyWrapper"
constexpr operator  ::WaveHarmonic::Crest::IPropertyWrapper*() ;

/// @brief Method GetBlock, addr 0x1802d9d80, size 0x10, virtual true, abstract: false, final true
inline void GetBlock() ;

/// @brief Method SetBlock, addr 0x1802d9d80, size 0x10, virtual true, abstract: false, final true
inline void SetBlock() ;

/// @brief Method SetBoolean, addr 0x182565060, size 0x40, virtual true, abstract: false, final true
inline void SetBoolean(int32_t  param, bool  value) ;

/// @brief Method SetFloat, addr 0x1825650d0, size 0x30, virtual true, abstract: false, final true
inline void SetFloat(int32_t  param, float_t  value) ;

/// @brief Method SetFloatArray, addr 0x1825650a0, size 0x30, virtual true, abstract: false, final true
inline void SetFloatArray(int32_t  param, ::ArrayW<float_t>  value) ;

/// @brief Method SetInteger, addr 0x182565100, size 0x30, virtual true, abstract: false, final true
inline void SetInteger(int32_t  param, int32_t  value) ;

/// @brief Method SetMatrix, addr 0x182565160, size 0x90, virtual true, abstract: false, final true
inline void SetMatrix(int32_t  param, ::UnityEngine::Matrix4x4  value) ;

/// @brief Method SetTexture, addr 0x1825651f0, size 0x80, virtual true, abstract: false, final true
inline void SetTexture(int32_t  param, ::UnityEngine::Texture*  value) ;

/// @brief Method SetVector, addr 0x1825652a0, size 0x90, virtual true, abstract: false, final true
inline void SetVector(int32_t  param, ::UnityEngine::Vector4  value) ;

/// @brief Method SetVectorArray, addr 0x182565270, size 0x30, virtual true, abstract: false, final true
inline void SetVectorArray(int32_t  param, ::ArrayW<::UnityEngine::Vector4>  value) ;

/// @brief Method .ctor, addr 0x180378fd0, size 0x10, virtual false, abstract: false, final false
inline void _ctor(::UnityEngine::Rendering::CommandBuffer*  mpb) ;

/// @brief Method get_Buffer, addr 0x1803a88d0, size 0x10, virtual false, abstract: false, final false
inline ::UnityEngine::Rendering::CommandBuffer* get_Buffer() ;

/// @brief Convert to "::WaveHarmonic::Crest::IPropertyWrapper"
constexpr ::WaveHarmonic::Crest::IPropertyWrapper* i___WaveHarmonic__Crest__IPropertyWrapper() ;

// Ctor Parameters []
// @brief default ctor
constexpr PropertyWrapperBuffer() ;

// Ctor Parameters [CppParam { name: "_Buffer_k__BackingField", ty: "::UnityEngine::Rendering::CommandBuffer*", modifiers: "", def_value: None }]
constexpr PropertyWrapperBuffer(::UnityEngine::Rendering::CommandBuffer*  _Buffer_k__BackingField) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20138};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field <Buffer>k__BackingField, offset: 0x0, size: 0x8, def value: None
 ::UnityEngine::Rendering::CommandBuffer*  _Buffer_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::WaveHarmonic::Crest::PropertyWrapperBuffer, _Buffer_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(sizeof(::WaveHarmonic::Crest::PropertyWrapperBuffer) == 0x8, "Size mismatch!");

} // namespace end def WaveHarmonic::Crest

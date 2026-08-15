#pragma once
// IWYU pragma private; include "WaveHarmonic/Crest/PropertyWrapperMaterial.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(PropertyWrapperMaterial)
namespace UnityEngine::Rendering {
struct LocalKeyword;
}
namespace UnityEngine {
class ComputeBuffer;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
struct Matrix4x4;
}
namespace UnityEngine {
class Shader;
}
namespace UnityEngine {
class Texture;
}
namespace UnityEngine {
struct Vector4;
}
namespace WaveHarmonic::Crest {
class IPropertyWrapperVariants;
}
namespace WaveHarmonic::Crest {
class IPropertyWrapper;
}
// Forward declare root types
namespace WaveHarmonic::Crest {
struct PropertyWrapperMaterial;
}
// Write type traits
MARK_VAL_T(::WaveHarmonic::Crest::PropertyWrapperMaterial);
DEFINE_IL2CPP_CLASS(::WaveHarmonic::Crest::PropertyWrapperMaterial, "WaveHarmonic.Crest", "PropertyWrapperMaterial");
// Dependencies 
namespace WaveHarmonic::Crest {
// Is value type: true
// CS Name: WaveHarmonic.Crest.PropertyWrapperMaterial
struct CORDL_TYPE PropertyWrapperMaterial {
public:
// Declarations
 __declspec(property(get=get_Material)) ::UnityW<::UnityEngine::Material>  Material;

/// @brief Convert operator to "::WaveHarmonic::Crest::IPropertyWrapper"
constexpr operator  ::WaveHarmonic::Crest::IPropertyWrapper*() ;

/// @brief Convert operator to "::WaveHarmonic::Crest::IPropertyWrapperVariants"
constexpr operator  ::WaveHarmonic::Crest::IPropertyWrapperVariants*() ;

/// @brief Method GetBlock, addr 0x1802d9d80, size 0x10, virtual true, abstract: false, final true
inline void GetBlock() ;

/// @brief Method SetBlock, addr 0x1802d9d80, size 0x10, virtual true, abstract: false, final true
inline void SetBlock() ;

/// @brief Method SetBoolean, addr 0x18256bf60, size 0x40, virtual true, abstract: false, final true
inline void SetBoolean(int32_t  param, bool  value) ;

/// @brief Method SetBuffer, addr 0x18256bfa0, size 0x30, virtual false, abstract: false, final false
inline void SetBuffer(int32_t  param, ::UnityEngine::ComputeBuffer*  value) ;

/// @brief Method SetFloat, addr 0x18256c000, size 0x30, virtual true, abstract: false, final true
inline void SetFloat(int32_t  param, float_t  value) ;

/// @brief Method SetFloatArray, addr 0x18256bfd0, size 0x30, virtual true, abstract: false, final true
inline void SetFloatArray(int32_t  param, ::ArrayW<float_t>  value) ;

/// @brief Method SetInteger, addr 0x18256c030, size 0x30, virtual true, abstract: false, final true
inline void SetInteger(int32_t  param, int32_t  value) ;

/// @brief Method SetKeyword, addr 0x18256c060, size 0x30, virtual false, abstract: false, final false
inline void SetKeyword(::by_ref<::UnityEngine::Rendering::LocalKeyword>  keyword, bool  value) ;

/// @brief Method SetMatrix, addr 0x18256c090, size 0x90, virtual true, abstract: false, final true
inline void SetMatrix(int32_t  param, ::UnityEngine::Matrix4x4  value) ;

/// @brief Method SetTexture, addr 0x18256c120, size 0x30, virtual true, abstract: false, final true
inline void SetTexture(int32_t  param, ::UnityEngine::Texture*  value) ;

/// @brief Method SetVector, addr 0x18256c180, size 0x60, virtual true, abstract: false, final true
inline void SetVector(int32_t  param, ::UnityEngine::Vector4  value) ;

/// @brief Method SetVectorArray, addr 0x18256c150, size 0x30, virtual true, abstract: false, final true
inline void SetVectorArray(int32_t  param, ::ArrayW<::UnityEngine::Vector4>  value) ;

/// @brief Method WaveHarmonic.Crest.IPropertyWrapperVariants.SetKeyword, addr 0x18256c060, size 0x30, virtual true, abstract: false, final true
inline void WaveHarmonic_Crest_IPropertyWrapperVariants_SetKeyword(::by_ref<::UnityEngine::Rendering::LocalKeyword>  keyword, bool  value) ;

/// @brief Method .ctor, addr 0x180378fd0, size 0x10, virtual false, abstract: false, final false
inline void _ctor(::UnityEngine::Material*  material) ;

/// @brief Method .ctor, addr 0x18256c1e0, size 0x60, virtual false, abstract: false, final false
inline void _ctor(::UnityEngine::Shader*  shader) ;

/// @brief Method .ctor, addr 0x18256c240, size 0xa0, virtual false, abstract: false, final false
inline void _ctor(::StringW  shaderPath) ;

/// @brief Method get_Material, addr 0x1803a88d0, size 0x10, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Material> get_Material() ;

/// @brief Convert to "::WaveHarmonic::Crest::IPropertyWrapper"
constexpr ::WaveHarmonic::Crest::IPropertyWrapper* i___WaveHarmonic__Crest__IPropertyWrapper() ;

/// @brief Convert to "::WaveHarmonic::Crest::IPropertyWrapperVariants"
constexpr ::WaveHarmonic::Crest::IPropertyWrapperVariants* i___WaveHarmonic__Crest__IPropertyWrapperVariants() ;

// Ctor Parameters []
// @brief default ctor
constexpr PropertyWrapperMaterial() ;

// Ctor Parameters [CppParam { name: "_Material_k__BackingField", ty: "::UnityW<::UnityEngine::Material>", modifiers: "", def_value: None }]
constexpr PropertyWrapperMaterial(::UnityW<::UnityEngine::Material>  _Material_k__BackingField) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20140};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field <Material>k__BackingField, offset: 0x0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Material>  _Material_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::WaveHarmonic::Crest::PropertyWrapperMaterial, _Material_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(sizeof(::WaveHarmonic::Crest::PropertyWrapperMaterial) == 0x8, "Size mismatch!");

} // namespace end def WaveHarmonic::Crest

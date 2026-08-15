#pragma once
// IWYU pragma private; include "WaveHarmonic/Crest/IPropertyWrapper.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(IPropertyWrapper)
namespace UnityEngine {
struct Matrix4x4;
}
namespace UnityEngine {
class Texture;
}
namespace UnityEngine {
struct Vector4;
}
// Forward declare root types
namespace WaveHarmonic::Crest {
class IPropertyWrapper;
}
// Write type traits
MARK_REF_T(::WaveHarmonic::Crest::IPropertyWrapper*);
DEFINE_IL2CPP_CLASS(::WaveHarmonic::Crest::IPropertyWrapper*, "WaveHarmonic.Crest", "IPropertyWrapper");
// Dependencies 
namespace WaveHarmonic::Crest {
// Is value type: false
// CS Name: WaveHarmonic.Crest.IPropertyWrapper
class CORDL_TYPE IPropertyWrapper {
public:
// Declarations
/// @brief Method GetBlock, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void GetBlock() ;

/// @brief Method SetBlock, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void SetBlock() ;

/// @brief Method SetBoolean, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void SetBoolean(int32_t  param, bool  value) ;

/// @brief Method SetFloat, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void SetFloat(int32_t  param, float_t  value) ;

/// @brief Method SetFloatArray, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void SetFloatArray(int32_t  param, ::ArrayW<float_t>  value) ;

/// @brief Method SetInteger, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void SetInteger(int32_t  param, int32_t  value) ;

/// @brief Method SetMatrix, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void SetMatrix(int32_t  param, ::UnityEngine::Matrix4x4  matrix) ;

/// @brief Method SetTexture, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void SetTexture(int32_t  param, ::UnityEngine::Texture*  value) ;

/// @brief Method SetVector, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void SetVector(int32_t  param, ::UnityEngine::Vector4  value) ;

/// @brief Method SetVectorArray, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void SetVectorArray(int32_t  param, ::ArrayW<::UnityEngine::Vector4>  value) ;

// Ctor Parameters [CppParam { name: "", ty: "IPropertyWrapper", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
IPropertyWrapper(IPropertyWrapper const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20135};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def WaveHarmonic::Crest

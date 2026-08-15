#pragma once
// IWYU pragma private; include "WaveHarmonic/Crest/ICommandWrapper.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstdint>
CORDL_MODULE_EXPORT(ICommandWrapper)
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
namespace WaveHarmonic::Crest {
class IPropertyWrapper;
}
// Forward declare root types
namespace WaveHarmonic::Crest {
class ICommandWrapper;
}
// Write type traits
MARK_REF_T(::WaveHarmonic::Crest::ICommandWrapper*);
DEFINE_IL2CPP_CLASS(::WaveHarmonic::Crest::ICommandWrapper*, "WaveHarmonic.Crest", "ICommandWrapper");
// Dependencies 
namespace WaveHarmonic::Crest {
// Is value type: false
// CS Name: WaveHarmonic.Crest.ICommandWrapper
class CORDL_TYPE ICommandWrapper {
public:
// Declarations
/// @brief Convert operator to "::WaveHarmonic::Crest::IPropertyWrapper"
constexpr operator  ::WaveHarmonic::Crest::IPropertyWrapper*() noexcept;

/// @brief Method DrawFullScreenTriangle, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void DrawFullScreenTriangle(::UnityEngine::Material*  material, int32_t  pass, ::UnityEngine::MaterialPropertyBlock*  block) ;

/// @brief Method DrawMesh, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void DrawMesh(::UnityEngine::Mesh*  mesh, ::UnityEngine::Matrix4x4  matrix, ::UnityEngine::Material*  material, int32_t  pass, ::UnityEngine::MaterialPropertyBlock*  block) ;

/// @brief Method SetInvertCulling, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void SetInvertCulling(bool  invert) ;

/// @brief Convert to "::WaveHarmonic::Crest::IPropertyWrapper"
constexpr ::WaveHarmonic::Crest::IPropertyWrapper* i___WaveHarmonic__Crest__IPropertyWrapper() noexcept;

// Ctor Parameters [CppParam { name: "", ty: "ICommandWrapper", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ICommandWrapper(ICommandWrapper const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20131};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def WaveHarmonic::Crest

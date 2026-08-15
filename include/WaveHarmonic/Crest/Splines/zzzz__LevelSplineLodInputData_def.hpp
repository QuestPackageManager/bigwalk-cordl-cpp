#pragma once
// IWYU pragma private; include "WaveHarmonic/Crest/Splines/LevelSplineLodInputData.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "WaveHarmonic/Crest/Splines/Internal/zzzz__SplineLodInputData_1_def.hpp"
CORDL_MODULE_EXPORT(LevelSplineLodInputData)
namespace UnityEngine {
class Shader;
}
namespace UnityEngine {
struct Vector4;
}
namespace WaveHarmonic::Crest::Splines {
class SplinePointData;
}
// Forward declare root types
namespace WaveHarmonic::Crest::Splines {
class LevelSplineLodInputData;
}
// Write type traits
MARK_REF_T(::WaveHarmonic::Crest::Splines::LevelSplineLodInputData*);
DEFINE_IL2CPP_CLASS(::WaveHarmonic::Crest::Splines::LevelSplineLodInputData*, "WaveHarmonic.Crest.Splines", "LevelSplineLodInputData");
// Dependencies WaveHarmonic.Crest.Splines.Internal.SplineLodInputData`1<T>
namespace WaveHarmonic::Crest::Splines {
// Is value type: false
// CS Name: WaveHarmonic.Crest.Splines.LevelSplineLodInputData
class CORDL_TYPE LevelSplineLodInputData : public ::WaveHarmonic::Crest::Splines::Internal::SplineLodInputData_1<::UnityW<::WaveHarmonic::Crest::Splines::SplinePointData>> {
public:
// Declarations
 __declspec(property(get=get_DefaultCustomSplineData)) ::UnityEngine::Vector4  DefaultCustomSplineData;

 __declspec(property(get=get_SplineShader)) ::UnityW<::UnityEngine::Shader>  SplineShader;

static inline ::WaveHarmonic::Crest::Splines::LevelSplineLodInputData* New_ctor() ;

/// @brief Method .ctor, addr 0x18256e2b0, size 0x30, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_DefaultCustomSplineData, addr 0x1821c80f0, size 0x10, virtual true, abstract: false, final false
inline ::UnityEngine::Vector4 get_DefaultCustomSplineData() ;

/// @brief Method get_SplineShader, addr 0x182559f00, size 0x70, virtual true, abstract: false, final false
inline ::UnityW<::UnityEngine::Shader> get_SplineShader() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LevelSplineLodInputData() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LevelSplineLodInputData", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
LevelSplineLodInputData(LevelSplineLodInputData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LevelSplineLodInputData", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
LevelSplineLodInputData(LevelSplineLodInputData const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21098};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::WaveHarmonic::Crest::Splines::LevelSplineLodInputData) == 0x88, "Size mismatch!");

} // namespace end def WaveHarmonic::Crest::Splines

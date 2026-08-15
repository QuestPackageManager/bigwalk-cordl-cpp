#pragma once
// IWYU pragma private; include "WaveHarmonic/Crest/LevelGeometryLodInputData.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "WaveHarmonic/Crest/zzzz__GeometryLodInputData_def.hpp"
CORDL_MODULE_EXPORT(LevelGeometryLodInputData)
namespace UnityEngine {
class Shader;
}
// Forward declare root types
namespace WaveHarmonic::Crest {
class LevelGeometryLodInputData;
}
// Write type traits
MARK_REF_T(::WaveHarmonic::Crest::LevelGeometryLodInputData*);
DEFINE_IL2CPP_CLASS(::WaveHarmonic::Crest::LevelGeometryLodInputData*, "WaveHarmonic.Crest", "LevelGeometryLodInputData");
// Dependencies WaveHarmonic.Crest.GeometryLodInputData
namespace WaveHarmonic::Crest {
// Is value type: false
// CS Name: WaveHarmonic.Crest.LevelGeometryLodInputData
class CORDL_TYPE LevelGeometryLodInputData : public ::WaveHarmonic::Crest::GeometryLodInputData {
public:
// Declarations
 __declspec(property(get=get_GeometryShader)) ::UnityW<::UnityEngine::Shader>  GeometryShader;

static inline ::WaveHarmonic::Crest::LevelGeometryLodInputData* New_ctor() ;

/// @brief Method .ctor, addr 0x182553b60, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_GeometryShader, addr 0x182559f00, size 0x70, virtual true, abstract: false, final false
inline ::UnityW<::UnityEngine::Shader> get_GeometryShader() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LevelGeometryLodInputData() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LevelGeometryLodInputData", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
LevelGeometryLodInputData(LevelGeometryLodInputData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LevelGeometryLodInputData", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
LevelGeometryLodInputData(LevelGeometryLodInputData const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16551};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::WaveHarmonic::Crest::LevelGeometryLodInputData) == 0x60, "Size mismatch!");

} // namespace end def WaveHarmonic::Crest

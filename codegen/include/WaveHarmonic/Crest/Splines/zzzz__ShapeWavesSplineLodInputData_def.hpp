#pragma once
// IWYU pragma private; include "WaveHarmonic/Crest/Splines/ShapeWavesSplineLodInputData.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "WaveHarmonic/Crest/Splines/Internal/zzzz__SplineLodInputData_1_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(ShapeWavesSplineLodInputData)
namespace UnityEngine {
class Shader;
}
namespace UnityEngine {
struct Vector4;
}
namespace WaveHarmonic::Crest::Splines {
class ShapeWavesSplineLodInputData_ShaderIDs;
}
namespace WaveHarmonic::Crest::Splines {
class WavesSplinePointData;
}
// Forward declare root types
namespace WaveHarmonic::Crest::Splines {
class ShapeWavesSplineLodInputData;
}
namespace WaveHarmonic::Crest::Splines {
class ShapeWavesSplineLodInputData_ShaderIDs;
}
// Write type traits
MARK_REF_T(::WaveHarmonic::Crest::Splines::ShapeWavesSplineLodInputData*);
MARK_REF_T(::WaveHarmonic::Crest::Splines::ShapeWavesSplineLodInputData_ShaderIDs*);
DEFINE_IL2CPP_CLASS(::WaveHarmonic::Crest::Splines::ShapeWavesSplineLodInputData*, "WaveHarmonic.Crest.Splines", "ShapeWavesSplineLodInputData");
DEFINE_IL2CPP_CLASS(::WaveHarmonic::Crest::Splines::ShapeWavesSplineLodInputData_ShaderIDs*, "WaveHarmonic.Crest.Splines", "ShapeWavesSplineLodInputData/ShaderIDs");
// Dependencies System.Object
namespace WaveHarmonic::Crest::Splines {
// Is value type: false
// CS Name: WaveHarmonic.Crest.Splines.ShapeWavesSplineLodInputData/ShaderIDs
class CORDL_TYPE ShapeWavesSplineLodInputData_ShaderIDs : public ::System::Object {
public:
// Declarations
/// @brief Field s_FeatherWaveStart, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_s_FeatherWaveStart, put=setStaticF_s_FeatherWaveStart)) int32_t  s_FeatherWaveStart;

static inline int32_t getStaticF_s_FeatherWaveStart() ;

static inline void setStaticF_s_FeatherWaveStart(int32_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ShapeWavesSplineLodInputData_ShaderIDs() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ShapeWavesSplineLodInputData_ShaderIDs", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ShapeWavesSplineLodInputData_ShaderIDs(ShapeWavesSplineLodInputData_ShaderIDs && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ShapeWavesSplineLodInputData_ShaderIDs", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ShapeWavesSplineLodInputData_ShaderIDs(ShapeWavesSplineLodInputData_ShaderIDs const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21086};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::WaveHarmonic::Crest::Splines::ShapeWavesSplineLodInputData_ShaderIDs) == 0x10, "Size mismatch!");

} // namespace end def WaveHarmonic::Crest::Splines
// Dependencies WaveHarmonic.Crest.Splines.Internal.SplineLodInputData`1<T>
namespace WaveHarmonic::Crest::Splines {
// Is value type: false
// CS Name: WaveHarmonic.Crest.Splines.ShapeWavesSplineLodInputData
class CORDL_TYPE ShapeWavesSplineLodInputData : public ::WaveHarmonic::Crest::Splines::Internal::SplineLodInputData_1<::UnityW<::WaveHarmonic::Crest::Splines::WavesSplinePointData>> {
public:
// Declarations
using ShaderIDs = ::WaveHarmonic::Crest::Splines::ShapeWavesSplineLodInputData_ShaderIDs;

 __declspec(property(get=get_DefaultCustomSplineData)) ::UnityEngine::Vector4  DefaultCustomSplineData;

 __declspec(property(get=get_FeatherWaveStart, put=set_FeatherWaveStart)) float_t  FeatherWaveStart;

 __declspec(property(get=get_SplineShader)) ::UnityW<::UnityEngine::Shader>  SplineShader;

 __declspec(property(get=get_Weight, put=set_Weight)) float_t  Weight;

/// @brief Field _FeatherWaveStart, offset 0x88, size 0x4 
 __declspec(property(get=__cordl_internal_get__FeatherWaveStart, put=__cordl_internal_set__FeatherWaveStart)) float_t  _FeatherWaveStart;

/// @brief Field _Weight, offset 0x84, size 0x4 
 __declspec(property(get=__cordl_internal_get__Weight, put=__cordl_internal_set__Weight)) float_t  _Weight;

static inline ::WaveHarmonic::Crest::Splines::ShapeWavesSplineLodInputData* New_ctor() ;

/// @brief Method OnUpdate, addr 0x18256e510, size 0xc0, virtual true, abstract: false, final false
inline void OnUpdate() ;

constexpr float_t const& __cordl_internal_get__FeatherWaveStart() const;

constexpr float_t& __cordl_internal_get__FeatherWaveStart() ;

constexpr float_t const& __cordl_internal_get__Weight() const;

constexpr float_t& __cordl_internal_get__Weight() ;

constexpr void __cordl_internal_set__FeatherWaveStart(float_t  value) ;

constexpr void __cordl_internal_set__Weight(float_t  value) ;

/// @brief Method .ctor, addr 0x18256e5d0, size 0x20, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_DefaultCustomSplineData, addr 0x18256e120, size 0x20, virtual true, abstract: false, final false
inline ::UnityEngine::Vector4 get_DefaultCustomSplineData() ;

/// @brief Method get_FeatherWaveStart, addr 0x180483510, size 0x10, virtual false, abstract: false, final false
inline float_t get_FeatherWaveStart() ;

/// @brief Method get_SplineShader, addr 0x18256e5f0, size 0x70, virtual true, abstract: false, final false
inline ::UnityW<::UnityEngine::Shader> get_SplineShader() ;

/// @brief Method get_Weight, addr 0x180312eb0, size 0x10, virtual false, abstract: false, final false
inline float_t get_Weight() ;

/// @brief Method set_FeatherWaveStart, addr 0x180eb78a0, size 0x10, virtual false, abstract: false, final false
inline void set_FeatherWaveStart(float_t  value) ;

/// @brief Method set_Weight, addr 0x18256e1b0, size 0x10, virtual false, abstract: false, final false
inline void set_Weight(float_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ShapeWavesSplineLodInputData() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ShapeWavesSplineLodInputData", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ShapeWavesSplineLodInputData(ShapeWavesSplineLodInputData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ShapeWavesSplineLodInputData", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ShapeWavesSplineLodInputData(ShapeWavesSplineLodInputData const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21087};

/// @brief Field _Weight, offset: 0x84, size: 0x4, def value: None
 float_t  ____Weight;

/// @brief Field _FeatherWaveStart, offset: 0x88, size: 0x4, def value: None
 float_t  ____FeatherWaveStart;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::WaveHarmonic::Crest::Splines::ShapeWavesSplineLodInputData, ____Weight) == 0x84, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::Splines::ShapeWavesSplineLodInputData, ____FeatherWaveStart) == 0x88, "Offset mismatch!");

static_assert(sizeof(::WaveHarmonic::Crest::Splines::ShapeWavesSplineLodInputData) == 0x90, "Size mismatch!");

} // namespace end def WaveHarmonic::Crest::Splines

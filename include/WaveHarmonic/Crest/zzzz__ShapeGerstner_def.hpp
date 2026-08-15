#pragma once
// IWYU pragma private; include "WaveHarmonic/Crest/ShapeGerstner.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Vector4_def.hpp"
#include "WaveHarmonic/Crest/zzzz__ShapeWaves_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ShapeGerstner)
namespace UnityEngine::Rendering {
class CommandBuffer;
}
namespace UnityEngine::Rendering {
struct RenderTargetIdentifier;
}
namespace UnityEngine {
class ComputeBuffer;
}
namespace WaveHarmonic::Crest::Utility {
template<typename TKey,typename TValue>
class SortedList_2;
}
namespace WaveHarmonic::Crest {
class Lod;
}
namespace WaveHarmonic::Crest {
struct ShapeGerstner_GerstnerWaveComponent4;
}
namespace WaveHarmonic::Crest {
class ShapeGerstner_ShaderIDs;
}
namespace WaveHarmonic::Crest {
class WaterRenderer;
}
namespace WaveHarmonic::Crest {
class WaterResources_GerstnerCompute;
}
namespace WaveHarmonic::Crest {
class WaveSpectrum;
}
// Forward declare root types
namespace WaveHarmonic::Crest {
class ShapeGerstner;
}
namespace WaveHarmonic::Crest {
class ShapeGerstner_ShaderIDs;
}
namespace WaveHarmonic::Crest {
struct ShapeGerstner_GerstnerWaveComponent4;
}
// Write type traits
MARK_REF_T(::WaveHarmonic::Crest::ShapeGerstner*);
MARK_REF_T(::WaveHarmonic::Crest::ShapeGerstner_ShaderIDs*);
MARK_VAL_T(::WaveHarmonic::Crest::ShapeGerstner_GerstnerWaveComponent4);
DEFINE_IL2CPP_CLASS(::WaveHarmonic::Crest::ShapeGerstner*, "WaveHarmonic.Crest", "ShapeGerstner");
DEFINE_IL2CPP_CLASS(::WaveHarmonic::Crest::ShapeGerstner_ShaderIDs*, "WaveHarmonic.Crest", "ShapeGerstner/ShaderIDs");
DEFINE_IL2CPP_CLASS(::WaveHarmonic::Crest::ShapeGerstner_GerstnerWaveComponent4, "WaveHarmonic.Crest", "ShapeGerstner/GerstnerWaveComponent4");
// Dependencies UnityEngine.Vector4
namespace WaveHarmonic::Crest {
// Is value type: true
// CS Name: WaveHarmonic.Crest.ShapeGerstner/GerstnerWaveComponent4
struct CORDL_TYPE ShapeGerstner_GerstnerWaveComponent4 {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr ShapeGerstner_GerstnerWaveComponent4() ;

// Ctor Parameters [CppParam { name: "_TwoPiOverWavelength", ty: "::UnityEngine::Vector4", modifiers: "", def_value: None }, CppParam { name: "_Amplitude", ty: "::UnityEngine::Vector4", modifiers: "", def_value: None }, CppParam { name: "_WaveDirectionX", ty: "::UnityEngine::Vector4", modifiers: "", def_value: None }, CppParam { name: "_WaveDirectionZ", ty: "::UnityEngine::Vector4", modifiers: "", def_value: None }, CppParam { name: "_Omega", ty: "::UnityEngine::Vector4", modifiers: "", def_value: None }, CppParam { name: "_Phase", ty: "::UnityEngine::Vector4", modifiers: "", def_value: None }, CppParam { name: "_ChopAmplitude", ty: "::UnityEngine::Vector4", modifiers: "", def_value: None }, CppParam { name: "_Amplitude2", ty: "::UnityEngine::Vector4", modifiers: "", def_value: None }, CppParam { name: "_ChopAmplitude2", ty: "::UnityEngine::Vector4", modifiers: "", def_value: None }, CppParam { name: "_Phase2", ty: "::UnityEngine::Vector4", modifiers: "", def_value: None }]
constexpr ShapeGerstner_GerstnerWaveComponent4(::UnityEngine::Vector4  _TwoPiOverWavelength, ::UnityEngine::Vector4  _Amplitude, ::UnityEngine::Vector4  _WaveDirectionX, ::UnityEngine::Vector4  _WaveDirectionZ, ::UnityEngine::Vector4  _Omega, ::UnityEngine::Vector4  _Phase, ::UnityEngine::Vector4  _ChopAmplitude, ::UnityEngine::Vector4  _Amplitude2, ::UnityEngine::Vector4  _ChopAmplitude2, ::UnityEngine::Vector4  _Phase2) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16564};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0xa0};

/// @brief Field _TwoPiOverWavelength, offset: 0x0, size: 0x10, def value: None
 ::UnityEngine::Vector4  _TwoPiOverWavelength;

/// @brief Field _Amplitude, offset: 0x10, size: 0x10, def value: None
 ::UnityEngine::Vector4  _Amplitude;

/// @brief Field _WaveDirectionX, offset: 0x20, size: 0x10, def value: None
 ::UnityEngine::Vector4  _WaveDirectionX;

/// @brief Field _WaveDirectionZ, offset: 0x30, size: 0x10, def value: None
 ::UnityEngine::Vector4  _WaveDirectionZ;

/// @brief Field _Omega, offset: 0x40, size: 0x10, def value: None
 ::UnityEngine::Vector4  _Omega;

/// @brief Field _Phase, offset: 0x50, size: 0x10, def value: None
 ::UnityEngine::Vector4  _Phase;

/// @brief Field _ChopAmplitude, offset: 0x60, size: 0x10, def value: None
 ::UnityEngine::Vector4  _ChopAmplitude;

/// @brief Field _Amplitude2, offset: 0x70, size: 0x10, def value: None
 ::UnityEngine::Vector4  _Amplitude2;

/// @brief Field _ChopAmplitude2, offset: 0x80, size: 0x10, def value: None
 ::UnityEngine::Vector4  _ChopAmplitude2;

/// @brief Field _Phase2, offset: 0x90, size: 0x10, def value: None
 ::UnityEngine::Vector4  _Phase2;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::WaveHarmonic::Crest::ShapeGerstner_GerstnerWaveComponent4, _TwoPiOverWavelength) == 0x0, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::ShapeGerstner_GerstnerWaveComponent4, _Amplitude) == 0x10, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::ShapeGerstner_GerstnerWaveComponent4, _WaveDirectionX) == 0x20, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::ShapeGerstner_GerstnerWaveComponent4, _WaveDirectionZ) == 0x30, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::ShapeGerstner_GerstnerWaveComponent4, _Omega) == 0x40, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::ShapeGerstner_GerstnerWaveComponent4, _Phase) == 0x50, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::ShapeGerstner_GerstnerWaveComponent4, _ChopAmplitude) == 0x60, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::ShapeGerstner_GerstnerWaveComponent4, _Amplitude2) == 0x70, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::ShapeGerstner_GerstnerWaveComponent4, _ChopAmplitude2) == 0x80, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::ShapeGerstner_GerstnerWaveComponent4, _Phase2) == 0x90, "Offset mismatch!");

static_assert(sizeof(::WaveHarmonic::Crest::ShapeGerstner_GerstnerWaveComponent4) == 0xa0, "Size mismatch!");

} // namespace end def WaveHarmonic::Crest
// Dependencies System.Object
namespace WaveHarmonic::Crest {
// Is value type: false
// CS Name: WaveHarmonic.Crest.ShapeGerstner/ShaderIDs
class CORDL_TYPE ShapeGerstner_ShaderIDs : public ::System::Object {
public:
// Declarations
/// @brief Field s_FirstCascadeIndex, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_s_FirstCascadeIndex, put=setStaticF_s_FirstCascadeIndex)) int32_t  s_FirstCascadeIndex;

/// @brief Field s_GerstnerWaveData, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_s_GerstnerWaveData, put=setStaticF_s_GerstnerWaveData)) int32_t  s_GerstnerWaveData;

/// @brief Field s_StartIndices, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_s_StartIndices, put=setStaticF_s_StartIndices)) int32_t  s_StartIndices;

/// @brief Field s_TextureRes, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_s_TextureRes, put=setStaticF_s_TextureRes)) int32_t  s_TextureRes;

static inline int32_t getStaticF_s_FirstCascadeIndex() ;

static inline int32_t getStaticF_s_GerstnerWaveData() ;

static inline int32_t getStaticF_s_StartIndices() ;

static inline int32_t getStaticF_s_TextureRes() ;

static inline void setStaticF_s_FirstCascadeIndex(int32_t  value) ;

static inline void setStaticF_s_GerstnerWaveData(int32_t  value) ;

static inline void setStaticF_s_StartIndices(int32_t  value) ;

static inline void setStaticF_s_TextureRes(int32_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ShapeGerstner_ShaderIDs() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ShapeGerstner_ShaderIDs", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ShapeGerstner_ShaderIDs(ShapeGerstner_ShaderIDs && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ShapeGerstner_ShaderIDs", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ShapeGerstner_ShaderIDs(ShapeGerstner_ShaderIDs const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16565};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::WaveHarmonic::Crest::ShapeGerstner_ShaderIDs) == 0x10, "Size mismatch!");

} // namespace end def WaveHarmonic::Crest
// Dependencies WaveHarmonic.Crest.ShapeGerstner::GerstnerWaveComponent4, WaveHarmonic.Crest.ShapeWaves
namespace WaveHarmonic::Crest {
// Is value type: false
// CS Name: WaveHarmonic.Crest.ShapeGerstner
class CORDL_TYPE ShapeGerstner : public ::WaveHarmonic::Crest::ShapeWaves {
public:
// Declarations
using GerstnerWaveComponent4 = ::WaveHarmonic::Crest::ShapeGerstner_GerstnerWaveComponent4;

using ShaderIDs = ::WaveHarmonic::Crest::ShapeGerstner_ShaderIDs;

 __declspec(property(get=get_ComponentsPerOctave, put=set_ComponentsPerOctave)) int32_t  ComponentsPerOctave;

 __declspec(property(get=get_DefaultSpectrum)) ::UnityW<::WaveHarmonic::Crest::WaveSpectrum>  DefaultSpectrum;

 __declspec(property(get=get_ManualGeneration, put=set_ManualGeneration)) bool  ManualGeneration;

 __declspec(property(get=get_MaximumResolution)) int32_t  MaximumResolution;

 __declspec(property(get=get_MinimumResolution)) int32_t  MinimumResolution;

 __declspec(property(get=get_RandomSeed, put=set_RandomSeed)) int32_t  RandomSeed;

 __declspec(property(get=get_Randomize, put=set_Randomize)) bool  Randomize;

 __declspec(property(get=get_ReverseWaveWeight, put=set_ReverseWaveWeight)) float_t  ReverseWaveWeight;

 __declspec(property(get=get_Swell, put=set_Swell)) bool  Swell;

 __declspec(property(get=get_Version)) int32_t  Version;

/// @brief Field _Amplitudes, offset 0x168, size 0x8 
 __declspec(property(get=__cordl_internal_get__Amplitudes, put=__cordl_internal_set__Amplitudes)) ::ArrayW<float_t>  _Amplitudes;

/// @brief Field _Amplitudes2, offset 0x188, size 0x8 
 __declspec(property(get=__cordl_internal_get__Amplitudes2, put=__cordl_internal_set__Amplitudes2)) ::ArrayW<float_t>  _Amplitudes2;

/// @brief Field _AngleDegrees, offset 0x178, size 0x8 
 __declspec(property(get=__cordl_internal_get__AngleDegrees, put=__cordl_internal_set__AngleDegrees)) ::ArrayW<float_t>  _AngleDegrees;

/// @brief Field _BufferWaveData, offset 0x1a0, size 0x8 
 __declspec(property(get=__cordl_internal_get__BufferWaveData, put=__cordl_internal_set__BufferWaveData)) ::UnityEngine::ComputeBuffer*  _BufferWaveData;

/// @brief Field _ComponentsPerOctave, offset 0x14c, size 0x4 
 __declspec(property(get=__cordl_internal_get__ComponentsPerOctave, put=__cordl_internal_set__ComponentsPerOctave)) int32_t  _ComponentsPerOctave;

/// @brief Field _ManualGeneration, offset 0x158, size 0x1 
 __declspec(property(get=__cordl_internal_get__ManualGeneration, put=__cordl_internal_set__ManualGeneration)) bool  _ManualGeneration;

/// @brief Field _Phases, offset 0x180, size 0x8 
 __declspec(property(get=__cordl_internal_get__Phases, put=__cordl_internal_set__Phases)) ::ArrayW<float_t>  _Phases;

/// @brief Field _Phases2, offset 0x190, size 0x8 
 __declspec(property(get=__cordl_internal_get__Phases2, put=__cordl_internal_set__Phases2)) ::ArrayW<float_t>  _Phases2;

/// @brief Field _Powers, offset 0x170, size 0x8 
 __declspec(property(get=__cordl_internal_get__Powers, put=__cordl_internal_set__Powers)) ::ArrayW<float_t>  _Powers;

/// @brief Field _RandomSeed, offset 0x154, size 0x4 
 __declspec(property(get=__cordl_internal_get__RandomSeed, put=__cordl_internal_set__RandomSeed)) int32_t  _RandomSeed;

/// @brief Field _Randomize, offset 0x150, size 0x1 
 __declspec(property(get=__cordl_internal_get__Randomize, put=__cordl_internal_set__Randomize)) bool  _Randomize;

/// @brief Field _ReciprocalTwoPi, offset 0x1bc, size 0x4 
 __declspec(property(get=__cordl_internal_get__ReciprocalTwoPi, put=__cordl_internal_set__ReciprocalTwoPi)) float_t  _ReciprocalTwoPi;

/// @brief Field _ReverseWaveWeight, offset 0x148, size 0x4 
 __declspec(property(get=__cordl_internal_get__ReverseWaveWeight, put=__cordl_internal_set__ReverseWaveWeight)) float_t  _ReverseWaveWeight;

/// @brief Field _Shader, offset 0x1b0, size 0x8 
 __declspec(property(get=__cordl_internal_get__Shader, put=__cordl_internal_set__Shader)) ::WaveHarmonic::Crest::WaterResources_GerstnerCompute*  _Shader;

/// @brief Field _StartIndices, offset 0x198, size 0x8 
 __declspec(property(get=__cordl_internal_get__StartIndices, put=__cordl_internal_set__StartIndices)) ::ArrayW<int32_t>  _StartIndices;

/// @brief Field _Swell, offset 0x144, size 0x1 
 __declspec(property(get=__cordl_internal_get__Swell, put=__cordl_internal_set__Swell)) bool  _Swell;

/// @brief Field _TwoPi, offset 0x1b8, size 0x4 
 __declspec(property(get=__cordl_internal_get__TwoPi, put=__cordl_internal_set__TwoPi)) float_t  _TwoPi;

/// @brief Field _WaveData, offset 0x1a8, size 0x8 
 __declspec(property(get=__cordl_internal_get__WaveData, put=__cordl_internal_set__WaveData)) ::ArrayW<::WaveHarmonic::Crest::ShapeGerstner_GerstnerWaveComponent4>  _WaveData;

/// @brief Field _Wavelengths, offset 0x160, size 0x8 
 __declspec(property(get=__cordl_internal_get__Wavelengths, put=__cordl_internal_set__Wavelengths)) ::ArrayW<float_t>  _Wavelengths;

/// @brief Field _WindSpeedWhenGenerated, offset 0x15c, size 0x4 
 __declspec(property(get=__cordl_internal_get__WindSpeedWhenGenerated, put=__cordl_internal_set__WindSpeedWhenGenerated)) float_t  _WindSpeedWhenGenerated;

/// @brief Field s_InstanceCount, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_s_InstanceCount, put=setStaticF_s_InstanceCount)) int32_t  s_InstanceCount;

/// @brief Field s_Instances, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_Instances, put=setStaticF_s_Instances)) ::WaveHarmonic::Crest::Utility::SortedList_2<int32_t,::UnityW<::WaveHarmonic::Crest::ShapeGerstner>>*  s_Instances;

/// @brief Field s_SwellSpectrum, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_SwellSpectrum, put=setStaticF_s_SwellSpectrum)) ::UnityW<::WaveHarmonic::Crest::WaveSpectrum>  s_SwellSpectrum;

/// @brief Method Awake, addr 0x18255ef70, size 0x50, virtual true, abstract: false, final false
inline void Awake() ;

/// @brief Method Draw, addr 0x18255efc0, size 0x140, virtual true, abstract: false, final false
inline void Draw(::WaveHarmonic::Crest::Lod*  lod, ::UnityEngine::Rendering::CommandBuffer*  buffer, ::UnityEngine::Rendering::RenderTargetIdentifier  target, int32_t  pass, float_t  weight, int32_t  slice) ;

/// @brief Method GetReverseWaveWeight, addr 0x18255f100, size 0x20, virtual false, abstract: false, final false
inline float_t GetReverseWaveWeight() ;

/// @brief Method InitData, addr 0x18255f120, size 0x330, virtual false, abstract: false, final false
inline void InitData() ;

/// @brief Method InitPhases, addr 0x18255f450, size 0x180, virtual false, abstract: false, final false
inline void InitPhases() ;

/// @brief Method InitStatics, addr 0x18255f5d0, size 0x70, virtual false, abstract: false, final false
static inline void InitStatics() ;

/// @brief Method Initialize, addr 0x18255f640, size 0x80, virtual true, abstract: false, final false
inline void Initialize() ;

static inline ::WaveHarmonic::Crest::ShapeGerstner* New_ctor() ;

/// @brief Method OnDestroy, addr 0x18255f6c0, size 0xc0, virtual true, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method OnDisable, addr 0x18255f780, size 0x140, virtual true, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnMigrate, addr 0x18255f8c0, size 0x70, virtual true, abstract: false, final false
inline void OnMigrate() ;

/// @brief Method OnUpdate, addr 0x18255f930, size 0x160, virtual true, abstract: false, final false
inline void OnUpdate(::WaveHarmonic::Crest::WaterRenderer*  water) ;

/// @brief Method ReportMaxDisplacement, addr 0x18255fa90, size 0x180, virtual true, abstract: false, final false
inline void ReportMaxDisplacement(::WaveHarmonic::Crest::WaterRenderer*  water) ;

/// @brief Method SetRenderParameters, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
template<typename T>
inline void SetRenderParameters(::WaveHarmonic::Crest::WaterRenderer*  water, T  wrapper) ;

/// @brief Method SliceUpWaves, addr 0x18255fc10, size 0xe40, virtual false, abstract: false, final false
inline void SliceUpWaves(::WaveHarmonic::Crest::WaterRenderer*  water, float_t  windSpeed) ;

/// @brief Method TryGetRandomValue, addr 0x182560a50, size 0x20, virtual false, abstract: false, final false
inline float_t TryGetRandomValue(float_t  fallback) ;

/// @brief Method UpdateAmplitudes, addr 0x182560a70, size 0x2e0, virtual false, abstract: false, final false
inline void UpdateAmplitudes(::WaveHarmonic::Crest::WaterRenderer*  water) ;

/// @brief Method UpdateGenerateWaves, addr 0x182560d50, size 0x270, virtual false, abstract: false, final false
inline void UpdateGenerateWaves(::UnityEngine::Rendering::CommandBuffer*  buffer) ;

/// @brief Method UpdateWaveData, addr 0x182560fc0, size 0x2b0, virtual false, abstract: false, final false
inline void UpdateWaveData(::WaveHarmonic::Crest::WaterRenderer*  water, float_t  windSpeed) ;

constexpr ::ArrayW<float_t> const& __cordl_internal_get__Amplitudes() const;

constexpr ::ArrayW<float_t>& __cordl_internal_get__Amplitudes() ;

constexpr ::ArrayW<float_t> const& __cordl_internal_get__Amplitudes2() const;

constexpr ::ArrayW<float_t>& __cordl_internal_get__Amplitudes2() ;

constexpr ::ArrayW<float_t> const& __cordl_internal_get__AngleDegrees() const;

constexpr ::ArrayW<float_t>& __cordl_internal_get__AngleDegrees() ;

constexpr ::UnityEngine::ComputeBuffer* const& __cordl_internal_get__BufferWaveData() const;

constexpr ::UnityEngine::ComputeBuffer*& __cordl_internal_get__BufferWaveData() ;

constexpr int32_t const& __cordl_internal_get__ComponentsPerOctave() const;

constexpr int32_t& __cordl_internal_get__ComponentsPerOctave() ;

constexpr bool const& __cordl_internal_get__ManualGeneration() const;

constexpr bool& __cordl_internal_get__ManualGeneration() ;

constexpr ::ArrayW<float_t> const& __cordl_internal_get__Phases() const;

constexpr ::ArrayW<float_t>& __cordl_internal_get__Phases() ;

constexpr ::ArrayW<float_t> const& __cordl_internal_get__Phases2() const;

constexpr ::ArrayW<float_t>& __cordl_internal_get__Phases2() ;

constexpr ::ArrayW<float_t> const& __cordl_internal_get__Powers() const;

constexpr ::ArrayW<float_t>& __cordl_internal_get__Powers() ;

constexpr int32_t const& __cordl_internal_get__RandomSeed() const;

constexpr int32_t& __cordl_internal_get__RandomSeed() ;

constexpr bool const& __cordl_internal_get__Randomize() const;

constexpr bool& __cordl_internal_get__Randomize() ;

constexpr float_t const& __cordl_internal_get__ReciprocalTwoPi() const;

constexpr float_t& __cordl_internal_get__ReciprocalTwoPi() ;

constexpr float_t const& __cordl_internal_get__ReverseWaveWeight() const;

constexpr float_t& __cordl_internal_get__ReverseWaveWeight() ;

constexpr ::WaveHarmonic::Crest::WaterResources_GerstnerCompute* const& __cordl_internal_get__Shader() const;

constexpr ::WaveHarmonic::Crest::WaterResources_GerstnerCompute*& __cordl_internal_get__Shader() ;

constexpr ::ArrayW<int32_t> const& __cordl_internal_get__StartIndices() const;

constexpr ::ArrayW<int32_t>& __cordl_internal_get__StartIndices() ;

constexpr bool const& __cordl_internal_get__Swell() const;

constexpr bool& __cordl_internal_get__Swell() ;

constexpr float_t const& __cordl_internal_get__TwoPi() const;

constexpr float_t& __cordl_internal_get__TwoPi() ;

constexpr ::ArrayW<::WaveHarmonic::Crest::ShapeGerstner_GerstnerWaveComponent4> const& __cordl_internal_get__WaveData() const;

constexpr ::ArrayW<::WaveHarmonic::Crest::ShapeGerstner_GerstnerWaveComponent4>& __cordl_internal_get__WaveData() ;

constexpr ::ArrayW<float_t> const& __cordl_internal_get__Wavelengths() const;

constexpr ::ArrayW<float_t>& __cordl_internal_get__Wavelengths() ;

constexpr float_t const& __cordl_internal_get__WindSpeedWhenGenerated() const;

constexpr float_t& __cordl_internal_get__WindSpeedWhenGenerated() ;

constexpr void __cordl_internal_set__Amplitudes(::ArrayW<float_t>  value) ;

constexpr void __cordl_internal_set__Amplitudes2(::ArrayW<float_t>  value) ;

constexpr void __cordl_internal_set__AngleDegrees(::ArrayW<float_t>  value) ;

constexpr void __cordl_internal_set__BufferWaveData(::UnityEngine::ComputeBuffer*  value) ;

constexpr void __cordl_internal_set__ComponentsPerOctave(int32_t  value) ;

constexpr void __cordl_internal_set__ManualGeneration(bool  value) ;

constexpr void __cordl_internal_set__Phases(::ArrayW<float_t>  value) ;

constexpr void __cordl_internal_set__Phases2(::ArrayW<float_t>  value) ;

constexpr void __cordl_internal_set__Powers(::ArrayW<float_t>  value) ;

constexpr void __cordl_internal_set__RandomSeed(int32_t  value) ;

constexpr void __cordl_internal_set__Randomize(bool  value) ;

constexpr void __cordl_internal_set__ReciprocalTwoPi(float_t  value) ;

constexpr void __cordl_internal_set__ReverseWaveWeight(float_t  value) ;

constexpr void __cordl_internal_set__Shader(::WaveHarmonic::Crest::WaterResources_GerstnerCompute*  value) ;

constexpr void __cordl_internal_set__StartIndices(::ArrayW<int32_t>  value) ;

constexpr void __cordl_internal_set__Swell(bool  value) ;

constexpr void __cordl_internal_set__TwoPi(float_t  value) ;

constexpr void __cordl_internal_set__WaveData(::ArrayW<::WaveHarmonic::Crest::ShapeGerstner_GerstnerWaveComponent4>  value) ;

constexpr void __cordl_internal_set__Wavelengths(::ArrayW<float_t>  value) ;

constexpr void __cordl_internal_set__WindSpeedWhenGenerated(float_t  value) ;

/// @brief Method .ctor, addr 0x182561300, size 0xb0, virtual false, abstract: false, final false
inline void _ctor() ;

static inline int32_t getStaticF_s_InstanceCount() ;

static inline ::WaveHarmonic::Crest::Utility::SortedList_2<int32_t,::UnityW<::WaveHarmonic::Crest::ShapeGerstner>>* getStaticF_s_Instances() ;

static inline ::UnityW<::WaveHarmonic::Crest::WaveSpectrum> getStaticF_s_SwellSpectrum() ;

/// @brief Method get_ComponentsPerOctave, addr 0x181454230, size 0x10, virtual false, abstract: false, final false
inline int32_t get_ComponentsPerOctave() ;

/// @brief Method get_DefaultSpectrum, addr 0x1825613b0, size 0x20, virtual true, abstract: false, final false
inline ::UnityW<::WaveHarmonic::Crest::WaveSpectrum> get_DefaultSpectrum() ;

/// @brief Method get_ManualGeneration, addr 0x1818e3af0, size 0x10, virtual false, abstract: false, final false
inline bool get_ManualGeneration() ;

/// @brief Method get_MaximumResolution, addr 0x181bf2630, size 0x10, virtual true, abstract: false, final false
inline int32_t get_MaximumResolution() ;

/// @brief Method get_MinimumResolution, addr 0x180308dd0, size 0x10, virtual true, abstract: false, final false
inline int32_t get_MinimumResolution() ;

/// @brief Method get_RandomSeed, addr 0x1818fa1d0, size 0x10, virtual false, abstract: false, final false
inline int32_t get_RandomSeed() ;

/// @brief Method get_Randomize, addr 0x182194110, size 0x10, virtual false, abstract: false, final false
inline bool get_Randomize() ;

/// @brief Method get_ReverseWaveWeight, addr 0x18255f100, size 0x20, virtual false, abstract: false, final false
inline float_t get_ReverseWaveWeight() ;

/// @brief Method get_Swell, addr 0x18255ee40, size 0x10, virtual false, abstract: false, final false
inline bool get_Swell() ;

/// @brief Method get_SwellSpectrum, addr 0x1825613d0, size 0x270, virtual false, abstract: false, final false
static inline ::UnityW<::WaveHarmonic::Crest::WaveSpectrum> get_SwellSpectrum() ;

/// @brief Method get_Version, addr 0x18255ee90, size 0x20, virtual true, abstract: false, final false
inline int32_t get_Version() ;

static inline void setStaticF_s_InstanceCount(int32_t  value) ;

static inline void setStaticF_s_Instances(::WaveHarmonic::Crest::Utility::SortedList_2<int32_t,::UnityW<::WaveHarmonic::Crest::ShapeGerstner>>*  value) ;

static inline void setStaticF_s_SwellSpectrum(::UnityW<::WaveHarmonic::Crest::WaveSpectrum>  value) ;

/// @brief Method set_ComponentsPerOctave, addr 0x182561640, size 0x10, virtual false, abstract: false, final false
inline void set_ComponentsPerOctave(int32_t  value) ;

/// @brief Method set_ManualGeneration, addr 0x182561650, size 0x10, virtual false, abstract: false, final false
inline void set_ManualGeneration(bool  value) ;

/// @brief Method set_RandomSeed, addr 0x1821941a0, size 0x10, virtual false, abstract: false, final false
inline void set_RandomSeed(int32_t  value) ;

/// @brief Method set_Randomize, addr 0x182194220, size 0x10, virtual false, abstract: false, final false
inline void set_Randomize(bool  value) ;

/// @brief Method set_ReverseWaveWeight, addr 0x18255ef60, size 0x10, virtual false, abstract: false, final false
inline void set_ReverseWaveWeight(float_t  value) ;

/// @brief Method set_Swell, addr 0x18255eef0, size 0x10, virtual false, abstract: false, final false
inline void set_Swell(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ShapeGerstner() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ShapeGerstner", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ShapeGerstner(ShapeGerstner && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ShapeGerstner", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ShapeGerstner(ShapeGerstner const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16566};

/// @brief Field k_MaximumWaveComponents offset 0xffffffff size 0x4
static constexpr int32_t  k_MaximumWaveComponents{static_cast<int32_t>(0x400)};

/// @brief Field _Swell, offset: 0x144, size: 0x1, def value: None
 bool  ____Swell;

/// @brief Field _ReverseWaveWeight, offset: 0x148, size: 0x4, def value: None
 float_t  ____ReverseWaveWeight;

/// @brief Field _ComponentsPerOctave, offset: 0x14c, size: 0x4, def value: None
 int32_t  ____ComponentsPerOctave;

/// @brief Field _Randomize, offset: 0x150, size: 0x1, def value: None
 bool  ____Randomize;

/// @brief Field _RandomSeed, offset: 0x154, size: 0x4, def value: None
 int32_t  ____RandomSeed;

/// @brief Field _ManualGeneration, offset: 0x158, size: 0x1, def value: None
 bool  ____ManualGeneration;

/// @brief Field _WindSpeedWhenGenerated, offset: 0x15c, size: 0x4, def value: None
 float_t  ____WindSpeedWhenGenerated;

/// @brief Field _Wavelengths, offset: 0x160, size: 0x8, def value: None
 ::ArrayW<float_t>  ____Wavelengths;

/// @brief Field _Amplitudes, offset: 0x168, size: 0x8, def value: None
 ::ArrayW<float_t>  ____Amplitudes;

/// @brief Field _Powers, offset: 0x170, size: 0x8, def value: None
 ::ArrayW<float_t>  ____Powers;

/// @brief Field _AngleDegrees, offset: 0x178, size: 0x8, def value: None
 ::ArrayW<float_t>  ____AngleDegrees;

/// @brief Field _Phases, offset: 0x180, size: 0x8, def value: None
 ::ArrayW<float_t>  ____Phases;

/// @brief Field _Amplitudes2, offset: 0x188, size: 0x8, def value: None
 ::ArrayW<float_t>  ____Amplitudes2;

/// @brief Field _Phases2, offset: 0x190, size: 0x8, def value: None
 ::ArrayW<float_t>  ____Phases2;

/// @brief Field _StartIndices, offset: 0x198, size: 0x8, def value: None
 ::ArrayW<int32_t>  ____StartIndices;

/// @brief Field _BufferWaveData, offset: 0x1a0, size: 0x8, def value: None
 ::UnityEngine::ComputeBuffer*  ____BufferWaveData;

/// @brief Field _WaveData, offset: 0x1a8, size: 0x8, def value: None
 ::ArrayW<::WaveHarmonic::Crest::ShapeGerstner_GerstnerWaveComponent4>  ____WaveData;

/// @brief Field _Shader, offset: 0x1b0, size: 0x8, def value: None
 ::WaveHarmonic::Crest::WaterResources_GerstnerCompute*  ____Shader;

/// @brief Field _TwoPi, offset: 0x1b8, size: 0x4, def value: None
 float_t  ____TwoPi;

/// @brief Field _ReciprocalTwoPi, offset: 0x1bc, size: 0x4, def value: None
 float_t  ____ReciprocalTwoPi;

/// @brief Size padding 0x1c8 - 0x1c0 = 0x8, packed as 0x8
 uint8_t  _cordl_size_padding[0x8];

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::WaveHarmonic::Crest::ShapeGerstner, ____Swell) == 0x144, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::ShapeGerstner, ____ReverseWaveWeight) == 0x148, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::ShapeGerstner, ____ComponentsPerOctave) == 0x14c, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::ShapeGerstner, ____Randomize) == 0x150, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::ShapeGerstner, ____RandomSeed) == 0x154, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::ShapeGerstner, ____ManualGeneration) == 0x158, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::ShapeGerstner, ____WindSpeedWhenGenerated) == 0x15c, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::ShapeGerstner, ____Wavelengths) == 0x160, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::ShapeGerstner, ____Amplitudes) == 0x168, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::ShapeGerstner, ____Powers) == 0x170, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::ShapeGerstner, ____AngleDegrees) == 0x178, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::ShapeGerstner, ____Phases) == 0x180, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::ShapeGerstner, ____Amplitudes2) == 0x188, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::ShapeGerstner, ____Phases2) == 0x190, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::ShapeGerstner, ____StartIndices) == 0x198, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::ShapeGerstner, ____BufferWaveData) == 0x1a0, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::ShapeGerstner, ____WaveData) == 0x1a8, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::ShapeGerstner, ____Shader) == 0x1b0, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::ShapeGerstner, ____TwoPi) == 0x1b8, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::ShapeGerstner, ____ReciprocalTwoPi) == 0x1bc, "Offset mismatch!");

static_assert(sizeof(::WaveHarmonic::Crest::ShapeGerstner) == 0x1c8, "Size mismatch!");

} // namespace end def WaveHarmonic::Crest

#pragma once
// IWYU pragma private; include "WaveHarmonic/Crest/FFTCompute.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Rendering/zzzz__LocalKeyword_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(FFTCompute)
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace UnityEngine::Rendering {
class CommandBuffer;
}
namespace UnityEngine {
class ComputeShader;
}
namespace UnityEngine {
class RenderTexture;
}
namespace UnityEngine {
class Texture2D;
}
namespace WaveHarmonic::Crest {
struct FFTCompute_Parameters;
}
namespace WaveHarmonic::Crest {
class FFTCompute_ShaderIDs;
}
namespace WaveHarmonic::Crest {
class WaveSpectrum;
}
// Forward declare root types
namespace WaveHarmonic::Crest {
class FFTCompute;
}
namespace WaveHarmonic::Crest {
class FFTCompute_ShaderIDs;
}
namespace WaveHarmonic::Crest {
struct FFTCompute_Parameters;
}
// Write type traits
MARK_REF_T(::WaveHarmonic::Crest::FFTCompute*);
MARK_REF_T(::WaveHarmonic::Crest::FFTCompute_ShaderIDs*);
MARK_VAL_T(::WaveHarmonic::Crest::FFTCompute_Parameters);
DEFINE_IL2CPP_CLASS(::WaveHarmonic::Crest::FFTCompute*, "WaveHarmonic.Crest", "FFTCompute");
DEFINE_IL2CPP_CLASS(::WaveHarmonic::Crest::FFTCompute_ShaderIDs*, "WaveHarmonic.Crest", "FFTCompute/ShaderIDs");
DEFINE_IL2CPP_CLASS(::WaveHarmonic::Crest::FFTCompute_Parameters, "WaveHarmonic.Crest", "FFTCompute/Parameters");
// Dependencies System.Object
namespace WaveHarmonic::Crest {
// Is value type: false
// CS Name: WaveHarmonic.Crest.FFTCompute/ShaderIDs
class CORDL_TYPE FFTCompute_ShaderIDs : public ::System::Object {
public:
// Declarations
/// @brief Field s_Alignment, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_s_Alignment, put=setStaticF_s_Alignment)) int32_t  s_Alignment;

/// @brief Field s_Chop, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_s_Chop, put=setStaticF_s_Chop)) int32_t  s_Chop;

/// @brief Field s_ChopScales, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_s_ChopScales, put=setStaticF_s_ChopScales)) int32_t  s_ChopScales;

/// @brief Field s_Gravity, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_s_Gravity, put=setStaticF_s_Gravity)) int32_t  s_Gravity;

/// @brief Field s_GravityScales, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_s_GravityScales, put=setStaticF_s_GravityScales)) int32_t  s_GravityScales;

/// @brief Field s_Init0, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_s_Init0, put=setStaticF_s_Init0)) int32_t  s_Init0;

/// @brief Field s_InputButterfly, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_s_InputButterfly, put=setStaticF_s_InputButterfly)) int32_t  s_InputButterfly;

/// @brief Field s_InputH, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_s_InputH, put=setStaticF_s_InputH)) int32_t  s_InputH;

/// @brief Field s_InputX, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_s_InputX, put=setStaticF_s_InputX)) int32_t  s_InputX;

/// @brief Field s_InputZ, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_s_InputZ, put=setStaticF_s_InputZ)) int32_t  s_InputZ;

/// @brief Field s_Output, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_s_Output, put=setStaticF_s_Output)) int32_t  s_Output;

/// @brief Field s_Output1, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_s_Output1, put=setStaticF_s_Output1)) int32_t  s_Output1;

/// @brief Field s_Output2, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_s_Output2, put=setStaticF_s_Output2)) int32_t  s_Output2;

/// @brief Field s_Output3, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_s_Output3, put=setStaticF_s_Output3)) int32_t  s_Output3;

/// @brief Field s_Period, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_s_Period, put=setStaticF_s_Period)) int32_t  s_Period;

/// @brief Field s_ResultDisplaceX, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_s_ResultDisplaceX, put=setStaticF_s_ResultDisplaceX)) int32_t  s_ResultDisplaceX;

/// @brief Field s_ResultDisplaceZ, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_s_ResultDisplaceZ, put=setStaticF_s_ResultDisplaceZ)) int32_t  s_ResultDisplaceZ;

/// @brief Field s_ResultHeight, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_s_ResultHeight, put=setStaticF_s_ResultHeight)) int32_t  s_ResultHeight;

/// @brief Field s_ResultInit, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_s_ResultInit, put=setStaticF_s_ResultInit)) int32_t  s_ResultInit;

/// @brief Field s_Size, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_s_Size, put=setStaticF_s_Size)) int32_t  s_Size;

/// @brief Field s_SpectrumControls, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_s_SpectrumControls, put=setStaticF_s_SpectrumControls)) int32_t  s_SpectrumControls;

/// @brief Field s_TemporaryFFT1, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_s_TemporaryFFT1, put=setStaticF_s_TemporaryFFT1)) int32_t  s_TemporaryFFT1;

/// @brief Field s_TemporaryFFT2, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_s_TemporaryFFT2, put=setStaticF_s_TemporaryFFT2)) int32_t  s_TemporaryFFT2;

/// @brief Field s_TemporaryFFT3, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_s_TemporaryFFT3, put=setStaticF_s_TemporaryFFT3)) int32_t  s_TemporaryFFT3;

/// @brief Field s_Time, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_s_Time, put=setStaticF_s_Time)) int32_t  s_Time;

/// @brief Field s_Turbulence, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_s_Turbulence, put=setStaticF_s_Turbulence)) int32_t  s_Turbulence;

/// @brief Field s_WindDir, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_s_WindDir, put=setStaticF_s_WindDir)) int32_t  s_WindDir;

/// @brief Field s_WindSpeed, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_s_WindSpeed, put=setStaticF_s_WindSpeed)) int32_t  s_WindSpeed;

static inline int32_t getStaticF_s_Alignment() ;

static inline int32_t getStaticF_s_Chop() ;

static inline int32_t getStaticF_s_ChopScales() ;

static inline int32_t getStaticF_s_Gravity() ;

static inline int32_t getStaticF_s_GravityScales() ;

static inline int32_t getStaticF_s_Init0() ;

static inline int32_t getStaticF_s_InputButterfly() ;

static inline int32_t getStaticF_s_InputH() ;

static inline int32_t getStaticF_s_InputX() ;

static inline int32_t getStaticF_s_InputZ() ;

static inline int32_t getStaticF_s_Output() ;

static inline int32_t getStaticF_s_Output1() ;

static inline int32_t getStaticF_s_Output2() ;

static inline int32_t getStaticF_s_Output3() ;

static inline int32_t getStaticF_s_Period() ;

static inline int32_t getStaticF_s_ResultDisplaceX() ;

static inline int32_t getStaticF_s_ResultDisplaceZ() ;

static inline int32_t getStaticF_s_ResultHeight() ;

static inline int32_t getStaticF_s_ResultInit() ;

static inline int32_t getStaticF_s_Size() ;

static inline int32_t getStaticF_s_SpectrumControls() ;

static inline int32_t getStaticF_s_TemporaryFFT1() ;

static inline int32_t getStaticF_s_TemporaryFFT2() ;

static inline int32_t getStaticF_s_TemporaryFFT3() ;

static inline int32_t getStaticF_s_Time() ;

static inline int32_t getStaticF_s_Turbulence() ;

static inline int32_t getStaticF_s_WindDir() ;

static inline int32_t getStaticF_s_WindSpeed() ;

static inline void setStaticF_s_Alignment(int32_t  value) ;

static inline void setStaticF_s_Chop(int32_t  value) ;

static inline void setStaticF_s_ChopScales(int32_t  value) ;

static inline void setStaticF_s_Gravity(int32_t  value) ;

static inline void setStaticF_s_GravityScales(int32_t  value) ;

static inline void setStaticF_s_Init0(int32_t  value) ;

static inline void setStaticF_s_InputButterfly(int32_t  value) ;

static inline void setStaticF_s_InputH(int32_t  value) ;

static inline void setStaticF_s_InputX(int32_t  value) ;

static inline void setStaticF_s_InputZ(int32_t  value) ;

static inline void setStaticF_s_Output(int32_t  value) ;

static inline void setStaticF_s_Output1(int32_t  value) ;

static inline void setStaticF_s_Output2(int32_t  value) ;

static inline void setStaticF_s_Output3(int32_t  value) ;

static inline void setStaticF_s_Period(int32_t  value) ;

static inline void setStaticF_s_ResultDisplaceX(int32_t  value) ;

static inline void setStaticF_s_ResultDisplaceZ(int32_t  value) ;

static inline void setStaticF_s_ResultHeight(int32_t  value) ;

static inline void setStaticF_s_ResultInit(int32_t  value) ;

static inline void setStaticF_s_Size(int32_t  value) ;

static inline void setStaticF_s_SpectrumControls(int32_t  value) ;

static inline void setStaticF_s_TemporaryFFT1(int32_t  value) ;

static inline void setStaticF_s_TemporaryFFT2(int32_t  value) ;

static inline void setStaticF_s_TemporaryFFT3(int32_t  value) ;

static inline void setStaticF_s_Time(int32_t  value) ;

static inline void setStaticF_s_Turbulence(int32_t  value) ;

static inline void setStaticF_s_WindDir(int32_t  value) ;

static inline void setStaticF_s_WindSpeed(int32_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FFTCompute_ShaderIDs() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FFTCompute_ShaderIDs", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
FFTCompute_ShaderIDs(FFTCompute_ShaderIDs && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FFTCompute_ShaderIDs", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
FFTCompute_ShaderIDs(FFTCompute_ShaderIDs const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16725};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::WaveHarmonic::Crest::FFTCompute_ShaderIDs) == 0x10, "Size mismatch!");

} // namespace end def WaveHarmonic::Crest
// Dependencies 
namespace WaveHarmonic::Crest {
// Is value type: true
// CS Name: WaveHarmonic.Crest.FFTCompute/Parameters
struct CORDL_TYPE FFTCompute_Parameters {
public:
// Declarations
/// @brief Method GetHashCode, addr 0x1825a2da0, size 0x20, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

/// @brief Method GetHashCode, addr 0x1825a2dc0, size 0xe0, virtual false, abstract: false, final false
inline int32_t GetHashCode(int32_t  resolution) ;

/// @brief Method .ctor, addr 0x1825a2ea0, size 0xd0, virtual false, abstract: false, final false
inline void _ctor(::WaveHarmonic::Crest::WaveSpectrum*  spectrum, int32_t  resolution, float_t  period, float_t  speed, float_t  direction, float_t  turbulence, float_t  alignment, float_t  gravity, bool  advanced) ;

// Ctor Parameters []
// @brief default ctor
constexpr FFTCompute_Parameters() ;

// Ctor Parameters [CppParam { name: "_Spectrum", ty: "::UnityW<::WaveHarmonic::Crest::WaveSpectrum>", modifiers: "", def_value: None }, CppParam { name: "_Resolution", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "_LoopPeriod", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "_WindSpeed", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "_WindDirectionRadians", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "_WindTurbulence", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "_WindAlignment", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "_Gravity", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "_Advanced", ty: "bool", modifiers: "", def_value: None }]
constexpr FFTCompute_Parameters(::UnityW<::WaveHarmonic::Crest::WaveSpectrum>  _Spectrum, int32_t  _Resolution, float_t  _LoopPeriod, float_t  _WindSpeed, float_t  _WindDirectionRadians, float_t  _WindTurbulence, float_t  _WindAlignment, float_t  _Gravity, bool  _Advanced) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16726};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x28};

/// @brief Field _Spectrum, offset: 0x0, size: 0x8, def value: None
 ::UnityW<::WaveHarmonic::Crest::WaveSpectrum>  _Spectrum;

/// @brief Field _Resolution, offset: 0x8, size: 0x4, def value: None
 int32_t  _Resolution;

/// @brief Field _LoopPeriod, offset: 0xc, size: 0x4, def value: None
 float_t  _LoopPeriod;

/// @brief Field _WindSpeed, offset: 0x10, size: 0x4, def value: None
 float_t  _WindSpeed;

/// @brief Field _WindDirectionRadians, offset: 0x14, size: 0x4, def value: None
 float_t  _WindDirectionRadians;

/// @brief Field _WindTurbulence, offset: 0x18, size: 0x4, def value: None
 float_t  _WindTurbulence;

/// @brief Field _WindAlignment, offset: 0x1c, size: 0x4, def value: None
 float_t  _WindAlignment;

/// @brief Field _Gravity, offset: 0x20, size: 0x4, def value: None
 float_t  _Gravity;

/// @brief Field _Advanced, offset: 0x24, size: 0x1, def value: None
 bool  _Advanced;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::WaveHarmonic::Crest::FFTCompute_Parameters, _Spectrum) == 0x0, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::FFTCompute_Parameters, _Resolution) == 0x8, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::FFTCompute_Parameters, _LoopPeriod) == 0xc, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::FFTCompute_Parameters, _WindSpeed) == 0x10, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::FFTCompute_Parameters, _WindDirectionRadians) == 0x14, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::FFTCompute_Parameters, _WindTurbulence) == 0x18, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::FFTCompute_Parameters, _WindAlignment) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::FFTCompute_Parameters, _Gravity) == 0x20, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::FFTCompute_Parameters, _Advanced) == 0x24, "Offset mismatch!");

static_assert(sizeof(::WaveHarmonic::Crest::FFTCompute_Parameters) == 0x28, "Size mismatch!");

} // namespace end def WaveHarmonic::Crest
// Dependencies System.Object, UnityEngine.Rendering.LocalKeyword, WaveHarmonic.Crest.FFTCompute::Parameters
namespace WaveHarmonic::Crest {
// Is value type: false
// CS Name: WaveHarmonic.Crest.FFTCompute
class CORDL_TYPE FFTCompute : public ::System::Object {
public:
// Declarations
using Parameters = ::WaveHarmonic::Crest::FFTCompute_Parameters;

using ShaderIDs = ::WaveHarmonic::Crest::FFTCompute_ShaderIDs;

 __declspec(property(get=get_WaveBuffers)) ::UnityW<::UnityEngine::RenderTexture>  WaveBuffers;

/// @brief Field _AdvancedKeyword, offset 0x48, size 0x18 
 __declspec(property(get=__cordl_internal_get__AdvancedKeyword, put=__cordl_internal_set__AdvancedKeyword)) ::UnityEngine::Rendering::LocalKeyword  _AdvancedKeyword;

/// @brief Field _GenerationTime, offset 0x88, size 0x4 
 __declspec(property(get=__cordl_internal_get__GenerationTime, put=__cordl_internal_set__GenerationTime)) float_t  _GenerationTime;

/// @brief Field _Initialized, offset 0x10, size 0x1 
 __declspec(property(get=__cordl_internal_get__Initialized, put=__cordl_internal_set__Initialized)) bool  _Initialized;

/// @brief Field _KernelSpectrumInitial, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get__KernelSpectrumInitial, put=__cordl_internal_set__KernelSpectrumInitial)) int32_t  _KernelSpectrumInitial;

/// @brief Field _KernelSpectrumUpdate, offset 0x44, size 0x4 
 __declspec(property(get=__cordl_internal_get__KernelSpectrumUpdate, put=__cordl_internal_set__KernelSpectrumUpdate)) int32_t  _KernelSpectrumUpdate;

/// @brief Field _Parameters, offset 0x60, size 0x28 
 __declspec(property(get=__cordl_internal_get__Parameters, put=__cordl_internal_set__Parameters)) ::WaveHarmonic::Crest::FFTCompute_Parameters  _Parameters;

/// @brief Field _ShaderFFT, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__ShaderFFT, put=__cordl_internal_set__ShaderFFT)) ::UnityW<::UnityEngine::ComputeShader>  _ShaderFFT;

/// @brief Field _ShaderSpectrum, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__ShaderSpectrum, put=__cordl_internal_set__ShaderSpectrum)) ::UnityW<::UnityEngine::ComputeShader>  _ShaderSpectrum;

/// @brief Field _SpectrumInitial, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__SpectrumInitial, put=__cordl_internal_set__SpectrumInitial)) ::UnityW<::UnityEngine::RenderTexture>  _SpectrumInitial;

/// @brief Field _SpectrumInitialized, offset 0x28, size 0x1 
 __declspec(property(get=__cordl_internal_get__SpectrumInitialized, put=__cordl_internal_set__SpectrumInitialized)) bool  _SpectrumInitialized;

/// @brief Field _WaveBuffers, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__WaveBuffers, put=__cordl_internal_set__WaveBuffers)) ::UnityW<::UnityEngine::RenderTexture>  _WaveBuffers;

/// @brief Field s_ButterflyTextures, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_ButterflyTextures, put=setStaticF_s_ButterflyTextures)) ::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::UnityEngine::Texture2D>>*  s_ButterflyTextures;

/// @brief Field s_Generators, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_Generators, put=setStaticF_s_Generators)) ::System::Collections::Generic::Dictionary_2<int32_t,::WaveHarmonic::Crest::FFTCompute*>*  s_Generators;

/// @brief Field s_SupportsRandomWriteRGFloat, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF_s_SupportsRandomWriteRGFloat, put=setStaticF_s_SupportsRandomWriteRGFloat)) bool  s_SupportsRandomWriteRGFloat;

/// @brief Method CleanUpAll, addr 0x18259f5d0, size 0x1d0, virtual false, abstract: false, final false
static inline void CleanUpAll() ;

/// @brief Method GenerateDisplacements, addr 0x1825a08c0, size 0x140, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::RenderTexture> GenerateDisplacements(::UnityEngine::Rendering::CommandBuffer*  buf, float_t  time, ::WaveHarmonic::Crest::FFTCompute_Parameters  parameters, bool  updateSpectrum) ;

/// @brief Method GenerateDisplacementsInternal, addr 0x18259f7a0, size 0x1120, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::RenderTexture> GenerateDisplacementsInternal(::UnityEngine::Rendering::CommandBuffer*  buffer, float_t  time, bool  updateSpectrum) ;

/// @brief Method GetInstance, addr 0x1825a0a00, size 0x70, virtual false, abstract: false, final false
static inline ::WaveHarmonic::Crest::FFTCompute* GetInstance(::WaveHarmonic::Crest::FFTCompute_Parameters  parameters) ;

/// @brief Method HasData, addr 0x1825a0a70, size 0x40, virtual false, abstract: false, final false
inline bool HasData() ;

/// @brief Method InitStatics, addr 0x18259f5d0, size 0x1d0, virtual false, abstract: false, final false
static inline void InitStatics() ;

static inline ::WaveHarmonic::Crest::FFTCompute* New_ctor(::WaveHarmonic::Crest::FFTCompute_Parameters  parameters) ;

/// @brief Method OnGUI, addr 0x1825a0ab0, size 0xe0, virtual false, abstract: false, final false
inline void OnGUI() ;

/// @brief Method OnGenerationDataUpdated, addr 0x1825a0b90, size 0x1e0, virtual false, abstract: false, final false
static inline void OnGenerationDataUpdated(::WaveHarmonic::Crest::FFTCompute_Parameters  oldParameters, ::WaveHarmonic::Crest::FFTCompute_Parameters  newParameters) ;

/// @brief Method Release, addr 0x1825a0d70, size 0x40, virtual false, abstract: false, final false
inline void Release() ;

constexpr ::UnityEngine::Rendering::LocalKeyword const& __cordl_internal_get__AdvancedKeyword() const;

constexpr ::UnityEngine::Rendering::LocalKeyword& __cordl_internal_get__AdvancedKeyword() ;

constexpr float_t const& __cordl_internal_get__GenerationTime() const;

constexpr float_t& __cordl_internal_get__GenerationTime() ;

constexpr bool const& __cordl_internal_get__Initialized() const;

constexpr bool& __cordl_internal_get__Initialized() ;

constexpr int32_t const& __cordl_internal_get__KernelSpectrumInitial() const;

constexpr int32_t& __cordl_internal_get__KernelSpectrumInitial() ;

constexpr int32_t const& __cordl_internal_get__KernelSpectrumUpdate() const;

constexpr int32_t& __cordl_internal_get__KernelSpectrumUpdate() ;

constexpr ::WaveHarmonic::Crest::FFTCompute_Parameters const& __cordl_internal_get__Parameters() const;

constexpr ::WaveHarmonic::Crest::FFTCompute_Parameters& __cordl_internal_get__Parameters() ;

constexpr ::UnityW<::UnityEngine::ComputeShader> const& __cordl_internal_get__ShaderFFT() const;

constexpr ::UnityW<::UnityEngine::ComputeShader>& __cordl_internal_get__ShaderFFT() ;

constexpr ::UnityW<::UnityEngine::ComputeShader> const& __cordl_internal_get__ShaderSpectrum() const;

constexpr ::UnityW<::UnityEngine::ComputeShader>& __cordl_internal_get__ShaderSpectrum() ;

constexpr ::UnityW<::UnityEngine::RenderTexture> const& __cordl_internal_get__SpectrumInitial() const;

constexpr ::UnityW<::UnityEngine::RenderTexture>& __cordl_internal_get__SpectrumInitial() ;

constexpr bool const& __cordl_internal_get__SpectrumInitialized() const;

constexpr bool& __cordl_internal_get__SpectrumInitialized() ;

constexpr ::UnityW<::UnityEngine::RenderTexture> const& __cordl_internal_get__WaveBuffers() const;

constexpr ::UnityW<::UnityEngine::RenderTexture>& __cordl_internal_get__WaveBuffers() ;

constexpr void __cordl_internal_set__AdvancedKeyword(::UnityEngine::Rendering::LocalKeyword  value) ;

constexpr void __cordl_internal_set__GenerationTime(float_t  value) ;

constexpr void __cordl_internal_set__Initialized(bool  value) ;

constexpr void __cordl_internal_set__KernelSpectrumInitial(int32_t  value) ;

constexpr void __cordl_internal_set__KernelSpectrumUpdate(int32_t  value) ;

constexpr void __cordl_internal_set__Parameters(::WaveHarmonic::Crest::FFTCompute_Parameters  value) ;

constexpr void __cordl_internal_set__ShaderFFT(::UnityW<::UnityEngine::ComputeShader>  value) ;

constexpr void __cordl_internal_set__ShaderSpectrum(::UnityW<::UnityEngine::ComputeShader>  value) ;

constexpr void __cordl_internal_set__SpectrumInitial(::UnityW<::UnityEngine::RenderTexture>  value) ;

constexpr void __cordl_internal_set__SpectrumInitialized(bool  value) ;

constexpr void __cordl_internal_set__WaveBuffers(::UnityW<::UnityEngine::RenderTexture>  value) ;

/// @brief Method .ctor, addr 0x1825a0e80, size 0x40, virtual false, abstract: false, final false
inline void _ctor(::WaveHarmonic::Crest::FFTCompute_Parameters  parameters) ;

static inline ::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::UnityEngine::Texture2D>>* getStaticF_s_ButterflyTextures() ;

static inline ::System::Collections::Generic::Dictionary_2<int32_t,::WaveHarmonic::Crest::FFTCompute*>* getStaticF_s_Generators() ;

static inline bool getStaticF_s_SupportsRandomWriteRGFloat() ;

/// @brief Method get_GeneratorCount, addr 0x1825a0ec0, size 0x50, virtual false, abstract: false, final false
static inline int32_t get_GeneratorCount() ;

/// @brief Method get_WaveBuffers, addr 0x1802d97e0, size 0x10, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::RenderTexture> get_WaveBuffers() ;

static inline void setStaticF_s_ButterflyTextures(::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::UnityEngine::Texture2D>>*  value) ;

static inline void setStaticF_s_Generators(::System::Collections::Generic::Dictionary_2<int32_t,::WaveHarmonic::Crest::FFTCompute*>*  value) ;

static inline void setStaticF_s_SupportsRandomWriteRGFloat(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FFTCompute() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FFTCompute", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
FFTCompute(FFTCompute && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FFTCompute", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
FFTCompute(FFTCompute const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16727};

/// @brief Field k_CascadeCount offset 0xffffffff size 0x4
static constexpr int32_t  k_CascadeCount{static_cast<int32_t>(0x10)};

/// @brief Field k_Kernel0Resolution offset 0xffffffff size 0x4
static constexpr int32_t  k_Kernel0Resolution{static_cast<int32_t>(0x8)};

/// @brief Field _Initialized, offset: 0x10, size: 0x1, def value: None
 bool  ____Initialized;

/// @brief Field _SpectrumInitial, offset: 0x18, size: 0x8, def value: None
 ::UnityW<::UnityEngine::RenderTexture>  ____SpectrumInitial;

/// @brief Field _WaveBuffers, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::RenderTexture>  ____WaveBuffers;

/// @brief Field _SpectrumInitialized, offset: 0x28, size: 0x1, def value: None
 bool  ____SpectrumInitialized;

/// @brief Field _ShaderSpectrum, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::ComputeShader>  ____ShaderSpectrum;

/// @brief Field _ShaderFFT, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::UnityEngine::ComputeShader>  ____ShaderFFT;

/// @brief Field _KernelSpectrumInitial, offset: 0x40, size: 0x4, def value: None
 int32_t  ____KernelSpectrumInitial;

/// @brief Field _KernelSpectrumUpdate, offset: 0x44, size: 0x4, def value: None
 int32_t  ____KernelSpectrumUpdate;

/// @brief Field _AdvancedKeyword, offset: 0x48, size: 0x18, def value: None
 ::UnityEngine::Rendering::LocalKeyword  ____AdvancedKeyword;

/// @brief Field _Parameters, offset: 0x60, size: 0x28, def value: None
 ::WaveHarmonic::Crest::FFTCompute_Parameters  ____Parameters;

/// @brief Field _GenerationTime, offset: 0x88, size: 0x4, def value: None
 float_t  ____GenerationTime;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::WaveHarmonic::Crest::FFTCompute, ____Initialized) == 0x10, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::FFTCompute, ____SpectrumInitial) == 0x18, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::FFTCompute, ____WaveBuffers) == 0x20, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::FFTCompute, ____SpectrumInitialized) == 0x28, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::FFTCompute, ____ShaderSpectrum) == 0x30, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::FFTCompute, ____ShaderFFT) == 0x38, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::FFTCompute, ____KernelSpectrumInitial) == 0x40, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::FFTCompute, ____KernelSpectrumUpdate) == 0x44, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::FFTCompute, ____AdvancedKeyword) == 0x48, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::FFTCompute, ____Parameters) == 0x60, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::FFTCompute, ____GenerationTime) == 0x88, "Offset mismatch!");

static_assert(sizeof(::WaveHarmonic::Crest::FFTCompute) == 0x90, "Size mismatch!");

} // namespace end def WaveHarmonic::Crest

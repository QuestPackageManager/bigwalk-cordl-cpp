#pragma once
// IWYU pragma private; include "WaveHarmonic/Crest/ShapeFFT.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "WaveHarmonic/Crest/zzzz__FFTCompute_def.hpp"
#include "WaveHarmonic/Crest/zzzz__ShapeWaves_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(ShapeFFT)
namespace UnityEngine::Rendering {
class CommandBuffer;
}
namespace UnityEngine::Rendering {
struct RenderTargetIdentifier;
}
namespace WaveHarmonic::Crest {
struct FFTCompute_Parameters;
}
namespace WaveHarmonic::Crest {
class FFTCompute;
}
namespace WaveHarmonic::Crest {
class Lod;
}
namespace WaveHarmonic::Crest {
class WaterRenderer;
}
// Forward declare root types
namespace WaveHarmonic::Crest {
class ShapeFFT;
}
// Write type traits
MARK_REF_T(::WaveHarmonic::Crest::ShapeFFT*);
DEFINE_IL2CPP_CLASS(::WaveHarmonic::Crest::ShapeFFT*, "WaveHarmonic.Crest", "ShapeFFT");
// Dependencies WaveHarmonic.Crest.FFTCompute::Parameters, WaveHarmonic.Crest.ShapeWaves
namespace WaveHarmonic::Crest {
// Is value type: false
// CS Name: WaveHarmonic.Crest.ShapeFFT
class CORDL_TYPE ShapeFFT : public ::WaveHarmonic::Crest::ShapeWaves {
public:
// Declarations
 __declspec(property(get=get_ApplyAdvancedSpectrumControls, put=set_ApplyAdvancedSpectrumControls)) bool  ApplyAdvancedSpectrumControls;

 __declspec(property(get=get_LoopPeriod)) float_t  LoopPeriod;

 __declspec(property(get=get_MaximumHorizontalDisplacement, put=set_MaximumHorizontalDisplacement)) float_t  MaximumHorizontalDisplacement;

 __declspec(property(get=get_MaximumResolution)) int32_t  MaximumResolution;

 __declspec(property(get=get_MaximumVerticalDisplacement, put=set_MaximumVerticalDisplacement)) float_t  MaximumVerticalDisplacement;

 __declspec(property(get=get_MinimumResolution)) int32_t  MinimumResolution;

 __declspec(property(get=get_OverrideCulling, put=set_OverrideCulling)) bool  OverrideCulling;

 __declspec(property(get=get_OverrideGlobalWindTurbulence, put=set_OverrideGlobalWindTurbulence)) bool  OverrideGlobalWindTurbulence;

 __declspec(property(get=get_TimeLoopLength, put=set_TimeLoopLength)) float_t  TimeLoopLength;

 __declspec(property(get=get_Version)) int32_t  Version;

 __declspec(property(get=get_WindAlignment, put=set_WindAlignment)) float_t  WindAlignment;

 __declspec(property(get=get_WindDirRadForFFT)) float_t  WindDirRadForFFT;

 __declspec(property(get=get_WindTurbulence, put=set_WindTurbulence)) float_t  WindTurbulence;

/// @brief Field _ApplyAdvancedSpectrumControls, offset 0x144, size 0x1 
 __declspec(property(get=__cordl_internal_get__ApplyAdvancedSpectrumControls, put=__cordl_internal_set__ApplyAdvancedSpectrumControls)) bool  _ApplyAdvancedSpectrumControls;

/// @brief Field _BakedTimeLoopLength, offset 0x16c, size 0x4 
 __declspec(property(get=__cordl_internal_get__BakedTimeLoopLength, put=__cordl_internal_set__BakedTimeLoopLength)) float_t  _BakedTimeLoopLength;

/// @brief Field _EnableBakedCollision, offset 0x160, size 0x1 
 __declspec(property(get=__cordl_internal_get__EnableBakedCollision, put=__cordl_internal_set__EnableBakedCollision)) bool  _EnableBakedCollision;

/// @brief Field _FFTCompute, offset 0x170, size 0x8 
 __declspec(property(get=__cordl_internal_get__FFTCompute, put=__cordl_internal_set__FFTCompute)) ::WaveHarmonic::Crest::FFTCompute*  _FFTCompute;

/// @brief Field _MaximumHorizontalDisplacement, offset 0x15c, size 0x4 
 __declspec(property(get=__cordl_internal_get__MaximumHorizontalDisplacement, put=__cordl_internal_set__MaximumHorizontalDisplacement)) float_t  _MaximumHorizontalDisplacement;

/// @brief Field _MaximumVerticalDisplacement, offset 0x158, size 0x4 
 __declspec(property(get=__cordl_internal_get__MaximumVerticalDisplacement, put=__cordl_internal_set__MaximumVerticalDisplacement)) float_t  _MaximumVerticalDisplacement;

/// @brief Field _OldFFTParameters, offset 0x178, size 0x28 
 __declspec(property(get=__cordl_internal_get__OldFFTParameters, put=__cordl_internal_set__OldFFTParameters)) ::WaveHarmonic::Crest::FFTCompute_Parameters  _OldFFTParameters;

/// @brief Field _OverrideCulling, offset 0x154, size 0x1 
 __declspec(property(get=__cordl_internal_get__OverrideCulling, put=__cordl_internal_set__OverrideCulling)) bool  _OverrideCulling;

/// @brief Field _OverrideGlobalWindTurbulence, offset 0x145, size 0x1 
 __declspec(property(get=__cordl_internal_get__OverrideGlobalWindTurbulence, put=__cordl_internal_set__OverrideGlobalWindTurbulence)) bool  _OverrideGlobalWindTurbulence;

/// @brief Field _SmallestWavelengthRequired, offset 0x168, size 0x4 
 __declspec(property(get=__cordl_internal_get__SmallestWavelengthRequired, put=__cordl_internal_set__SmallestWavelengthRequired)) float_t  _SmallestWavelengthRequired;

/// @brief Field _TimeLoopLength, offset 0x150, size 0x4 
 __declspec(property(get=__cordl_internal_get__TimeLoopLength, put=__cordl_internal_set__TimeLoopLength)) float_t  _TimeLoopLength;

/// @brief Field _TimeResolution, offset 0x164, size 0x4 
 __declspec(property(get=__cordl_internal_get__TimeResolution, put=__cordl_internal_set__TimeResolution)) int32_t  _TimeResolution;

/// @brief Field _WindAlignment, offset 0x14c, size 0x4 
 __declspec(property(get=__cordl_internal_get__WindAlignment, put=__cordl_internal_set__WindAlignment)) float_t  _WindAlignment;

/// @brief Field _WindTurbulence, offset 0x148, size 0x4 
 __declspec(property(get=__cordl_internal_get__WindTurbulence, put=__cordl_internal_set__WindTurbulence)) float_t  _WindTurbulence;

/// @brief Field s_InstanceCount, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_s_InstanceCount, put=setStaticF_s_InstanceCount)) int32_t  s_InstanceCount;

/// @brief Method Awake, addr 0x18255e5a0, size 0x30, virtual true, abstract: false, final false
inline void Awake() ;

/// @brief Method Draw, addr 0x18255e5d0, size 0x190, virtual true, abstract: false, final false
inline void Draw(::WaveHarmonic::Crest::Lod*  lod, ::UnityEngine::Rendering::CommandBuffer*  buffer, ::UnityEngine::Rendering::RenderTargetIdentifier  target, int32_t  pass, float_t  weight, int32_t  slice) ;

/// @brief Method GetFFTParameters, addr 0x18255e760, size 0x1b0, virtual false, abstract: false, final false
inline ::WaveHarmonic::Crest::FFTCompute_Parameters GetFFTParameters(float_t  gravity) ;

/// @brief Method GetWindTurbulence, addr 0x18255e910, size 0x70, virtual false, abstract: false, final false
inline float_t GetWindTurbulence() ;

static inline ::WaveHarmonic::Crest::ShapeFFT* New_ctor() ;

/// @brief Method OnDestroy, addr 0x18255e980, size 0x90, virtual true, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method OnMigrate, addr 0x18255ea10, size 0x70, virtual true, abstract: false, final false
inline void OnMigrate() ;

/// @brief Method OnUpdate, addr 0x18255ea80, size 0x1c0, virtual true, abstract: false, final false
inline void OnUpdate(::WaveHarmonic::Crest::WaterRenderer*  water) ;

/// @brief Method ReportMaxDisplacement, addr 0x18255ec40, size 0x1b0, virtual true, abstract: false, final false
inline void ReportMaxDisplacement(::WaveHarmonic::Crest::WaterRenderer*  water) ;

/// @brief Method SetRenderParameters, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
template<typename T>
inline void SetRenderParameters(::WaveHarmonic::Crest::WaterRenderer*  water, T  wrapper) ;

constexpr bool const& __cordl_internal_get__ApplyAdvancedSpectrumControls() const;

constexpr bool& __cordl_internal_get__ApplyAdvancedSpectrumControls() ;

constexpr float_t const& __cordl_internal_get__BakedTimeLoopLength() const;

constexpr float_t& __cordl_internal_get__BakedTimeLoopLength() ;

constexpr bool const& __cordl_internal_get__EnableBakedCollision() const;

constexpr bool& __cordl_internal_get__EnableBakedCollision() ;

constexpr ::WaveHarmonic::Crest::FFTCompute* const& __cordl_internal_get__FFTCompute() const;

constexpr ::WaveHarmonic::Crest::FFTCompute*& __cordl_internal_get__FFTCompute() ;

constexpr float_t const& __cordl_internal_get__MaximumHorizontalDisplacement() const;

constexpr float_t& __cordl_internal_get__MaximumHorizontalDisplacement() ;

constexpr float_t const& __cordl_internal_get__MaximumVerticalDisplacement() const;

constexpr float_t& __cordl_internal_get__MaximumVerticalDisplacement() ;

constexpr ::WaveHarmonic::Crest::FFTCompute_Parameters const& __cordl_internal_get__OldFFTParameters() const;

constexpr ::WaveHarmonic::Crest::FFTCompute_Parameters& __cordl_internal_get__OldFFTParameters() ;

constexpr bool const& __cordl_internal_get__OverrideCulling() const;

constexpr bool& __cordl_internal_get__OverrideCulling() ;

constexpr bool const& __cordl_internal_get__OverrideGlobalWindTurbulence() const;

constexpr bool& __cordl_internal_get__OverrideGlobalWindTurbulence() ;

constexpr float_t const& __cordl_internal_get__SmallestWavelengthRequired() const;

constexpr float_t& __cordl_internal_get__SmallestWavelengthRequired() ;

constexpr float_t const& __cordl_internal_get__TimeLoopLength() const;

constexpr float_t& __cordl_internal_get__TimeLoopLength() ;

constexpr int32_t const& __cordl_internal_get__TimeResolution() const;

constexpr int32_t& __cordl_internal_get__TimeResolution() ;

constexpr float_t const& __cordl_internal_get__WindAlignment() const;

constexpr float_t& __cordl_internal_get__WindAlignment() ;

constexpr float_t const& __cordl_internal_get__WindTurbulence() const;

constexpr float_t& __cordl_internal_get__WindTurbulence() ;

constexpr void __cordl_internal_set__ApplyAdvancedSpectrumControls(bool  value) ;

constexpr void __cordl_internal_set__BakedTimeLoopLength(float_t  value) ;

constexpr void __cordl_internal_set__EnableBakedCollision(bool  value) ;

constexpr void __cordl_internal_set__FFTCompute(::WaveHarmonic::Crest::FFTCompute*  value) ;

constexpr void __cordl_internal_set__MaximumHorizontalDisplacement(float_t  value) ;

constexpr void __cordl_internal_set__MaximumVerticalDisplacement(float_t  value) ;

constexpr void __cordl_internal_set__OldFFTParameters(::WaveHarmonic::Crest::FFTCompute_Parameters  value) ;

constexpr void __cordl_internal_set__OverrideCulling(bool  value) ;

constexpr void __cordl_internal_set__OverrideGlobalWindTurbulence(bool  value) ;

constexpr void __cordl_internal_set__SmallestWavelengthRequired(float_t  value) ;

constexpr void __cordl_internal_set__TimeLoopLength(float_t  value) ;

constexpr void __cordl_internal_set__TimeResolution(int32_t  value) ;

constexpr void __cordl_internal_set__WindAlignment(float_t  value) ;

constexpr void __cordl_internal_set__WindTurbulence(float_t  value) ;

/// @brief Method .ctor, addr 0x18255edf0, size 0x50, virtual false, abstract: false, final false
inline void _ctor() ;

static inline int32_t getStaticF_s_InstanceCount() ;

/// @brief Method get_ApplyAdvancedSpectrumControls, addr 0x18255ee40, size 0x10, virtual false, abstract: false, final false
inline bool get_ApplyAdvancedSpectrumControls() ;

/// @brief Method get_LoopPeriod, addr 0x1818ebf90, size 0x10, virtual false, abstract: false, final false
inline float_t get_LoopPeriod() ;

/// @brief Method get_MaximumHorizontalDisplacement, addr 0x1818e3b70, size 0x10, virtual false, abstract: false, final false
inline float_t get_MaximumHorizontalDisplacement() ;

/// @brief Method get_MaximumResolution, addr 0x18255ee50, size 0x30, virtual true, abstract: false, final false
inline int32_t get_MaximumResolution() ;

/// @brief Method get_MaximumVerticalDisplacement, addr 0x1821b8180, size 0x10, virtual false, abstract: false, final false
inline float_t get_MaximumVerticalDisplacement() ;

/// @brief Method get_MinimumResolution, addr 0x180720990, size 0xd7f0, virtual true, abstract: false, final false
inline int32_t get_MinimumResolution() ;

/// @brief Method get_OverrideCulling, addr 0x1818e3c10, size 0x10, virtual false, abstract: false, final false
inline bool get_OverrideCulling() ;

/// @brief Method get_OverrideGlobalWindTurbulence, addr 0x18255ee80, size 0x10, virtual false, abstract: false, final false
inline bool get_OverrideGlobalWindTurbulence() ;

/// @brief Method get_TimeLoopLength, addr 0x1818ebf90, size 0x10, virtual false, abstract: false, final false
inline float_t get_TimeLoopLength() ;

/// @brief Method get_Version, addr 0x18255ee90, size 0x20, virtual true, abstract: false, final false
inline int32_t get_Version() ;

/// @brief Method get_WindAlignment, addr 0x18255eeb0, size 0x10, virtual false, abstract: false, final false
inline float_t get_WindAlignment() ;

/// @brief Method get_WindDirRadForFFT, addr 0x18255eec0, size 0x30, virtual false, abstract: false, final false
inline float_t get_WindDirRadForFFT() ;

/// @brief Method get_WindTurbulence, addr 0x18255e910, size 0x70, virtual false, abstract: false, final false
inline float_t get_WindTurbulence() ;

static inline void setStaticF_s_InstanceCount(int32_t  value) ;

/// @brief Method set_ApplyAdvancedSpectrumControls, addr 0x18255eef0, size 0x10, virtual false, abstract: false, final false
inline void set_ApplyAdvancedSpectrumControls(bool  value) ;

/// @brief Method set_MaximumHorizontalDisplacement, addr 0x18255ef00, size 0x10, virtual false, abstract: false, final false
inline void set_MaximumHorizontalDisplacement(float_t  value) ;

/// @brief Method set_MaximumVerticalDisplacement, addr 0x18255ef10, size 0x10, virtual false, abstract: false, final false
inline void set_MaximumVerticalDisplacement(float_t  value) ;

/// @brief Method set_OverrideCulling, addr 0x18255ef20, size 0x10, virtual false, abstract: false, final false
inline void set_OverrideCulling(bool  value) ;

/// @brief Method set_OverrideGlobalWindTurbulence, addr 0x18255ef30, size 0x10, virtual false, abstract: false, final false
inline void set_OverrideGlobalWindTurbulence(bool  value) ;

/// @brief Method set_TimeLoopLength, addr 0x18255ef40, size 0x10, virtual false, abstract: false, final false
inline void set_TimeLoopLength(float_t  value) ;

/// @brief Method set_WindAlignment, addr 0x18255ef50, size 0x10, virtual false, abstract: false, final false
inline void set_WindAlignment(float_t  value) ;

/// @brief Method set_WindTurbulence, addr 0x18255ef60, size 0x10, virtual false, abstract: false, final false
inline void set_WindTurbulence(float_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ShapeFFT() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ShapeFFT", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ShapeFFT(ShapeFFT && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ShapeFFT", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ShapeFFT(ShapeFFT const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16563};

/// @brief Field _ApplyAdvancedSpectrumControls, offset: 0x144, size: 0x1, def value: None
 bool  ____ApplyAdvancedSpectrumControls;

/// @brief Field _OverrideGlobalWindTurbulence, offset: 0x145, size: 0x1, def value: None
 bool  ____OverrideGlobalWindTurbulence;

/// @brief Field _WindTurbulence, offset: 0x148, size: 0x4, def value: None
 float_t  ____WindTurbulence;

/// @brief Field _WindAlignment, offset: 0x14c, size: 0x4, def value: None
 float_t  ____WindAlignment;

/// @brief Field _TimeLoopLength, offset: 0x150, size: 0x4, def value: None
 float_t  ____TimeLoopLength;

/// @brief Field _OverrideCulling, offset: 0x154, size: 0x1, def value: None
 bool  ____OverrideCulling;

/// @brief Field _MaximumVerticalDisplacement, offset: 0x158, size: 0x4, def value: None
 float_t  ____MaximumVerticalDisplacement;

/// @brief Field _MaximumHorizontalDisplacement, offset: 0x15c, size: 0x4, def value: None
 float_t  ____MaximumHorizontalDisplacement;

/// @brief Field _EnableBakedCollision, offset: 0x160, size: 0x1, def value: None
 bool  ____EnableBakedCollision;

/// @brief Field _TimeResolution, offset: 0x164, size: 0x4, def value: None
 int32_t  ____TimeResolution;

/// @brief Field _SmallestWavelengthRequired, offset: 0x168, size: 0x4, def value: None
 float_t  ____SmallestWavelengthRequired;

/// @brief Field _BakedTimeLoopLength, offset: 0x16c, size: 0x4, def value: None
 float_t  ____BakedTimeLoopLength;

/// @brief Field _FFTCompute, offset: 0x170, size: 0x8, def value: None
 ::WaveHarmonic::Crest::FFTCompute*  ____FFTCompute;

/// @brief Field _OldFFTParameters, offset: 0x178, size: 0x28, def value: None
 ::WaveHarmonic::Crest::FFTCompute_Parameters  ____OldFFTParameters;

/// @brief Size padding 0x1a8 - 0x1a0 = 0x8, packed as 0x8
 uint8_t  _cordl_size_padding[0x8];

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::WaveHarmonic::Crest::ShapeFFT, ____ApplyAdvancedSpectrumControls) == 0x144, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::ShapeFFT, ____OverrideGlobalWindTurbulence) == 0x145, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::ShapeFFT, ____WindTurbulence) == 0x148, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::ShapeFFT, ____WindAlignment) == 0x14c, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::ShapeFFT, ____TimeLoopLength) == 0x150, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::ShapeFFT, ____OverrideCulling) == 0x154, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::ShapeFFT, ____MaximumVerticalDisplacement) == 0x158, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::ShapeFFT, ____MaximumHorizontalDisplacement) == 0x15c, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::ShapeFFT, ____EnableBakedCollision) == 0x160, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::ShapeFFT, ____TimeResolution) == 0x164, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::ShapeFFT, ____SmallestWavelengthRequired) == 0x168, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::ShapeFFT, ____BakedTimeLoopLength) == 0x16c, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::ShapeFFT, ____FFTCompute) == 0x170, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::ShapeFFT, ____OldFFTParameters) == 0x178, "Offset mismatch!");

static_assert(sizeof(::WaveHarmonic::Crest::ShapeFFT) == 0x1a8, "Size mismatch!");

} // namespace end def WaveHarmonic::Crest

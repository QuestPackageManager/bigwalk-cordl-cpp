#pragma once
// IWYU pragma private; include "WaveHarmonic/Crest/WaveSpectrum.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Color_def.hpp"
#include "WaveHarmonic/Crest/Internal/zzzz__CustomScriptableObject_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(WaveSpectrum)
namespace System {
class Object;
}
namespace UnityEngine {
class Texture2D;
}
namespace WaveHarmonic::Crest {
struct WaveSpectrum_SpectrumModel;
}
// Forward declare root types
namespace WaveHarmonic::Crest {
struct WaveSpectrum_SpectrumModel;
}
namespace WaveHarmonic::Crest {
class WaveSpectrum;
}
// Write type traits
MARK_VAL_T(::WaveHarmonic::Crest::WaveSpectrum_SpectrumModel);
MARK_REF_T(::WaveHarmonic::Crest::WaveSpectrum*);
DEFINE_IL2CPP_CLASS(::WaveHarmonic::Crest::WaveSpectrum_SpectrumModel, "WaveHarmonic.Crest", "WaveSpectrum/SpectrumModel");
DEFINE_IL2CPP_CLASS(::WaveHarmonic::Crest::WaveSpectrum*, "WaveHarmonic.Crest", "WaveSpectrum");
// Dependencies 
namespace WaveHarmonic::Crest {
// Is value type: true
// CS Name: WaveHarmonic.Crest.WaveSpectrum/SpectrumModel
struct CORDL_TYPE WaveSpectrum_SpectrumModel {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __WaveSpectrum_SpectrumModel_Unwrapped
enum struct __WaveSpectrum_SpectrumModel_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0x0),
__E_PiersonMoskowitz = static_cast<int32_t>(0x1),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __WaveSpectrum_SpectrumModel_Unwrapped () const noexcept {
return static_cast<__WaveSpectrum_SpectrumModel_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr WaveSpectrum_SpectrumModel() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr WaveSpectrum_SpectrumModel(int32_t  value__) noexcept;

/// @brief Field None value: I32(0)
static ::WaveHarmonic::Crest::WaveSpectrum_SpectrumModel const None;

/// @brief Field PiersonMoskowitz value: I32(1)
static ::WaveHarmonic::Crest::WaveSpectrum_SpectrumModel const PiersonMoskowitz;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16728};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::WaveHarmonic::Crest::WaveSpectrum_SpectrumModel, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::WaveHarmonic::Crest::WaveSpectrum_SpectrumModel) == 0x4, "Size mismatch!");

} // namespace end def WaveHarmonic::Crest
// Dependencies UnityEngine.Color, WaveHarmonic.Crest.Internal.CustomScriptableObject, WaveHarmonic.Crest.WaveSpectrum::SpectrumModel
namespace WaveHarmonic::Crest {
// Is value type: false
// CS Name: WaveHarmonic.Crest.WaveSpectrum
class CORDL_TYPE WaveSpectrum : public ::WaveHarmonic::Crest::Internal::CustomScriptableObject {
public:
// Declarations
using SpectrumModel = ::WaveHarmonic::Crest::WaveSpectrum_SpectrumModel;

 __declspec(property(get=get_ControlsTexture)) ::UnityW<::UnityEngine::Texture2D>  ControlsTexture;

/// @brief Field _Attenuation, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get__Attenuation, put=__cordl_internal_set__Attenuation)) ::ArrayW<float_t>  _Attenuation;

/// @brief Field _Chop, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get__Chop, put=__cordl_internal_set__Chop)) float_t  _Chop;

/// @brief Field _ChopScales, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__ChopScales, put=__cordl_internal_set__ChopScales)) ::ArrayW<float_t>  _ChopScales;

/// @brief Field _ControlsTexture, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get__ControlsTexture, put=__cordl_internal_set__ControlsTexture)) ::UnityW<::UnityEngine::Texture2D>  _ControlsTexture;

/// @brief Field _GravityScale, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get__GravityScale, put=__cordl_internal_set__GravityScale)) float_t  _GravityScale;

/// @brief Field _GravityScales, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__GravityScales, put=__cordl_internal_set__GravityScales)) ::ArrayW<float_t>  _GravityScales;

/// @brief Field _Model, offset 0x5c, size 0x4 
 __declspec(property(get=__cordl_internal_get__Model, put=__cordl_internal_set__Model)) ::WaveHarmonic::Crest::WaveSpectrum_SpectrumModel  _Model;

/// @brief Field _Multiplier, offset 0x1c, size 0x4 
 __declspec(property(get=__cordl_internal_get__Multiplier, put=__cordl_internal_set__Multiplier)) float_t  _Multiplier;

/// @brief Field _PowerDisabled, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__PowerDisabled, put=__cordl_internal_set__PowerDisabled)) ::ArrayW<bool>  _PowerDisabled;

/// @brief Field _PowerLinearScales, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get__PowerLinearScales, put=__cordl_internal_set__PowerLinearScales)) ::ArrayW<float_t>  _PowerLinearScales;

/// @brief Field _PowerLogarithmicScales, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__PowerLogarithmicScales, put=__cordl_internal_set__PowerLogarithmicScales)) ::ArrayW<float_t>  _PowerLogarithmicScales;

/// @brief Field _ScratchData, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get__ScratchData, put=__cordl_internal_set__ScratchData)) ::ArrayW<::UnityEngine::Color>  _ScratchData;

/// @brief Field _ShowAdvancedControls, offset 0x58, size 0x1 
 __declspec(property(get=__cordl_internal_get__ShowAdvancedControls, put=__cordl_internal_set__ShowAdvancedControls)) bool  _ShowAdvancedControls;

/// @brief Field _WaveDirectionVariance, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get__WaveDirectionVariance, put=__cordl_internal_set__WaveDirectionVariance)) float_t  _WaveDirectionVariance;

/// @brief Field s_MaximumPowerLog, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_s_MaximumPowerLog, put=setStaticF_s_MaximumPowerLog)) float_t  s_MaximumPowerLog;

/// @brief Field s_MinimumPowerLog, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_s_MinimumPowerLog, put=setStaticF_s_MinimumPowerLog)) float_t  s_MinimumPowerLog;

/// @brief Method AlphaSpectrum, addr 0x1825a63c0, size 0x40, virtual false, abstract: false, final false
static inline float_t AlphaSpectrum(float_t  a, float_t  g, float_t  w) ;

/// @brief Method ApplyPiersonMoskowitzSpectrum, addr 0x1825a6400, size 0x190, virtual false, abstract: false, final false
inline void ApplyPiersonMoskowitzSpectrum(float_t  gravity) ;

/// @brief Method ComputeWaveSpeed, addr 0x1825a6590, size 0x30, virtual false, abstract: false, final false
static inline float_t ComputeWaveSpeed(float_t  wavelength, float_t  gravity, float_t  gravityMultiplier) ;

/// @brief Method DeepDispersion, addr 0x1825a65c0, size 0x40, virtual false, abstract: false, final false
static inline void DeepDispersion(float_t  k, float_t  gravity, ::by_ref<float_t>  w) ;

/// @brief Method GenerateWaveData, addr 0x1825a6600, size 0x220, virtual false, abstract: false, final false
inline void GenerateWaveData(int32_t  componentsPerOctave, ::by_ref<::ArrayW<float_t>>  wavelengths, ::by_ref<::ArrayW<float_t>>  anglesDeg) ;

/// @brief Method GetAmplitude, addr 0x1825a6820, size 0x400, virtual false, abstract: false, final false
inline float_t GetAmplitude(float_t  wavelength, float_t  componentsPerOctave, float_t  windSpeed, float_t  gravity, ::by_ref<float_t>  power) ;

/// @brief Method GetOctaveIndex, addr 0x1825a6c20, size 0x40, virtual false, abstract: false, final false
static inline int32_t GetOctaveIndex(float_t  wavelength) ;

/// @brief Method InitializeHandControls, addr 0x1825a6c60, size 0x120, virtual false, abstract: false, final false
inline void InitializeHandControls() ;

static inline ::WaveHarmonic::Crest::WaveSpectrum* New_ctor() ;

/// @brief Method OnChange, addr 0x1825a6d80, size 0x10, virtual false, abstract: false, final false
inline void OnChange(::StringW  path, ::System::Object*  previous) ;

/// @brief Method OnDestroy, addr 0x1825a6d90, size 0x10, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method OnGUI, addr 0x1825a6da0, size 0x70, virtual false, abstract: false, final false
inline void OnGUI() ;

/// @brief Method PiersonMoskowitzSpectrum, addr 0x1825a6e10, size 0x60, virtual false, abstract: false, final false
static inline float_t PiersonMoskowitzSpectrum(float_t  gravity, float_t  wavelength) ;

/// @brief Method SmallWavelength, addr 0x1825a6e70, size 0x20, virtual false, abstract: false, final false
static inline float_t SmallWavelength(float_t  octaveIndex) ;

constexpr ::ArrayW<float_t> const& __cordl_internal_get__Attenuation() const;

constexpr ::ArrayW<float_t>& __cordl_internal_get__Attenuation() ;

constexpr float_t const& __cordl_internal_get__Chop() const;

constexpr float_t& __cordl_internal_get__Chop() ;

constexpr ::ArrayW<float_t> const& __cordl_internal_get__ChopScales() const;

constexpr ::ArrayW<float_t>& __cordl_internal_get__ChopScales() ;

constexpr ::UnityW<::UnityEngine::Texture2D> const& __cordl_internal_get__ControlsTexture() const;

constexpr ::UnityW<::UnityEngine::Texture2D>& __cordl_internal_get__ControlsTexture() ;

constexpr float_t const& __cordl_internal_get__GravityScale() const;

constexpr float_t& __cordl_internal_get__GravityScale() ;

constexpr ::ArrayW<float_t> const& __cordl_internal_get__GravityScales() const;

constexpr ::ArrayW<float_t>& __cordl_internal_get__GravityScales() ;

constexpr ::WaveHarmonic::Crest::WaveSpectrum_SpectrumModel const& __cordl_internal_get__Model() const;

constexpr ::WaveHarmonic::Crest::WaveSpectrum_SpectrumModel& __cordl_internal_get__Model() ;

constexpr float_t const& __cordl_internal_get__Multiplier() const;

constexpr float_t& __cordl_internal_get__Multiplier() ;

constexpr ::ArrayW<bool> const& __cordl_internal_get__PowerDisabled() const;

constexpr ::ArrayW<bool>& __cordl_internal_get__PowerDisabled() ;

constexpr ::ArrayW<float_t> const& __cordl_internal_get__PowerLinearScales() const;

constexpr ::ArrayW<float_t>& __cordl_internal_get__PowerLinearScales() ;

constexpr ::ArrayW<float_t> const& __cordl_internal_get__PowerLogarithmicScales() const;

constexpr ::ArrayW<float_t>& __cordl_internal_get__PowerLogarithmicScales() ;

constexpr ::ArrayW<::UnityEngine::Color> const& __cordl_internal_get__ScratchData() const;

constexpr ::ArrayW<::UnityEngine::Color>& __cordl_internal_get__ScratchData() ;

constexpr bool const& __cordl_internal_get__ShowAdvancedControls() const;

constexpr bool& __cordl_internal_get__ShowAdvancedControls() ;

constexpr float_t const& __cordl_internal_get__WaveDirectionVariance() const;

constexpr float_t& __cordl_internal_get__WaveDirectionVariance() ;

constexpr void __cordl_internal_set__Attenuation(::ArrayW<float_t>  value) ;

constexpr void __cordl_internal_set__Chop(float_t  value) ;

constexpr void __cordl_internal_set__ChopScales(::ArrayW<float_t>  value) ;

constexpr void __cordl_internal_set__ControlsTexture(::UnityW<::UnityEngine::Texture2D>  value) ;

constexpr void __cordl_internal_set__GravityScale(float_t  value) ;

constexpr void __cordl_internal_set__GravityScales(::ArrayW<float_t>  value) ;

constexpr void __cordl_internal_set__Model(::WaveHarmonic::Crest::WaveSpectrum_SpectrumModel  value) ;

constexpr void __cordl_internal_set__Multiplier(float_t  value) ;

constexpr void __cordl_internal_set__PowerDisabled(::ArrayW<bool>  value) ;

constexpr void __cordl_internal_set__PowerLinearScales(::ArrayW<float_t>  value) ;

constexpr void __cordl_internal_set__PowerLogarithmicScales(::ArrayW<float_t>  value) ;

constexpr void __cordl_internal_set__ScratchData(::ArrayW<::UnityEngine::Color>  value) ;

constexpr void __cordl_internal_set__ShowAdvancedControls(bool  value) ;

constexpr void __cordl_internal_set__WaveDirectionVariance(float_t  value) ;

/// @brief Method .ctor, addr 0x1825a6ed0, size 0x180, virtual false, abstract: false, final false
inline void _ctor() ;

static inline float_t getStaticF_s_MaximumPowerLog() ;

static inline float_t getStaticF_s_MinimumPowerLog() ;

/// @brief Method get_ControlsTexture, addr 0x1825a7050, size 0x90, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Texture2D> get_ControlsTexture() ;

static inline void setStaticF_s_MaximumPowerLog(float_t  value) ;

static inline void setStaticF_s_MinimumPowerLog(float_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr WaveSpectrum() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "WaveSpectrum", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
WaveSpectrum(WaveSpectrum && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "WaveSpectrum", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
WaveSpectrum(WaveSpectrum const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16729};

/// @brief Field k_NumberOfOctaves offset 0xffffffff size 0x4
static constexpr int32_t  k_NumberOfOctaves{static_cast<int32_t>(0xe)};

/// @brief Field k_SmallestWavelengthPower2 offset 0xffffffff size 0x4
static constexpr float_t  k_SmallestWavelengthPower2{static_cast<float_t>(-4.0f)};

/// @brief Field _Multiplier, offset: 0x1c, size: 0x4, def value: None
 float_t  ____Multiplier;

/// @brief Field _Chop, offset: 0x20, size: 0x4, def value: None
 float_t  ____Chop;

/// @brief Field _GravityScale, offset: 0x24, size: 0x4, def value: None
 float_t  ____GravityScale;

/// @brief Field _WaveDirectionVariance, offset: 0x28, size: 0x4, def value: None
 float_t  ____WaveDirectionVariance;

/// @brief Field _PowerLogarithmicScales, offset: 0x30, size: 0x8, def value: None
 ::ArrayW<float_t>  ____PowerLogarithmicScales;

/// @brief Field _PowerDisabled, offset: 0x38, size: 0x8, def value: None
 ::ArrayW<bool>  ____PowerDisabled;

/// @brief Field _ChopScales, offset: 0x40, size: 0x8, def value: None
 ::ArrayW<float_t>  ____ChopScales;

/// @brief Field _GravityScales, offset: 0x48, size: 0x8, def value: None
 ::ArrayW<float_t>  ____GravityScales;

/// @brief Field _Attenuation, offset: 0x50, size: 0x8, def value: None
 ::ArrayW<float_t>  ____Attenuation;

/// @brief Field _ShowAdvancedControls, offset: 0x58, size: 0x1, def value: None
 bool  ____ShowAdvancedControls;

/// @brief Field _Model, offset: 0x5c, size: 0x4, def value: None
 ::WaveHarmonic::Crest::WaveSpectrum_SpectrumModel  ____Model;

/// @brief Field _PowerLinearScales, offset: 0x60, size: 0x8, def value: None
 ::ArrayW<float_t>  ____PowerLinearScales;

/// @brief Field _ControlsTexture, offset: 0x68, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Texture2D>  ____ControlsTexture;

/// @brief Field _ScratchData, offset: 0x70, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::Color>  ____ScratchData;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::WaveHarmonic::Crest::WaveSpectrum, ____Multiplier) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::WaveSpectrum, ____Chop) == 0x20, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::WaveSpectrum, ____GravityScale) == 0x24, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::WaveSpectrum, ____WaveDirectionVariance) == 0x28, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::WaveSpectrum, ____PowerLogarithmicScales) == 0x30, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::WaveSpectrum, ____PowerDisabled) == 0x38, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::WaveSpectrum, ____ChopScales) == 0x40, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::WaveSpectrum, ____GravityScales) == 0x48, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::WaveSpectrum, ____Attenuation) == 0x50, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::WaveSpectrum, ____ShowAdvancedControls) == 0x58, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::WaveSpectrum, ____Model) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::WaveSpectrum, ____PowerLinearScales) == 0x60, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::WaveSpectrum, ____ControlsTexture) == 0x68, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::WaveSpectrum, ____ScratchData) == 0x70, "Offset mismatch!");

static_assert(sizeof(::WaveHarmonic::Crest::WaveSpectrum) == 0x78, "Size mismatch!");

} // namespace end def WaveHarmonic::Crest

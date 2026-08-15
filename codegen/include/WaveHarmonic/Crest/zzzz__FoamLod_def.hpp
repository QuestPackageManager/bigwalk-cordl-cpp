#pragma once
// IWYU pragma private; include "WaveHarmonic/Crest/FoamLod.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "WaveHarmonic/Crest/zzzz__PersistentLod_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(FoamLod)
namespace UnityEngine::Experimental::Rendering {
struct GraphicsFormat;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
class ComputeShader;
}
namespace WaveHarmonic::Crest::Utility {
template<typename TKey,typename TValue>
class SortedList_2;
}
namespace WaveHarmonic::Crest {
class FoamLodSettings;
}
namespace WaveHarmonic::Crest {
class FoamLod_ShaderIDs;
}
namespace WaveHarmonic::Crest {
class ILodInput;
}
namespace WaveHarmonic::Crest {
struct PropertyWrapperCompute;
}
// Forward declare root types
namespace WaveHarmonic::Crest {
class FoamLod;
}
namespace WaveHarmonic::Crest {
class FoamLod_ShaderIDs;
}
// Write type traits
MARK_REF_T(::WaveHarmonic::Crest::FoamLod*);
MARK_REF_T(::WaveHarmonic::Crest::FoamLod_ShaderIDs*);
DEFINE_IL2CPP_CLASS(::WaveHarmonic::Crest::FoamLod*, "WaveHarmonic.Crest", "FoamLod");
DEFINE_IL2CPP_CLASS(::WaveHarmonic::Crest::FoamLod_ShaderIDs*, "WaveHarmonic.Crest", "FoamLod/ShaderIDs");
// Dependencies System.Object
namespace WaveHarmonic::Crest {
// Is value type: false
// CS Name: WaveHarmonic.Crest.FoamLod/ShaderIDs
class CORDL_TYPE FoamLod_ShaderIDs : public ::System::Object {
public:
// Declarations
/// @brief Field s_FoamFadeRate, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_s_FoamFadeRate, put=setStaticF_s_FoamFadeRate)) int32_t  s_FoamFadeRate;

/// @brief Field s_FoamMaximum, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_s_FoamMaximum, put=setStaticF_s_FoamMaximum)) int32_t  s_FoamMaximum;

/// @brief Field s_FoamNegativeDepthPriming, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_s_FoamNegativeDepthPriming, put=setStaticF_s_FoamNegativeDepthPriming)) int32_t  s_FoamNegativeDepthPriming;

/// @brief Field s_MinimumWavesSlice, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_s_MinimumWavesSlice, put=setStaticF_s_MinimumWavesSlice)) int32_t  s_MinimumWavesSlice;

/// @brief Field s_NeedsPrewarming, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_s_NeedsPrewarming, put=setStaticF_s_NeedsPrewarming)) int32_t  s_NeedsPrewarming;

/// @brief Field s_ShorelineFoamMaxDepth, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_s_ShorelineFoamMaxDepth, put=setStaticF_s_ShorelineFoamMaxDepth)) int32_t  s_ShorelineFoamMaxDepth;

/// @brief Field s_ShorelineFoamStrength, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_s_ShorelineFoamStrength, put=setStaticF_s_ShorelineFoamStrength)) int32_t  s_ShorelineFoamStrength;

/// @brief Field s_WaveFoamCoverage, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_s_WaveFoamCoverage, put=setStaticF_s_WaveFoamCoverage)) int32_t  s_WaveFoamCoverage;

/// @brief Field s_WaveFoamStrength, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_s_WaveFoamStrength, put=setStaticF_s_WaveFoamStrength)) int32_t  s_WaveFoamStrength;

static inline int32_t getStaticF_s_FoamFadeRate() ;

static inline int32_t getStaticF_s_FoamMaximum() ;

static inline int32_t getStaticF_s_FoamNegativeDepthPriming() ;

static inline int32_t getStaticF_s_MinimumWavesSlice() ;

static inline int32_t getStaticF_s_NeedsPrewarming() ;

static inline int32_t getStaticF_s_ShorelineFoamMaxDepth() ;

static inline int32_t getStaticF_s_ShorelineFoamStrength() ;

static inline int32_t getStaticF_s_WaveFoamCoverage() ;

static inline int32_t getStaticF_s_WaveFoamStrength() ;

static inline void setStaticF_s_FoamFadeRate(int32_t  value) ;

static inline void setStaticF_s_FoamMaximum(int32_t  value) ;

static inline void setStaticF_s_FoamNegativeDepthPriming(int32_t  value) ;

static inline void setStaticF_s_MinimumWavesSlice(int32_t  value) ;

static inline void setStaticF_s_NeedsPrewarming(int32_t  value) ;

static inline void setStaticF_s_ShorelineFoamMaxDepth(int32_t  value) ;

static inline void setStaticF_s_ShorelineFoamStrength(int32_t  value) ;

static inline void setStaticF_s_WaveFoamCoverage(int32_t  value) ;

static inline void setStaticF_s_WaveFoamStrength(int32_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FoamLod_ShaderIDs() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FoamLod_ShaderIDs", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
FoamLod_ShaderIDs(FoamLod_ShaderIDs && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FoamLod_ShaderIDs", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
FoamLod_ShaderIDs(FoamLod_ShaderIDs const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16496};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::WaveHarmonic::Crest::FoamLod_ShaderIDs) == 0x10, "Size mismatch!");

} // namespace end def WaveHarmonic::Crest
// Dependencies UnityEngine.Color, WaveHarmonic.Crest.PersistentLod
namespace WaveHarmonic::Crest {
// Is value type: false
// CS Name: WaveHarmonic.Crest.FoamLod
class CORDL_TYPE FoamLod : public ::WaveHarmonic::Crest::PersistentLod {
public:
// Declarations
using ShaderIDs = ::WaveHarmonic::Crest::FoamLod_ShaderIDs;

 __declspec(property(get=get_ClearColor)) ::UnityEngine::Color  ClearColor;

 __declspec(property(get=get_GizmoColor)) ::UnityEngine::Color  GizmoColor;

 __declspec(property(get=get_Inputs)) ::WaveHarmonic::Crest::Utility::SortedList_2<int32_t,::WaveHarmonic::Crest::ILodInput*>*  Inputs;

 __declspec(property(get=get_Prewarm, put=set_Prewarm)) bool  Prewarm;

 __declspec(property(get=get_RequestedTextureFormat)) ::UnityEngine::Experimental::Rendering::GraphicsFormat  RequestedTextureFormat;

 __declspec(property(get=get_Settings, put=set_Settings)) ::UnityW<::WaveHarmonic::Crest::FoamLodSettings>  Settings;

 __declspec(property(get=get_SimulationShader)) ::UnityW<::UnityEngine::ComputeShader>  SimulationShader;

/// @brief Field _DefaultSettings, offset 0xc8, size 0x8 
 __declspec(property(get=__cordl_internal_get__DefaultSettings, put=__cordl_internal_set__DefaultSettings)) ::UnityW<::WaveHarmonic::Crest::FoamLodSettings>  _DefaultSettings;

/// @brief Field _Prewarm, offset 0xb8, size 0x1 
 __declspec(property(get=__cordl_internal_get__Prewarm, put=__cordl_internal_set__Prewarm)) bool  _Prewarm;

/// @brief Field _Settings, offset 0xc0, size 0x8 
 __declspec(property(get=__cordl_internal_get__Settings, put=__cordl_internal_set__Settings)) ::UnityW<::WaveHarmonic::Crest::FoamLodSettings>  _Settings;

 __declspec(property(get=get_ID)) ::StringW  _cordl_ID;

/// @brief Field s_GizmoColor, offset 0xffffffff, size 0x10 
 __declspec(property(get=getStaticF_s_GizmoColor, put=setStaticF_s_GizmoColor)) ::UnityEngine::Color  s_GizmoColor;

/// @brief Field s_Inputs, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_Inputs, put=setStaticF_s_Inputs)) ::WaveHarmonic::Crest::Utility::SortedList_2<int32_t,::WaveHarmonic::Crest::ILodInput*>*  s_Inputs;

/// @brief Method Destroy, addr 0x182557ee0, size 0x30, virtual true, abstract: false, final false
inline void Destroy() ;

/// @brief Method GetSettings, addr 0x182558a20, size 0xf0, virtual false, abstract: false, final false
inline ::UnityW<::WaveHarmonic::Crest::FoamLodSettings> GetSettings() ;

static inline ::WaveHarmonic::Crest::FoamLod* New_ctor() ;

/// @brief Method OnLoad, addr 0x182558b10, size 0x50, virtual false, abstract: false, final false
static inline void OnLoad() ;

/// @brief Method SetAdditionalSimulationParameters, addr 0x182558b60, size 0x210, virtual true, abstract: false, final false
inline void SetAdditionalSimulationParameters(::WaveHarmonic::Crest::PropertyWrapperCompute  properties) ;

constexpr ::UnityW<::WaveHarmonic::Crest::FoamLodSettings> const& __cordl_internal_get__DefaultSettings() const;

constexpr ::UnityW<::WaveHarmonic::Crest::FoamLodSettings>& __cordl_internal_get__DefaultSettings() ;

constexpr bool const& __cordl_internal_get__Prewarm() const;

constexpr bool& __cordl_internal_get__Prewarm() ;

constexpr ::UnityW<::WaveHarmonic::Crest::FoamLodSettings> const& __cordl_internal_get__Settings() const;

constexpr ::UnityW<::WaveHarmonic::Crest::FoamLodSettings>& __cordl_internal_get__Settings() ;

constexpr void __cordl_internal_set__DefaultSettings(::UnityW<::WaveHarmonic::Crest::FoamLodSettings>  value) ;

constexpr void __cordl_internal_set__Prewarm(bool  value) ;

constexpr void __cordl_internal_set__Settings(::UnityW<::WaveHarmonic::Crest::FoamLodSettings>  value) ;

/// @brief Method .ctor, addr 0x182558e20, size 0x40, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::UnityEngine::Color getStaticF_s_GizmoColor() ;

static inline ::WaveHarmonic::Crest::Utility::SortedList_2<int32_t,::WaveHarmonic::Crest::ILodInput*>* getStaticF_s_Inputs() ;

/// @brief Method get_ClearColor, addr 0x182263110, size 0x20, virtual true, abstract: false, final false
inline ::UnityEngine::Color get_ClearColor() ;

/// @brief Method get_GizmoColor, addr 0x1825589a0, size 0x40, virtual true, abstract: false, final false
inline ::UnityEngine::Color get_GizmoColor() ;

/// @brief Method get_ID, addr 0x182558e60, size 0x10, virtual true, abstract: false, final false
inline ::StringW get_ID() ;

/// @brief Method get_Inputs, addr 0x1825589e0, size 0x40, virtual true, abstract: false, final false
inline ::WaveHarmonic::Crest::Utility::SortedList_2<int32_t,::WaveHarmonic::Crest::ILodInput*>* get_Inputs() ;

/// @brief Method get_Prewarm, addr 0x180f187e0, size 0x650, virtual false, abstract: false, final false
inline bool get_Prewarm() ;

/// @brief Method get_RequestedTextureFormat, addr 0x182558e70, size 0x40, virtual true, abstract: false, final false
inline ::UnityEngine::Experimental::Rendering::GraphicsFormat get_RequestedTextureFormat() ;

/// @brief Method get_Settings, addr 0x182558eb0, size 0xf0, virtual false, abstract: false, final false
inline ::UnityW<::WaveHarmonic::Crest::FoamLodSettings> get_Settings() ;

/// @brief Method get_SimulationShader, addr 0x182558fa0, size 0x70, virtual true, abstract: false, final false
inline ::UnityW<::UnityEngine::ComputeShader> get_SimulationShader() ;

static inline void setStaticF_s_GizmoColor(::UnityEngine::Color  value) ;

static inline void setStaticF_s_Inputs(::WaveHarmonic::Crest::Utility::SortedList_2<int32_t,::WaveHarmonic::Crest::ILodInput*>*  value) ;

/// @brief Method set_Prewarm, addr 0x180f18e30, size 0xedb0, virtual false, abstract: false, final false
inline void set_Prewarm(bool  value) ;

/// @brief Method set_Settings, addr 0x1813fdbb0, size 0x20, virtual false, abstract: false, final false
inline void set_Settings(::WaveHarmonic::Crest::FoamLodSettings*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FoamLod() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FoamLod", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
FoamLod(FoamLod && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FoamLod", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
FoamLod(FoamLod const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16497};

/// @brief Field _Prewarm, offset: 0xb8, size: 0x1, def value: None
 bool  ____Prewarm;

/// @brief Field _Settings, offset: 0xc0, size: 0x8, def value: None
 ::UnityW<::WaveHarmonic::Crest::FoamLodSettings>  ____Settings;

/// @brief Field _DefaultSettings, offset: 0xc8, size: 0x8, def value: None
 ::UnityW<::WaveHarmonic::Crest::FoamLodSettings>  ____DefaultSettings;

/// @brief Size padding 0xe0 - 0xd0 = 0x10, packed as 0x10
 uint8_t  _cordl_size_padding[0x10];

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::WaveHarmonic::Crest::FoamLod, ____Prewarm) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::FoamLod, ____Settings) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::FoamLod, ____DefaultSettings) == 0xc8, "Offset mismatch!");

static_assert(sizeof(::WaveHarmonic::Crest::FoamLod) == 0xe0, "Size mismatch!");

} // namespace end def WaveHarmonic::Crest

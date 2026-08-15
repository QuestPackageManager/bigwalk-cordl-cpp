#pragma once
// IWYU pragma private; include "WaveHarmonic/Crest/AnimatedWavesLodInput.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "WaveHarmonic/Crest/zzzz__DisplacementPass_def.hpp"
#include "WaveHarmonic/Crest/zzzz__LodInput_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(AnimatedWavesLodInput)
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
struct Rect;
}
namespace WaveHarmonic::Crest::Utility {
template<typename TKey,typename TValue>
class SortedList_2;
}
namespace WaveHarmonic::Crest {
class AnimatedWavesLodInput_Reporter;
}
namespace WaveHarmonic::Crest {
struct DisplacementPass;
}
namespace WaveHarmonic::Crest {
class ILodInput;
}
namespace WaveHarmonic::Crest {
class IReportWaveDisplacement;
}
namespace WaveHarmonic::Crest {
class IReportsDisplacement;
}
namespace WaveHarmonic::Crest {
struct LodInputMode;
}
namespace WaveHarmonic::Crest {
class WaterRenderer;
}
// Forward declare root types
namespace WaveHarmonic::Crest {
class AnimatedWavesLodInput;
}
namespace WaveHarmonic::Crest {
class AnimatedWavesLodInput_Reporter;
}
// Write type traits
MARK_REF_T(::WaveHarmonic::Crest::AnimatedWavesLodInput*);
MARK_REF_T(::WaveHarmonic::Crest::AnimatedWavesLodInput_Reporter*);
DEFINE_IL2CPP_CLASS(::WaveHarmonic::Crest::AnimatedWavesLodInput*, "WaveHarmonic.Crest", "AnimatedWavesLodInput");
DEFINE_IL2CPP_CLASS(::WaveHarmonic::Crest::AnimatedWavesLodInput_Reporter*, "WaveHarmonic.Crest", "AnimatedWavesLodInput/Reporter");
// Dependencies System.Object
namespace WaveHarmonic::Crest {
// Is value type: false
// CS Name: WaveHarmonic.Crest.AnimatedWavesLodInput/Reporter
class CORDL_TYPE AnimatedWavesLodInput_Reporter : public ::System::Object {
public:
// Declarations
/// @brief Field _Input, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__Input, put=__cordl_internal_set__Input)) ::UnityW<::WaveHarmonic::Crest::AnimatedWavesLodInput>  _Input;

/// @brief Convert operator to "::WaveHarmonic::Crest::IReportWaveDisplacement"
constexpr operator  ::WaveHarmonic::Crest::IReportWaveDisplacement*() noexcept;

/// @brief Convert operator to "::WaveHarmonic::Crest::IReportsDisplacement"
constexpr operator  ::WaveHarmonic::Crest::IReportsDisplacement*() noexcept;

static inline ::WaveHarmonic::Crest::AnimatedWavesLodInput_Reporter* New_ctor(::WaveHarmonic::Crest::AnimatedWavesLodInput*  input) ;

/// @brief Method ReportDisplacement, addr 0x18255bdc0, size 0x30, virtual true, abstract: false, final true
inline bool ReportDisplacement(::WaveHarmonic::Crest::WaterRenderer*  water, ::by_ref<::UnityEngine::Rect>  bounds, ::by_ref<float_t>  horizontal, ::by_ref<float_t>  vertical) ;

/// @brief Method ReportWaveDisplacement, addr 0x18255bf60, size 0x20, virtual true, abstract: false, final true
inline float_t ReportWaveDisplacement(::WaveHarmonic::Crest::WaterRenderer*  water, float_t  displacement) ;

constexpr ::UnityW<::WaveHarmonic::Crest::AnimatedWavesLodInput> const& __cordl_internal_get__Input() const;

constexpr ::UnityW<::WaveHarmonic::Crest::AnimatedWavesLodInput>& __cordl_internal_get__Input() ;

constexpr void __cordl_internal_set__Input(::UnityW<::WaveHarmonic::Crest::AnimatedWavesLodInput>  value) ;

/// @brief Method .ctor, addr 0x180308500, size 0x30, virtual false, abstract: false, final false
inline void _ctor(::WaveHarmonic::Crest::AnimatedWavesLodInput*  input) ;

/// @brief Convert to "::WaveHarmonic::Crest::IReportWaveDisplacement"
constexpr ::WaveHarmonic::Crest::IReportWaveDisplacement* i___WaveHarmonic__Crest__IReportWaveDisplacement() noexcept;

/// @brief Convert to "::WaveHarmonic::Crest::IReportsDisplacement"
constexpr ::WaveHarmonic::Crest::IReportsDisplacement* i___WaveHarmonic__Crest__IReportsDisplacement() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AnimatedWavesLodInput_Reporter() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AnimatedWavesLodInput_Reporter", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AnimatedWavesLodInput_Reporter(AnimatedWavesLodInput_Reporter && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AnimatedWavesLodInput_Reporter", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AnimatedWavesLodInput_Reporter(AnimatedWavesLodInput_Reporter const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16506};

/// @brief Field _Input, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::WaveHarmonic::Crest::AnimatedWavesLodInput>  ____Input;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::WaveHarmonic::Crest::AnimatedWavesLodInput_Reporter, ____Input) == 0x10, "Offset mismatch!");

static_assert(sizeof(::WaveHarmonic::Crest::AnimatedWavesLodInput_Reporter) == 0x18, "Size mismatch!");

} // namespace end def WaveHarmonic::Crest
// Dependencies WaveHarmonic.Crest.DisplacementPass, WaveHarmonic.Crest.LodInput
namespace WaveHarmonic::Crest {
// Is value type: false
// CS Name: WaveHarmonic.Crest.AnimatedWavesLodInput
class CORDL_TYPE AnimatedWavesLodInput : public ::WaveHarmonic::Crest::LodInput {
public:
// Declarations
using Reporter = ::WaveHarmonic::Crest::AnimatedWavesLodInput_Reporter;

 __declspec(property(get=get_DefaultMode)) ::WaveHarmonic::Crest::LodInputMode  DefaultMode;

 __declspec(property(get=get_DisplacementPass, put=set_DisplacementPass)) ::WaveHarmonic::Crest::DisplacementPass  DisplacementPass;

 __declspec(property(get=get_FilterByWavelength, put=set_FilterByWavelength)) bool  FilterByWavelength;

 __declspec(property(get=get_GizmoColor)) ::UnityEngine::Color  GizmoColor;

 __declspec(property(get=get_Inputs)) ::WaveHarmonic::Crest::Utility::SortedList_2<int32_t,::WaveHarmonic::Crest::ILodInput*>*  Inputs;

 __declspec(property(get=get_MaximumDisplacementHorizontal, put=set_MaximumDisplacementHorizontal)) float_t  MaximumDisplacementHorizontal;

 __declspec(property(get=get_MaximumDisplacementVertical, put=set_MaximumDisplacementVertical)) float_t  MaximumDisplacementVertical;

 __declspec(property(get=get_OctaveWavelength, put=set_OctaveWavelength)) float_t  OctaveWavelength;

 __declspec(property(get=get_Pass)) int32_t  Pass;

 __declspec(property(get=get_RenderPostCombine, put=set_RenderPostCombine)) bool  RenderPostCombine;

 __declspec(property(get=get_ReportRendererBounds, put=set_ReportRendererBounds)) bool  ReportRendererBounds;

 __declspec(property(get=get_Version)) int32_t  Version;

/// @brief Field _DisplacementPass, offset 0xb0, size 0x4 
 __declspec(property(get=__cordl_internal_get__DisplacementPass, put=__cordl_internal_set__DisplacementPass)) ::WaveHarmonic::Crest::DisplacementPass  _DisplacementPass;

/// @brief Field _FilterByWavelength, offset 0xb4, size 0x1 
 __declspec(property(get=__cordl_internal_get__FilterByWavelength, put=__cordl_internal_set__FilterByWavelength)) bool  _FilterByWavelength;

/// @brief Field _MaximumDisplacementHorizontal, offset 0xc0, size 0x4 
 __declspec(property(get=__cordl_internal_get__MaximumDisplacementHorizontal, put=__cordl_internal_set__MaximumDisplacementHorizontal)) float_t  _MaximumDisplacementHorizontal;

/// @brief Field _MaximumDisplacementVertical, offset 0xbc, size 0x4 
 __declspec(property(get=__cordl_internal_get__MaximumDisplacementVertical, put=__cordl_internal_set__MaximumDisplacementVertical)) float_t  _MaximumDisplacementVertical;

/// @brief Field _OctaveWavelength, offset 0xb8, size 0x4 
 __declspec(property(get=__cordl_internal_get__OctaveWavelength, put=__cordl_internal_set__OctaveWavelength)) float_t  _OctaveWavelength;

/// @brief Field _RenderPostCombine, offset 0xd0, size 0x1 
 __declspec(property(get=__cordl_internal_get__RenderPostCombine, put=__cordl_internal_set__RenderPostCombine)) bool  _RenderPostCombine;

/// @brief Field _ReportRendererBounds, offset 0xc4, size 0x1 
 __declspec(property(get=__cordl_internal_get__ReportRendererBounds, put=__cordl_internal_set__ReportRendererBounds)) bool  _ReportRendererBounds;

/// @brief Field _Reporter, offset 0xc8, size 0x8 
 __declspec(property(get=__cordl_internal_get__Reporter, put=__cordl_internal_set__Reporter)) ::WaveHarmonic::Crest::AnimatedWavesLodInput_Reporter*  _Reporter;

/// @brief Method Filter, addr 0x182550420, size 0x80, virtual true, abstract: false, final false
inline float_t Filter(::WaveHarmonic::Crest::WaterRenderer*  water, int32_t  slice) ;

/// @brief Method Initialize, addr 0x1825504a0, size 0xb0, virtual true, abstract: false, final false
inline void Initialize() ;

static inline ::WaveHarmonic::Crest::AnimatedWavesLodInput* New_ctor() ;

/// @brief Method OnDisable, addr 0x182550550, size 0x70, virtual true, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnMigrate, addr 0x1825505c0, size 0x20, virtual true, abstract: false, final false
inline void OnMigrate() ;

/// @brief Method ReportDisplacement, addr 0x1825505e0, size 0x250, virtual false, abstract: false, final false
inline bool ReportDisplacement(::WaveHarmonic::Crest::WaterRenderer*  water, ::by_ref<::UnityEngine::Rect>  bounds, ::by_ref<float_t>  horizontal, ::by_ref<float_t>  vertical) ;

/// @brief Method ReportWaveDisplacement, addr 0x18030b3b0, size 0x10, virtual false, abstract: false, final false
inline float_t ReportWaveDisplacement(::WaveHarmonic::Crest::WaterRenderer*  water, float_t  displacement) ;

/// @brief Method SetRenderPostCombine, addr 0x182550830, size 0x30, virtual false, abstract: false, final false
inline void SetRenderPostCombine(bool  previous, bool  current, bool  force) ;

constexpr ::WaveHarmonic::Crest::DisplacementPass const& __cordl_internal_get__DisplacementPass() const;

constexpr ::WaveHarmonic::Crest::DisplacementPass& __cordl_internal_get__DisplacementPass() ;

constexpr bool const& __cordl_internal_get__FilterByWavelength() const;

constexpr bool& __cordl_internal_get__FilterByWavelength() ;

constexpr float_t const& __cordl_internal_get__MaximumDisplacementHorizontal() const;

constexpr float_t& __cordl_internal_get__MaximumDisplacementHorizontal() ;

constexpr float_t const& __cordl_internal_get__MaximumDisplacementVertical() const;

constexpr float_t& __cordl_internal_get__MaximumDisplacementVertical() ;

constexpr float_t const& __cordl_internal_get__OctaveWavelength() const;

constexpr float_t& __cordl_internal_get__OctaveWavelength() ;

constexpr bool const& __cordl_internal_get__RenderPostCombine() const;

constexpr bool& __cordl_internal_get__RenderPostCombine() ;

constexpr bool const& __cordl_internal_get__ReportRendererBounds() const;

constexpr bool& __cordl_internal_get__ReportRendererBounds() ;

constexpr ::WaveHarmonic::Crest::AnimatedWavesLodInput_Reporter* const& __cordl_internal_get__Reporter() const;

constexpr ::WaveHarmonic::Crest::AnimatedWavesLodInput_Reporter*& __cordl_internal_get__Reporter() ;

constexpr void __cordl_internal_set__DisplacementPass(::WaveHarmonic::Crest::DisplacementPass  value) ;

constexpr void __cordl_internal_set__FilterByWavelength(bool  value) ;

constexpr void __cordl_internal_set__MaximumDisplacementHorizontal(float_t  value) ;

constexpr void __cordl_internal_set__MaximumDisplacementVertical(float_t  value) ;

constexpr void __cordl_internal_set__OctaveWavelength(float_t  value) ;

constexpr void __cordl_internal_set__RenderPostCombine(bool  value) ;

constexpr void __cordl_internal_set__ReportRendererBounds(bool  value) ;

constexpr void __cordl_internal_set__Reporter(::WaveHarmonic::Crest::AnimatedWavesLodInput_Reporter*  value) ;

/// @brief Method .ctor, addr 0x182550860, size 0x90, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_DefaultMode, addr 0x1802ee400, size 0x10, virtual true, abstract: false, final false
inline ::WaveHarmonic::Crest::LodInputMode get_DefaultMode() ;

/// @brief Method get_DisplacementPass, addr 0x1803b2d80, size 0x10, virtual false, abstract: false, final false
inline ::WaveHarmonic::Crest::DisplacementPass get_DisplacementPass() ;

/// @brief Method get_FilterByWavelength, addr 0x1825508f0, size 0x10, virtual false, abstract: false, final false
inline bool get_FilterByWavelength() ;

/// @brief Method get_GizmoColor, addr 0x182550900, size 0x40, virtual true, abstract: false, final false
inline ::UnityEngine::Color get_GizmoColor() ;

/// @brief Method get_Inputs, addr 0x182550940, size 0x40, virtual true, abstract: false, final false
inline ::WaveHarmonic::Crest::Utility::SortedList_2<int32_t,::WaveHarmonic::Crest::ILodInput*>* get_Inputs() ;

/// @brief Method get_MaximumDisplacementHorizontal, addr 0x18032ef70, size 0x10, virtual false, abstract: false, final false
inline float_t get_MaximumDisplacementHorizontal() ;

/// @brief Method get_MaximumDisplacementVertical, addr 0x1803826d0, size 0x10, virtual false, abstract: false, final false
inline float_t get_MaximumDisplacementVertical() ;

/// @brief Method get_OctaveWavelength, addr 0x1803d39c0, size 0x10, virtual false, abstract: false, final false
inline float_t get_OctaveWavelength() ;

/// @brief Method get_Pass, addr 0x1803b2d80, size 0x10, virtual true, abstract: false, final false
inline int32_t get_Pass() ;

/// @brief Method get_RenderPostCombine, addr 0x180352b10, size 0x10, virtual false, abstract: false, final false
inline bool get_RenderPostCombine() ;

/// @brief Method get_ReportRendererBounds, addr 0x1803826e0, size 0x10, virtual false, abstract: false, final false
inline bool get_ReportRendererBounds() ;

/// @brief Method get_Version, addr 0x182550980, size 0x20, virtual true, abstract: false, final false
inline int32_t get_Version() ;

/// @brief Method set_DisplacementPass, addr 0x1817eed30, size 0x10, virtual false, abstract: false, final false
inline void set_DisplacementPass(::WaveHarmonic::Crest::DisplacementPass  value) ;

/// @brief Method set_FilterByWavelength, addr 0x1825509a0, size 0x10, virtual false, abstract: false, final false
inline void set_FilterByWavelength(bool  value) ;

/// @brief Method set_MaximumDisplacementHorizontal, addr 0x1803d9990, size 0x10, virtual false, abstract: false, final false
inline void set_MaximumDisplacementHorizontal(float_t  value) ;

/// @brief Method set_MaximumDisplacementVertical, addr 0x182349c90, size 0x10, virtual false, abstract: false, final false
inline void set_MaximumDisplacementVertical(float_t  value) ;

/// @brief Method set_OctaveWavelength, addr 0x1803d3a30, size 0x10, virtual false, abstract: false, final false
inline void set_OctaveWavelength(float_t  value) ;

/// @brief Method set_RenderPostCombine, addr 0x1825509b0, size 0x20, virtual false, abstract: false, final false
inline void set_RenderPostCombine(bool  value) ;

/// @brief Method set_ReportRendererBounds, addr 0x180382820, size 0x40, virtual false, abstract: false, final false
inline void set_ReportRendererBounds(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AnimatedWavesLodInput() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AnimatedWavesLodInput", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AnimatedWavesLodInput(AnimatedWavesLodInput && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AnimatedWavesLodInput", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AnimatedWavesLodInput(AnimatedWavesLodInput const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16507};

/// @brief Field _DisplacementPass, offset: 0xb0, size: 0x4, def value: None
 ::WaveHarmonic::Crest::DisplacementPass  ____DisplacementPass;

/// @brief Field _FilterByWavelength, offset: 0xb4, size: 0x1, def value: None
 bool  ____FilterByWavelength;

/// @brief Field _OctaveWavelength, offset: 0xb8, size: 0x4, def value: None
 float_t  ____OctaveWavelength;

/// @brief Field _MaximumDisplacementVertical, offset: 0xbc, size: 0x4, def value: None
 float_t  ____MaximumDisplacementVertical;

/// @brief Field _MaximumDisplacementHorizontal, offset: 0xc0, size: 0x4, def value: None
 float_t  ____MaximumDisplacementHorizontal;

/// @brief Field _ReportRendererBounds, offset: 0xc4, size: 0x1, def value: None
 bool  ____ReportRendererBounds;

/// @brief Field _Reporter, offset: 0xc8, size: 0x8, def value: None
 ::WaveHarmonic::Crest::AnimatedWavesLodInput_Reporter*  ____Reporter;

/// @brief Field _RenderPostCombine, offset: 0xd0, size: 0x1, def value: None
 bool  ____RenderPostCombine;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::WaveHarmonic::Crest::AnimatedWavesLodInput, ____DisplacementPass) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::AnimatedWavesLodInput, ____FilterByWavelength) == 0xb4, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::AnimatedWavesLodInput, ____OctaveWavelength) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::AnimatedWavesLodInput, ____MaximumDisplacementVertical) == 0xbc, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::AnimatedWavesLodInput, ____MaximumDisplacementHorizontal) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::AnimatedWavesLodInput, ____ReportRendererBounds) == 0xc4, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::AnimatedWavesLodInput, ____Reporter) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::AnimatedWavesLodInput, ____RenderPostCombine) == 0xd0, "Offset mismatch!");

static_assert(sizeof(::WaveHarmonic::Crest::AnimatedWavesLodInput) == 0xd8, "Size mismatch!");

} // namespace end def WaveHarmonic::Crest

#pragma once
// IWYU pragma private; include "GlobalNamespace/SplitFlapGlyph.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__PegTileSet_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SplitFlapGlyph)
namespace Animancer {
class AnimancerComponent;
}
namespace GlobalNamespace {
class AnimancerFrameHelper;
}
namespace GlobalNamespace {
class AudioRandomContainer;
}
namespace GlobalNamespace {
class PegTileDataSet;
}
namespace GlobalNamespace {
class PegTileRenderer;
}
namespace GlobalNamespace {
class PlayerLookSet;
}
namespace GlobalNamespace {
struct PropGroup;
}
namespace GlobalNamespace {
struct SplitFlapGlyph_SplitFlapType;
}
namespace System {
template<typename T>
struct Nullable_1;
}
namespace UnityEngine {
class AnimationClip;
}
// Forward declare root types
namespace GlobalNamespace {
struct SplitFlapGlyph_SplitFlapType;
}
namespace GlobalNamespace {
class SplitFlapGlyph;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::SplitFlapGlyph_SplitFlapType);
MARK_REF_T(::GlobalNamespace::SplitFlapGlyph*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::SplitFlapGlyph_SplitFlapType, "", "SplitFlapGlyph/SplitFlapType");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::SplitFlapGlyph*, "", "SplitFlapGlyph");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: SplitFlapGlyph/SplitFlapType
struct CORDL_TYPE SplitFlapGlyph_SplitFlapType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __SplitFlapGlyph_SplitFlapType_Unwrapped
enum struct __SplitFlapGlyph_SplitFlapType_Unwrapped : int32_t {
__E_PropGroup = static_cast<int32_t>(0x0),
__E_PlayerColor = static_cast<int32_t>(0x1),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __SplitFlapGlyph_SplitFlapType_Unwrapped () const noexcept {
return static_cast<__SplitFlapGlyph_SplitFlapType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr SplitFlapGlyph_SplitFlapType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr SplitFlapGlyph_SplitFlapType(int32_t  value__) noexcept;

/// @brief Field PlayerColor value: I32(1)
static ::GlobalNamespace::SplitFlapGlyph_SplitFlapType const PlayerColor;

/// @brief Field PropGroup value: I32(0)
static ::GlobalNamespace::SplitFlapGlyph_SplitFlapType const PropGroup;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5098};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SplitFlapGlyph_SplitFlapType, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::SplitFlapGlyph_SplitFlapType) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies PegTileSet, SplitFlapGlyph::SplitFlapType, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: SplitFlapGlyph
class CORDL_TYPE SplitFlapGlyph : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using SplitFlapType = ::GlobalNamespace::SplitFlapGlyph_SplitFlapType;

/// @brief Field aimIndex, offset 0x98, size 0x4 
 __declspec(property(get=__cordl_internal_get_aimIndex, put=__cordl_internal_set_aimIndex)) int32_t  aimIndex;

/// @brief Field aniamtionSpeed, offset 0x80, size 0x4 
 __declspec(property(get=__cordl_internal_get_aniamtionSpeed, put=__cordl_internal_set_aniamtionSpeed)) float_t  aniamtionSpeed;

/// @brief Field animancerComponent, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_animancerComponent, put=__cordl_internal_set_animancerComponent)) ::UnityW<::Animancer::AnimancerComponent>  animancerComponent;

/// @brief Field animancerFrameHelper, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_animancerFrameHelper, put=__cordl_internal_set_animancerFrameHelper)) ::UnityW<::GlobalNamespace::AnimancerFrameHelper>  animancerFrameHelper;

/// @brief Field animationClip, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get_animationClip, put=__cordl_internal_set_animationClip)) ::UnityW<::UnityEngine::AnimationClip>  animationClip;

/// @brief Field currentIndex, offset 0x94, size 0x4 
 __declspec(property(get=__cordl_internal_get_currentIndex, put=__cordl_internal_set_currentIndex)) int32_t  currentIndex;

/// @brief Field flapSound, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get_flapSound, put=__cordl_internal_set_flapSound)) ::UnityW<::GlobalNamespace::AudioRandomContainer>  flapSound;

/// @brief Field hasInitialValue, offset 0x9c, size 0x1 
 __declspec(property(get=__cordl_internal_get_hasInitialValue, put=__cordl_internal_set_hasInitialValue)) bool  hasInitialValue;

/// @brief Field logVerbose, offset 0x84, size 0x1 
 __declspec(property(get=__cordl_internal_get_logVerbose, put=__cordl_internal_set_logVerbose)) bool  logVerbose;

/// @brief Field lowerFlapBottom, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_lowerFlapBottom, put=__cordl_internal_set_lowerFlapBottom)) ::UnityW<::GlobalNamespace::PegTileRenderer>  lowerFlapBottom;

/// @brief Field lowerFlapTop, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_lowerFlapTop, put=__cordl_internal_set_lowerFlapTop)) ::UnityW<::GlobalNamespace::PegTileRenderer>  lowerFlapTop;

/// @brief Field pegTileDataSet, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_pegTileDataSet, put=__cordl_internal_set_pegTileDataSet)) ::UnityW<::GlobalNamespace::PegTileDataSet>  pegTileDataSet;

/// @brief Field playerLookSet, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_playerLookSet, put=__cordl_internal_set_playerLookSet)) ::UnityW<::GlobalNamespace::PlayerLookSet>  playerLookSet;

/// @brief Field rearFlapBottom, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_rearFlapBottom, put=__cordl_internal_set_rearFlapBottom)) ::UnityW<::GlobalNamespace::PegTileRenderer>  rearFlapBottom;

/// @brief Field rearFlapTop, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_rearFlapTop, put=__cordl_internal_set_rearFlapTop)) ::UnityW<::GlobalNamespace::PegTileRenderer>  rearFlapTop;

/// @brief Field splitFlapType, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_splitFlapType, put=__cordl_internal_set_splitFlapType)) ::GlobalNamespace::SplitFlapGlyph_SplitFlapType  splitFlapType;

/// @brief Field tileSet, offset 0x90, size 0x4 
 __declspec(property(get=__cordl_internal_get_tileSet, put=__cordl_internal_set_tileSet)) ::GlobalNamespace::PegTileSet  tileSet;

/// @brief Field upperFlapBottom, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_upperFlapBottom, put=__cordl_internal_set_upperFlapBottom)) ::UnityW<::GlobalNamespace::PegTileRenderer>  upperFlapBottom;

/// @brief Field upperFlapTop, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_upperFlapTop, put=__cordl_internal_set_upperFlapTop)) ::UnityW<::GlobalNamespace::PegTileRenderer>  upperFlapTop;

/// @brief Method Awake, addr 0x180415820, size 0x170, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method GetNextIndex, addr 0x180415990, size 0xf0, virtual false, abstract: false, final false
inline int32_t GetNextIndex(int32_t  startIndex) ;

/// @brief Method GetPegTileCircle, addr 0x180415a80, size 0x50, virtual false, abstract: false, final false
static inline ::GlobalNamespace::PropGroup GetPegTileCircle(int32_t  index, ::GlobalNamespace::PegTileDataSet*  pegTileDataSet) ;

/// @brief Method GetPropGroupByIndex, addr 0x180415ad0, size 0x50, virtual false, abstract: false, final false
inline ::GlobalNamespace::PropGroup GetPropGroupByIndex(int32_t  index) ;

static inline ::GlobalNamespace::SplitFlapGlyph* New_ctor() ;

/// @brief Method OnEndClip, addr 0x180415b20, size 0x100, virtual false, abstract: false, final false
inline void OnEndClip() ;

/// @brief Method OnStartClip, addr 0x180415c20, size 0x120, virtual false, abstract: false, final false
inline void OnStartClip() ;

/// @brief Method SetAimColor, addr 0x180415d40, size 0x50, virtual false, abstract: false, final false
inline void SetAimColor(::System::Nullable_1<int32_t>  colorIndex) ;

/// @brief Method SetAimGlyph, addr 0x180415d90, size 0xe0, virtual false, abstract: false, final false
inline void SetAimGlyph(::GlobalNamespace::PropGroup  glyph) ;

/// @brief Method SetAimIndex, addr 0x180415e70, size 0xf0, virtual false, abstract: false, final false
inline void SetAimIndex(int32_t  newIndex) ;

/// @brief Method SetFlaps, addr 0x180415f60, size 0x300, virtual false, abstract: false, final false
inline void SetFlaps(int32_t  oldIndex, int32_t  newIndex) ;

/// @brief Method StartFlap, addr 0x180416260, size 0xf0, virtual false, abstract: false, final false
inline void StartFlap() ;

constexpr int32_t const& __cordl_internal_get_aimIndex() const;

constexpr int32_t& __cordl_internal_get_aimIndex() ;

constexpr float_t const& __cordl_internal_get_aniamtionSpeed() const;

constexpr float_t& __cordl_internal_get_aniamtionSpeed() ;

constexpr ::UnityW<::Animancer::AnimancerComponent> const& __cordl_internal_get_animancerComponent() const;

constexpr ::UnityW<::Animancer::AnimancerComponent>& __cordl_internal_get_animancerComponent() ;

constexpr ::UnityW<::GlobalNamespace::AnimancerFrameHelper> const& __cordl_internal_get_animancerFrameHelper() const;

constexpr ::UnityW<::GlobalNamespace::AnimancerFrameHelper>& __cordl_internal_get_animancerFrameHelper() ;

constexpr ::UnityW<::UnityEngine::AnimationClip> const& __cordl_internal_get_animationClip() const;

constexpr ::UnityW<::UnityEngine::AnimationClip>& __cordl_internal_get_animationClip() ;

constexpr int32_t const& __cordl_internal_get_currentIndex() const;

constexpr int32_t& __cordl_internal_get_currentIndex() ;

constexpr ::UnityW<::GlobalNamespace::AudioRandomContainer> const& __cordl_internal_get_flapSound() const;

constexpr ::UnityW<::GlobalNamespace::AudioRandomContainer>& __cordl_internal_get_flapSound() ;

constexpr bool const& __cordl_internal_get_hasInitialValue() const;

constexpr bool& __cordl_internal_get_hasInitialValue() ;

constexpr bool const& __cordl_internal_get_logVerbose() const;

constexpr bool& __cordl_internal_get_logVerbose() ;

constexpr ::UnityW<::GlobalNamespace::PegTileRenderer> const& __cordl_internal_get_lowerFlapBottom() const;

constexpr ::UnityW<::GlobalNamespace::PegTileRenderer>& __cordl_internal_get_lowerFlapBottom() ;

constexpr ::UnityW<::GlobalNamespace::PegTileRenderer> const& __cordl_internal_get_lowerFlapTop() const;

constexpr ::UnityW<::GlobalNamespace::PegTileRenderer>& __cordl_internal_get_lowerFlapTop() ;

constexpr ::UnityW<::GlobalNamespace::PegTileDataSet> const& __cordl_internal_get_pegTileDataSet() const;

constexpr ::UnityW<::GlobalNamespace::PegTileDataSet>& __cordl_internal_get_pegTileDataSet() ;

constexpr ::UnityW<::GlobalNamespace::PlayerLookSet> const& __cordl_internal_get_playerLookSet() const;

constexpr ::UnityW<::GlobalNamespace::PlayerLookSet>& __cordl_internal_get_playerLookSet() ;

constexpr ::UnityW<::GlobalNamespace::PegTileRenderer> const& __cordl_internal_get_rearFlapBottom() const;

constexpr ::UnityW<::GlobalNamespace::PegTileRenderer>& __cordl_internal_get_rearFlapBottom() ;

constexpr ::UnityW<::GlobalNamespace::PegTileRenderer> const& __cordl_internal_get_rearFlapTop() const;

constexpr ::UnityW<::GlobalNamespace::PegTileRenderer>& __cordl_internal_get_rearFlapTop() ;

constexpr ::GlobalNamespace::SplitFlapGlyph_SplitFlapType const& __cordl_internal_get_splitFlapType() const;

constexpr ::GlobalNamespace::SplitFlapGlyph_SplitFlapType& __cordl_internal_get_splitFlapType() ;

constexpr ::GlobalNamespace::PegTileSet const& __cordl_internal_get_tileSet() const;

constexpr ::GlobalNamespace::PegTileSet& __cordl_internal_get_tileSet() ;

constexpr ::UnityW<::GlobalNamespace::PegTileRenderer> const& __cordl_internal_get_upperFlapBottom() const;

constexpr ::UnityW<::GlobalNamespace::PegTileRenderer>& __cordl_internal_get_upperFlapBottom() ;

constexpr ::UnityW<::GlobalNamespace::PegTileRenderer> const& __cordl_internal_get_upperFlapTop() const;

constexpr ::UnityW<::GlobalNamespace::PegTileRenderer>& __cordl_internal_get_upperFlapTop() ;

constexpr void __cordl_internal_set_aimIndex(int32_t  value) ;

constexpr void __cordl_internal_set_aniamtionSpeed(float_t  value) ;

constexpr void __cordl_internal_set_animancerComponent(::UnityW<::Animancer::AnimancerComponent>  value) ;

constexpr void __cordl_internal_set_animancerFrameHelper(::UnityW<::GlobalNamespace::AnimancerFrameHelper>  value) ;

constexpr void __cordl_internal_set_animationClip(::UnityW<::UnityEngine::AnimationClip>  value) ;

constexpr void __cordl_internal_set_currentIndex(int32_t  value) ;

constexpr void __cordl_internal_set_flapSound(::UnityW<::GlobalNamespace::AudioRandomContainer>  value) ;

constexpr void __cordl_internal_set_hasInitialValue(bool  value) ;

constexpr void __cordl_internal_set_logVerbose(bool  value) ;

constexpr void __cordl_internal_set_lowerFlapBottom(::UnityW<::GlobalNamespace::PegTileRenderer>  value) ;

constexpr void __cordl_internal_set_lowerFlapTop(::UnityW<::GlobalNamespace::PegTileRenderer>  value) ;

constexpr void __cordl_internal_set_pegTileDataSet(::UnityW<::GlobalNamespace::PegTileDataSet>  value) ;

constexpr void __cordl_internal_set_playerLookSet(::UnityW<::GlobalNamespace::PlayerLookSet>  value) ;

constexpr void __cordl_internal_set_rearFlapBottom(::UnityW<::GlobalNamespace::PegTileRenderer>  value) ;

constexpr void __cordl_internal_set_rearFlapTop(::UnityW<::GlobalNamespace::PegTileRenderer>  value) ;

constexpr void __cordl_internal_set_splitFlapType(::GlobalNamespace::SplitFlapGlyph_SplitFlapType  value) ;

constexpr void __cordl_internal_set_tileSet(::GlobalNamespace::PegTileSet  value) ;

constexpr void __cordl_internal_set_upperFlapBottom(::UnityW<::GlobalNamespace::PegTileRenderer>  value) ;

constexpr void __cordl_internal_set_upperFlapTop(::UnityW<::GlobalNamespace::PegTileRenderer>  value) ;

/// @brief Method .ctor, addr 0x180416350, size 0x20, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SplitFlapGlyph() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SplitFlapGlyph", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SplitFlapGlyph(SplitFlapGlyph && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SplitFlapGlyph", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SplitFlapGlyph(SplitFlapGlyph const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5099};

/// @brief Field splitFlapType, offset: 0x20, size: 0x4, def value: None
 ::GlobalNamespace::SplitFlapGlyph_SplitFlapType  ___splitFlapType;

/// @brief Field pegTileDataSet, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::PegTileDataSet>  ___pegTileDataSet;

/// @brief Field playerLookSet, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::PlayerLookSet>  ___playerLookSet;

/// @brief Field upperFlapTop, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::PegTileRenderer>  ___upperFlapTop;

/// @brief Field upperFlapBottom, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::PegTileRenderer>  ___upperFlapBottom;

/// @brief Field lowerFlapTop, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::PegTileRenderer>  ___lowerFlapTop;

/// @brief Field lowerFlapBottom, offset: 0x50, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::PegTileRenderer>  ___lowerFlapBottom;

/// @brief Field rearFlapTop, offset: 0x58, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::PegTileRenderer>  ___rearFlapTop;

/// @brief Field rearFlapBottom, offset: 0x60, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::PegTileRenderer>  ___rearFlapBottom;

/// @brief Field animancerComponent, offset: 0x68, size: 0x8, def value: None
 ::UnityW<::Animancer::AnimancerComponent>  ___animancerComponent;

/// @brief Field animancerFrameHelper, offset: 0x70, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::AnimancerFrameHelper>  ___animancerFrameHelper;

/// @brief Field animationClip, offset: 0x78, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AnimationClip>  ___animationClip;

/// @brief Field aniamtionSpeed, offset: 0x80, size: 0x4, def value: None
 float_t  ___aniamtionSpeed;

/// @brief Field logVerbose, offset: 0x84, size: 0x1, def value: None
 bool  ___logVerbose;

/// @brief Field flapSound, offset: 0x88, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::AudioRandomContainer>  ___flapSound;

/// @brief Field tileSet, offset: 0x90, size: 0x4, def value: None
 ::GlobalNamespace::PegTileSet  ___tileSet;

/// @brief Field currentIndex, offset: 0x94, size: 0x4, def value: None
 int32_t  ___currentIndex;

/// @brief Field aimIndex, offset: 0x98, size: 0x4, def value: None
 int32_t  ___aimIndex;

/// @brief Field hasInitialValue, offset: 0x9c, size: 0x1, def value: None
 bool  ___hasInitialValue;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SplitFlapGlyph, ___splitFlapType) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SplitFlapGlyph, ___pegTileDataSet) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SplitFlapGlyph, ___playerLookSet) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SplitFlapGlyph, ___upperFlapTop) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SplitFlapGlyph, ___upperFlapBottom) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SplitFlapGlyph, ___lowerFlapTop) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SplitFlapGlyph, ___lowerFlapBottom) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SplitFlapGlyph, ___rearFlapTop) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SplitFlapGlyph, ___rearFlapBottom) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SplitFlapGlyph, ___animancerComponent) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SplitFlapGlyph, ___animancerFrameHelper) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SplitFlapGlyph, ___animationClip) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SplitFlapGlyph, ___aniamtionSpeed) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SplitFlapGlyph, ___logVerbose) == 0x84, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SplitFlapGlyph, ___flapSound) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SplitFlapGlyph, ___tileSet) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SplitFlapGlyph, ___currentIndex) == 0x94, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SplitFlapGlyph, ___aimIndex) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SplitFlapGlyph, ___hasInitialValue) == 0x9c, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::SplitFlapGlyph) == 0xa0, "Size mismatch!");

} // namespace end def GlobalNamespace

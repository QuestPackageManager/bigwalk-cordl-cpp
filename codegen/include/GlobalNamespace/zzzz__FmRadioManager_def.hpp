#pragma once
// IWYU pragma private; include "GlobalNamespace/FmRadioManager.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__MusicGroup_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(FmRadioManager)
namespace GlobalNamespace {
class IOccasional;
}
namespace GlobalNamespace {
class MusicGroup;
}
namespace GlobalNamespace {
class OccasionalPartner;
}
namespace System {
template<typename T>
class Action_1;
}
namespace System {
class Action;
}
namespace UnityEngine {
class AnimationCurve;
}
// Forward declare root types
namespace GlobalNamespace {
class FmRadioManager;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::FmRadioManager*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::FmRadioManager*, "", "FmRadioManager");
// Dependencies MusicGroup, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: FmRadioManager
class CORDL_TYPE FmRadioManager : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field _initialized, offset 0x38, size 0x1 
 __declspec(property(get=__cordl_internal_get__initialized, put=__cordl_internal_set__initialized)) bool  _initialized;

/// @brief Field _stationStates, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__stationStates, put=__cordl_internal_set__stationStates)) ::ArrayW<bool>  _stationStates;

/// @brief Field _stationUnlockTimes, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__stationUnlockTimes, put=__cordl_internal_set__stationUnlockTimes)) ::ArrayW<double_t>  _stationUnlockTimes;

/// @brief Field emissionCurve, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_emissionCurve, put=__cordl_internal_set_emissionCurve)) ::UnityEngine::AnimationCurve*  emissionCurve;

/// @brief Field occasionalPartner, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_occasionalPartner, put=__cordl_internal_set_occasionalPartner)) ::UnityW<::GlobalNamespace::OccasionalPartner>  occasionalPartner;

/// @brief Field onChange, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_onChange, put=setStaticF_onChange)) ::System::Action*  onChange;

/// @brief Field onUnlock, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_onUnlock, put=setStaticF_onUnlock)) ::System::Action_1<int32_t>*  onUnlock;

/// @brief Field stationTrackGroups, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_stationTrackGroups, put=__cordl_internal_set_stationTrackGroups)) ::ArrayW<::UnityW<::GlobalNamespace::MusicGroup>>  stationTrackGroups;

/// @brief Field transitionDuration, offset 0x3c, size 0x4 
 __declspec(property(get=__cordl_internal_get_transitionDuration, put=__cordl_internal_set_transitionDuration)) float_t  transitionDuration;

/// @brief Convert operator to "::GlobalNamespace::IOccasional"
constexpr operator  ::GlobalNamespace::IOccasional*() noexcept;

/// @brief Method GetIndex, addr 0x1803fc4a0, size 0xf0, virtual false, abstract: false, final false
static inline int32_t GetIndex(::GlobalNamespace::MusicGroup*  musicGroup) ;

/// @brief Method GetUnlockState, addr 0x1803fc590, size 0x170, virtual false, abstract: false, final false
static inline bool GetUnlockState(int32_t  stationIndex, ::by_ref<bool>  isTransitioning, ::by_ref<float_t>  transitionTime) ;

/// @brief Method Initialize, addr 0x1803fc700, size 0x90, virtual false, abstract: false, final false
inline void Initialize() ;

static inline ::GlobalNamespace::FmRadioManager* New_ctor() ;

/// @brief Method OccasionalUpdate, addr 0x1803fc790, size 0x150, virtual true, abstract: false, final true
inline void OccasionalUpdate() ;

/// @brief Method Unlock, addr 0x1803fc8e0, size 0x240, virtual false, abstract: false, final false
static inline void Unlock(::GlobalNamespace::MusicGroup*  musicGroup) ;

constexpr bool const& __cordl_internal_get__initialized() const;

constexpr bool& __cordl_internal_get__initialized() ;

constexpr ::ArrayW<bool> const& __cordl_internal_get__stationStates() const;

constexpr ::ArrayW<bool>& __cordl_internal_get__stationStates() ;

constexpr ::ArrayW<double_t> const& __cordl_internal_get__stationUnlockTimes() const;

constexpr ::ArrayW<double_t>& __cordl_internal_get__stationUnlockTimes() ;

constexpr ::UnityEngine::AnimationCurve* const& __cordl_internal_get_emissionCurve() const;

constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get_emissionCurve() ;

constexpr ::UnityW<::GlobalNamespace::OccasionalPartner> const& __cordl_internal_get_occasionalPartner() const;

constexpr ::UnityW<::GlobalNamespace::OccasionalPartner>& __cordl_internal_get_occasionalPartner() ;

constexpr ::ArrayW<::UnityW<::GlobalNamespace::MusicGroup>> const& __cordl_internal_get_stationTrackGroups() const;

constexpr ::ArrayW<::UnityW<::GlobalNamespace::MusicGroup>>& __cordl_internal_get_stationTrackGroups() ;

constexpr float_t const& __cordl_internal_get_transitionDuration() const;

constexpr float_t& __cordl_internal_get_transitionDuration() ;

constexpr void __cordl_internal_set__initialized(bool  value) ;

constexpr void __cordl_internal_set__stationStates(::ArrayW<bool>  value) ;

constexpr void __cordl_internal_set__stationUnlockTimes(::ArrayW<double_t>  value) ;

constexpr void __cordl_internal_set_emissionCurve(::UnityEngine::AnimationCurve*  value) ;

constexpr void __cordl_internal_set_occasionalPartner(::UnityW<::GlobalNamespace::OccasionalPartner>  value) ;

constexpr void __cordl_internal_set_stationTrackGroups(::ArrayW<::UnityW<::GlobalNamespace::MusicGroup>>  value) ;

constexpr void __cordl_internal_set_transitionDuration(float_t  value) ;

/// @brief Method .ctor, addr 0x1802dd7c0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::System::Action* getStaticF_onChange() ;

static inline ::System::Action_1<int32_t>* getStaticF_onUnlock() ;

/// @brief Method get_instance, addr 0x1803fcb20, size 0x30, virtual false, abstract: false, final false
static inline ::UnityW<::GlobalNamespace::FmRadioManager> get_instance() ;

/// @brief Convert to "::GlobalNamespace::IOccasional"
constexpr ::GlobalNamespace::IOccasional* i___GlobalNamespace__IOccasional() noexcept;

static inline void setStaticF_onChange(::System::Action*  value) ;

static inline void setStaticF_onUnlock(::System::Action_1<int32_t>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FmRadioManager() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FmRadioManager", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
FmRadioManager(FmRadioManager && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FmRadioManager", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
FmRadioManager(FmRadioManager const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5049};

/// @brief Field stationTrackGroups, offset: 0x20, size: 0x8, def value: None
 ::ArrayW<::UnityW<::GlobalNamespace::MusicGroup>>  ___stationTrackGroups;

/// @brief Field _stationStates, offset: 0x28, size: 0x8, def value: None
 ::ArrayW<bool>  ____stationStates;

/// @brief Field _stationUnlockTimes, offset: 0x30, size: 0x8, def value: None
 ::ArrayW<double_t>  ____stationUnlockTimes;

/// @brief Field _initialized, offset: 0x38, size: 0x1, def value: None
 bool  ____initialized;

/// @brief Field transitionDuration, offset: 0x3c, size: 0x4, def value: None
 float_t  ___transitionDuration;

/// @brief Field emissionCurve, offset: 0x40, size: 0x8, def value: None
 ::UnityEngine::AnimationCurve*  ___emissionCurve;

/// @brief Field occasionalPartner, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::OccasionalPartner>  ___occasionalPartner;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::FmRadioManager, ___stationTrackGroups) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FmRadioManager, ____stationStates) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FmRadioManager, ____stationUnlockTimes) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FmRadioManager, ____initialized) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FmRadioManager, ___transitionDuration) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FmRadioManager, ___emissionCurve) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FmRadioManager, ___occasionalPartner) == 0x48, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::FmRadioManager) == 0x50, "Size mismatch!");

} // namespace end def GlobalNamespace

#pragma once
// IWYU pragma private; include "GlobalNamespace/SyncedMachine.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__PeckSystemReference_def.hpp"
#include "Mirror/zzzz__NetworkBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(SyncedMachine)
namespace Animancer {
class AnimancerComponent;
}
namespace GlobalNamespace {
struct PeckContext;
}
namespace Mirror {
class NetworkReader;
}
namespace Mirror {
class NetworkWriter;
}
namespace UnityEngine {
class AnimationClip;
}
// Forward declare root types
namespace GlobalNamespace {
class SyncedMachine;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::SyncedMachine*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::SyncedMachine*, "", "SyncedMachine");
// Dependencies Mirror.NetworkBehaviour, PeckSystemReference
namespace GlobalNamespace {
// Is value type: false
// CS Name: SyncedMachine
class CORDL_TYPE SyncedMachine : public ::Mirror::NetworkBehaviour {
public:
// Declarations
 __declspec(property(get=get_NetworkstartTime, put=set_NetworkstartTime)) double_t  NetworkstartTime;

/// @brief Field animancerComponent, offset 0x98, size 0x8 
 __declspec(property(get=__cordl_internal_get_animancerComponent, put=__cordl_internal_set_animancerComponent)) ::UnityW<::Animancer::AnimancerComponent>  animancerComponent;

/// @brief Field animationSpeed, offset 0xa8, size 0x4 
 __declspec(property(get=__cordl_internal_get_animationSpeed, put=__cordl_internal_set_animationSpeed)) float_t  animationSpeed;

/// @brief Field beatInterval, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_beatInterval, put=setStaticF_beatInterval)) float_t  beatInterval;

 __declspec(property(get=get_clipDuration)) float_t  clipDuration;

/// @brief Field lastBeatTime, offset 0xb0, size 0x4 
 __declspec(property(get=__cordl_internal_get_lastBeatTime, put=__cordl_internal_set_lastBeatTime)) float_t  lastBeatTime;

/// @brief Field logVerbose, offset 0xac, size 0x1 
 __declspec(property(get=__cordl_internal_get_logVerbose, put=__cordl_internal_set_logVerbose)) bool  logVerbose;

/// @brief Field loopingClip, offset 0xa0, size 0x8 
 __declspec(property(get=__cordl_internal_get_loopingClip, put=__cordl_internal_set_loopingClip)) ::UnityW<::UnityEngine::AnimationClip>  loopingClip;

/// @brief Field peckSystem, offset 0x70, size 0x28 
 __declspec(property(get=__cordl_internal_get_peckSystem, put=__cordl_internal_set_peckSystem)) ::GlobalNamespace::PeckSystemReference  peckSystem;

/// @brief Field startTime, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_startTime, put=__cordl_internal_set_startTime)) double_t  startTime;

/// @brief Method Awake, addr 0x1804179a0, size 0x100, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method DeserializeSyncVars, addr 0x180417aa0, size 0xe0, virtual true, abstract: false, final false
inline void DeserializeSyncVars(::Mirror::NetworkReader*  reader, bool  initialState) ;

/// @brief Method GetElapsedInSeconds, addr 0x180417b80, size 0x90, virtual false, abstract: false, final false
inline float_t GetElapsedInSeconds() ;

/// @brief Method MirrorProcessed, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void MirrorProcessed() ;

static inline ::GlobalNamespace::SyncedMachine* New_ctor() ;

/// @brief Method OnSetStartTime, addr 0x180417c10, size 0x220, virtual false, abstract: false, final false
inline void OnSetStartTime(double_t  oldValue, double_t  newValue) ;

/// @brief Method Peck, addr 0x180417e30, size 0xd0, virtual false, abstract: false, final false
inline void Peck(::GlobalNamespace::PeckContext  peckContext) ;

/// @brief Method SerializeSyncVars, addr 0x180417f00, size 0x50, virtual true, abstract: false, final false
inline void SerializeSyncVars(::Mirror::NetworkWriter*  writer, bool  forceAll) ;

/// @brief Method Update, addr 0x180417f50, size 0x60, virtual false, abstract: false, final false
inline void Update() ;

constexpr ::UnityW<::Animancer::AnimancerComponent> const& __cordl_internal_get_animancerComponent() const;

constexpr ::UnityW<::Animancer::AnimancerComponent>& __cordl_internal_get_animancerComponent() ;

constexpr float_t const& __cordl_internal_get_animationSpeed() const;

constexpr float_t& __cordl_internal_get_animationSpeed() ;

constexpr float_t const& __cordl_internal_get_lastBeatTime() const;

constexpr float_t& __cordl_internal_get_lastBeatTime() ;

constexpr bool const& __cordl_internal_get_logVerbose() const;

constexpr bool& __cordl_internal_get_logVerbose() ;

constexpr ::UnityW<::UnityEngine::AnimationClip> const& __cordl_internal_get_loopingClip() const;

constexpr ::UnityW<::UnityEngine::AnimationClip>& __cordl_internal_get_loopingClip() ;

constexpr ::GlobalNamespace::PeckSystemReference const& __cordl_internal_get_peckSystem() const;

constexpr ::GlobalNamespace::PeckSystemReference& __cordl_internal_get_peckSystem() ;

constexpr double_t const& __cordl_internal_get_startTime() const;

constexpr double_t& __cordl_internal_get_startTime() ;

constexpr void __cordl_internal_set_animancerComponent(::UnityW<::Animancer::AnimancerComponent>  value) ;

constexpr void __cordl_internal_set_animationSpeed(float_t  value) ;

constexpr void __cordl_internal_set_lastBeatTime(float_t  value) ;

constexpr void __cordl_internal_set_logVerbose(bool  value) ;

constexpr void __cordl_internal_set_loopingClip(::UnityW<::UnityEngine::AnimationClip>  value) ;

constexpr void __cordl_internal_set_peckSystem(::GlobalNamespace::PeckSystemReference  value) ;

constexpr void __cordl_internal_set_startTime(double_t  value) ;

/// @brief Method .ctor, addr 0x180417fe0, size 0x20, virtual false, abstract: false, final false
inline void _ctor() ;

static inline float_t getStaticF_beatInterval() ;

/// @brief Method get_NetworkstartTime, addr 0x180418000, size 0x10, virtual false, abstract: false, final false
inline double_t get_NetworkstartTime() ;

/// @brief Method get_clipDuration, addr 0x180418010, size 0x30, virtual false, abstract: false, final false
inline float_t get_clipDuration() ;

static inline void setStaticF_beatInterval(float_t  value) ;

/// @brief Method set_NetworkstartTime, addr 0x180418040, size 0x70, virtual false, abstract: false, final false
inline void set_NetworkstartTime(::ByRefConst<double_t>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SyncedMachine() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SyncedMachine", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SyncedMachine(SyncedMachine && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SyncedMachine", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SyncedMachine(SyncedMachine const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5124};

/// @brief Field startTime, offset: 0x68, size: 0x8, def value: None
 double_t  ___startTime;

/// @brief Field peckSystem, offset: 0x70, size: 0x28, def value: None
 ::GlobalNamespace::PeckSystemReference  ___peckSystem;

/// @brief Field animancerComponent, offset: 0x98, size: 0x8, def value: None
 ::UnityW<::Animancer::AnimancerComponent>  ___animancerComponent;

/// @brief Field loopingClip, offset: 0xa0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AnimationClip>  ___loopingClip;

/// @brief Field animationSpeed, offset: 0xa8, size: 0x4, def value: None
 float_t  ___animationSpeed;

/// @brief Field logVerbose, offset: 0xac, size: 0x1, def value: None
 bool  ___logVerbose;

/// @brief Field lastBeatTime, offset: 0xb0, size: 0x4, def value: None
 float_t  ___lastBeatTime;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SyncedMachine, ___startTime) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SyncedMachine, ___peckSystem) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SyncedMachine, ___animancerComponent) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SyncedMachine, ___loopingClip) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SyncedMachine, ___animationSpeed) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SyncedMachine, ___logVerbose) == 0xac, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SyncedMachine, ___lastBeatTime) == 0xb0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::SyncedMachine) == 0xb8, "Size mismatch!");

} // namespace end def GlobalNamespace

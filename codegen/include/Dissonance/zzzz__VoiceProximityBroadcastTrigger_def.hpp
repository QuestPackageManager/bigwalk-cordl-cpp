#pragma once
// IWYU pragma private; include "Dissonance/VoiceProximityBroadcastTrigger.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Dissonance/zzzz__BaseProximityTrigger_1_def.hpp"
#include "Dissonance/zzzz__ChannelPriority_def.hpp"
#include "Dissonance/zzzz__CommActivationMode_def.hpp"
#include "Dissonance/zzzz__RoomChannel_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(VoiceProximityBroadcastTrigger)
namespace Dissonance::VAD {
class IVoiceActivationListener;
}
namespace Dissonance {
template<typename THandle>
class BaseProximityTrigger_1_Grid;
}
namespace Dissonance {
struct ChannelPriority;
}
namespace Dissonance {
struct CommActivationMode;
}
namespace Dissonance {
class IVoiceBroadcastTrigger;
}
namespace Dissonance {
struct RoomChannel;
}
namespace Dissonance {
class VoiceProximityBroadcastTrigger_BroadcastGrid;
}
namespace UnityEngine {
struct Vector3Int;
}
// Forward declare root types
namespace Dissonance {
class VoiceProximityBroadcastTrigger;
}
namespace Dissonance {
class VoiceProximityBroadcastTrigger_BroadcastGrid;
}
// Write type traits
MARK_REF_T(::Dissonance::VoiceProximityBroadcastTrigger*);
MARK_REF_T(::Dissonance::VoiceProximityBroadcastTrigger_BroadcastGrid*);
DEFINE_IL2CPP_CLASS(::Dissonance::VoiceProximityBroadcastTrigger*, "Dissonance", "VoiceProximityBroadcastTrigger");
DEFINE_IL2CPP_CLASS(::Dissonance::VoiceProximityBroadcastTrigger_BroadcastGrid*, "Dissonance", "VoiceProximityBroadcastTrigger/BroadcastGrid");
// Dependencies Dissonance.BaseProximityTrigger`1::Grid<THandle>, Dissonance.RoomChannel
namespace Dissonance {
// Is value type: false
// CS Name: Dissonance.VoiceProximityBroadcastTrigger/BroadcastGrid
class CORDL_TYPE VoiceProximityBroadcastTrigger_BroadcastGrid : public ::Dissonance::BaseProximityTrigger_1_Grid<::Dissonance::RoomChannel> {
public:
// Declarations
/// @brief Field _parent, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__parent, put=__cordl_internal_set__parent)) ::UnityW<::Dissonance::VoiceProximityBroadcastTrigger>  _parent;

/// @brief Method CloseHandle, addr 0x1805c53e0, size 0x50, virtual true, abstract: false, final false
inline void CloseHandle(::Dissonance::RoomChannel  handle) ;

/// @brief Method CreateHandle, addr 0x1805c5430, size 0xe0, virtual true, abstract: false, final false
inline ::Dissonance::RoomChannel CreateHandle(::UnityEngine::Vector3Int  id, ::StringW  name) ;

static inline ::Dissonance::VoiceProximityBroadcastTrigger_BroadcastGrid* New_ctor(::Dissonance::VoiceProximityBroadcastTrigger*  parent) ;

constexpr ::UnityW<::Dissonance::VoiceProximityBroadcastTrigger> const& __cordl_internal_get__parent() const;

constexpr ::UnityW<::Dissonance::VoiceProximityBroadcastTrigger>& __cordl_internal_get__parent() ;

constexpr void __cordl_internal_set__parent(::UnityW<::Dissonance::VoiceProximityBroadcastTrigger>  value) ;

/// @brief Method .ctor, addr 0x1805c5510, size 0x40, virtual false, abstract: false, final false
inline void _ctor(::Dissonance::VoiceProximityBroadcastTrigger*  parent) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr VoiceProximityBroadcastTrigger_BroadcastGrid() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "VoiceProximityBroadcastTrigger_BroadcastGrid", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
VoiceProximityBroadcastTrigger_BroadcastGrid(VoiceProximityBroadcastTrigger_BroadcastGrid && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "VoiceProximityBroadcastTrigger_BroadcastGrid", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
VoiceProximityBroadcastTrigger_BroadcastGrid(VoiceProximityBroadcastTrigger_BroadcastGrid const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16836};

/// @brief Field _parent, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::Dissonance::VoiceProximityBroadcastTrigger>  ____parent;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Dissonance::VoiceProximityBroadcastTrigger_BroadcastGrid, ____parent) == 0x40, "Offset mismatch!");

static_assert(sizeof(::Dissonance::VoiceProximityBroadcastTrigger_BroadcastGrid) == 0x48, "Size mismatch!");

} // namespace end def Dissonance
// Dependencies Dissonance.BaseProximityTrigger`1<THandle>, Dissonance.ChannelPriority, Dissonance.CommActivationMode, Dissonance.RoomChannel, System.Nullable`1<T>
namespace Dissonance {
// Is value type: false
// CS Name: Dissonance.VoiceProximityBroadcastTrigger
class CORDL_TYPE VoiceProximityBroadcastTrigger : public ::Dissonance::BaseProximityTrigger_1<::Dissonance::RoomChannel> {
public:
// Declarations
using BroadcastGrid = ::Dissonance::VoiceProximityBroadcastTrigger_BroadcastGrid;

 __declspec(property(get=get_CanTrigger)) bool  CanTrigger;

 __declspec(property(get=get_InputName, put=set_InputName)) ::StringW  InputName;

 __declspec(property(get=get_IsMuted, put=set_IsMuted)) bool  IsMuted;

 __declspec(property(get=get_IsTransmitting)) bool  IsTransmitting;

 __declspec(property(get=get_Mode, put=set_Mode)) ::Dissonance::CommActivationMode  Mode;

 __declspec(property(get=get_Priority, put=set_Priority)) ::Dissonance::ChannelPriority  Priority;

/// @brief Field _activationModeExpanded, offset 0x7a, size 0x1 
 __declspec(property(get=__cordl_internal_get__activationModeExpanded, put=__cordl_internal_set__activationModeExpanded)) bool  _activationModeExpanded;

/// @brief Field _inputName, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get__inputName, put=__cordl_internal_set__inputName)) ::StringW  _inputName;

/// @brief Field _isVadSpeaking, offset 0x7c, size 0x1 
 __declspec(property(get=__cordl_internal_get__isVadSpeaking, put=__cordl_internal_set__isVadSpeaking)) bool  _isVadSpeaking;

/// @brief Field _metadataExpanded, offset 0x79, size 0x1 
 __declspec(property(get=__cordl_internal_get__metadataExpanded, put=__cordl_internal_set__metadataExpanded)) bool  _metadataExpanded;

/// @brief Field _mode, offset 0x90, size 0x4 
 __declspec(property(get=__cordl_internal_get__mode, put=__cordl_internal_set__mode)) ::Dissonance::CommActivationMode  _mode;

/// @brief Field _muted, offset 0x94, size 0x1 
 __declspec(property(get=__cordl_internal_get__muted, put=__cordl_internal_set__muted)) bool  _muted;

/// @brief Field _previousMode, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get__previousMode, put=__cordl_internal_set__previousMode)) ::System::Nullable_1<::Dissonance::CommActivationMode>  _previousMode;

/// @brief Field _prority, offset 0x98, size 0x4 
 __declspec(property(get=__cordl_internal_get__prority, put=__cordl_internal_set__prority)) ::Dissonance::ChannelPriority  _prority;

/// @brief Field _roomExpanded, offset 0x78, size 0x1 
 __declspec(property(get=__cordl_internal_get__roomExpanded, put=__cordl_internal_set__roomExpanded)) bool  _roomExpanded;

/// @brief Field _tokensExpanded, offset 0x7b, size 0x1 
 __declspec(property(get=__cordl_internal_get__tokensExpanded, put=__cordl_internal_set__tokensExpanded)) bool  _tokensExpanded;

/// @brief Convert operator to "::Dissonance::IVoiceBroadcastTrigger"
constexpr operator  ::Dissonance::IVoiceBroadcastTrigger*() noexcept;

/// @brief Convert operator to "::Dissonance::VAD::IVoiceActivationListener"
constexpr operator  ::Dissonance::VAD::IVoiceActivationListener*() noexcept;

/// @brief Method CreateGrid, addr 0x1805d43d0, size 0x50, virtual true, abstract: false, final false
inline ::Dissonance::BaseProximityTrigger_1_Grid<::Dissonance::RoomChannel>* CreateGrid() ;

/// @brief Method Dissonance.VAD.IVoiceActivationListener.VoiceActivationStart, addr 0x1805d4420, size 0x10, virtual true, abstract: false, final true
inline void Dissonance_VAD_IVoiceActivationListener_VoiceActivationStart() ;

/// @brief Method Dissonance.VAD.IVoiceActivationListener.VoiceActivationStop, addr 0x1805d4430, size 0x10, virtual true, abstract: false, final true
inline void Dissonance_VAD_IVoiceActivationListener_VoiceActivationStop() ;

/// @brief Method IsUserActivated, addr 0x1805d4440, size 0x80, virtual true, abstract: false, final false
inline bool IsUserActivated() ;

static inline ::Dissonance::VoiceProximityBroadcastTrigger* New_ctor() ;

/// @brief Method OnDestroy, addr 0x1805d44c0, size 0x50, virtual true, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method OnDisable, addr 0x1805d4510, size 0x50, virtual true, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x1805d4560, size 0xb0, virtual true, abstract: false, final false
inline void OnEnable() ;

/// @brief Method ToggleMute, addr 0x1805d4610, size 0x50, virtual true, abstract: false, final true
inline void ToggleMute() ;

/// @brief Method Update, addr 0x1805d4660, size 0x70, virtual true, abstract: false, final false
inline void Update() ;

constexpr bool const& __cordl_internal_get__activationModeExpanded() const;

constexpr bool& __cordl_internal_get__activationModeExpanded() ;

constexpr ::StringW const& __cordl_internal_get__inputName() const;

constexpr ::StringW& __cordl_internal_get__inputName() ;

constexpr bool const& __cordl_internal_get__isVadSpeaking() const;

constexpr bool& __cordl_internal_get__isVadSpeaking() ;

constexpr bool const& __cordl_internal_get__metadataExpanded() const;

constexpr bool& __cordl_internal_get__metadataExpanded() ;

constexpr ::Dissonance::CommActivationMode const& __cordl_internal_get__mode() const;

constexpr ::Dissonance::CommActivationMode& __cordl_internal_get__mode() ;

constexpr bool const& __cordl_internal_get__muted() const;

constexpr bool& __cordl_internal_get__muted() ;

constexpr ::System::Nullable_1<::Dissonance::CommActivationMode> const& __cordl_internal_get__previousMode() const;

constexpr ::System::Nullable_1<::Dissonance::CommActivationMode>& __cordl_internal_get__previousMode() ;

constexpr ::Dissonance::ChannelPriority const& __cordl_internal_get__prority() const;

constexpr ::Dissonance::ChannelPriority& __cordl_internal_get__prority() ;

constexpr bool const& __cordl_internal_get__roomExpanded() const;

constexpr bool& __cordl_internal_get__roomExpanded() ;

constexpr bool const& __cordl_internal_get__tokensExpanded() const;

constexpr bool& __cordl_internal_get__tokensExpanded() ;

constexpr void __cordl_internal_set__activationModeExpanded(bool  value) ;

constexpr void __cordl_internal_set__inputName(::StringW  value) ;

constexpr void __cordl_internal_set__isVadSpeaking(bool  value) ;

constexpr void __cordl_internal_set__metadataExpanded(bool  value) ;

constexpr void __cordl_internal_set__mode(::Dissonance::CommActivationMode  value) ;

constexpr void __cordl_internal_set__muted(bool  value) ;

constexpr void __cordl_internal_set__previousMode(::System::Nullable_1<::Dissonance::CommActivationMode>  value) ;

constexpr void __cordl_internal_set__prority(::Dissonance::ChannelPriority  value) ;

constexpr void __cordl_internal_set__roomExpanded(bool  value) ;

constexpr void __cordl_internal_set__tokensExpanded(bool  value) ;

/// @brief Method .ctor, addr 0x1805d46d0, size 0x20, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_CanTrigger, addr 0x1805d46f0, size 0x20, virtual true, abstract: false, final false
inline bool get_CanTrigger() ;

/// @brief Method get_InputName, addr 0x1802e5800, size 0x10, virtual true, abstract: false, final true
inline ::StringW get_InputName() ;

/// @brief Method get_IsMuted, addr 0x180430b00, size 0x10, virtual true, abstract: false, final true
inline bool get_IsMuted() ;

/// @brief Method get_IsTransmitting, addr 0x1805d4710, size 0x20, virtual true, abstract: false, final true
inline bool get_IsTransmitting() ;

/// @brief Method get_Mode, addr 0x1805d4730, size 0x10, virtual true, abstract: false, final true
inline ::Dissonance::CommActivationMode get_Mode() ;

/// @brief Method get_Priority, addr 0x1805d4740, size 0x10, virtual true, abstract: false, final true
inline ::Dissonance::ChannelPriority get_Priority() ;

/// @brief Convert to "::Dissonance::IVoiceBroadcastTrigger"
constexpr ::Dissonance::IVoiceBroadcastTrigger* i___Dissonance__IVoiceBroadcastTrigger() noexcept;

/// @brief Convert to "::Dissonance::VAD::IVoiceActivationListener"
constexpr ::Dissonance::VAD::IVoiceActivationListener* i___Dissonance__VAD__IVoiceActivationListener() noexcept;

/// @brief Method set_InputName, addr 0x180374490, size 0x20, virtual true, abstract: false, final true
inline void set_InputName(::StringW  value) ;

/// @brief Method set_IsMuted, addr 0x1805d4750, size 0x40, virtual true, abstract: false, final true
inline void set_IsMuted(bool  value) ;

/// @brief Method set_Mode, addr 0x1805d4790, size 0x10, virtual true, abstract: false, final true
inline void set_Mode(::Dissonance::CommActivationMode  value) ;

/// @brief Method set_Priority, addr 0x1805d47a0, size 0x10, virtual true, abstract: false, final true
inline void set_Priority(::Dissonance::ChannelPriority  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr VoiceProximityBroadcastTrigger() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "VoiceProximityBroadcastTrigger", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
VoiceProximityBroadcastTrigger(VoiceProximityBroadcastTrigger && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "VoiceProximityBroadcastTrigger", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
VoiceProximityBroadcastTrigger(VoiceProximityBroadcastTrigger const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16837};

/// @brief Field _roomExpanded, offset: 0x78, size: 0x1, def value: None
 bool  ____roomExpanded;

/// @brief Field _metadataExpanded, offset: 0x79, size: 0x1, def value: None
 bool  ____metadataExpanded;

/// @brief Field _activationModeExpanded, offset: 0x7a, size: 0x1, def value: None
 bool  ____activationModeExpanded;

/// @brief Field _tokensExpanded, offset: 0x7b, size: 0x1, def value: None
 bool  ____tokensExpanded;

/// @brief Field _isVadSpeaking, offset: 0x7c, size: 0x1, def value: None
 bool  ____isVadSpeaking;

/// @brief Field _previousMode, offset: 0x80, size: 0x8, def value: None
 ::System::Nullable_1<::Dissonance::CommActivationMode>  ____previousMode;

/// @brief Field _inputName, offset: 0x88, size: 0x8, def value: None
 ::StringW  ____inputName;

/// @brief Field _mode, offset: 0x90, size: 0x4, def value: None
 ::Dissonance::CommActivationMode  ____mode;

/// @brief Field _muted, offset: 0x94, size: 0x1, def value: None
 bool  ____muted;

/// @brief Field _prority, offset: 0x98, size: 0x4, def value: None
 ::Dissonance::ChannelPriority  ____prority;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Dissonance::VoiceProximityBroadcastTrigger, ____roomExpanded) == 0x78, "Offset mismatch!");

static_assert(offsetof(::Dissonance::VoiceProximityBroadcastTrigger, ____metadataExpanded) == 0x79, "Offset mismatch!");

static_assert(offsetof(::Dissonance::VoiceProximityBroadcastTrigger, ____activationModeExpanded) == 0x7a, "Offset mismatch!");

static_assert(offsetof(::Dissonance::VoiceProximityBroadcastTrigger, ____tokensExpanded) == 0x7b, "Offset mismatch!");

static_assert(offsetof(::Dissonance::VoiceProximityBroadcastTrigger, ____isVadSpeaking) == 0x7c, "Offset mismatch!");

static_assert(offsetof(::Dissonance::VoiceProximityBroadcastTrigger, ____previousMode) == 0x80, "Offset mismatch!");

static_assert(offsetof(::Dissonance::VoiceProximityBroadcastTrigger, ____inputName) == 0x88, "Offset mismatch!");

static_assert(offsetof(::Dissonance::VoiceProximityBroadcastTrigger, ____mode) == 0x90, "Offset mismatch!");

static_assert(offsetof(::Dissonance::VoiceProximityBroadcastTrigger, ____muted) == 0x94, "Offset mismatch!");

static_assert(offsetof(::Dissonance::VoiceProximityBroadcastTrigger, ____prority) == 0x98, "Offset mismatch!");

static_assert(sizeof(::Dissonance::VoiceProximityBroadcastTrigger) == 0xa0, "Size mismatch!");

} // namespace end def Dissonance

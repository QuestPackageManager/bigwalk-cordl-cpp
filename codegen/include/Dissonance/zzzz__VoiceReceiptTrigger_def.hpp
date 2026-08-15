#pragma once
// IWYU pragma private; include "Dissonance/VoiceReceiptTrigger.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Dissonance/zzzz__BaseCommsTrigger_def.hpp"
#include "Dissonance/zzzz__RoomMembership_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(VoiceReceiptTrigger)
namespace Dissonance {
class IVoiceReceiptTrigger;
}
// Forward declare root types
namespace Dissonance {
class VoiceReceiptTrigger;
}
// Write type traits
MARK_REF_T(::Dissonance::VoiceReceiptTrigger*);
DEFINE_IL2CPP_CLASS(::Dissonance::VoiceReceiptTrigger*, "Dissonance", "VoiceReceiptTrigger");
// Dependencies Dissonance.BaseCommsTrigger, Dissonance.RoomMembership, System.Nullable`1<T>
namespace Dissonance {
// Is value type: false
// CS Name: Dissonance.VoiceReceiptTrigger
class CORDL_TYPE VoiceReceiptTrigger : public ::Dissonance::BaseCommsTrigger {
public:
// Declarations
 __declspec(property(get=get_CanTrigger)) bool  CanTrigger;

 __declspec(property(get=get_RoomName, put=set_RoomName)) ::StringW  RoomName;

 __declspec(property(get=get_UseColliderTrigger, put=set_UseColliderTrigger)) bool  UseColliderTrigger;

/// @brief Field _colliderExpanded, offset 0x52, size 0x1 
 __declspec(property(get=__cordl_internal_get__colliderExpanded, put=__cordl_internal_set__colliderExpanded)) bool  _colliderExpanded;

/// @brief Field _membership, offset 0x58, size 0x20 
 __declspec(property(get=__cordl_internal_get__membership, put=__cordl_internal_set__membership)) ::System::Nullable_1<::Dissonance::RoomMembership>  _membership;

/// @brief Field _roomExpanded, offset 0x50, size 0x1 
 __declspec(property(get=__cordl_internal_get__roomExpanded, put=__cordl_internal_set__roomExpanded)) bool  _roomExpanded;

/// @brief Field _roomName, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get__roomName, put=__cordl_internal_set__roomName)) ::StringW  _roomName;

/// @brief Field _scriptDeactivated, offset 0x80, size 0x1 
 __declspec(property(get=__cordl_internal_get__scriptDeactivated, put=__cordl_internal_set__scriptDeactivated)) bool  _scriptDeactivated;

/// @brief Field _tokensExpanded, offset 0x51, size 0x1 
 __declspec(property(get=__cordl_internal_get__tokensExpanded, put=__cordl_internal_set__tokensExpanded)) bool  _tokensExpanded;

/// @brief Field _useTrigger, offset 0x81, size 0x1 
 __declspec(property(get=__cordl_internal_get__useTrigger, put=__cordl_internal_set__useTrigger)) bool  _useTrigger;

/// @brief Convert operator to "::Dissonance::IVoiceReceiptTrigger"
constexpr operator  ::Dissonance::IVoiceReceiptTrigger*() noexcept;

/// @brief Method JoinRoom, addr 0x1805d4810, size 0x100, virtual false, abstract: false, final false
inline void JoinRoom() ;

/// @brief Method LeaveRoom, addr 0x1805d4910, size 0x80, virtual false, abstract: false, final false
inline void LeaveRoom() ;

static inline ::Dissonance::VoiceReceiptTrigger* New_ctor() ;

/// @brief Method OnDisable, addr 0x1805d4990, size 0x90, virtual true, abstract: false, final false
inline void OnDisable() ;

/// @brief Method StartListening, addr 0x1805d4a20, size 0x10, virtual false, abstract: false, final false
inline void StartListening() ;

/// @brief Method StopListening, addr 0x1804353c0, size 0x10, virtual false, abstract: false, final false
inline void StopListening() ;

/// @brief Method Update, addr 0x1805d4a30, size 0x1a0, virtual true, abstract: false, final false
inline void Update() ;

constexpr bool const& __cordl_internal_get__colliderExpanded() const;

constexpr bool& __cordl_internal_get__colliderExpanded() ;

constexpr ::System::Nullable_1<::Dissonance::RoomMembership> const& __cordl_internal_get__membership() const;

constexpr ::System::Nullable_1<::Dissonance::RoomMembership>& __cordl_internal_get__membership() ;

constexpr bool const& __cordl_internal_get__roomExpanded() const;

constexpr bool& __cordl_internal_get__roomExpanded() ;

constexpr ::StringW const& __cordl_internal_get__roomName() const;

constexpr ::StringW& __cordl_internal_get__roomName() ;

constexpr bool const& __cordl_internal_get__scriptDeactivated() const;

constexpr bool& __cordl_internal_get__scriptDeactivated() ;

constexpr bool const& __cordl_internal_get__tokensExpanded() const;

constexpr bool& __cordl_internal_get__tokensExpanded() ;

constexpr bool const& __cordl_internal_get__useTrigger() const;

constexpr bool& __cordl_internal_get__useTrigger() ;

constexpr void __cordl_internal_set__colliderExpanded(bool  value) ;

constexpr void __cordl_internal_set__membership(::System::Nullable_1<::Dissonance::RoomMembership>  value) ;

constexpr void __cordl_internal_set__roomExpanded(bool  value) ;

constexpr void __cordl_internal_set__roomName(::StringW  value) ;

constexpr void __cordl_internal_set__scriptDeactivated(bool  value) ;

constexpr void __cordl_internal_set__tokensExpanded(bool  value) ;

constexpr void __cordl_internal_set__useTrigger(bool  value) ;

/// @brief Method .ctor, addr 0x1805d4bd0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_CanTrigger, addr 0x1805d4be0, size 0x50, virtual true, abstract: false, final false
inline bool get_CanTrigger() ;

/// @brief Method get_RoomName, addr 0x1803a74e0, size 0x10, virtual true, abstract: false, final true
inline ::StringW get_RoomName() ;

/// @brief Method get_UseColliderTrigger, addr 0x1802e56b0, size 0x10, virtual true, abstract: false, final false
inline bool get_UseColliderTrigger() ;

/// @brief Convert to "::Dissonance::IVoiceReceiptTrigger"
constexpr ::Dissonance::IVoiceReceiptTrigger* i___Dissonance__IVoiceReceiptTrigger() noexcept;

/// @brief Method set_RoomName, addr 0x1805d4c30, size 0x50, virtual true, abstract: false, final true
inline void set_RoomName(::StringW  value) ;

/// @brief Method set_UseColliderTrigger, addr 0x1805d4c80, size 0x10, virtual true, abstract: false, final false
inline void set_UseColliderTrigger(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr VoiceReceiptTrigger() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "VoiceReceiptTrigger", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
VoiceReceiptTrigger(VoiceReceiptTrigger && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "VoiceReceiptTrigger", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
VoiceReceiptTrigger(VoiceReceiptTrigger const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16840};

/// @brief Field _roomExpanded, offset: 0x50, size: 0x1, def value: None
 bool  ____roomExpanded;

/// @brief Field _tokensExpanded, offset: 0x51, size: 0x1, def value: None
 bool  ____tokensExpanded;

/// @brief Field _colliderExpanded, offset: 0x52, size: 0x1, def value: None
 bool  ____colliderExpanded;

/// @brief Field _membership, offset: 0x58, size: 0x20, def value: None
 ::System::Nullable_1<::Dissonance::RoomMembership>  ____membership;

/// @brief Field _roomName, offset: 0x78, size: 0x8, def value: None
 ::StringW  ____roomName;

/// @brief Field _scriptDeactivated, offset: 0x80, size: 0x1, def value: None
 bool  ____scriptDeactivated;

/// @brief Field _useTrigger, offset: 0x81, size: 0x1, def value: None
 bool  ____useTrigger;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Dissonance::VoiceReceiptTrigger, ____roomExpanded) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Dissonance::VoiceReceiptTrigger, ____tokensExpanded) == 0x51, "Offset mismatch!");

static_assert(offsetof(::Dissonance::VoiceReceiptTrigger, ____colliderExpanded) == 0x52, "Offset mismatch!");

static_assert(offsetof(::Dissonance::VoiceReceiptTrigger, ____membership) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Dissonance::VoiceReceiptTrigger, ____roomName) == 0x78, "Offset mismatch!");

static_assert(offsetof(::Dissonance::VoiceReceiptTrigger, ____scriptDeactivated) == 0x80, "Offset mismatch!");

static_assert(offsetof(::Dissonance::VoiceReceiptTrigger, ____useTrigger) == 0x81, "Offset mismatch!");

static_assert(sizeof(::Dissonance::VoiceReceiptTrigger) == 0x88, "Size mismatch!");

} // namespace end def Dissonance

#pragma once
// IWYU pragma private; include "GlobalNamespace/BadConnectionWarning.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Nullable_1_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(BadConnectionWarning)
namespace GlobalNamespace {
class LocalizedText;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
class BadConnectionWarning;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::BadConnectionWarning*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::BadConnectionWarning*, "", "BadConnectionWarning");
// Dependencies System.Nullable`1<T>, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: BadConnectionWarning
class CORDL_TYPE BadConnectionWarning : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field _hasBadConnection, offset 0x68, size 0x1 
 __declspec(property(get=__cordl_internal_get__hasBadConnection, put=__cordl_internal_set__hasBadConnection)) bool  _hasBadConnection;

 __declspec(property(get=get_hasBadConnection, put=set_hasBadConnection)) bool  hasBadConnection;

/// @brief Field inLobbySince, offset 0x5c, size 0x4 
 __declspec(property(get=__cordl_internal_get_inLobbySince, put=__cordl_internal_set_inLobbySince)) float_t  inLobbySince;

/// @brief Field isInLobby, offset 0x58, size 0x1 
 __declspec(property(get=__cordl_internal_get_isInLobby, put=__cordl_internal_set_isInLobby)) bool  isInLobby;

/// @brief Field lastLobbyCheck, offset 0x54, size 0x4 
 __declspec(property(get=__cordl_internal_get_lastLobbyCheck, put=__cordl_internal_set_lastLobbyCheck)) float_t  lastLobbyCheck;

/// @brief Field locKeyOffline, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_locKeyOffline, put=__cordl_internal_set_locKeyOffline)) ::StringW  locKeyOffline;

/// @brief Field locKeyReconnection, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_locKeyReconnection, put=__cordl_internal_set_locKeyReconnection)) ::StringW  locKeyReconnection;

/// @brief Field locKeySlow, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_locKeySlow, put=__cordl_internal_set_locKeySlow)) ::StringW  locKeySlow;

/// @brief Field pauseUntilTime, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_pauseUntilTime, put=__cordl_internal_set_pauseUntilTime)) ::System::Nullable_1<float_t>  pauseUntilTime;

/// @brief Field startPauseDuration, offset 0x50, size 0x4 
 __declspec(property(get=__cordl_internal_get_startPauseDuration, put=__cordl_internal_set_startPauseDuration)) float_t  startPauseDuration;

/// @brief Field threshold, offset 0x4c, size 0x4 
 __declspec(property(get=__cordl_internal_get_threshold, put=__cordl_internal_set_threshold)) float_t  threshold;

/// @brief Field timeoutWarningThreshold, offset 0x48, size 0x4 
 __declspec(property(get=__cordl_internal_get_timeoutWarningThreshold, put=__cordl_internal_set_timeoutWarningThreshold)) float_t  timeoutWarningThreshold;

/// @brief Field warningDisplayObject, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_warningDisplayObject, put=__cordl_internal_set_warningDisplayObject)) ::UnityW<::UnityEngine::Transform>  warningDisplayObject;

/// @brief Field warningText, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_warningText, put=__cordl_internal_set_warningText)) ::UnityW<::GlobalNamespace::LocalizedText>  warningText;

/// @brief Method CanReachInternet, addr 0x18041d4f0, size 0x30, virtual false, abstract: false, final false
inline bool CanReachInternet() ;

/// @brief Method CheckForIsEOSLobby, addr 0x18041d520, size 0x80, virtual false, abstract: false, final false
inline bool CheckForIsEOSLobby() ;

static inline ::GlobalNamespace::BadConnectionWarning* New_ctor() ;

/// @brief Method Start, addr 0x18041d5a0, size 0x40, virtual false, abstract: false, final false
inline void Start() ;

/// @brief Method Update, addr 0x18041d5e0, size 0x2d0, virtual false, abstract: false, final false
inline void Update() ;

constexpr bool const& __cordl_internal_get__hasBadConnection() const;

constexpr bool& __cordl_internal_get__hasBadConnection() ;

constexpr float_t const& __cordl_internal_get_inLobbySince() const;

constexpr float_t& __cordl_internal_get_inLobbySince() ;

constexpr bool const& __cordl_internal_get_isInLobby() const;

constexpr bool& __cordl_internal_get_isInLobby() ;

constexpr float_t const& __cordl_internal_get_lastLobbyCheck() const;

constexpr float_t& __cordl_internal_get_lastLobbyCheck() ;

constexpr ::StringW const& __cordl_internal_get_locKeyOffline() const;

constexpr ::StringW& __cordl_internal_get_locKeyOffline() ;

constexpr ::StringW const& __cordl_internal_get_locKeyReconnection() const;

constexpr ::StringW& __cordl_internal_get_locKeyReconnection() ;

constexpr ::StringW const& __cordl_internal_get_locKeySlow() const;

constexpr ::StringW& __cordl_internal_get_locKeySlow() ;

constexpr ::System::Nullable_1<float_t> const& __cordl_internal_get_pauseUntilTime() const;

constexpr ::System::Nullable_1<float_t>& __cordl_internal_get_pauseUntilTime() ;

constexpr float_t const& __cordl_internal_get_startPauseDuration() const;

constexpr float_t& __cordl_internal_get_startPauseDuration() ;

constexpr float_t const& __cordl_internal_get_threshold() const;

constexpr float_t& __cordl_internal_get_threshold() ;

constexpr float_t const& __cordl_internal_get_timeoutWarningThreshold() const;

constexpr float_t& __cordl_internal_get_timeoutWarningThreshold() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_warningDisplayObject() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_warningDisplayObject() ;

constexpr ::UnityW<::GlobalNamespace::LocalizedText> const& __cordl_internal_get_warningText() const;

constexpr ::UnityW<::GlobalNamespace::LocalizedText>& __cordl_internal_get_warningText() ;

constexpr void __cordl_internal_set__hasBadConnection(bool  value) ;

constexpr void __cordl_internal_set_inLobbySince(float_t  value) ;

constexpr void __cordl_internal_set_isInLobby(bool  value) ;

constexpr void __cordl_internal_set_lastLobbyCheck(float_t  value) ;

constexpr void __cordl_internal_set_locKeyOffline(::StringW  value) ;

constexpr void __cordl_internal_set_locKeyReconnection(::StringW  value) ;

constexpr void __cordl_internal_set_locKeySlow(::StringW  value) ;

constexpr void __cordl_internal_set_pauseUntilTime(::System::Nullable_1<float_t>  value) ;

constexpr void __cordl_internal_set_startPauseDuration(float_t  value) ;

constexpr void __cordl_internal_set_threshold(float_t  value) ;

constexpr void __cordl_internal_set_timeoutWarningThreshold(float_t  value) ;

constexpr void __cordl_internal_set_warningDisplayObject(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_warningText(::UnityW<::GlobalNamespace::LocalizedText>  value) ;

/// @brief Method .ctor, addr 0x18041d8b0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_hasBadConnection, addr 0x180347a60, size 0xe0, virtual false, abstract: false, final false
inline bool get_hasBadConnection() ;

/// @brief Method set_hasBadConnection, addr 0x18041d8c0, size 0x50, virtual false, abstract: false, final false
inline void set_hasBadConnection(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BadConnectionWarning() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BadConnectionWarning", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
BadConnectionWarning(BadConnectionWarning && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BadConnectionWarning", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
BadConnectionWarning(BadConnectionWarning const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5247};

/// @brief Field warningDisplayObject, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___warningDisplayObject;

/// @brief Field warningText, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::LocalizedText>  ___warningText;

/// @brief Field locKeyOffline, offset: 0x30, size: 0x8, def value: None
 ::StringW  ___locKeyOffline;

/// @brief Field locKeySlow, offset: 0x38, size: 0x8, def value: None
 ::StringW  ___locKeySlow;

/// @brief Field locKeyReconnection, offset: 0x40, size: 0x8, def value: None
 ::StringW  ___locKeyReconnection;

/// @brief Field timeoutWarningThreshold, offset: 0x48, size: 0x4, def value: None
 float_t  ___timeoutWarningThreshold;

/// @brief Field threshold, offset: 0x4c, size: 0x4, def value: None
 float_t  ___threshold;

/// @brief Field startPauseDuration, offset: 0x50, size: 0x4, def value: None
 float_t  ___startPauseDuration;

/// @brief Field lastLobbyCheck, offset: 0x54, size: 0x4, def value: None
 float_t  ___lastLobbyCheck;

/// @brief Field isInLobby, offset: 0x58, size: 0x1, def value: None
 bool  ___isInLobby;

/// @brief Field inLobbySince, offset: 0x5c, size: 0x4, def value: None
 float_t  ___inLobbySince;

/// @brief Field pauseUntilTime, offset: 0x60, size: 0x8, def value: None
 ::System::Nullable_1<float_t>  ___pauseUntilTime;

/// @brief Field _hasBadConnection, offset: 0x68, size: 0x1, def value: None
 bool  ____hasBadConnection;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BadConnectionWarning, ___warningDisplayObject) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BadConnectionWarning, ___warningText) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BadConnectionWarning, ___locKeyOffline) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BadConnectionWarning, ___locKeySlow) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BadConnectionWarning, ___locKeyReconnection) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BadConnectionWarning, ___timeoutWarningThreshold) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BadConnectionWarning, ___threshold) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BadConnectionWarning, ___startPauseDuration) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BadConnectionWarning, ___lastLobbyCheck) == 0x54, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BadConnectionWarning, ___isInLobby) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BadConnectionWarning, ___inLobbySince) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BadConnectionWarning, ___pauseUntilTime) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BadConnectionWarning, ____hasBadConnection) == 0x68, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::BadConnectionWarning) == 0x70, "Size mismatch!");

} // namespace end def GlobalNamespace

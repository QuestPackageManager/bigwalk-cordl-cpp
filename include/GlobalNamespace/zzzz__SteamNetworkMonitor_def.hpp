#pragma once
// IWYU pragma private; include "GlobalNamespace/SteamNetworkMonitor.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__NetworkMonitor_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(SteamNetworkMonitor)
// Forward declare root types
namespace GlobalNamespace {
class SteamNetworkMonitor;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::SteamNetworkMonitor*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::SteamNetworkMonitor*, "", "SteamNetworkMonitor");
// Dependencies NetworkMonitor
namespace GlobalNamespace {
// Is value type: false
// CS Name: SteamNetworkMonitor
class CORDL_TYPE SteamNetworkMonitor : public ::GlobalNamespace::NetworkMonitor {
public:
// Declarations
 __declspec(property(get=get_IsOnline)) bool  IsOnline;

/// @brief Field _downReported, offset 0x58, size 0x1 
 __declspec(property(get=__cordl_internal_get__downReported, put=__cordl_internal_set__downReported)) bool  _downReported;

/// @brief Field _everOnline, offset 0x59, size 0x1 
 __declspec(property(get=__cordl_internal_get__everOnline, put=__cordl_internal_set__everOnline)) bool  _everOnline;

/// @brief Field _isOnline, offset 0x5a, size 0x1 
 __declspec(property(get=__cordl_internal_get__isOnline, put=__cordl_internal_set__isOnline)) bool  _isOnline;

/// @brief Field _lastOnlineTime, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get__lastOnlineTime, put=__cordl_internal_set__lastOnlineTime)) double_t  _lastOnlineTime;

/// @brief Field _nextPoll, offset 0x48, size 0x4 
 __declspec(property(get=__cordl_internal_get__nextPoll, put=__cordl_internal_set__nextPoll)) float_t  _nextPoll;

static inline ::GlobalNamespace::SteamNetworkMonitor* New_ctor() ;

/// @brief Method OnSystemResume, addr 0x181acf180, size 0x30, virtual true, abstract: false, final false
inline void OnSystemResume() ;

/// @brief Method Update, addr 0x181acf1b0, size 0x160, virtual false, abstract: false, final false
inline void Update() ;

constexpr bool const& __cordl_internal_get__downReported() const;

constexpr bool& __cordl_internal_get__downReported() ;

constexpr bool const& __cordl_internal_get__everOnline() const;

constexpr bool& __cordl_internal_get__everOnline() ;

constexpr bool const& __cordl_internal_get__isOnline() const;

constexpr bool& __cordl_internal_get__isOnline() ;

constexpr double_t const& __cordl_internal_get__lastOnlineTime() const;

constexpr double_t& __cordl_internal_get__lastOnlineTime() ;

constexpr float_t const& __cordl_internal_get__nextPoll() const;

constexpr float_t& __cordl_internal_get__nextPoll() ;

constexpr void __cordl_internal_set__downReported(bool  value) ;

constexpr void __cordl_internal_set__everOnline(bool  value) ;

constexpr void __cordl_internal_set__isOnline(bool  value) ;

constexpr void __cordl_internal_set__lastOnlineTime(double_t  value) ;

constexpr void __cordl_internal_set__nextPoll(float_t  value) ;

/// @brief Method .ctor, addr 0x181acf310, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_IsOnline, addr 0x181acf320, size 0x10, virtual true, abstract: false, final false
inline bool get_IsOnline() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SteamNetworkMonitor() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SteamNetworkMonitor", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SteamNetworkMonitor(SteamNetworkMonitor && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SteamNetworkMonitor", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SteamNetworkMonitor(SteamNetworkMonitor const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21590};

/// @brief Field _nextPoll, offset: 0x48, size: 0x4, def value: None
 float_t  ____nextPoll;

/// @brief Field _lastOnlineTime, offset: 0x50, size: 0x8, def value: None
 double_t  ____lastOnlineTime;

/// @brief Field _downReported, offset: 0x58, size: 0x1, def value: None
 bool  ____downReported;

/// @brief Field _everOnline, offset: 0x59, size: 0x1, def value: None
 bool  ____everOnline;

/// @brief Field _isOnline, offset: 0x5a, size: 0x1, def value: None
 bool  ____isOnline;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SteamNetworkMonitor, ____nextPoll) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SteamNetworkMonitor, ____lastOnlineTime) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SteamNetworkMonitor, ____downReported) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SteamNetworkMonitor, ____everOnline) == 0x59, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SteamNetworkMonitor, ____isOnline) == 0x5a, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::SteamNetworkMonitor) == 0x60, "Size mismatch!");

} // namespace end def GlobalNamespace

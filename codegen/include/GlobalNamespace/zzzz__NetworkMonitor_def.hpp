#pragma once
// IWYU pragma private; include "GlobalNamespace/NetworkMonitor.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Shipmate/Utils/zzzz__SingletonBehaviour_1_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(NetworkMonitor)
namespace System {
template<typename T>
class Action_1;
}
// Forward declare root types
namespace GlobalNamespace {
class NetworkMonitor;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::NetworkMonitor*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::NetworkMonitor*, "", "NetworkMonitor");
// Dependencies Shipmate.Utils.SingletonBehaviour`1<T>
namespace GlobalNamespace {
// Is value type: false
// CS Name: NetworkMonitor
class CORDL_TYPE NetworkMonitor : public ::Shipmate::Utils::SingletonBehaviour_1<::UnityW<::GlobalNamespace::NetworkMonitor>> {
public:
// Declarations
 __declspec(property(get=get_IsOnline)) bool  IsOnline;

/// @brief Field NetworkDown, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_NetworkDown, put=__cordl_internal_set_NetworkDown)) ::System::Action_1<double_t>*  NetworkDown;

/// @brief Field NetworkRestored, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_NetworkRestored, put=__cordl_internal_set_NetworkRestored)) ::System::Action_1<double_t>*  NetworkRestored;

/// @brief Field debounceSeconds, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_debounceSeconds, put=__cordl_internal_set_debounceSeconds)) double_t  debounceSeconds;

/// @brief Field offlinePollInterval, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_offlinePollInterval, put=__cordl_internal_set_offlinePollInterval)) float_t  offlinePollInterval;

/// @brief Field pollInterval, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_pollInterval, put=__cordl_internal_set_pollInterval)) float_t  pollInterval;

/// @brief Field reacquireBackoff, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get_reacquireBackoff, put=__cordl_internal_set_reacquireBackoff)) float_t  reacquireBackoff;

/// @brief Method InvokeNetworkDown, addr 0x181ac69f0, size 0x20, virtual false, abstract: false, final false
inline void InvokeNetworkDown(double_t  seconds) ;

/// @brief Method InvokeNetworkRestored, addr 0x180f0f5f0, size 0x140, virtual false, abstract: false, final false
inline void InvokeNetworkRestored(double_t  seconds) ;

static inline ::GlobalNamespace::NetworkMonitor* New_ctor() ;

/// @brief Method OnSystemResume, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void OnSystemResume() ;

constexpr ::System::Action_1<double_t>* const& __cordl_internal_get_NetworkDown() const;

constexpr ::System::Action_1<double_t>*& __cordl_internal_get_NetworkDown() ;

constexpr ::System::Action_1<double_t>* const& __cordl_internal_get_NetworkRestored() const;

constexpr ::System::Action_1<double_t>*& __cordl_internal_get_NetworkRestored() ;

constexpr double_t const& __cordl_internal_get_debounceSeconds() const;

constexpr double_t& __cordl_internal_get_debounceSeconds() ;

constexpr float_t const& __cordl_internal_get_offlinePollInterval() const;

constexpr float_t& __cordl_internal_get_offlinePollInterval() ;

constexpr float_t const& __cordl_internal_get_pollInterval() const;

constexpr float_t& __cordl_internal_get_pollInterval() ;

constexpr float_t const& __cordl_internal_get_reacquireBackoff() const;

constexpr float_t& __cordl_internal_get_reacquireBackoff() ;

constexpr void __cordl_internal_set_NetworkDown(::System::Action_1<double_t>*  value) ;

constexpr void __cordl_internal_set_NetworkRestored(::System::Action_1<double_t>*  value) ;

constexpr void __cordl_internal_set_debounceSeconds(double_t  value) ;

constexpr void __cordl_internal_set_offlinePollInterval(float_t  value) ;

constexpr void __cordl_internal_set_pollInterval(float_t  value) ;

constexpr void __cordl_internal_set_reacquireBackoff(float_t  value) ;

/// @brief Method .ctor, addr 0x181ac6a10, size 0x30, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method add_NetworkDown, addr 0x181ac6a40, size 0x90, virtual false, abstract: false, final false
inline void add_NetworkDown(::System::Action_1<double_t>*  value) ;

/// @brief Method add_NetworkRestored, addr 0x181ac6ad0, size 0x90, virtual false, abstract: false, final false
inline void add_NetworkRestored(::System::Action_1<double_t>*  value) ;

/// @brief Method get_IsOnline, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline bool get_IsOnline() ;

/// @brief Method remove_NetworkDown, addr 0x181ac6b60, size 0x90, virtual false, abstract: false, final false
inline void remove_NetworkDown(::System::Action_1<double_t>*  value) ;

/// @brief Method remove_NetworkRestored, addr 0x181ac6bf0, size 0x90, virtual false, abstract: false, final false
inline void remove_NetworkRestored(::System::Action_1<double_t>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NetworkMonitor() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NetworkMonitor", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
NetworkMonitor(NetworkMonitor && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NetworkMonitor", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
NetworkMonitor(NetworkMonitor const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20591};

/// @brief Field debounceSeconds, offset: 0x20, size: 0x8, def value: None
 double_t  ___debounceSeconds;

/// @brief Field pollInterval, offset: 0x28, size: 0x4, def value: None
 float_t  ___pollInterval;

/// @brief Field reacquireBackoff, offset: 0x2c, size: 0x4, def value: None
 float_t  ___reacquireBackoff;

/// @brief Field offlinePollInterval, offset: 0x30, size: 0x4, def value: None
 float_t  ___offlinePollInterval;

/// @brief Field NetworkDown, offset: 0x38, size: 0x8, def value: None
 ::System::Action_1<double_t>*  ___NetworkDown;

/// @brief Field NetworkRestored, offset: 0x40, size: 0x8, def value: None
 ::System::Action_1<double_t>*  ___NetworkRestored;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::NetworkMonitor, ___debounceSeconds) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NetworkMonitor, ___pollInterval) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NetworkMonitor, ___reacquireBackoff) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NetworkMonitor, ___offlinePollInterval) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NetworkMonitor, ___NetworkDown) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NetworkMonitor, ___NetworkRestored) == 0x40, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::NetworkMonitor) == 0x48, "Size mismatch!");

} // namespace end def GlobalNamespace

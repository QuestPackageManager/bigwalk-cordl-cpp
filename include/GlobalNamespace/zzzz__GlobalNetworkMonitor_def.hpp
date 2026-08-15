#pragma once
// IWYU pragma private; include "GlobalNamespace/GlobalNetworkMonitor.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(GlobalNetworkMonitor)
namespace GlobalNamespace {
class NetworkMonitor;
}
namespace System {
template<typename T>
class Action_1;
}
// Forward declare root types
namespace GlobalNamespace {
class GlobalNetworkMonitor;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::GlobalNetworkMonitor*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GlobalNetworkMonitor*, "", "GlobalNetworkMonitor");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: GlobalNetworkMonitor
class CORDL_TYPE GlobalNetworkMonitor : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
 __declspec(property(get=get_IsOnline)) bool  IsOnline;

/// @brief Field NetworkDown, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_NetworkDown, put=__cordl_internal_set_NetworkDown)) ::System::Action_1<double_t>*  NetworkDown;

/// @brief Field NetworkRestored, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_NetworkRestored, put=__cordl_internal_set_NetworkRestored)) ::System::Action_1<double_t>*  NetworkRestored;

/// @brief Field <instance>k__BackingField, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__instance_k__BackingField, put=setStaticF__instance_k__BackingField)) ::UnityW<::GlobalNamespace::GlobalNetworkMonitor>  _instance_k__BackingField;

/// @brief Field networkMonitor, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_networkMonitor, put=__cordl_internal_set_networkMonitor)) ::UnityW<::GlobalNamespace::NetworkMonitor>  networkMonitor;

/// @brief Method Awake, addr 0x181acb790, size 0x130, virtual false, abstract: false, final false
inline void Awake() ;

static inline ::GlobalNamespace::GlobalNetworkMonitor* New_ctor() ;

/// @brief Method OnNetworkDown, addr 0x181acb8c0, size 0x20, virtual false, abstract: false, final false
inline void OnNetworkDown(double_t  downtime) ;

/// @brief Method OnNetworkRestored, addr 0x181acb8e0, size 0x20, virtual false, abstract: false, final false
inline void OnNetworkRestored(double_t  downtime) ;

/// @brief Method RegisterIntermediateNetworkMonitor, addr 0x181acb900, size 0xa0, virtual false, abstract: false, final false
inline void RegisterIntermediateNetworkMonitor() ;

constexpr ::System::Action_1<double_t>* const& __cordl_internal_get_NetworkDown() const;

constexpr ::System::Action_1<double_t>*& __cordl_internal_get_NetworkDown() ;

constexpr ::System::Action_1<double_t>* const& __cordl_internal_get_NetworkRestored() const;

constexpr ::System::Action_1<double_t>*& __cordl_internal_get_NetworkRestored() ;

constexpr ::UnityW<::GlobalNamespace::NetworkMonitor> const& __cordl_internal_get_networkMonitor() const;

constexpr ::UnityW<::GlobalNamespace::NetworkMonitor>& __cordl_internal_get_networkMonitor() ;

constexpr void __cordl_internal_set_NetworkDown(::System::Action_1<double_t>*  value) ;

constexpr void __cordl_internal_set_NetworkRestored(::System::Action_1<double_t>*  value) ;

constexpr void __cordl_internal_set_networkMonitor(::UnityW<::GlobalNamespace::NetworkMonitor>  value) ;

/// @brief Method .ctor, addr 0x1802dd7c0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method add_NetworkDown, addr 0x181acb9a0, size 0x90, virtual false, abstract: false, final false
inline void add_NetworkDown(::System::Action_1<double_t>*  value) ;

/// @brief Method add_NetworkRestored, addr 0x181acba30, size 0x90, virtual false, abstract: false, final false
inline void add_NetworkRestored(::System::Action_1<double_t>*  value) ;

static inline ::UnityW<::GlobalNamespace::GlobalNetworkMonitor> getStaticF__instance_k__BackingField() ;

/// @brief Method get_IsOnline, addr 0x181acbac0, size 0x50, virtual false, abstract: false, final false
inline bool get_IsOnline() ;

/// @brief Method get_instance, addr 0x181acbb10, size 0x20, virtual false, abstract: false, final false
static inline ::UnityW<::GlobalNamespace::GlobalNetworkMonitor> get_instance() ;

/// @brief Method remove_NetworkDown, addr 0x181acbb30, size 0x90, virtual false, abstract: false, final false
inline void remove_NetworkDown(::System::Action_1<double_t>*  value) ;

/// @brief Method remove_NetworkRestored, addr 0x181acbbc0, size 0x90, virtual false, abstract: false, final false
inline void remove_NetworkRestored(::System::Action_1<double_t>*  value) ;

static inline void setStaticF__instance_k__BackingField(::UnityW<::GlobalNamespace::GlobalNetworkMonitor>  value) ;

/// @brief Method set_instance, addr 0x181acbc50, size 0x30, virtual false, abstract: false, final false
static inline void set_instance(::GlobalNamespace::GlobalNetworkMonitor*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GlobalNetworkMonitor() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GlobalNetworkMonitor", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
GlobalNetworkMonitor(GlobalNetworkMonitor && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNetworkMonitor", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
GlobalNetworkMonitor(GlobalNetworkMonitor const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21051};

/// @brief Field networkMonitor, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::NetworkMonitor>  ___networkMonitor;

/// @brief Field NetworkDown, offset: 0x28, size: 0x8, def value: None
 ::System::Action_1<double_t>*  ___NetworkDown;

/// @brief Field NetworkRestored, offset: 0x30, size: 0x8, def value: None
 ::System::Action_1<double_t>*  ___NetworkRestored;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GlobalNetworkMonitor, ___networkMonitor) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GlobalNetworkMonitor, ___NetworkDown) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GlobalNetworkMonitor, ___NetworkRestored) == 0x30, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GlobalNetworkMonitor) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace

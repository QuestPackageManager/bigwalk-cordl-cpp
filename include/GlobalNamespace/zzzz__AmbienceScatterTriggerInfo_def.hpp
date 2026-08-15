#pragma once
// IWYU pragma private; include "GlobalNamespace/AmbienceScatterTriggerInfo.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__AmbienceScatterEvent_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
CORDL_MODULE_EXPORT(AmbienceScatterTriggerInfo)
namespace GlobalNamespace {
struct AmbienceScatterEvent;
}
namespace GlobalNamespace {
class AudioScatterContainer;
}
// Forward declare root types
namespace GlobalNamespace {
class AmbienceScatterTriggerInfo;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::AmbienceScatterTriggerInfo*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::AmbienceScatterTriggerInfo*, "", "AmbienceScatterTriggerInfo");
// Dependencies AmbienceScatterEvent, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: AmbienceScatterTriggerInfo
class CORDL_TYPE AmbienceScatterTriggerInfo : public ::System::Object {
public:
// Declarations
/// @brief Field Events, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_Events, put=__cordl_internal_set_Events)) ::ArrayW<::GlobalNamespace::AmbienceScatterEvent>  Events;

/// @brief Field Scatter, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_Scatter, put=__cordl_internal_set_Scatter)) ::UnityW<::GlobalNamespace::AudioScatterContainer>  Scatter;

static inline ::GlobalNamespace::AmbienceScatterTriggerInfo* New_ctor(::GlobalNamespace::AudioScatterContainer*  scatter, ::ArrayW<::GlobalNamespace::AmbienceScatterEvent>  events) ;

constexpr ::ArrayW<::GlobalNamespace::AmbienceScatterEvent> const& __cordl_internal_get_Events() const;

constexpr ::ArrayW<::GlobalNamespace::AmbienceScatterEvent>& __cordl_internal_get_Events() ;

constexpr ::UnityW<::GlobalNamespace::AudioScatterContainer> const& __cordl_internal_get_Scatter() const;

constexpr ::UnityW<::GlobalNamespace::AudioScatterContainer>& __cordl_internal_get_Scatter() ;

constexpr void __cordl_internal_set_Events(::ArrayW<::GlobalNamespace::AmbienceScatterEvent>  value) ;

constexpr void __cordl_internal_set_Scatter(::UnityW<::GlobalNamespace::AudioScatterContainer>  value) ;

/// @brief Method .ctor, addr 0x1803224a0, size 0x40, virtual false, abstract: false, final false
inline void _ctor(::GlobalNamespace::AudioScatterContainer*  scatter, ::ArrayW<::GlobalNamespace::AmbienceScatterEvent>  events) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AmbienceScatterTriggerInfo() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AmbienceScatterTriggerInfo", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AmbienceScatterTriggerInfo(AmbienceScatterTriggerInfo && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AmbienceScatterTriggerInfo", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AmbienceScatterTriggerInfo(AmbienceScatterTriggerInfo const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4795};

/// @brief Field Scatter, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::AudioScatterContainer>  ___Scatter;

/// @brief Field Events, offset: 0x18, size: 0x8, def value: None
 ::ArrayW<::GlobalNamespace::AmbienceScatterEvent>  ___Events;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::AmbienceScatterTriggerInfo, ___Scatter) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AmbienceScatterTriggerInfo, ___Events) == 0x18, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::AmbienceScatterTriggerInfo) == 0x20, "Size mismatch!");

} // namespace end def GlobalNamespace

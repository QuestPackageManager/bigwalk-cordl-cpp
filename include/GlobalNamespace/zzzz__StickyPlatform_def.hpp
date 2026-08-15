#pragma once
// IWYU pragma private; include "GlobalNamespace/StickyPlatform.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(StickyPlatform)
namespace GlobalNamespace {
class PlatformingBody;
}
namespace LobbyNetworking {
class ITicketed;
}
namespace System {
class Action;
}
// Forward declare root types
namespace GlobalNamespace {
class StickyPlatform;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::StickyPlatform*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::StickyPlatform*, "", "StickyPlatform");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: StickyPlatform
class CORDL_TYPE StickyPlatform : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field OnLocalPlayerEnter, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnLocalPlayerEnter, put=__cordl_internal_set_OnLocalPlayerEnter)) ::System::Action*  OnLocalPlayerEnter;

/// @brief Field <ticket>k__BackingField, offset 0x20, size 0x2 
 __declspec(property(get=__cordl_internal_get__ticket_k__BackingField, put=__cordl_internal_set__ticket_k__BackingField)) uint16_t  _ticket_k__BackingField;

/// @brief Field platformingBody, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_platformingBody, put=__cordl_internal_set_platformingBody)) ::UnityW<::GlobalNamespace::PlatformingBody>  platformingBody;

 __declspec(property(get=get_ticket, put=set_ticket)) uint16_t  ticket;

/// @brief Convert operator to "::LobbyNetworking::ITicketed"
constexpr operator  ::LobbyNetworking::ITicketed*() noexcept;

static inline ::GlobalNamespace::StickyPlatform* New_ctor() ;

/// @brief Method OnDisable, addr 0x180380080, size 0x10, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x180416370, size 0x10, virtual false, abstract: false, final false
inline void OnEnable() ;

constexpr ::System::Action* const& __cordl_internal_get_OnLocalPlayerEnter() const;

constexpr ::System::Action*& __cordl_internal_get_OnLocalPlayerEnter() ;

constexpr uint16_t const& __cordl_internal_get__ticket_k__BackingField() const;

constexpr uint16_t& __cordl_internal_get__ticket_k__BackingField() ;

constexpr ::UnityW<::GlobalNamespace::PlatformingBody> const& __cordl_internal_get_platformingBody() const;

constexpr ::UnityW<::GlobalNamespace::PlatformingBody>& __cordl_internal_get_platformingBody() ;

constexpr void __cordl_internal_set_OnLocalPlayerEnter(::System::Action*  value) ;

constexpr void __cordl_internal_set__ticket_k__BackingField(uint16_t  value) ;

constexpr void __cordl_internal_set_platformingBody(::UnityW<::GlobalNamespace::PlatformingBody>  value) ;

/// @brief Method .ctor, addr 0x1802dd7c0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_ticket, addr 0x180416380, size 0x10, virtual true, abstract: false, final true
inline uint16_t get_ticket() ;

/// @brief Convert to "::LobbyNetworking::ITicketed"
constexpr ::LobbyNetworking::ITicketed* i___LobbyNetworking__ITicketed() noexcept;

/// @brief Method set_ticket, addr 0x180416390, size 0x10, virtual true, abstract: false, final true
inline void set_ticket(uint16_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr StickyPlatform() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "StickyPlatform", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
StickyPlatform(StickyPlatform && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "StickyPlatform", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
StickyPlatform(StickyPlatform const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5102};

/// @brief Field <ticket>k__BackingField, offset: 0x20, size: 0x2, def value: None
 uint16_t  ____ticket_k__BackingField;

/// @brief Field platformingBody, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::PlatformingBody>  ___platformingBody;

/// @brief Field OnLocalPlayerEnter, offset: 0x30, size: 0x8, def value: None
 ::System::Action*  ___OnLocalPlayerEnter;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::StickyPlatform, ____ticket_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StickyPlatform, ___platformingBody) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StickyPlatform, ___OnLocalPlayerEnter) == 0x30, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::StickyPlatform) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace

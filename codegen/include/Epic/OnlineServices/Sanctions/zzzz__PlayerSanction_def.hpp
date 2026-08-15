#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Sanctions/PlayerSanction.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(PlayerSanction)
namespace Epic::OnlineServices {
class Utf8String;
}
// Forward declare root types
namespace Epic::OnlineServices::Sanctions {
struct PlayerSanction;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::Sanctions::PlayerSanction);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::Sanctions::PlayerSanction, "Epic.OnlineServices.Sanctions", "PlayerSanction");
// Dependencies 
namespace Epic::OnlineServices::Sanctions {
// Is value type: true
// CS Name: Epic.OnlineServices.Sanctions.PlayerSanction
struct CORDL_TYPE PlayerSanction {
public:
// Declarations
 __declspec(property(get=get_Action, put=set_Action)) ::Epic::OnlineServices::Utf8String*  Action;

 __declspec(property(get=get_ReferenceId, put=set_ReferenceId)) ::Epic::OnlineServices::Utf8String*  ReferenceId;

 __declspec(property(get=get_TimeExpires, put=set_TimeExpires)) int64_t  TimeExpires;

 __declspec(property(get=get_TimePlaced, put=set_TimePlaced)) int64_t  TimePlaced;

/// @brief Method get_Action, addr 0x1803ed930, size 0x10, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Utf8String* get_Action() ;

/// @brief Method get_ReferenceId, addr 0x1802ecc10, size 0x10, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Utf8String* get_ReferenceId() ;

/// @brief Method get_TimeExpires, addr 0x1802db4a0, size 0x10, virtual false, abstract: false, final false
inline int64_t get_TimeExpires() ;

/// @brief Method get_TimePlaced, addr 0x1803a88d0, size 0x10, virtual false, abstract: false, final false
inline int64_t get_TimePlaced() ;

/// @brief Method set_Action, addr 0x180378fe0, size 0x10, virtual false, abstract: false, final false
inline void set_Action(::Epic::OnlineServices::Utf8String*  value) ;

/// @brief Method set_ReferenceId, addr 0x1802ecc20, size 0x10, virtual false, abstract: false, final false
inline void set_ReferenceId(::Epic::OnlineServices::Utf8String*  value) ;

/// @brief Method set_TimeExpires, addr 0x1804bda40, size 0x10, virtual false, abstract: false, final false
inline void set_TimeExpires(int64_t  value) ;

/// @brief Method set_TimePlaced, addr 0x1804bd910, size 0x10, virtual false, abstract: false, final false
inline void set_TimePlaced(int64_t  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr PlayerSanction() ;

// Ctor Parameters [CppParam { name: "_TimePlaced_k__BackingField", ty: "int64_t", modifiers: "", def_value: None }, CppParam { name: "_Action_k__BackingField", ty: "::Epic::OnlineServices::Utf8String*", modifiers: "", def_value: None }, CppParam { name: "_TimeExpires_k__BackingField", ty: "int64_t", modifiers: "", def_value: None }, CppParam { name: "_ReferenceId_k__BackingField", ty: "::Epic::OnlineServices::Utf8String*", modifiers: "", def_value: None }]
constexpr PlayerSanction(int64_t  _TimePlaced_k__BackingField, ::Epic::OnlineServices::Utf8String*  _Action_k__BackingField, int64_t  _TimeExpires_k__BackingField, ::Epic::OnlineServices::Utf8String*  _ReferenceId_k__BackingField) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{7886};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

/// @brief Field <TimePlaced>k__BackingField, offset: 0x0, size: 0x8, def value: None
 int64_t  _TimePlaced_k__BackingField;

/// @brief Field <Action>k__BackingField, offset: 0x8, size: 0x8, def value: None
 ::Epic::OnlineServices::Utf8String*  _Action_k__BackingField;

/// @brief Field <TimeExpires>k__BackingField, offset: 0x10, size: 0x8, def value: None
 int64_t  _TimeExpires_k__BackingField;

/// @brief Field <ReferenceId>k__BackingField, offset: 0x18, size: 0x8, def value: None
 ::Epic::OnlineServices::Utf8String*  _ReferenceId_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::Sanctions::PlayerSanction, _TimePlaced_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Sanctions::PlayerSanction, _Action_k__BackingField) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Sanctions::PlayerSanction, _TimeExpires_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Sanctions::PlayerSanction, _ReferenceId_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::Sanctions::PlayerSanction) == 0x20, "Size mismatch!");

} // namespace end def Epic::OnlineServices::Sanctions

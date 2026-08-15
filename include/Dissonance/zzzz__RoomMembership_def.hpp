#pragma once
// IWYU pragma private; include "Dissonance/RoomMembership.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Dissonance/zzzz__RoomName_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(RoomMembership)
namespace Dissonance {
struct RoomName;
}
// Forward declare root types
namespace Dissonance {
struct RoomMembership;
}
// Write type traits
MARK_VAL_T(::Dissonance::RoomMembership);
DEFINE_IL2CPP_CLASS(::Dissonance::RoomMembership, "Dissonance", "RoomMembership");
// Dependencies Dissonance.RoomName
namespace Dissonance {
// Is value type: true
// CS Name: Dissonance.RoomMembership
struct CORDL_TYPE RoomMembership {
public:
// Declarations
 __declspec(property(get=get_RoomId)) uint16_t  RoomId;

 __declspec(property(get=get_RoomName)) ::StringW  RoomName;

/// @brief Method .ctor, addr 0x1805cfba0, size 0x160, virtual false, abstract: false, final false
inline void _ctor(::Dissonance::RoomName  name, int32_t  count) ;

/// @brief Method get_RoomId, addr 0x1804bd9a0, size 0x10, virtual false, abstract: false, final false
inline uint16_t get_RoomId() ;

/// @brief Method get_RoomName, addr 0x1803a88d0, size 0x10, virtual false, abstract: false, final false
inline ::StringW get_RoomName() ;

// Ctor Parameters []
// @brief default ctor
constexpr RoomMembership() ;

// Ctor Parameters [CppParam { name: "_name", ty: "::Dissonance::RoomName", modifiers: "", def_value: None }, CppParam { name: "_roomId", ty: "uint16_t", modifiers: "", def_value: None }, CppParam { name: "Count", ty: "int32_t", modifiers: "", def_value: None }]
constexpr RoomMembership(::Dissonance::RoomName  _name, uint16_t  _roomId, int32_t  Count) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16822};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field _name, offset: 0x0, size: 0x10, def value: None
 ::Dissonance::RoomName  _name;

/// @brief Field _roomId, offset: 0x10, size: 0x2, def value: None
 uint16_t  _roomId;

/// @brief Field Count, offset: 0x14, size: 0x4, def value: None
 int32_t  Count;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Dissonance::RoomMembership, _name) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Dissonance::RoomMembership, _roomId) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Dissonance::RoomMembership, Count) == 0x14, "Offset mismatch!");

static_assert(sizeof(::Dissonance::RoomMembership) == 0x18, "Size mismatch!");

} // namespace end def Dissonance

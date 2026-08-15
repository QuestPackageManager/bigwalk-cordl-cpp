#pragma once
// IWYU pragma private; include "Dissonance/RoomIdConversion.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(RoomIdConversion)
namespace Dissonance {
struct RoomName;
}
// Forward declare root types
namespace Dissonance {
class RoomIdConversion;
}
// Write type traits
MARK_REF_T(::Dissonance::RoomIdConversion*);
DEFINE_IL2CPP_CLASS(::Dissonance::RoomIdConversion*, "Dissonance", "RoomIdConversion");
// Dependencies System.Object
namespace Dissonance {
// Is value type: false
// CS Name: Dissonance.RoomIdConversion
class CORDL_TYPE RoomIdConversion : public ::System::Object {
public:
// Declarations
/// @brief Method Hash16, addr 0x1805cfa60, size 0x40, virtual false, abstract: false, final false
static inline uint16_t Hash16(::StringW  str) ;

/// @brief Method ToRoomId, addr 0x1805cfaa0, size 0x50, virtual false, abstract: false, final false
static inline uint16_t ToRoomId(::Dissonance::RoomName  name) ;

/// @brief Method ToRoomId, addr 0x1805cfaf0, size 0x80, virtual false, abstract: false, final false
static inline uint16_t ToRoomId(::StringW  name) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr RoomIdConversion() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "RoomIdConversion", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
RoomIdConversion(RoomIdConversion && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RoomIdConversion", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
RoomIdConversion(RoomIdConversion const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16820};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Dissonance::RoomIdConversion) == 0x10, "Size mismatch!");

} // namespace end def Dissonance

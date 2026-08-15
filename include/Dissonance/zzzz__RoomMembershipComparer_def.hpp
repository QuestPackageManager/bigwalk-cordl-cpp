#pragma once
// IWYU pragma private; include "Dissonance/RoomMembershipComparer.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(RoomMembershipComparer)
namespace Dissonance {
struct RoomMembership;
}
namespace System::Collections::Generic {
template<typename T>
class IComparer_1;
}
// Forward declare root types
namespace Dissonance {
class RoomMembershipComparer;
}
// Write type traits
MARK_REF_T(::Dissonance::RoomMembershipComparer*);
DEFINE_IL2CPP_CLASS(::Dissonance::RoomMembershipComparer*, "Dissonance", "RoomMembershipComparer");
// Dependencies System.Object
namespace Dissonance {
// Is value type: false
// CS Name: Dissonance.RoomMembershipComparer
class CORDL_TYPE RoomMembershipComparer : public ::System::Object {
public:
// Declarations
/// @brief Convert operator to "::System::Collections::Generic::IComparer_1<::Dissonance::RoomMembership>"
constexpr operator  ::System::Collections::Generic::IComparer_1<::Dissonance::RoomMembership>*() noexcept;

/// @brief Method Compare, addr 0x1805cfb70, size 0x30, virtual true, abstract: false, final true
inline int32_t Compare(::Dissonance::RoomMembership  x, ::Dissonance::RoomMembership  y) ;

static inline ::Dissonance::RoomMembershipComparer* New_ctor() ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::System::Collections::Generic::IComparer_1<::Dissonance::RoomMembership>"
constexpr ::System::Collections::Generic::IComparer_1<::Dissonance::RoomMembership>* i___System__Collections__Generic__IComparer_1___Dissonance__RoomMembership_() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr RoomMembershipComparer() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "RoomMembershipComparer", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
RoomMembershipComparer(RoomMembershipComparer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RoomMembershipComparer", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
RoomMembershipComparer(RoomMembershipComparer const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16823};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Dissonance::RoomMembershipComparer) == 0x10, "Size mismatch!");

} // namespace end def Dissonance

#pragma once
// IWYU pragma private; include "PlayEveryWare/Common/VersionUtility.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(VersionUtility)
namespace System {
class Version;
}
// Forward declare root types
namespace PlayEveryWare::Common {
class VersionUtility;
}
// Write type traits
MARK_REF_T(::PlayEveryWare::Common::VersionUtility*);
DEFINE_IL2CPP_CLASS(::PlayEveryWare::Common::VersionUtility*, "PlayEveryWare.Common", "VersionUtility");
// Dependencies System.Object
namespace PlayEveryWare::Common {
// Is value type: false
// CS Name: PlayEveryWare.Common.VersionUtility
class CORDL_TYPE VersionUtility : public ::System::Object {
public:
// Declarations
/// @brief Method AreVersionsEqual, addr 0x18054a670, size 0x90, virtual false, abstract: false, final false
static inline bool AreVersionsEqual(::System::Version*  v1, ::System::Version*  v2) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr VersionUtility() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "VersionUtility", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
VersionUtility(VersionUtility && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "VersionUtility", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
VersionUtility(VersionUtility const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18796};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::PlayEveryWare::Common::VersionUtility) == 0x10, "Size mismatch!");

} // namespace end def PlayEveryWare::Common

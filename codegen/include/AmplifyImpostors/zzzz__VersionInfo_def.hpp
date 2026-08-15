#pragma once
// IWYU pragma private; include "AmplifyImpostors/VersionInfo.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(VersionInfo)
// Forward declare root types
namespace AmplifyImpostors {
class VersionInfo;
}
// Write type traits
MARK_REF_T(::AmplifyImpostors::VersionInfo*);
DEFINE_IL2CPP_CLASS(::AmplifyImpostors::VersionInfo*, "AmplifyImpostors", "VersionInfo");
// Dependencies System.Object
namespace AmplifyImpostors {
// Is value type: false
// CS Name: AmplifyImpostors.VersionInfo
class CORDL_TYPE VersionInfo : public ::System::Object {
public:
// Declarations
/// @brief Field Revision, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF_Revision, put=setStaticF_Revision)) uint8_t  Revision;

static inline ::AmplifyImpostors::VersionInfo* New_ctor() ;

/// @brief Method StaticToString, addr 0x1802dc260, size 0xd0, virtual false, abstract: false, final false
static inline ::StringW StaticToString() ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

static inline uint8_t getStaticF_Revision() ;

/// @brief Method get_FullLabel, addr 0x1802dc330, size 0x50, virtual false, abstract: false, final false
static inline ::StringW get_FullLabel() ;

/// @brief Method get_FullNumber, addr 0x1802dc380, size 0x70, virtual false, abstract: false, final false
static inline int32_t get_FullNumber() ;

static inline void setStaticF_Revision(uint8_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr VersionInfo() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "VersionInfo", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
VersionInfo(VersionInfo && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "VersionInfo", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
VersionInfo(VersionInfo const& ) = delete;

/// @brief Field Major offset 0xffffffff size 0x1
static constexpr uint8_t  Major{static_cast<uint8_t>(0x1u)};

/// @brief Field Minor offset 0xffffffff size 0x1
static constexpr uint8_t  Minor{static_cast<uint8_t>(0x0u)};

/// @brief Field Release offset 0xffffffff size 0x1
static constexpr uint8_t  Release{static_cast<uint8_t>(0x3u)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20970};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::AmplifyImpostors::VersionInfo) == 0x10, "Size mismatch!");

} // namespace end def AmplifyImpostors

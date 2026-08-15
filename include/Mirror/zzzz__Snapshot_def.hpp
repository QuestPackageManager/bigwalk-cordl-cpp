#pragma once
// IWYU pragma private; include "Mirror/Snapshot.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
CORDL_MODULE_EXPORT(Snapshot)
// Forward declare root types
namespace Mirror {
class Snapshot;
}
// Write type traits
MARK_REF_T(::Mirror::Snapshot*);
DEFINE_IL2CPP_CLASS(::Mirror::Snapshot*, "Mirror", "Snapshot");
// Dependencies 
namespace Mirror {
// Is value type: false
// CS Name: Mirror.Snapshot
class CORDL_TYPE Snapshot {
public:
// Declarations
 __declspec(property(get=get_localTime, put=set_localTime)) double_t  localTime;

 __declspec(property(get=get_remoteTime, put=set_remoteTime)) double_t  remoteTime;

/// @brief Method get_localTime, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline double_t get_localTime() ;

/// @brief Method get_remoteTime, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline double_t get_remoteTime() ;

/// @brief Method set_localTime, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void set_localTime(double_t  value) ;

/// @brief Method set_remoteTime, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void set_remoteTime(double_t  value) ;

// Ctor Parameters [CppParam { name: "", ty: "Snapshot", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Snapshot(Snapshot const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18352};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Mirror

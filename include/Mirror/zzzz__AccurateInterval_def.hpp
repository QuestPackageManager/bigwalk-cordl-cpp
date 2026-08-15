#pragma once
// IWYU pragma private; include "Mirror/AccurateInterval.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(AccurateInterval)
// Forward declare root types
namespace Mirror {
class AccurateInterval;
}
// Write type traits
MARK_REF_T(::Mirror::AccurateInterval*);
DEFINE_IL2CPP_CLASS(::Mirror::AccurateInterval*, "Mirror", "AccurateInterval");
// Dependencies System.Object
namespace Mirror {
// Is value type: false
// CS Name: Mirror.AccurateInterval
class CORDL_TYPE AccurateInterval : public ::System::Object {
public:
// Declarations
/// @brief Method Elapsed, addr 0x18158fb40, size 0x30, virtual false, abstract: false, final false
static inline bool Elapsed(double_t  time, double_t  interval, ::by_ref<double_t>  lastTime) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AccurateInterval() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AccurateInterval", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AccurateInterval(AccurateInterval && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AccurateInterval", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AccurateInterval(AccurateInterval const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18375};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Mirror::AccurateInterval) == 0x10, "Size mismatch!");

} // namespace end def Mirror

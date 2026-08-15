#pragma once
// IWYU pragma private; include "GlobalNamespace/TrainJunctionSwitch.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(TrainJunctionSwitch)
// Forward declare root types
namespace GlobalNamespace {
class TrainJunctionSwitch;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::TrainJunctionSwitch*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::TrainJunctionSwitch*, "", "TrainJunctionSwitch");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: TrainJunctionSwitch
class CORDL_TYPE TrainJunctionSwitch : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field swap, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get_swap, put=__cordl_internal_set_swap)) bool  swap;

static inline ::GlobalNamespace::TrainJunctionSwitch* New_ctor() ;

constexpr bool const& __cordl_internal_get_swap() const;

constexpr bool& __cordl_internal_get_swap() ;

constexpr void __cordl_internal_set_swap(bool  value) ;

/// @brief Method .ctor, addr 0x1802dd7c0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TrainJunctionSwitch() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TrainJunctionSwitch", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TrainJunctionSwitch(TrainJunctionSwitch && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TrainJunctionSwitch", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TrainJunctionSwitch(TrainJunctionSwitch const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5145};

/// @brief Field swap, offset: 0x20, size: 0x1, def value: None
 bool  ___swap;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::TrainJunctionSwitch, ___swap) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::TrainJunctionSwitch) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace

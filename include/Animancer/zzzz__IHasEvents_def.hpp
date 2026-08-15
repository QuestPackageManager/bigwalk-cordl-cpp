#pragma once
// IWYU pragma private; include "Animancer/IHasEvents.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IHasEvents)
namespace Animancer {
class AnimancerEvent_Sequence;
}
namespace Animancer {
class Sequence_AnimancerEvent_Serializable;
}
// Forward declare root types
namespace Animancer {
class IHasEvents;
}
// Write type traits
MARK_REF_T(::Animancer::IHasEvents*);
DEFINE_IL2CPP_CLASS(::Animancer::IHasEvents*, "Animancer", "IHasEvents");
// Dependencies 
namespace Animancer {
// Is value type: false
// CS Name: Animancer.IHasEvents
class CORDL_TYPE IHasEvents {
public:
// Declarations
 __declspec(property(get=get_Events)) ::Animancer::AnimancerEvent_Sequence*  Events;

 __declspec(property(get=get_SerializedEvents)) ::Animancer::Sequence_AnimancerEvent_Serializable*  SerializedEvents;

/// @brief Method get_Events, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::Animancer::AnimancerEvent_Sequence* get_Events() ;

/// @brief Method get_SerializedEvents, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::by_ref<::Animancer::Sequence_AnimancerEvent_Serializable*> get_SerializedEvents() ;

// Ctor Parameters [CppParam { name: "", ty: "IHasEvents", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
IHasEvents(IHasEvents const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18138};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Animancer

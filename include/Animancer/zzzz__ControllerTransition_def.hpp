#pragma once
// IWYU pragma private; include "Animancer/ControllerTransition.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Animancer/zzzz__ControllerTransition_1_def.hpp"
CORDL_MODULE_EXPORT(ControllerTransition)
namespace Animancer {
class ControllerState_ITransition;
}
namespace Animancer {
class ControllerState;
}
namespace Animancer {
template<typename T>
class ICopyable_1;
}
namespace Animancer {
class IHasKey;
}
namespace Animancer {
class IPolymorphic;
}
namespace Animancer {
template<typename TState>
class ITransition_1;
}
namespace Animancer {
class ITransition;
}
namespace UnityEngine {
class RuntimeAnimatorController;
}
// Forward declare root types
namespace Animancer {
class ControllerTransition;
}
// Write type traits
MARK_REF_T(::Animancer::ControllerTransition*);
DEFINE_IL2CPP_CLASS(::Animancer::ControllerTransition*, "Animancer", "ControllerTransition");
// Dependencies Animancer.ControllerTransition`1<TState>
namespace Animancer {
// Is value type: false
// CS Name: Animancer.ControllerTransition
class CORDL_TYPE ControllerTransition : public ::Animancer::ControllerTransition_1<::Animancer::ControllerState*> {
public:
// Declarations
/// @brief Convert operator to "::Animancer::ControllerState_ITransition"
constexpr operator  ::Animancer::ControllerState_ITransition*() noexcept;

/// @brief Convert operator to "::Animancer::ICopyable_1<::Animancer::ControllerTransition*>"
constexpr operator  ::Animancer::ICopyable_1<::Animancer::ControllerTransition*>*() noexcept;

/// @brief Convert operator to "::Animancer::IHasKey"
constexpr operator  ::Animancer::IHasKey*() noexcept;

/// @brief Convert operator to "::Animancer::IPolymorphic"
constexpr operator  ::Animancer::IPolymorphic*() noexcept;

/// @brief Convert operator to "::Animancer::ITransition"
constexpr operator  ::Animancer::ITransition*() noexcept;

/// @brief Convert operator to "::Animancer::ITransition_1<::Animancer::ControllerState*>"
constexpr operator  ::Animancer::ITransition_1<::Animancer::ControllerState*>*() noexcept;

/// @brief Method CopyFrom, addr 0x180307260, size 0x20, virtual true, abstract: false, final false
inline void CopyFrom(::Animancer::ControllerTransition*  copyFrom) ;

/// @brief Method CreateState, addr 0x180307280, size 0x80, virtual true, abstract: false, final false
inline ::Animancer::ControllerState* CreateState() ;

static inline ::Animancer::ControllerTransition* New_ctor() ;

static inline ::Animancer::ControllerTransition* New_ctor(::UnityEngine::RuntimeAnimatorController*  controller) ;

/// @brief Method .ctor, addr 0x180307300, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x180307310, size 0x40, virtual false, abstract: false, final false
inline void _ctor(::UnityEngine::RuntimeAnimatorController*  controller) ;

/// @brief Convert to "::Animancer::ControllerState_ITransition"
constexpr ::Animancer::ControllerState_ITransition* i___Animancer__ControllerState_ITransition() noexcept;

/// @brief Convert to "::Animancer::ICopyable_1<::Animancer::ControllerTransition*>"
constexpr ::Animancer::ICopyable_1<::Animancer::ControllerTransition*>* i___Animancer__ICopyable_1___Animancer__ControllerTransition__() noexcept;

/// @brief Convert to "::Animancer::IHasKey"
constexpr ::Animancer::IHasKey* i___Animancer__IHasKey() noexcept;

/// @brief Convert to "::Animancer::IPolymorphic"
constexpr ::Animancer::IPolymorphic* i___Animancer__IPolymorphic() noexcept;

/// @brief Convert to "::Animancer::ITransition"
constexpr ::Animancer::ITransition* i___Animancer__ITransition() noexcept;

/// @brief Convert to "::Animancer::ITransition_1<::Animancer::ControllerState*>"
constexpr ::Animancer::ITransition_1<::Animancer::ControllerState*>* i___Animancer__ITransition_1___Animancer__ControllerState__() noexcept;

/// @brief Method op_Implicit, addr 0x180307350, size 0x50, virtual false, abstract: false, final false
static inline ::Animancer::ControllerTransition* op_Implicit___Animancer__ControllerTransition_(::UnityEngine::RuntimeAnimatorController*  controller) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ControllerTransition() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ControllerTransition", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ControllerTransition(ControllerTransition && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ControllerTransition", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ControllerTransition(ControllerTransition const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18216};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Animancer::ControllerTransition) == 0x48, "Size mismatch!");

} // namespace end def Animancer

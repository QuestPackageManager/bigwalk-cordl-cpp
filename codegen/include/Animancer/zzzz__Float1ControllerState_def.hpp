#pragma once
// IWYU pragma private; include "Animancer/Float1ControllerState.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Animancer/zzzz__ControllerState_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(Float1ControllerState)
namespace Animancer {
class AnimancerPlayable;
}
namespace Animancer {
class AnimancerState;
}
namespace Animancer {
struct ControllerState_ActionOnStop;
}
namespace Animancer {
struct ControllerState_ParameterID;
}
namespace Animancer {
class Float1ControllerState_ITransition;
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
class Float1ControllerState;
}
namespace Animancer {
class Float1ControllerState_ITransition;
}
// Write type traits
MARK_REF_T(::Animancer::Float1ControllerState*);
MARK_REF_T(::Animancer::Float1ControllerState_ITransition*);
DEFINE_IL2CPP_CLASS(::Animancer::Float1ControllerState*, "Animancer", "Float1ControllerState");
DEFINE_IL2CPP_CLASS(::Animancer::Float1ControllerState_ITransition*, "Animancer", "Float1ControllerState/ITransition");
// Dependencies 
namespace Animancer {
// Is value type: false
// CS Name: Animancer.Float1ControllerState/ITransition
class CORDL_TYPE Float1ControllerState_ITransition {
public:
// Declarations
/// @brief Convert operator to "::Animancer::IHasKey"
constexpr operator  ::Animancer::IHasKey*() noexcept;

/// @brief Convert operator to "::Animancer::IPolymorphic"
constexpr operator  ::Animancer::IPolymorphic*() noexcept;

/// @brief Convert operator to "::Animancer::ITransition"
constexpr operator  ::Animancer::ITransition*() noexcept;

/// @brief Convert operator to "::Animancer::ITransition_1<::Animancer::Float1ControllerState*>"
constexpr operator  ::Animancer::ITransition_1<::Animancer::Float1ControllerState*>*() noexcept;

/// @brief Convert to "::Animancer::IHasKey"
constexpr ::Animancer::IHasKey* i___Animancer__IHasKey() noexcept;

/// @brief Convert to "::Animancer::IPolymorphic"
constexpr ::Animancer::IPolymorphic* i___Animancer__IPolymorphic() noexcept;

/// @brief Convert to "::Animancer::ITransition"
constexpr ::Animancer::ITransition* i___Animancer__ITransition() noexcept;

/// @brief Convert to "::Animancer::ITransition_1<::Animancer::Float1ControllerState*>"
constexpr ::Animancer::ITransition_1<::Animancer::Float1ControllerState*>* i___Animancer__ITransition_1___Animancer__Float1ControllerState__() noexcept;

// Ctor Parameters [CppParam { name: "", ty: "Float1ControllerState_ITransition", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Float1ControllerState_ITransition(Float1ControllerState_ITransition const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18093};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Animancer
// Dependencies Animancer.ControllerState, Animancer.ControllerState::ParameterID
namespace Animancer {
// Is value type: false
// CS Name: Animancer.Float1ControllerState
class CORDL_TYPE Float1ControllerState : public ::Animancer::ControllerState {
public:
// Declarations
using ITransition = ::Animancer::Float1ControllerState_ITransition;

 __declspec(property(get=get_Parameter, put=set_Parameter)) float_t  Parameter;

 __declspec(property(get=get_ParameterCount)) int32_t  ParameterCount;

 __declspec(property(get=get_ParameterID, put=set_ParameterID)) ::Animancer::ControllerState_ParameterID  ParameterID;

/// @brief Field _ParameterID, offset 0xb8, size 0x10 
 __declspec(property(get=__cordl_internal_get__ParameterID, put=__cordl_internal_set__ParameterID)) ::Animancer::ControllerState_ParameterID  _ParameterID;

/// @brief Method Clone, addr 0x1802edb50, size 0xe0, virtual true, abstract: false, final false
inline ::Animancer::AnimancerState* Clone(::Animancer::AnimancerPlayable*  root) ;

/// @brief Method GetParameterHash, addr 0x1802edc30, size 0x10, virtual true, abstract: false, final false
inline int32_t GetParameterHash(int32_t  index) ;

static inline ::Animancer::Float1ControllerState* New_ctor(::UnityEngine::RuntimeAnimatorController*  controller, ::Animancer::ControllerState_ParameterID  parameter) ;

static inline ::Animancer::Float1ControllerState* New_ctor(::UnityEngine::RuntimeAnimatorController*  controller, ::Animancer::ControllerState_ParameterID  parameter, ::ArrayW<::Animancer::ControllerState_ActionOnStop>  actionsOnStop) ;

constexpr ::Animancer::ControllerState_ParameterID const& __cordl_internal_get__ParameterID() const;

constexpr ::Animancer::ControllerState_ParameterID& __cordl_internal_get__ParameterID() ;

constexpr void __cordl_internal_set__ParameterID(::Animancer::ControllerState_ParameterID  value) ;

/// @brief Method .ctor, addr 0x1802edca0, size 0x60, virtual false, abstract: false, final false
inline void _ctor(::UnityEngine::RuntimeAnimatorController*  controller, ::Animancer::ControllerState_ParameterID  parameter) ;

/// @brief Method .ctor, addr 0x1802edc40, size 0x60, virtual false, abstract: false, final false
inline void _ctor(::UnityEngine::RuntimeAnimatorController*  controller, ::Animancer::ControllerState_ParameterID  parameter, ::ArrayW<::Animancer::ControllerState_ActionOnStop>  actionsOnStop) ;

/// @brief Method get_Parameter, addr 0x1802edd20, size 0x30, virtual false, abstract: false, final false
inline float_t get_Parameter() ;

/// @brief Method get_ParameterCount, addr 0x1802edd00, size 0x10, virtual true, abstract: false, final false
inline int32_t get_ParameterCount() ;

/// @brief Method get_ParameterID, addr 0x1802edd10, size 0x10, virtual false, abstract: false, final false
inline ::Animancer::ControllerState_ParameterID get_ParameterID() ;

/// @brief Method set_Parameter, addr 0x1802edd70, size 0x30, virtual false, abstract: false, final false
inline void set_Parameter(float_t  value) ;

/// @brief Method set_ParameterID, addr 0x1802edd50, size 0x20, virtual false, abstract: false, final false
inline void set_ParameterID(::Animancer::ControllerState_ParameterID  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Float1ControllerState() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Float1ControllerState", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Float1ControllerState(Float1ControllerState && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Float1ControllerState", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Float1ControllerState(Float1ControllerState const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18094};

/// @brief Field _ParameterID, offset: 0xb8, size: 0x10, def value: None
 ::Animancer::ControllerState_ParameterID  ____ParameterID;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Animancer::Float1ControllerState, ____ParameterID) == 0xb8, "Offset mismatch!");

static_assert(sizeof(::Animancer::Float1ControllerState) == 0xc8, "Size mismatch!");

} // namespace end def Animancer

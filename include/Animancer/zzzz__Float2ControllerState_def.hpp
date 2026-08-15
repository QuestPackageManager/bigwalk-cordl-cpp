#pragma once
// IWYU pragma private; include "Animancer/Float2ControllerState.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Animancer/zzzz__ControllerState_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(Float2ControllerState)
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
class Float2ControllerState_ITransition;
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
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace Animancer {
class Float2ControllerState;
}
namespace Animancer {
class Float2ControllerState_ITransition;
}
// Write type traits
MARK_REF_T(::Animancer::Float2ControllerState*);
MARK_REF_T(::Animancer::Float2ControllerState_ITransition*);
DEFINE_IL2CPP_CLASS(::Animancer::Float2ControllerState*, "Animancer", "Float2ControllerState");
DEFINE_IL2CPP_CLASS(::Animancer::Float2ControllerState_ITransition*, "Animancer", "Float2ControllerState/ITransition");
// Dependencies 
namespace Animancer {
// Is value type: false
// CS Name: Animancer.Float2ControllerState/ITransition
class CORDL_TYPE Float2ControllerState_ITransition {
public:
// Declarations
/// @brief Convert operator to "::Animancer::IHasKey"
constexpr operator  ::Animancer::IHasKey*() noexcept;

/// @brief Convert operator to "::Animancer::IPolymorphic"
constexpr operator  ::Animancer::IPolymorphic*() noexcept;

/// @brief Convert operator to "::Animancer::ITransition"
constexpr operator  ::Animancer::ITransition*() noexcept;

/// @brief Convert operator to "::Animancer::ITransition_1<::Animancer::Float2ControllerState*>"
constexpr operator  ::Animancer::ITransition_1<::Animancer::Float2ControllerState*>*() noexcept;

/// @brief Convert to "::Animancer::IHasKey"
constexpr ::Animancer::IHasKey* i___Animancer__IHasKey() noexcept;

/// @brief Convert to "::Animancer::IPolymorphic"
constexpr ::Animancer::IPolymorphic* i___Animancer__IPolymorphic() noexcept;

/// @brief Convert to "::Animancer::ITransition"
constexpr ::Animancer::ITransition* i___Animancer__ITransition() noexcept;

/// @brief Convert to "::Animancer::ITransition_1<::Animancer::Float2ControllerState*>"
constexpr ::Animancer::ITransition_1<::Animancer::Float2ControllerState*>* i___Animancer__ITransition_1___Animancer__Float2ControllerState__() noexcept;

// Ctor Parameters [CppParam { name: "", ty: "Float2ControllerState_ITransition", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Float2ControllerState_ITransition(Float2ControllerState_ITransition const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18095};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Animancer
// Dependencies Animancer.ControllerState, Animancer.ControllerState::ParameterID
namespace Animancer {
// Is value type: false
// CS Name: Animancer.Float2ControllerState
class CORDL_TYPE Float2ControllerState : public ::Animancer::ControllerState {
public:
// Declarations
using ITransition = ::Animancer::Float2ControllerState_ITransition;

 __declspec(property(get=get_Parameter, put=set_Parameter)) ::UnityEngine::Vector2  Parameter;

 __declspec(property(get=get_ParameterCount)) int32_t  ParameterCount;

 __declspec(property(get=get_ParameterX, put=set_ParameterX)) float_t  ParameterX;

 __declspec(property(get=get_ParameterXID, put=set_ParameterXID)) ::Animancer::ControllerState_ParameterID  ParameterXID;

 __declspec(property(get=get_ParameterY, put=set_ParameterY)) float_t  ParameterY;

 __declspec(property(get=get_ParameterYID, put=set_ParameterYID)) ::Animancer::ControllerState_ParameterID  ParameterYID;

/// @brief Field _ParameterXID, offset 0xb8, size 0x10 
 __declspec(property(get=__cordl_internal_get__ParameterXID, put=__cordl_internal_set__ParameterXID)) ::Animancer::ControllerState_ParameterID  _ParameterXID;

/// @brief Field _ParameterYID, offset 0xc8, size 0x10 
 __declspec(property(get=__cordl_internal_get__ParameterYID, put=__cordl_internal_set__ParameterYID)) ::Animancer::ControllerState_ParameterID  _ParameterYID;

/// @brief Method Clone, addr 0x1802edda0, size 0x100, virtual true, abstract: false, final false
inline ::Animancer::AnimancerState* Clone(::Animancer::AnimancerPlayable*  root) ;

/// @brief Method GetParameterHash, addr 0x1802edea0, size 0x40, virtual true, abstract: false, final false
inline int32_t GetParameterHash(int32_t  index) ;

static inline ::Animancer::Float2ControllerState* New_ctor(::UnityEngine::RuntimeAnimatorController*  controller, ::Animancer::ControllerState_ParameterID  parameterX, ::Animancer::ControllerState_ParameterID  parameterY) ;

static inline ::Animancer::Float2ControllerState* New_ctor(::UnityEngine::RuntimeAnimatorController*  controller, ::Animancer::ControllerState_ParameterID  parameterX, ::Animancer::ControllerState_ParameterID  parameterY, ::ArrayW<::Animancer::ControllerState_ActionOnStop>  actionsOnStop) ;

constexpr ::Animancer::ControllerState_ParameterID const& __cordl_internal_get__ParameterXID() const;

constexpr ::Animancer::ControllerState_ParameterID& __cordl_internal_get__ParameterXID() ;

constexpr ::Animancer::ControllerState_ParameterID const& __cordl_internal_get__ParameterYID() const;

constexpr ::Animancer::ControllerState_ParameterID& __cordl_internal_get__ParameterYID() ;

constexpr void __cordl_internal_set__ParameterXID(::Animancer::ControllerState_ParameterID  value) ;

constexpr void __cordl_internal_set__ParameterYID(::Animancer::ControllerState_ParameterID  value) ;

/// @brief Method .ctor, addr 0x1802edf60, size 0x80, virtual false, abstract: false, final false
inline void _ctor(::UnityEngine::RuntimeAnimatorController*  controller, ::Animancer::ControllerState_ParameterID  parameterX, ::Animancer::ControllerState_ParameterID  parameterY) ;

/// @brief Method .ctor, addr 0x1802edee0, size 0x80, virtual false, abstract: false, final false
inline void _ctor(::UnityEngine::RuntimeAnimatorController*  controller, ::Animancer::ControllerState_ParameterID  parameterX, ::Animancer::ControllerState_ParameterID  parameterY, ::ArrayW<::Animancer::ControllerState_ActionOnStop>  actionsOnStop) ;

/// @brief Method get_Parameter, addr 0x1802ee030, size 0x70, virtual false, abstract: false, final false
inline ::UnityEngine::Vector2 get_Parameter() ;

/// @brief Method get_ParameterCount, addr 0x1802edfe0, size 0x10, virtual true, abstract: false, final false
inline int32_t get_ParameterCount() ;

/// @brief Method get_ParameterX, addr 0x1802edd20, size 0x30, virtual false, abstract: false, final false
inline float_t get_ParameterX() ;

/// @brief Method get_ParameterXID, addr 0x1802edd10, size 0x10, virtual false, abstract: false, final false
inline ::Animancer::ControllerState_ParameterID get_ParameterXID() ;

/// @brief Method get_ParameterY, addr 0x1802ee000, size 0x30, virtual false, abstract: false, final false
inline float_t get_ParameterY() ;

/// @brief Method get_ParameterYID, addr 0x1802edff0, size 0x10, virtual false, abstract: false, final false
inline ::Animancer::ControllerState_ParameterID get_ParameterYID() ;

/// @brief Method set_Parameter, addr 0x1802ee0f0, size 0x60, virtual false, abstract: false, final false
inline void set_Parameter(::UnityEngine::Vector2  value) ;

/// @brief Method set_ParameterX, addr 0x1802edd70, size 0x30, virtual false, abstract: false, final false
inline void set_ParameterX(float_t  value) ;

/// @brief Method set_ParameterXID, addr 0x1802edd50, size 0x20, virtual false, abstract: false, final false
inline void set_ParameterXID(::Animancer::ControllerState_ParameterID  value) ;

/// @brief Method set_ParameterY, addr 0x1802ee0c0, size 0x30, virtual false, abstract: false, final false
inline void set_ParameterY(float_t  value) ;

/// @brief Method set_ParameterYID, addr 0x1802ee0a0, size 0x20, virtual false, abstract: false, final false
inline void set_ParameterYID(::Animancer::ControllerState_ParameterID  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Float2ControllerState() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Float2ControllerState", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Float2ControllerState(Float2ControllerState && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Float2ControllerState", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Float2ControllerState(Float2ControllerState const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18096};

/// @brief Field _ParameterXID, offset: 0xb8, size: 0x10, def value: None
 ::Animancer::ControllerState_ParameterID  ____ParameterXID;

/// @brief Field _ParameterYID, offset: 0xc8, size: 0x10, def value: None
 ::Animancer::ControllerState_ParameterID  ____ParameterYID;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Animancer::Float2ControllerState, ____ParameterXID) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::Animancer::Float2ControllerState, ____ParameterYID) == 0xc8, "Offset mismatch!");

static_assert(sizeof(::Animancer::Float2ControllerState) == 0xd8, "Size mismatch!");

} // namespace end def Animancer

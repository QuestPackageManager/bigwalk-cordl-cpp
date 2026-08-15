#pragma once
// IWYU pragma private; include "Animancer/Float3ControllerState.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Animancer/zzzz__ControllerState_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(Float3ControllerState)
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
class Float3ControllerState_ITransition;
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
struct Vector3;
}
// Forward declare root types
namespace Animancer {
class Float3ControllerState;
}
namespace Animancer {
class Float3ControllerState_ITransition;
}
// Write type traits
MARK_REF_T(::Animancer::Float3ControllerState*);
MARK_REF_T(::Animancer::Float3ControllerState_ITransition*);
DEFINE_IL2CPP_CLASS(::Animancer::Float3ControllerState*, "Animancer", "Float3ControllerState");
DEFINE_IL2CPP_CLASS(::Animancer::Float3ControllerState_ITransition*, "Animancer", "Float3ControllerState/ITransition");
// Dependencies 
namespace Animancer {
// Is value type: false
// CS Name: Animancer.Float3ControllerState/ITransition
class CORDL_TYPE Float3ControllerState_ITransition {
public:
// Declarations
/// @brief Convert operator to "::Animancer::IHasKey"
constexpr operator  ::Animancer::IHasKey*() noexcept;

/// @brief Convert operator to "::Animancer::IPolymorphic"
constexpr operator  ::Animancer::IPolymorphic*() noexcept;

/// @brief Convert operator to "::Animancer::ITransition"
constexpr operator  ::Animancer::ITransition*() noexcept;

/// @brief Convert operator to "::Animancer::ITransition_1<::Animancer::Float3ControllerState*>"
constexpr operator  ::Animancer::ITransition_1<::Animancer::Float3ControllerState*>*() noexcept;

/// @brief Convert to "::Animancer::IHasKey"
constexpr ::Animancer::IHasKey* i___Animancer__IHasKey() noexcept;

/// @brief Convert to "::Animancer::IPolymorphic"
constexpr ::Animancer::IPolymorphic* i___Animancer__IPolymorphic() noexcept;

/// @brief Convert to "::Animancer::ITransition"
constexpr ::Animancer::ITransition* i___Animancer__ITransition() noexcept;

/// @brief Convert to "::Animancer::ITransition_1<::Animancer::Float3ControllerState*>"
constexpr ::Animancer::ITransition_1<::Animancer::Float3ControllerState*>* i___Animancer__ITransition_1___Animancer__Float3ControllerState__() noexcept;

// Ctor Parameters [CppParam { name: "", ty: "Float3ControllerState_ITransition", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Float3ControllerState_ITransition(Float3ControllerState_ITransition const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18097};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Animancer
// Dependencies Animancer.ControllerState, Animancer.ControllerState::ParameterID
namespace Animancer {
// Is value type: false
// CS Name: Animancer.Float3ControllerState
class CORDL_TYPE Float3ControllerState : public ::Animancer::ControllerState {
public:
// Declarations
using ITransition = ::Animancer::Float3ControllerState_ITransition;

 __declspec(property(get=get_Parameter, put=set_Parameter)) ::UnityEngine::Vector3  Parameter;

 __declspec(property(get=get_ParameterCount)) int32_t  ParameterCount;

 __declspec(property(get=get_ParameterX, put=set_ParameterX)) float_t  ParameterX;

 __declspec(property(get=get_ParameterXID, put=set_ParameterXID)) ::Animancer::ControllerState_ParameterID  ParameterXID;

 __declspec(property(get=get_ParameterY, put=set_ParameterY)) float_t  ParameterY;

 __declspec(property(get=get_ParameterYID, put=set_ParameterYID)) ::Animancer::ControllerState_ParameterID  ParameterYID;

 __declspec(property(get=get_ParameterZ, put=set_ParameterZ)) float_t  ParameterZ;

 __declspec(property(get=get_ParameterZID, put=set_ParameterZID)) ::Animancer::ControllerState_ParameterID  ParameterZID;

/// @brief Field _ParameterXID, offset 0xb8, size 0x10 
 __declspec(property(get=__cordl_internal_get__ParameterXID, put=__cordl_internal_set__ParameterXID)) ::Animancer::ControllerState_ParameterID  _ParameterXID;

/// @brief Field _ParameterYID, offset 0xc8, size 0x10 
 __declspec(property(get=__cordl_internal_get__ParameterYID, put=__cordl_internal_set__ParameterYID)) ::Animancer::ControllerState_ParameterID  _ParameterYID;

/// @brief Field _ParameterZID, offset 0xd8, size 0x10 
 __declspec(property(get=__cordl_internal_get__ParameterZID, put=__cordl_internal_set__ParameterZID)) ::Animancer::ControllerState_ParameterID  _ParameterZID;

/// @brief Method Clone, addr 0x1802ee150, size 0x120, virtual true, abstract: false, final false
inline ::Animancer::AnimancerState* Clone(::Animancer::AnimancerPlayable*  root) ;

/// @brief Method GetParameterHash, addr 0x1802ee270, size 0x50, virtual true, abstract: false, final false
inline int32_t GetParameterHash(int32_t  index) ;

static inline ::Animancer::Float3ControllerState* New_ctor(::UnityEngine::RuntimeAnimatorController*  controller, ::Animancer::ControllerState_ParameterID  parameterX, ::Animancer::ControllerState_ParameterID  parameterY, ::Animancer::ControllerState_ParameterID  parameterZ) ;

static inline ::Animancer::Float3ControllerState* New_ctor(::UnityEngine::RuntimeAnimatorController*  controller, ::Animancer::ControllerState_ParameterID  parameterX, ::Animancer::ControllerState_ParameterID  parameterY, ::Animancer::ControllerState_ParameterID  parameterZ, ::ArrayW<::Animancer::ControllerState_ActionOnStop>  actionsOnStop) ;

constexpr ::Animancer::ControllerState_ParameterID const& __cordl_internal_get__ParameterXID() const;

constexpr ::Animancer::ControllerState_ParameterID& __cordl_internal_get__ParameterXID() ;

constexpr ::Animancer::ControllerState_ParameterID const& __cordl_internal_get__ParameterYID() const;

constexpr ::Animancer::ControllerState_ParameterID& __cordl_internal_get__ParameterYID() ;

constexpr ::Animancer::ControllerState_ParameterID const& __cordl_internal_get__ParameterZID() const;

constexpr ::Animancer::ControllerState_ParameterID& __cordl_internal_get__ParameterZID() ;

constexpr void __cordl_internal_set__ParameterXID(::Animancer::ControllerState_ParameterID  value) ;

constexpr void __cordl_internal_set__ParameterYID(::Animancer::ControllerState_ParameterID  value) ;

constexpr void __cordl_internal_set__ParameterZID(::Animancer::ControllerState_ParameterID  value) ;

/// @brief Method .ctor, addr 0x1802ee2c0, size 0xa0, virtual false, abstract: false, final false
inline void _ctor(::UnityEngine::RuntimeAnimatorController*  controller, ::Animancer::ControllerState_ParameterID  parameterX, ::Animancer::ControllerState_ParameterID  parameterY, ::Animancer::ControllerState_ParameterID  parameterZ) ;

/// @brief Method .ctor, addr 0x1802ee360, size 0xa0, virtual false, abstract: false, final false
inline void _ctor(::UnityEngine::RuntimeAnimatorController*  controller, ::Animancer::ControllerState_ParameterID  parameterX, ::Animancer::ControllerState_ParameterID  parameterY, ::Animancer::ControllerState_ParameterID  parameterZ, ::ArrayW<::Animancer::ControllerState_ActionOnStop>  actionsOnStop) ;

/// @brief Method get_Parameter, addr 0x1802ee450, size 0xb0, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 get_Parameter() ;

/// @brief Method get_ParameterCount, addr 0x1802ee400, size 0x10, virtual true, abstract: false, final false
inline int32_t get_ParameterCount() ;

/// @brief Method get_ParameterX, addr 0x1802edd20, size 0x30, virtual false, abstract: false, final false
inline float_t get_ParameterX() ;

/// @brief Method get_ParameterXID, addr 0x1802edd10, size 0x10, virtual false, abstract: false, final false
inline ::Animancer::ControllerState_ParameterID get_ParameterXID() ;

/// @brief Method get_ParameterY, addr 0x1802ee000, size 0x30, virtual false, abstract: false, final false
inline float_t get_ParameterY() ;

/// @brief Method get_ParameterYID, addr 0x1802edff0, size 0x10, virtual false, abstract: false, final false
inline ::Animancer::ControllerState_ParameterID get_ParameterYID() ;

/// @brief Method get_ParameterZ, addr 0x1802ee420, size 0x30, virtual false, abstract: false, final false
inline float_t get_ParameterZ() ;

/// @brief Method get_ParameterZID, addr 0x1802ee410, size 0x10, virtual false, abstract: false, final false
inline ::Animancer::ControllerState_ParameterID get_ParameterZID() ;

/// @brief Method set_Parameter, addr 0x1802ee550, size 0x90, virtual false, abstract: false, final false
inline void set_Parameter(::UnityEngine::Vector3  value) ;

/// @brief Method set_ParameterX, addr 0x1802edd70, size 0x30, virtual false, abstract: false, final false
inline void set_ParameterX(float_t  value) ;

/// @brief Method set_ParameterXID, addr 0x1802edd50, size 0x20, virtual false, abstract: false, final false
inline void set_ParameterXID(::Animancer::ControllerState_ParameterID  value) ;

/// @brief Method set_ParameterY, addr 0x1802ee0c0, size 0x30, virtual false, abstract: false, final false
inline void set_ParameterY(float_t  value) ;

/// @brief Method set_ParameterYID, addr 0x1802ee0a0, size 0x20, virtual false, abstract: false, final false
inline void set_ParameterYID(::Animancer::ControllerState_ParameterID  value) ;

/// @brief Method set_ParameterZ, addr 0x1802ee520, size 0x30, virtual false, abstract: false, final false
inline void set_ParameterZ(float_t  value) ;

/// @brief Method set_ParameterZID, addr 0x1802ee500, size 0x20, virtual false, abstract: false, final false
inline void set_ParameterZID(::Animancer::ControllerState_ParameterID  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Float3ControllerState() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Float3ControllerState", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Float3ControllerState(Float3ControllerState && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Float3ControllerState", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Float3ControllerState(Float3ControllerState const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18098};

/// @brief Field _ParameterXID, offset: 0xb8, size: 0x10, def value: None
 ::Animancer::ControllerState_ParameterID  ____ParameterXID;

/// @brief Field _ParameterYID, offset: 0xc8, size: 0x10, def value: None
 ::Animancer::ControllerState_ParameterID  ____ParameterYID;

/// @brief Field _ParameterZID, offset: 0xd8, size: 0x10, def value: None
 ::Animancer::ControllerState_ParameterID  ____ParameterZID;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Animancer::Float3ControllerState, ____ParameterXID) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::Animancer::Float3ControllerState, ____ParameterYID) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::Animancer::Float3ControllerState, ____ParameterZID) == 0xd8, "Offset mismatch!");

static_assert(sizeof(::Animancer::Float3ControllerState) == 0xe8, "Size mismatch!");

} // namespace end def Animancer

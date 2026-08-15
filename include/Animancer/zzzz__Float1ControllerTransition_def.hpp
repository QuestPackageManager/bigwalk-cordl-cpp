#pragma once
// IWYU pragma private; include "Animancer/Float1ControllerTransition.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Animancer/zzzz__ControllerTransition_1_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(Float1ControllerTransition)
namespace Animancer {
class Float1ControllerState_ITransition;
}
namespace Animancer {
class Float1ControllerState;
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
class Float1ControllerTransition;
}
// Write type traits
MARK_REF_T(::Animancer::Float1ControllerTransition*);
DEFINE_IL2CPP_CLASS(::Animancer::Float1ControllerTransition*, "Animancer", "Float1ControllerTransition");
// Dependencies Animancer.ControllerTransition`1<TState>
namespace Animancer {
// Is value type: false
// CS Name: Animancer.Float1ControllerTransition
class CORDL_TYPE Float1ControllerTransition : public ::Animancer::ControllerTransition_1<::Animancer::Float1ControllerState*> {
public:
// Declarations
 __declspec(property(get=get_ParameterName)) ::StringW  ParameterName;

/// @brief Field _ParameterName, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__ParameterName, put=__cordl_internal_set__ParameterName)) ::StringW  _ParameterName;

/// @brief Convert operator to "::Animancer::Float1ControllerState_ITransition"
constexpr operator  ::Animancer::Float1ControllerState_ITransition*() noexcept;

/// @brief Convert operator to "::Animancer::ICopyable_1<::Animancer::Float1ControllerTransition*>"
constexpr operator  ::Animancer::ICopyable_1<::Animancer::Float1ControllerTransition*>*() noexcept;

/// @brief Convert operator to "::Animancer::IHasKey"
constexpr operator  ::Animancer::IHasKey*() noexcept;

/// @brief Convert operator to "::Animancer::IPolymorphic"
constexpr operator  ::Animancer::IPolymorphic*() noexcept;

/// @brief Convert operator to "::Animancer::ITransition"
constexpr operator  ::Animancer::ITransition*() noexcept;

/// @brief Convert operator to "::Animancer::ITransition_1<::Animancer::Float1ControllerState*>"
constexpr operator  ::Animancer::ITransition_1<::Animancer::Float1ControllerState*>*() noexcept;

/// @brief Method CopyFrom, addr 0x18030c900, size 0x60, virtual true, abstract: false, final false
inline void CopyFrom(::Animancer::Float1ControllerTransition*  copyFrom) ;

/// @brief Method CreateState, addr 0x18030c960, size 0xb0, virtual true, abstract: false, final false
inline ::Animancer::Float1ControllerState* CreateState() ;

static inline ::Animancer::Float1ControllerTransition* New_ctor() ;

static inline ::Animancer::Float1ControllerTransition* New_ctor(::UnityEngine::RuntimeAnimatorController*  controller, ::StringW  parameterName) ;

constexpr ::StringW const& __cordl_internal_get__ParameterName() const;

constexpr ::StringW& __cordl_internal_get__ParameterName() ;

constexpr void __cordl_internal_set__ParameterName(::StringW  value) ;

/// @brief Method .ctor, addr 0x180307300, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x18030ca10, size 0x60, virtual false, abstract: false, final false
inline void _ctor(::UnityEngine::RuntimeAnimatorController*  controller, ::StringW  parameterName) ;

/// @brief Method get_ParameterName, addr 0x1802f0290, size 0x10, virtual false, abstract: false, final false
inline ::by_ref<::StringW> get_ParameterName() ;

/// @brief Convert to "::Animancer::Float1ControllerState_ITransition"
constexpr ::Animancer::Float1ControllerState_ITransition* i___Animancer__Float1ControllerState_ITransition() noexcept;

/// @brief Convert to "::Animancer::ICopyable_1<::Animancer::Float1ControllerTransition*>"
constexpr ::Animancer::ICopyable_1<::Animancer::Float1ControllerTransition*>* i___Animancer__ICopyable_1___Animancer__Float1ControllerTransition__() noexcept;

/// @brief Convert to "::Animancer::IHasKey"
constexpr ::Animancer::IHasKey* i___Animancer__IHasKey() noexcept;

/// @brief Convert to "::Animancer::IPolymorphic"
constexpr ::Animancer::IPolymorphic* i___Animancer__IPolymorphic() noexcept;

/// @brief Convert to "::Animancer::ITransition"
constexpr ::Animancer::ITransition* i___Animancer__ITransition() noexcept;

/// @brief Convert to "::Animancer::ITransition_1<::Animancer::Float1ControllerState*>"
constexpr ::Animancer::ITransition_1<::Animancer::Float1ControllerState*>* i___Animancer__ITransition_1___Animancer__Float1ControllerState__() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Float1ControllerTransition() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Float1ControllerTransition", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Float1ControllerTransition(Float1ControllerTransition && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Float1ControllerTransition", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Float1ControllerTransition(Float1ControllerTransition const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18219};

/// @brief Field _ParameterName, offset: 0x48, size: 0x8, def value: None
 ::StringW  ____ParameterName;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Animancer::Float1ControllerTransition, ____ParameterName) == 0x48, "Offset mismatch!");

static_assert(sizeof(::Animancer::Float1ControllerTransition) == 0x50, "Size mismatch!");

} // namespace end def Animancer

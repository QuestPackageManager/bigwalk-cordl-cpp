#pragma once
// IWYU pragma private; include "Animancer/Float2ControllerTransition.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Animancer/zzzz__ControllerTransition_1_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(Float2ControllerTransition)
namespace Animancer {
class Float2ControllerState_ITransition;
}
namespace Animancer {
class Float2ControllerState;
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
class Float2ControllerTransition;
}
// Write type traits
MARK_REF_T(::Animancer::Float2ControllerTransition*);
DEFINE_IL2CPP_CLASS(::Animancer::Float2ControllerTransition*, "Animancer", "Float2ControllerTransition");
// Dependencies Animancer.ControllerTransition`1<TState>
namespace Animancer {
// Is value type: false
// CS Name: Animancer.Float2ControllerTransition
class CORDL_TYPE Float2ControllerTransition : public ::Animancer::ControllerTransition_1<::Animancer::Float2ControllerState*> {
public:
// Declarations
 __declspec(property(get=get_ParameterNameX)) ::StringW  ParameterNameX;

 __declspec(property(get=get_ParameterNameY)) ::StringW  ParameterNameY;

/// @brief Field _ParameterNameX, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__ParameterNameX, put=__cordl_internal_set__ParameterNameX)) ::StringW  _ParameterNameX;

/// @brief Field _ParameterNameY, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get__ParameterNameY, put=__cordl_internal_set__ParameterNameY)) ::StringW  _ParameterNameY;

/// @brief Convert operator to "::Animancer::Float2ControllerState_ITransition"
constexpr operator  ::Animancer::Float2ControllerState_ITransition*() noexcept;

/// @brief Convert operator to "::Animancer::ICopyable_1<::Animancer::Float2ControllerTransition*>"
constexpr operator  ::Animancer::ICopyable_1<::Animancer::Float2ControllerTransition*>*() noexcept;

/// @brief Convert operator to "::Animancer::IHasKey"
constexpr operator  ::Animancer::IHasKey*() noexcept;

/// @brief Convert operator to "::Animancer::IPolymorphic"
constexpr operator  ::Animancer::IPolymorphic*() noexcept;

/// @brief Convert operator to "::Animancer::ITransition"
constexpr operator  ::Animancer::ITransition*() noexcept;

/// @brief Convert operator to "::Animancer::ITransition_1<::Animancer::Float2ControllerState*>"
constexpr operator  ::Animancer::ITransition_1<::Animancer::Float2ControllerState*>*() noexcept;

/// @brief Method CopyFrom, addr 0x18030ca70, size 0x70, virtual true, abstract: false, final false
inline void CopyFrom(::Animancer::Float2ControllerTransition*  copyFrom) ;

/// @brief Method CreateState, addr 0x18030cae0, size 0xd0, virtual true, abstract: false, final false
inline ::Animancer::Float2ControllerState* CreateState() ;

static inline ::Animancer::Float2ControllerTransition* New_ctor() ;

static inline ::Animancer::Float2ControllerTransition* New_ctor(::UnityEngine::RuntimeAnimatorController*  controller, ::StringW  parameterNameX, ::StringW  parameterNameY) ;

constexpr ::StringW const& __cordl_internal_get__ParameterNameX() const;

constexpr ::StringW& __cordl_internal_get__ParameterNameX() ;

constexpr ::StringW const& __cordl_internal_get__ParameterNameY() const;

constexpr ::StringW& __cordl_internal_get__ParameterNameY() ;

constexpr void __cordl_internal_set__ParameterNameX(::StringW  value) ;

constexpr void __cordl_internal_set__ParameterNameY(::StringW  value) ;

/// @brief Method .ctor, addr 0x180307300, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x18030cbb0, size 0x80, virtual false, abstract: false, final false
inline void _ctor(::UnityEngine::RuntimeAnimatorController*  controller, ::StringW  parameterNameX, ::StringW  parameterNameY) ;

/// @brief Method get_ParameterNameX, addr 0x1802f0290, size 0x10, virtual false, abstract: false, final false
inline ::by_ref<::StringW> get_ParameterNameX() ;

/// @brief Method get_ParameterNameY, addr 0x18030cc30, size 0x10, virtual false, abstract: false, final false
inline ::by_ref<::StringW> get_ParameterNameY() ;

/// @brief Convert to "::Animancer::Float2ControllerState_ITransition"
constexpr ::Animancer::Float2ControllerState_ITransition* i___Animancer__Float2ControllerState_ITransition() noexcept;

/// @brief Convert to "::Animancer::ICopyable_1<::Animancer::Float2ControllerTransition*>"
constexpr ::Animancer::ICopyable_1<::Animancer::Float2ControllerTransition*>* i___Animancer__ICopyable_1___Animancer__Float2ControllerTransition__() noexcept;

/// @brief Convert to "::Animancer::IHasKey"
constexpr ::Animancer::IHasKey* i___Animancer__IHasKey() noexcept;

/// @brief Convert to "::Animancer::IPolymorphic"
constexpr ::Animancer::IPolymorphic* i___Animancer__IPolymorphic() noexcept;

/// @brief Convert to "::Animancer::ITransition"
constexpr ::Animancer::ITransition* i___Animancer__ITransition() noexcept;

/// @brief Convert to "::Animancer::ITransition_1<::Animancer::Float2ControllerState*>"
constexpr ::Animancer::ITransition_1<::Animancer::Float2ControllerState*>* i___Animancer__ITransition_1___Animancer__Float2ControllerState__() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Float2ControllerTransition() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Float2ControllerTransition", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Float2ControllerTransition(Float2ControllerTransition && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Float2ControllerTransition", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Float2ControllerTransition(Float2ControllerTransition const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18222};

/// @brief Field _ParameterNameX, offset: 0x48, size: 0x8, def value: None
 ::StringW  ____ParameterNameX;

/// @brief Field _ParameterNameY, offset: 0x50, size: 0x8, def value: None
 ::StringW  ____ParameterNameY;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Animancer::Float2ControllerTransition, ____ParameterNameX) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Animancer::Float2ControllerTransition, ____ParameterNameY) == 0x50, "Offset mismatch!");

static_assert(sizeof(::Animancer::Float2ControllerTransition) == 0x58, "Size mismatch!");

} // namespace end def Animancer

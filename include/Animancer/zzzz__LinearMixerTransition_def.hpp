#pragma once
// IWYU pragma private; include "Animancer/LinearMixerTransition.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Animancer/zzzz__MixerTransition_2_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(LinearMixerTransition)
namespace Animancer {
class AnimancerState;
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
namespace Animancer {
class LinearMixerState_ITransition;
}
namespace Animancer {
class LinearMixerState;
}
// Forward declare root types
namespace Animancer {
class LinearMixerTransition;
}
// Write type traits
MARK_REF_T(::Animancer::LinearMixerTransition*);
DEFINE_IL2CPP_CLASS(::Animancer::LinearMixerTransition*, "Animancer", "LinearMixerTransition");
// Dependencies Animancer.MixerTransition`2<TMixer, TParameter>
namespace Animancer {
// Is value type: false
// CS Name: Animancer.LinearMixerTransition
class CORDL_TYPE LinearMixerTransition : public ::Animancer::MixerTransition_2<::Animancer::LinearMixerState*,float_t> {
public:
// Declarations
 __declspec(property(get=get_ExtrapolateSpeed)) bool  ExtrapolateSpeed;

 __declspec(property(get=get_IsValid)) bool  IsValid;

/// @brief Field _ExtrapolateSpeed, offset 0x64, size 0x1 
 __declspec(property(get=__cordl_internal_get__ExtrapolateSpeed, put=__cordl_internal_set__ExtrapolateSpeed)) bool  _ExtrapolateSpeed;

/// @brief Convert operator to "::Animancer::ICopyable_1<::Animancer::LinearMixerTransition*>"
constexpr operator  ::Animancer::ICopyable_1<::Animancer::LinearMixerTransition*>*() noexcept;

/// @brief Convert operator to "::Animancer::IHasKey"
constexpr operator  ::Animancer::IHasKey*() noexcept;

/// @brief Convert operator to "::Animancer::IPolymorphic"
constexpr operator  ::Animancer::IPolymorphic*() noexcept;

/// @brief Convert operator to "::Animancer::ITransition"
constexpr operator  ::Animancer::ITransition*() noexcept;

/// @brief Convert operator to "::Animancer::ITransition_1<::Animancer::LinearMixerState*>"
constexpr operator  ::Animancer::ITransition_1<::Animancer::LinearMixerState*>*() noexcept;

/// @brief Convert operator to "::Animancer::LinearMixerState_ITransition"
constexpr operator  ::Animancer::LinearMixerState_ITransition*() noexcept;

/// @brief Method Apply, addr 0x18030d960, size 0xe0, virtual true, abstract: false, final false
inline void Apply(::Animancer::AnimancerState*  state) ;

/// @brief Method CopyFrom, addr 0x18030da40, size 0x50, virtual true, abstract: false, final false
inline void CopyFrom(::Animancer::LinearMixerTransition*  copyFrom) ;

/// @brief Method CreateState, addr 0x18030da90, size 0x70, virtual true, abstract: false, final false
inline ::Animancer::LinearMixerState* CreateState() ;

static inline ::Animancer::LinearMixerTransition* New_ctor() ;

/// @brief Method SortByThresholds, addr 0x18030db00, size 0x240, virtual false, abstract: false, final false
inline void SortByThresholds() ;

constexpr bool const& __cordl_internal_get__ExtrapolateSpeed() const;

constexpr bool& __cordl_internal_get__ExtrapolateSpeed() ;

constexpr void __cordl_internal_set__ExtrapolateSpeed(bool  value) ;

/// @brief Method .ctor, addr 0x18030dd40, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_ExtrapolateSpeed, addr 0x18030dd50, size 0x10, virtual false, abstract: false, final false
inline ::by_ref<bool> get_ExtrapolateSpeed() ;

/// @brief Method get_IsValid, addr 0x18030dd60, size 0x80, virtual true, abstract: false, final false
inline bool get_IsValid() ;

/// @brief Convert to "::Animancer::ICopyable_1<::Animancer::LinearMixerTransition*>"
constexpr ::Animancer::ICopyable_1<::Animancer::LinearMixerTransition*>* i___Animancer__ICopyable_1___Animancer__LinearMixerTransition__() noexcept;

/// @brief Convert to "::Animancer::IHasKey"
constexpr ::Animancer::IHasKey* i___Animancer__IHasKey() noexcept;

/// @brief Convert to "::Animancer::IPolymorphic"
constexpr ::Animancer::IPolymorphic* i___Animancer__IPolymorphic() noexcept;

/// @brief Convert to "::Animancer::ITransition"
constexpr ::Animancer::ITransition* i___Animancer__ITransition() noexcept;

/// @brief Convert to "::Animancer::ITransition_1<::Animancer::LinearMixerState*>"
constexpr ::Animancer::ITransition_1<::Animancer::LinearMixerState*>* i___Animancer__ITransition_1___Animancer__LinearMixerState__() noexcept;

/// @brief Convert to "::Animancer::LinearMixerState_ITransition"
constexpr ::Animancer::LinearMixerState_ITransition* i___Animancer__LinearMixerState_ITransition() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LinearMixerTransition() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LinearMixerTransition", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
LinearMixerTransition(LinearMixerTransition && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LinearMixerTransition", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
LinearMixerTransition(LinearMixerTransition const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18228};

/// @brief Field _ExtrapolateSpeed, offset: 0x64, size: 0x1, def value: None
 bool  ____ExtrapolateSpeed;

/// @brief Size padding 0x70 - 0x68 = 0x8, packed as 0x8
 uint8_t  _cordl_size_padding[0x8];

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Animancer::LinearMixerTransition, ____ExtrapolateSpeed) == 0x64, "Offset mismatch!");

static_assert(sizeof(::Animancer::LinearMixerTransition) == 0x70, "Size mismatch!");

} // namespace end def Animancer

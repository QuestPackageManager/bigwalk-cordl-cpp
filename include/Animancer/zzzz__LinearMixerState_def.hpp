#pragma once
// IWYU pragma private; include "Animancer/LinearMixerState.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Animancer/zzzz__MixerState_1_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(LinearMixerState)
namespace Animancer {
class AnimancerPlayable;
}
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
namespace System::Text {
class StringBuilder;
}
namespace System {
class Object;
}
namespace UnityEngine {
struct AnimatorControllerParameterType;
}
// Forward declare root types
namespace Animancer {
class LinearMixerState;
}
namespace Animancer {
class LinearMixerState_ITransition;
}
// Write type traits
MARK_REF_T(::Animancer::LinearMixerState*);
MARK_REF_T(::Animancer::LinearMixerState_ITransition*);
DEFINE_IL2CPP_CLASS(::Animancer::LinearMixerState*, "Animancer", "LinearMixerState");
DEFINE_IL2CPP_CLASS(::Animancer::LinearMixerState_ITransition*, "Animancer", "LinearMixerState/ITransition");
// Dependencies 
namespace Animancer {
// Is value type: false
// CS Name: Animancer.LinearMixerState/ITransition
class CORDL_TYPE LinearMixerState_ITransition {
public:
// Declarations
/// @brief Convert operator to "::Animancer::IHasKey"
constexpr operator  ::Animancer::IHasKey*() noexcept;

/// @brief Convert operator to "::Animancer::IPolymorphic"
constexpr operator  ::Animancer::IPolymorphic*() noexcept;

/// @brief Convert operator to "::Animancer::ITransition"
constexpr operator  ::Animancer::ITransition*() noexcept;

/// @brief Convert operator to "::Animancer::ITransition_1<::Animancer::LinearMixerState*>"
constexpr operator  ::Animancer::ITransition_1<::Animancer::LinearMixerState*>*() noexcept;

/// @brief Convert to "::Animancer::IHasKey"
constexpr ::Animancer::IHasKey* i___Animancer__IHasKey() noexcept;

/// @brief Convert to "::Animancer::IPolymorphic"
constexpr ::Animancer::IPolymorphic* i___Animancer__IPolymorphic() noexcept;

/// @brief Convert to "::Animancer::ITransition"
constexpr ::Animancer::ITransition* i___Animancer__ITransition() noexcept;

/// @brief Convert to "::Animancer::ITransition_1<::Animancer::LinearMixerState*>"
constexpr ::Animancer::ITransition_1<::Animancer::LinearMixerState*>* i___Animancer__ITransition_1___Animancer__LinearMixerState__() noexcept;

// Ctor Parameters [CppParam { name: "", ty: "LinearMixerState_ITransition", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
LinearMixerState_ITransition(LinearMixerState_ITransition const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18150};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Animancer
// Dependencies Animancer.MixerState`1<TParameter>
namespace Animancer {
// Is value type: false
// CS Name: Animancer.LinearMixerState
class CORDL_TYPE LinearMixerState : public ::Animancer::MixerState_1<float_t> {
public:
// Declarations
using ITransition = ::Animancer::LinearMixerState_ITransition;

 __declspec(property(get=get_ExtrapolateSpeed, put=set_ExtrapolateSpeed)) bool  ExtrapolateSpeed;

 __declspec(property(get=get_ParameterCount)) int32_t  ParameterCount;

/// @brief Field _ExtrapolateSpeed, offset 0xac, size 0x1 
 __declspec(property(get=__cordl_internal_get__ExtrapolateSpeed, put=__cordl_internal_set__ExtrapolateSpeed)) bool  _ExtrapolateSpeed;

/// @brief Convert operator to "::Animancer::ICopyable_1<::Animancer::LinearMixerState*>"
constexpr operator  ::Animancer::ICopyable_1<::Animancer::LinearMixerState*>*() noexcept;

/// @brief Method Animancer.ICopyable<Animancer.LinearMixerState>.CopyFrom, addr 0x18030d180, size 0xb0, virtual true, abstract: false, final true
inline void Animancer_ICopyable_Animancer_LinearMixerState__CopyFrom(::Animancer::LinearMixerState*  copyFrom) ;

/// @brief Method AppendDetails, addr 0x18030d230, size 0x80, virtual true, abstract: false, final false
inline void AppendDetails(::System::Text::StringBuilder*  text, ::StringW  separator) ;

/// @brief Method AssertThresholdsSorted, addr 0x18030d2b0, size 0x130, virtual false, abstract: false, final false
inline void AssertThresholdsSorted() ;

/// @brief Method AssignLinearThresholds, addr 0x18030d3e0, size 0xd0, virtual false, abstract: false, final false
inline ::Animancer::LinearMixerState* AssignLinearThresholds(float_t  min, float_t  max) ;

/// @brief Method Clone, addr 0x18030d4b0, size 0xd0, virtual true, abstract: false, final false
inline ::Animancer::AnimancerState* Clone(::Animancer::AnimancerPlayable*  root) ;

/// @brief Method ForceRecalculateWeights, addr 0x18030d580, size 0x240, virtual true, abstract: false, final false
inline void ForceRecalculateWeights() ;

/// @brief Method GetParameterError, addr 0x18030d7c0, size 0x30, virtual true, abstract: false, final false
inline ::StringW GetParameterError(float_t  value) ;

/// @brief Method GetParameterName, addr 0x18030d7f0, size 0x10, virtual true, abstract: false, final false
inline ::StringW GetParameterName(int32_t  index) ;

/// @brief Method GetParameterType, addr 0x1802edd00, size 0x10, virtual true, abstract: false, final false
inline ::UnityEngine::AnimatorControllerParameterType GetParameterType(int32_t  index) ;

/// @brief Method GetParameterValue, addr 0x18030d800, size 0x30, virtual true, abstract: false, final false
inline ::System::Object* GetParameterValue(int32_t  index) ;

static inline ::Animancer::LinearMixerState* New_ctor() ;

/// @brief Method SetParameterValue, addr 0x18030d830, size 0x50, virtual true, abstract: false, final false
inline void SetParameterValue(int32_t  index, ::System::Object*  value) ;

constexpr bool const& __cordl_internal_get__ExtrapolateSpeed() const;

constexpr bool& __cordl_internal_get__ExtrapolateSpeed() ;

constexpr void __cordl_internal_set__ExtrapolateSpeed(bool  value) ;

/// @brief Method .ctor, addr 0x18030d880, size 0x20, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_ExtrapolateSpeed, addr 0x18030d8a0, size 0x10, virtual false, abstract: false, final false
inline bool get_ExtrapolateSpeed() ;

/// @brief Method get_ParameterCount, addr 0x1802edd00, size 0x10, virtual true, abstract: false, final false
inline int32_t get_ParameterCount() ;

/// @brief Convert to "::Animancer::ICopyable_1<::Animancer::LinearMixerState*>"
constexpr ::Animancer::ICopyable_1<::Animancer::LinearMixerState*>* i___Animancer__ICopyable_1___Animancer__LinearMixerState__() noexcept;

/// @brief Method set_ExtrapolateSpeed, addr 0x18030d8b0, size 0xb0, virtual false, abstract: false, final false
inline void set_ExtrapolateSpeed(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LinearMixerState() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LinearMixerState", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
LinearMixerState(LinearMixerState && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LinearMixerState", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
LinearMixerState(LinearMixerState const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18151};

/// @brief Field _ExtrapolateSpeed, offset: 0xac, size: 0x1, def value: None
 bool  ____ExtrapolateSpeed;

/// @brief Size padding 0xb8 - 0xb0 = 0x8, packed as 0x8
 uint8_t  _cordl_size_padding[0x8];

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Animancer::LinearMixerState, ____ExtrapolateSpeed) == 0xac, "Offset mismatch!");

static_assert(sizeof(::Animancer::LinearMixerState) == 0xb8, "Size mismatch!");

} // namespace end def Animancer

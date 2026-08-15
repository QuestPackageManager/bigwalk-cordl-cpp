#pragma once
// IWYU pragma private; include "Animancer/ITransitionDetailed.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
CORDL_MODULE_EXPORT(ITransitionDetailed)
namespace Animancer {
class IHasKey;
}
namespace Animancer {
class IPolymorphic;
}
namespace Animancer {
class ITransition;
}
// Forward declare root types
namespace Animancer {
class ITransitionDetailed;
}
// Write type traits
MARK_REF_T(::Animancer::ITransitionDetailed*);
DEFINE_IL2CPP_CLASS(::Animancer::ITransitionDetailed*, "Animancer", "ITransitionDetailed");
// Dependencies 
namespace Animancer {
// Is value type: false
// CS Name: Animancer.ITransitionDetailed
class CORDL_TYPE ITransitionDetailed {
public:
// Declarations
 __declspec(property(get=get_IsLooping)) bool  IsLooping;

 __declspec(property(get=get_IsValid)) bool  IsValid;

 __declspec(property(get=get_MaximumDuration)) float_t  MaximumDuration;

 __declspec(property(get=get_NormalizedStartTime, put=set_NormalizedStartTime)) float_t  NormalizedStartTime;

 __declspec(property(get=get_Speed, put=set_Speed)) float_t  Speed;

/// @brief Convert operator to "::Animancer::IHasKey"
constexpr operator  ::Animancer::IHasKey*() noexcept;

/// @brief Convert operator to "::Animancer::IPolymorphic"
constexpr operator  ::Animancer::IPolymorphic*() noexcept;

/// @brief Convert operator to "::Animancer::ITransition"
constexpr operator  ::Animancer::ITransition*() noexcept;

/// @brief Method get_IsLooping, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline bool get_IsLooping() ;

/// @brief Method get_IsValid, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline bool get_IsValid() ;

/// @brief Method get_MaximumDuration, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline float_t get_MaximumDuration() ;

/// @brief Method get_NormalizedStartTime, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline float_t get_NormalizedStartTime() ;

/// @brief Method get_Speed, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline float_t get_Speed() ;

/// @brief Convert to "::Animancer::IHasKey"
constexpr ::Animancer::IHasKey* i___Animancer__IHasKey() noexcept;

/// @brief Convert to "::Animancer::IPolymorphic"
constexpr ::Animancer::IPolymorphic* i___Animancer__IPolymorphic() noexcept;

/// @brief Convert to "::Animancer::ITransition"
constexpr ::Animancer::ITransition* i___Animancer__ITransition() noexcept;

/// @brief Method set_NormalizedStartTime, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void set_NormalizedStartTime(float_t  value) ;

/// @brief Method set_Speed, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void set_Speed(float_t  value) ;

// Ctor Parameters [CppParam { name: "", ty: "ITransitionDetailed", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ITransitionDetailed(ITransitionDetailed const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18145};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Animancer

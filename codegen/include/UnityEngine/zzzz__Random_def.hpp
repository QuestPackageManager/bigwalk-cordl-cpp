#pragma once
// IWYU pragma private; include "UnityEngine/Random.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Random)
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
struct Random_State;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine {
class Random;
}
namespace UnityEngine {
struct Random_State;
}
// Write type traits
MARK_REF_T(::UnityEngine::Random*);
MARK_VAL_T(::UnityEngine::Random_State);
DEFINE_IL2CPP_CLASS(::UnityEngine::Random*, "UnityEngine", "Random");
DEFINE_IL2CPP_CLASS(::UnityEngine::Random_State, "UnityEngine", "Random/State");
// Dependencies 
namespace UnityEngine {
// Is value type: true
// CS Name: UnityEngine.Random/State
struct CORDL_TYPE Random_State {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr Random_State() ;

// Ctor Parameters [CppParam { name: "s0", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "s1", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "s2", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "s3", ty: "int32_t", modifiers: "", def_value: None }]
constexpr Random_State(int32_t  s0, int32_t  s1, int32_t  s2, int32_t  s3) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10648};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field s0, offset: 0x0, size: 0x4, def value: None
 int32_t  s0;

/// @brief Field s1, offset: 0x4, size: 0x4, def value: None
 int32_t  s1;

/// @brief Field s2, offset: 0x8, size: 0x4, def value: None
 int32_t  s2;

/// @brief Field s3, offset: 0xc, size: 0x4, def value: None
 int32_t  s3;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Random_State, s0) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Random_State, s1) == 0x4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Random_State, s2) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Random_State, s3) == 0xc, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Random_State) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine
// Dependencies System.Object
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.Random
class CORDL_TYPE Random : public ::System::Object {
public:
// Declarations
using State = ::UnityEngine::Random_State;

/// @brief Method ColorHSV, addr 0x1822785b0, size 0x70, virtual false, abstract: false, final false
static inline ::UnityEngine::Color ColorHSV(float_t  hueMin, float_t  hueMax, float_t  saturationMin, float_t  saturationMax, float_t  valueMin, float_t  valueMax) ;

/// @brief Method ColorHSV, addr 0x182278620, size 0x170, virtual false, abstract: false, final false
static inline ::UnityEngine::Color ColorHSV(float_t  hueMin, float_t  hueMax, float_t  saturationMin, float_t  saturationMax, float_t  valueMin, float_t  valueMax, float_t  alphaMin, float_t  alphaMax) ;

/// @brief Method GetRandomUnitCircle, addr 0x182278790, size 0x10, virtual false, abstract: false, final false
static inline void GetRandomUnitCircle(::by_ref<::UnityEngine::Vector2>  output) ;

/// @brief Method InitState, addr 0x1822787a0, size 0x10, virtual false, abstract: false, final false
static inline void InitState(int32_t  seed) ;

/// @brief Method RandomRangeInt, addr 0x1822787b0, size 0x10, virtual false, abstract: false, final false
static inline int32_t RandomRangeInt(int32_t  minInclusive, int32_t  maxExclusive) ;

/// @brief Method Range, addr 0x1822787c0, size 0x10, virtual false, abstract: false, final false
static inline float_t Range(float_t  minInclusive, float_t  maxInclusive) ;

/// @brief Method Range, addr 0x1822787b0, size 0x10, virtual false, abstract: false, final false
static inline int32_t Range(int32_t  minInclusive, int32_t  maxExclusive) ;

/// @brief Method get_insideUnitCircle, addr 0x1822787d0, size 0x20, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector2 get_insideUnitCircle() ;

/// @brief Method get_insideUnitSphere, addr 0x182278800, size 0x20, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector3 get_insideUnitSphere() ;

/// @brief Method get_insideUnitSphere_Injected, addr 0x1822787f0, size 0x10, virtual false, abstract: false, final false
static inline void get_insideUnitSphere_Injected(::by_ref<::UnityEngine::Vector3>  ret) ;

/// @brief Method get_onUnitSphere, addr 0x182278830, size 0x20, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector3 get_onUnitSphere() ;

/// @brief Method get_onUnitSphere_Injected, addr 0x182278820, size 0x10, virtual false, abstract: false, final false
static inline void get_onUnitSphere_Injected(::by_ref<::UnityEngine::Vector3>  ret) ;

/// @brief Method get_state, addr 0x182278860, size 0x20, virtual false, abstract: false, final false
static inline ::UnityEngine::Random_State get_state() ;

/// @brief Method get_state_Injected, addr 0x182278850, size 0x10, virtual false, abstract: false, final false
static inline void get_state_Injected(::by_ref<::UnityEngine::Random_State>  ret) ;

/// @brief Method get_value, addr 0x182278880, size 0x10, virtual false, abstract: false, final false
static inline float_t get_value() ;

/// @brief Method set_state, addr 0x1822788a0, size 0x10, virtual false, abstract: false, final false
static inline void set_state(::UnityEngine::Random_State  value) ;

/// @brief Method set_state_Injected, addr 0x182278890, size 0x10, virtual false, abstract: false, final false
static inline void set_state_Injected(::by_ref<::UnityEngine::Random_State>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Random() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Random", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Random(Random && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Random", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Random(Random const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10649};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Random) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine

#pragma once
// IWYU pragma private; include "GlobalNamespace/PeckSystemReference.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(PeckSystemReference)
namespace GlobalNamespace {
struct PeckContext;
}
namespace GlobalNamespace {
struct PeckSystemReference_PredictionType;
}
namespace GlobalNamespace {
class TrackedPeckState;
}
namespace System {
template<typename T>
class Action_1;
}
namespace System {
template<typename T1,typename T2>
class Action_2;
}
// Forward declare root types
namespace GlobalNamespace {
struct PeckSystemReference_PredictionType;
}
namespace GlobalNamespace {
struct PeckSystemReference;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::PeckSystemReference_PredictionType);
MARK_VAL_T(::GlobalNamespace::PeckSystemReference);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PeckSystemReference_PredictionType, "", "PeckSystemReference/PredictionType");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PeckSystemReference, "", "PeckSystemReference");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: PeckSystemReference/PredictionType
struct CORDL_TYPE PeckSystemReference_PredictionType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __PeckSystemReference_PredictionType_Unwrapped
enum struct __PeckSystemReference_PredictionType_Unwrapped : int32_t {
__E_DefaultForEffect = static_cast<int32_t>(0x0),
__E_Always = static_cast<int32_t>(0x1),
__E_Never = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __PeckSystemReference_PredictionType_Unwrapped () const noexcept {
return static_cast<__PeckSystemReference_PredictionType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr PeckSystemReference_PredictionType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr PeckSystemReference_PredictionType(int32_t  value__) noexcept;

/// @brief Field Always value: I32(1)
static ::GlobalNamespace::PeckSystemReference_PredictionType const Always;

/// @brief Field DefaultForEffect value: I32(0)
static ::GlobalNamespace::PeckSystemReference_PredictionType const DefaultForEffect;

/// @brief Field Never value: I32(2)
static ::GlobalNamespace::PeckSystemReference_PredictionType const Never;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5353};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PeckSystemReference_PredictionType, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::PeckSystemReference_PredictionType) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies PeckSystemReference::PredictionType
namespace GlobalNamespace {
// Is value type: true
// CS Name: PeckSystemReference
struct CORDL_TYPE PeckSystemReference {
public:
// Declarations
using PredictionType = ::GlobalNamespace::PeckSystemReference_PredictionType;

/// @brief Method Initialize, addr 0x1804540f0, size 0x80, virtual false, abstract: false, final false
inline void Initialize(::System::Action_1<::GlobalNamespace::PeckContext>*  onPeck, bool  canPredictPeck) ;

/// @brief Method Initialize, addr 0x180454070, size 0x80, virtual false, abstract: false, final false
inline void Initialize(::System::Action_2<::GlobalNamespace::PeckContext,::UnityW<::GlobalNamespace::TrackedPeckState>>*  onPeck, bool  canPredictPeck) ;

/// @brief Method Peck, addr 0x180454170, size 0xc0, virtual false, abstract: false, final false
inline void Peck(::GlobalNamespace::PeckContext  peckContext, ::GlobalNamespace::TrackedPeckState*  peckSystem) ;

/// @brief Method ShouldPredict, addr 0x180454230, size 0x50, virtual false, abstract: false, final false
inline bool ShouldPredict() ;

// Ctor Parameters []
// @brief default ctor
constexpr PeckSystemReference() ;

// Ctor Parameters [CppParam { name: "peckSystem", ty: "::UnityW<::GlobalNamespace::TrackedPeckState>", modifiers: "", def_value: None }, CppParam { name: "priority", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "prediction", ty: "::GlobalNamespace::PeckSystemReference_PredictionType", modifiers: "", def_value: None }, CppParam { name: "effectDefaultPrediction", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "onPeck", ty: "::System::Action_1<::GlobalNamespace::PeckContext>*", modifiers: "", def_value: None }, CppParam { name: "onPeckWithSystemReference", ty: "::System::Action_2<::GlobalNamespace::PeckContext,::UnityW<::GlobalNamespace::TrackedPeckState>>*", modifiers: "", def_value: None }]
constexpr PeckSystemReference(::UnityW<::GlobalNamespace::TrackedPeckState>  peckSystem, int32_t  priority, ::GlobalNamespace::PeckSystemReference_PredictionType  prediction, bool  effectDefaultPrediction, ::System::Action_1<::GlobalNamespace::PeckContext>*  onPeck, ::System::Action_2<::GlobalNamespace::PeckContext,::UnityW<::GlobalNamespace::TrackedPeckState>>*  onPeckWithSystemReference) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5354};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x28};

/// @brief Field peckSystem, offset: 0x0, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::TrackedPeckState>  peckSystem;

/// @brief Field priority, offset: 0x8, size: 0x4, def value: None
 int32_t  priority;

/// @brief Field prediction, offset: 0xc, size: 0x4, def value: None
 ::GlobalNamespace::PeckSystemReference_PredictionType  prediction;

/// @brief Field effectDefaultPrediction, offset: 0x10, size: 0x1, def value: None
 bool  effectDefaultPrediction;

/// @brief Field onPeck, offset: 0x18, size: 0x8, def value: None
 ::System::Action_1<::GlobalNamespace::PeckContext>*  onPeck;

/// @brief Field onPeckWithSystemReference, offset: 0x20, size: 0x8, def value: None
 ::System::Action_2<::GlobalNamespace::PeckContext,::UnityW<::GlobalNamespace::TrackedPeckState>>*  onPeckWithSystemReference;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PeckSystemReference, peckSystem) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PeckSystemReference, priority) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PeckSystemReference, prediction) == 0xc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PeckSystemReference, effectDefaultPrediction) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PeckSystemReference, onPeck) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PeckSystemReference, onPeckWithSystemReference) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::PeckSystemReference) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace

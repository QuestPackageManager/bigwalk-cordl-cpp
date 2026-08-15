#pragma once
// IWYU pragma private; include "GlobalNamespace/TrainCheater.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(TrainCheater)
namespace GlobalNamespace {
class NetworkedTrain;
}
// Forward declare root types
namespace GlobalNamespace {
class TrainCheater;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::TrainCheater*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::TrainCheater*, "", "TrainCheater");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: TrainCheater
class CORDL_TYPE TrainCheater : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field instance, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_instance, put=setStaticF_instance)) ::UnityW<::GlobalNamespace::TrainCheater>  instance;

/// @brief Field networkedTrain, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_networkedTrain, put=__cordl_internal_set_networkedTrain)) ::UnityW<::GlobalNamespace::NetworkedTrain>  networkedTrain;

/// @brief Method Awake, addr 0x18041a090, size 0x30, virtual false, abstract: false, final false
inline void Awake() ;

static inline ::GlobalNamespace::TrainCheater* New_ctor() ;

/// @brief Method SetDistance, addr 0x18041a0c0, size 0x40, virtual false, abstract: false, final false
static inline void SetDistance(float_t  distance) ;

constexpr ::UnityW<::GlobalNamespace::NetworkedTrain> const& __cordl_internal_get_networkedTrain() const;

constexpr ::UnityW<::GlobalNamespace::NetworkedTrain>& __cordl_internal_get_networkedTrain() ;

constexpr void __cordl_internal_set_networkedTrain(::UnityW<::GlobalNamespace::NetworkedTrain>  value) ;

/// @brief Method .ctor, addr 0x1802dd7c0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::UnityW<::GlobalNamespace::TrainCheater> getStaticF_instance() ;

static inline void setStaticF_instance(::UnityW<::GlobalNamespace::TrainCheater>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TrainCheater() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TrainCheater", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TrainCheater(TrainCheater && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TrainCheater", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TrainCheater(TrainCheater const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5144};

/// @brief Field networkedTrain, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::NetworkedTrain>  ___networkedTrain;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::TrainCheater, ___networkedTrain) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::TrainCheater) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace

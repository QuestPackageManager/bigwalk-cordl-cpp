#pragma once
// IWYU pragma private; include "Animancer/TimeSynchronizationGroup.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(TimeSynchronizationGroup)
namespace Animancer {
class AnimancerComponent;
}
namespace Animancer {
class AnimancerState;
}
namespace System {
template<typename T>
struct Nullable_1;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Animancer {
class TimeSynchronizationGroup;
}
// Write type traits
MARK_REF_T(::Animancer::TimeSynchronizationGroup*);
DEFINE_IL2CPP_CLASS(::Animancer::TimeSynchronizationGroup*, "Animancer", "TimeSynchronizationGroup");
// Dependencies System.Collections.Generic.HashSet`1<T>, System.Nullable`1<T>
namespace Animancer {
// Is value type: false
// CS Name: Animancer.TimeSynchronizationGroup
class CORDL_TYPE TimeSynchronizationGroup : public ::System::Collections::Generic::HashSet_1<::System::Object*> {
public:
// Declarations
 __declspec(property(get=get_Animancer, put=set_Animancer)) ::UnityW<::Animancer::AnimancerComponent>  Animancer;

 __declspec(property(get=get_NormalizedTime, put=set_NormalizedTime)) ::System::Nullable_1<float_t>  NormalizedTime;

/// @brief Field _Animancer, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__Animancer, put=__cordl_internal_set__Animancer)) ::UnityW<::Animancer::AnimancerComponent>  _Animancer;

/// @brief Field <NormalizedTime>k__BackingField, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get__NormalizedTime_k__BackingField, put=__cordl_internal_set__NormalizedTime_k__BackingField)) ::System::Nullable_1<float_t>  _NormalizedTime_k__BackingField;

static inline ::Animancer::TimeSynchronizationGroup* New_ctor(::Animancer::AnimancerComponent*  animancer) ;

/// @brief Method StoreTime, addr 0x180315c80, size 0xc0, virtual false, abstract: false, final false
inline bool StoreTime(::System::Object*  key) ;

/// @brief Method StoreTime, addr 0x180315d40, size 0x80, virtual false, abstract: false, final false
inline bool StoreTime(::System::Object*  key, ::Animancer::AnimancerState*  state) ;

/// @brief Method SyncTime, addr 0x180315f60, size 0x70, virtual false, abstract: false, final false
inline bool SyncTime(::System::Object*  key) ;

/// @brief Method SyncTime, addr 0x180315ea0, size 0x70, virtual false, abstract: false, final false
inline bool SyncTime(::System::Object*  key, float_t  deltaTime) ;

/// @brief Method SyncTime, addr 0x180315f10, size 0x50, virtual false, abstract: false, final false
inline bool SyncTime(::System::Object*  key, ::Animancer::AnimancerState*  state) ;

/// @brief Method SyncTime, addr 0x180315dc0, size 0xe0, virtual false, abstract: false, final false
inline bool SyncTime(::System::Object*  key, ::Animancer::AnimancerState*  state, float_t  deltaTime) ;

constexpr ::UnityW<::Animancer::AnimancerComponent> const& __cordl_internal_get__Animancer() const;

constexpr ::UnityW<::Animancer::AnimancerComponent>& __cordl_internal_get__Animancer() ;

constexpr ::System::Nullable_1<float_t> const& __cordl_internal_get__NormalizedTime_k__BackingField() const;

constexpr ::System::Nullable_1<float_t>& __cordl_internal_get__NormalizedTime_k__BackingField() ;

constexpr void __cordl_internal_set__Animancer(::UnityW<::Animancer::AnimancerComponent>  value) ;

constexpr void __cordl_internal_set__NormalizedTime_k__BackingField(::System::Nullable_1<float_t>  value) ;

/// @brief Method .ctor, addr 0x180315fd0, size 0x40, virtual false, abstract: false, final false
inline void _ctor(::Animancer::AnimancerComponent*  animancer) ;

/// @brief Method get_Animancer, addr 0x1802e58c0, size 0x10, virtual false, abstract: false, final false
inline ::UnityW<::Animancer::AnimancerComponent> get_Animancer() ;

/// @brief Method get_NormalizedTime, addr 0x1802e0b30, size 0x10, virtual false, abstract: false, final false
inline ::System::Nullable_1<float_t> get_NormalizedTime() ;

/// @brief Method set_Animancer, addr 0x180316010, size 0x30, virtual false, abstract: false, final false
inline void set_Animancer(::Animancer::AnimancerComponent*  value) ;

/// @brief Method set_NormalizedTime, addr 0x180316040, size 0x10, virtual false, abstract: false, final false
inline void set_NormalizedTime(::System::Nullable_1<float_t>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TimeSynchronizationGroup() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TimeSynchronizationGroup", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TimeSynchronizationGroup(TimeSynchronizationGroup && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TimeSynchronizationGroup", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TimeSynchronizationGroup(TimeSynchronizationGroup const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18199};

/// @brief Field _Animancer, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::Animancer::AnimancerComponent>  ____Animancer;

/// @brief Field <NormalizedTime>k__BackingField, offset: 0x50, size: 0x8, def value: None
 ::System::Nullable_1<float_t>  ____NormalizedTime_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Animancer::TimeSynchronizationGroup, ____Animancer) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Animancer::TimeSynchronizationGroup, ____NormalizedTime_k__BackingField) == 0x50, "Offset mismatch!");

static_assert(sizeof(::Animancer::TimeSynchronizationGroup) == 0x58, "Size mismatch!");

} // namespace end def Animancer

#pragma once
// IWYU pragma private; include "Animancer/TimeSynchronizer_1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(TimeSynchronizer_1)
namespace Animancer {
class AnimancerLayer;
}
namespace Animancer {
class AnimancerState;
}
// Forward declare root types
namespace Animancer {
template<typename T>
class TimeSynchronizer_1;
}
// Write type traits
MARK_GEN_REF_T_PTR(::Animancer::TimeSynchronizer_1);
DEFINE_IL2CPP_GEN_CLASS_PTR(::Animancer::TimeSynchronizer_1, "Animancer", "TimeSynchronizer`1");
// Dependencies System.Object
namespace Animancer {
// cpp template
template<typename T>
// Is value type: false
// CS Name: Animancer.TimeSynchronizer`1<T>
class CORDL_TYPE TimeSynchronizer_1 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_CurrentGroup, put=set_CurrentGroup)) T  CurrentGroup;

 __declspec(property(get=get_NormalizedTime, put=set_NormalizedTime)) double_t  NormalizedTime;

 __declspec(property(get=get_SynchronizeDefaultGroup, put=set_SynchronizeDefaultGroup)) bool  SynchronizeDefaultGroup;

/// @brief Field <CurrentGroup>k__BackingField, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__CurrentGroup_k__BackingField, put=__cordl_internal_set__CurrentGroup_k__BackingField)) T  _CurrentGroup_k__BackingField;

/// @brief Field <NormalizedTime>k__BackingField, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__NormalizedTime_k__BackingField, put=__cordl_internal_set__NormalizedTime_k__BackingField)) double_t  _NormalizedTime_k__BackingField;

/// @brief Field <SynchronizeDefaultGroup>k__BackingField, offset 0x18, size 0x1 
 __declspec(property(get=__cordl_internal_get__SynchronizeDefaultGroup_k__BackingField, put=__cordl_internal_set__SynchronizeDefaultGroup_k__BackingField)) bool  _SynchronizeDefaultGroup_k__BackingField;

static inline ::Animancer::TimeSynchronizer_1<T>* New_ctor() ;

static inline ::Animancer::TimeSynchronizer_1<T>* New_ctor(T  group, bool  synchronizeDefaultGroup) ;

/// @brief Method StoreTime, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void StoreTime(::Animancer::AnimancerLayer*  layer) ;

/// @brief Method StoreTime, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void StoreTime(::Animancer::AnimancerState*  state) ;

/// @brief Method SyncTime, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline bool SyncTime(::Animancer::AnimancerLayer*  layer, T  group) ;

/// @brief Method SyncTime, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline bool SyncTime(::Animancer::AnimancerLayer*  layer, T  group, float_t  deltaTime) ;

/// @brief Method SyncTime, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline bool SyncTime(::Animancer::AnimancerState*  state, T  group) ;

/// @brief Method SyncTime, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline bool SyncTime(::Animancer::AnimancerState*  state, T  group, float_t  deltaTime) ;

constexpr T const& __cordl_internal_get__CurrentGroup_k__BackingField() const;

constexpr T& __cordl_internal_get__CurrentGroup_k__BackingField() ;

constexpr double_t const& __cordl_internal_get__NormalizedTime_k__BackingField() const;

constexpr double_t& __cordl_internal_get__NormalizedTime_k__BackingField() ;

constexpr bool const& __cordl_internal_get__SynchronizeDefaultGroup_k__BackingField() const;

constexpr bool& __cordl_internal_get__SynchronizeDefaultGroup_k__BackingField() ;

constexpr void __cordl_internal_set__CurrentGroup_k__BackingField(T  value) ;

constexpr void __cordl_internal_set__NormalizedTime_k__BackingField(double_t  value) ;

constexpr void __cordl_internal_set__SynchronizeDefaultGroup_k__BackingField(bool  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(T  group, bool  synchronizeDefaultGroup) ;

/// @brief Method get_CurrentGroup, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline T get_CurrentGroup() ;

/// @brief Method get_NormalizedTime, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline double_t get_NormalizedTime() ;

/// @brief Method get_SynchronizeDefaultGroup, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline bool get_SynchronizeDefaultGroup() ;

/// @brief Method set_CurrentGroup, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void set_CurrentGroup(T  value) ;

/// @brief Method set_NormalizedTime, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void set_NormalizedTime(double_t  value) ;

/// @brief Method set_SynchronizeDefaultGroup, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void set_SynchronizeDefaultGroup(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TimeSynchronizer_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TimeSynchronizer_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TimeSynchronizer_1(TimeSynchronizer_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TimeSynchronizer_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TimeSynchronizer_1(TimeSynchronizer_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18200};

/// @brief Field <CurrentGroup>k__BackingField, offset: 0x10, size: 0x8, def value: None
 T  ____CurrentGroup_k__BackingField;

/// @brief Field <SynchronizeDefaultGroup>k__BackingField, offset: 0x18, size: 0x1, def value: None
 bool  ____SynchronizeDefaultGroup_k__BackingField;

/// @brief Field <NormalizedTime>k__BackingField, offset: 0x20, size: 0x8, def value: None
 double_t  ____NormalizedTime_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Animancer

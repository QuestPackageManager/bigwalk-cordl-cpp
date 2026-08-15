#pragma once
// IWYU pragma private; include "Animancer/MixerParameterTween_1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Animancer/zzzz__Key_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(MixerParameterTween_1)
namespace Animancer {
class IUpdatable;
}
namespace Animancer {
class Key_IListItem;
}
namespace Animancer {
template<typename TParameter>
class MixerState_1;
}
// Forward declare root types
namespace Animancer {
template<typename TParameter>
class MixerParameterTween_1;
}
// Write type traits
MARK_GEN_REF_T_PTR(::Animancer::MixerParameterTween_1);
DEFINE_IL2CPP_GEN_CLASS_PTR(::Animancer::MixerParameterTween_1, "Animancer", "MixerParameterTween`1");
// Dependencies Animancer.Key
namespace Animancer {
// cpp template
template<typename TParameter>
// Is value type: false
// CS Name: Animancer.MixerParameterTween`1<TParameter>
class CORDL_TYPE MixerParameterTween_1 : public ::Animancer::Key {
public:
// Declarations
 __declspec(property(get=get_Duration, put=set_Duration)) float_t  Duration;

 __declspec(property(get=get_EndValue, put=set_EndValue)) TParameter  EndValue;

 __declspec(property(get=get_IsActive)) bool  IsActive;

 __declspec(property(get=get_Mixer, put=set_Mixer)) ::Animancer::MixerState_1<TParameter>*  Mixer;

 __declspec(property(get=get_Progress, put=set_Progress)) float_t  Progress;

 __declspec(property(get=get_StartValue, put=set_StartValue)) TParameter  StartValue;

 __declspec(property(get=get_Time, put=set_Time)) float_t  Time;

/// @brief Field <Duration>k__BackingField, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get__Duration_k__BackingField, put=__cordl_internal_set__Duration_k__BackingField)) float_t  _Duration_k__BackingField;

/// @brief Field <EndValue>k__BackingField, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__EndValue_k__BackingField, put=__cordl_internal_set__EndValue_k__BackingField)) TParameter  _EndValue_k__BackingField;

/// @brief Field <Mixer>k__BackingField, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__Mixer_k__BackingField, put=__cordl_internal_set__Mixer_k__BackingField)) ::Animancer::MixerState_1<TParameter>*  _Mixer_k__BackingField;

/// @brief Field <StartValue>k__BackingField, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__StartValue_k__BackingField, put=__cordl_internal_set__StartValue_k__BackingField)) TParameter  _StartValue_k__BackingField;

/// @brief Field <Time>k__BackingField, offset 0x34, size 0x4 
 __declspec(property(get=__cordl_internal_get__Time_k__BackingField, put=__cordl_internal_set__Time_k__BackingField)) float_t  _Time_k__BackingField;

/// @brief Convert operator to "::Animancer::IUpdatable"
constexpr operator  ::Animancer::IUpdatable*() noexcept;

/// @brief Convert operator to "::Animancer::Key_IListItem"
constexpr operator  ::Animancer::Key_IListItem*() noexcept;

/// @brief Method Animancer.IUpdatable.Update, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void Animancer_IUpdatable_Update() ;

/// @brief Method CalculateCurrentValue, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline TParameter CalculateCurrentValue() ;

static inline ::Animancer::MixerParameterTween_1<TParameter>* New_ctor() ;

static inline ::Animancer::MixerParameterTween_1<TParameter>* New_ctor(::Animancer::MixerState_1<TParameter>*  mixer) ;

/// @brief Method Start, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void Start(TParameter  endValue, float_t  duration) ;

/// @brief Method Stop, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void Stop() ;

constexpr float_t const& __cordl_internal_get__Duration_k__BackingField() const;

constexpr float_t& __cordl_internal_get__Duration_k__BackingField() ;

constexpr TParameter const& __cordl_internal_get__EndValue_k__BackingField() const;

constexpr TParameter& __cordl_internal_get__EndValue_k__BackingField() ;

constexpr ::Animancer::MixerState_1<TParameter>* const& __cordl_internal_get__Mixer_k__BackingField() const;

constexpr ::Animancer::MixerState_1<TParameter>*& __cordl_internal_get__Mixer_k__BackingField() ;

constexpr TParameter const& __cordl_internal_get__StartValue_k__BackingField() const;

constexpr TParameter& __cordl_internal_get__StartValue_k__BackingField() ;

constexpr float_t const& __cordl_internal_get__Time_k__BackingField() const;

constexpr float_t& __cordl_internal_get__Time_k__BackingField() ;

constexpr void __cordl_internal_set__Duration_k__BackingField(float_t  value) ;

constexpr void __cordl_internal_set__EndValue_k__BackingField(TParameter  value) ;

constexpr void __cordl_internal_set__Mixer_k__BackingField(::Animancer::MixerState_1<TParameter>*  value) ;

constexpr void __cordl_internal_set__StartValue_k__BackingField(TParameter  value) ;

constexpr void __cordl_internal_set__Time_k__BackingField(float_t  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(::Animancer::MixerState_1<TParameter>*  mixer) ;

/// @brief Method get_Duration, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline float_t get_Duration() ;

/// @brief Method get_EndValue, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline TParameter get_EndValue() ;

/// @brief Method get_IsActive, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline bool get_IsActive() ;

/// @brief Method get_Mixer, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::Animancer::MixerState_1<TParameter>* get_Mixer() ;

/// @brief Method get_Progress, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline float_t get_Progress() ;

/// @brief Method get_StartValue, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline TParameter get_StartValue() ;

/// @brief Method get_Time, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline float_t get_Time() ;

/// @brief Convert to "::Animancer::IUpdatable"
constexpr ::Animancer::IUpdatable* i___Animancer__IUpdatable() noexcept;

/// @brief Convert to "::Animancer::Key_IListItem"
constexpr ::Animancer::Key_IListItem* i___Animancer__Key_IListItem() noexcept;

/// @brief Method set_Duration, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void set_Duration(float_t  value) ;

/// @brief Method set_EndValue, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void set_EndValue(TParameter  value) ;

/// @brief Method set_Mixer, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void set_Mixer(::Animancer::MixerState_1<TParameter>*  value) ;

/// @brief Method set_Progress, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void set_Progress(float_t  value) ;

/// @brief Method set_StartValue, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void set_StartValue(TParameter  value) ;

/// @brief Method set_Time, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void set_Time(float_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MixerParameterTween_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MixerParameterTween_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MixerParameterTween_1(MixerParameterTween_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MixerParameterTween_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MixerParameterTween_1(MixerParameterTween_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18185};

/// @brief Field <Mixer>k__BackingField, offset: 0x18, size: 0x8, def value: None
 ::Animancer::MixerState_1<TParameter>*  ____Mixer_k__BackingField;

/// @brief Field <StartValue>k__BackingField, offset: 0x20, size: 0x8, def value: None
 TParameter  ____StartValue_k__BackingField;

/// @brief Field <EndValue>k__BackingField, offset: 0x28, size: 0x8, def value: None
 TParameter  ____EndValue_k__BackingField;

/// @brief Field <Duration>k__BackingField, offset: 0x30, size: 0x4, def value: None
 float_t  ____Duration_k__BackingField;

/// @brief Field <Time>k__BackingField, offset: 0x34, size: 0x4, def value: None
 float_t  ____Time_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Animancer

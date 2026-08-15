#pragma once
// IWYU pragma private; include "Animancer/MixerTransition_2.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Animancer/zzzz__ManualMixerTransition_1_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(MixerTransition_2)
namespace Animancer {
template<typename T>
class ICopyable_1;
}
// Forward declare root types
namespace Animancer {
template<typename TMixer,typename TParameter>
class MixerTransition_2;
}
// Write type traits
MARK_GEN_REF_T_PTR(::Animancer::MixerTransition_2);
DEFINE_IL2CPP_GEN_CLASS_PTR(::Animancer::MixerTransition_2, "Animancer", "MixerTransition`2");
// Dependencies Animancer.ManualMixerTransition`1<TMixer>
namespace Animancer {
// cpp template
template<typename TMixer,typename TParameter>
// Is value type: false
// CS Name: Animancer.MixerTransition`2<TMixer,TParameter>
class CORDL_TYPE MixerTransition_2 : public ::Animancer::ManualMixerTransition_1<TMixer> {
public:
// Declarations
 __declspec(property(get=get_DefaultParameter)) TParameter  DefaultParameter;

 __declspec(property(get=get_Thresholds)) ::ArrayW<TParameter>  Thresholds;

/// @brief Field _DefaultParameter, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get__DefaultParameter, put=__cordl_internal_set__DefaultParameter)) TParameter  _DefaultParameter;

/// @brief Field _Thresholds, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get__Thresholds, put=__cordl_internal_set__Thresholds)) ::ArrayW<TParameter>  _Thresholds;

/// @brief Convert operator to "::Animancer::ICopyable_1<::Animancer::MixerTransition_2<TMixer,TParameter>*>"
constexpr operator  ::Animancer::ICopyable_1<::Animancer::MixerTransition_2<TMixer,TParameter>*>*() noexcept;

/// @brief Method CopyFrom, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void CopyFrom(::Animancer::MixerTransition_2<TMixer,TParameter>*  copyFrom) ;

/// @brief Method InitializeState, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void InitializeState() ;

static inline ::Animancer::MixerTransition_2<TMixer,TParameter>* New_ctor() ;

constexpr TParameter const& __cordl_internal_get__DefaultParameter() const;

constexpr TParameter& __cordl_internal_get__DefaultParameter() ;

constexpr ::ArrayW<TParameter> const& __cordl_internal_get__Thresholds() const;

constexpr ::ArrayW<TParameter>& __cordl_internal_get__Thresholds() ;

constexpr void __cordl_internal_set__DefaultParameter(TParameter  value) ;

constexpr void __cordl_internal_set__Thresholds(::ArrayW<TParameter>  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_DefaultParameter, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::by_ref<TParameter> get_DefaultParameter() ;

/// @brief Method get_Thresholds, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::by_ref<::ArrayW<TParameter>> get_Thresholds() ;

/// @brief Convert to "::Animancer::ICopyable_1<::Animancer::MixerTransition_2<TMixer,TParameter>*>"
constexpr ::Animancer::ICopyable_1<::Animancer::MixerTransition_2<TMixer,TParameter>*>* i___Animancer__ICopyable_1___Animancer__MixerTransition_2_TMixer_TParameter___() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MixerTransition_2() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MixerTransition_2", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MixerTransition_2(MixerTransition_2 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MixerTransition_2", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MixerTransition_2(MixerTransition_2 const& ) = delete;

/// @brief Field DefaultParameterField offset 0xffffffff size 0x8
static constexpr ::ConstString  DefaultParameterField{u"_DefaultParameter"};

/// @brief Field ThresholdsField offset 0xffffffff size 0x8
static constexpr ::ConstString  ThresholdsField{u"_Thresholds"};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18233};

/// @brief Field _Thresholds, offset: 0x58, size: 0x8, def value: None
 ::ArrayW<TParameter>  ____Thresholds;

/// @brief Field _DefaultParameter, offset: 0x60, size: 0x8, def value: None
 TParameter  ____DefaultParameter;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Animancer

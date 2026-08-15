#pragma once
// IWYU pragma private; include "WaveHarmonic/Crest/Internal/ManagedBehaviour_1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "WaveHarmonic/Crest/Internal/zzzz__CustomBehaviour_def.hpp"
CORDL_MODULE_EXPORT(ManagedBehaviour_1)
namespace System {
template<typename T>
class Action_1;
}
// Forward declare root types
namespace WaveHarmonic::Crest::Internal {
template<typename T>
class ManagedBehaviour_1;
}
// Write type traits
MARK_GEN_REF_T_PTR(::WaveHarmonic::Crest::Internal::ManagedBehaviour_1);
DEFINE_IL2CPP_GEN_CLASS_PTR(::WaveHarmonic::Crest::Internal::ManagedBehaviour_1, "WaveHarmonic.Crest.Internal", "ManagedBehaviour`1");
// Dependencies WaveHarmonic.Crest.Internal.CustomBehaviour
namespace WaveHarmonic::Crest::Internal {
// cpp template
template<typename T>
// Is value type: false
// CS Name: WaveHarmonic.Crest.Internal.ManagedBehaviour`1<T>
class CORDL_TYPE ManagedBehaviour_1 : public ::WaveHarmonic::Crest::Internal::CustomBehaviour {
public:
// Declarations
 __declspec(property(get=get_OnDisableMethod)) ::System::Action_1<T>*  OnDisableMethod;

 __declspec(property(get=get_OnEnableMethod)) ::System::Action_1<T>*  OnEnableMethod;

 __declspec(property(get=get_OnFixedUpdateMethod)) ::System::Action_1<T>*  OnFixedUpdateMethod;

 __declspec(property(get=get_OnLateUpdateMethod)) ::System::Action_1<T>*  OnLateUpdateMethod;

 __declspec(property(get=get_OnUpdateMethod)) ::System::Action_1<T>*  OnUpdateMethod;

/// @brief Field _OnDisable, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__OnDisable, put=__cordl_internal_set__OnDisable)) ::System::Action_1<T>*  _OnDisable;

/// @brief Field _OnEnable, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__OnEnable, put=__cordl_internal_set__OnEnable)) ::System::Action_1<T>*  _OnEnable;

/// @brief Field _OnFixedUpdate, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__OnFixedUpdate, put=__cordl_internal_set__OnFixedUpdate)) ::System::Action_1<T>*  _OnFixedUpdate;

/// @brief Field _OnLateUpdate, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__OnLateUpdate, put=__cordl_internal_set__OnLateUpdate)) ::System::Action_1<T>*  _OnLateUpdate;

/// @brief Field _OnUpdate, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__OnUpdate, put=__cordl_internal_set__OnUpdate)) ::System::Action_1<T>*  _OnUpdate;

static inline ::WaveHarmonic::Crest::Internal::ManagedBehaviour_1<T>* New_ctor() ;

/// @brief Method OnDisable, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void OnEnable() ;

/// @brief Method UpdateSubscription, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void UpdateSubscription(bool  listen) ;

constexpr ::System::Action_1<T>* const& __cordl_internal_get__OnDisable() const;

constexpr ::System::Action_1<T>*& __cordl_internal_get__OnDisable() ;

constexpr ::System::Action_1<T>* const& __cordl_internal_get__OnEnable() const;

constexpr ::System::Action_1<T>*& __cordl_internal_get__OnEnable() ;

constexpr ::System::Action_1<T>* const& __cordl_internal_get__OnFixedUpdate() const;

constexpr ::System::Action_1<T>*& __cordl_internal_get__OnFixedUpdate() ;

constexpr ::System::Action_1<T>* const& __cordl_internal_get__OnLateUpdate() const;

constexpr ::System::Action_1<T>*& __cordl_internal_get__OnLateUpdate() ;

constexpr ::System::Action_1<T>* const& __cordl_internal_get__OnUpdate() const;

constexpr ::System::Action_1<T>*& __cordl_internal_get__OnUpdate() ;

constexpr void __cordl_internal_set__OnDisable(::System::Action_1<T>*  value) ;

constexpr void __cordl_internal_set__OnEnable(::System::Action_1<T>*  value) ;

constexpr void __cordl_internal_set__OnFixedUpdate(::System::Action_1<T>*  value) ;

constexpr void __cordl_internal_set__OnLateUpdate(::System::Action_1<T>*  value) ;

constexpr void __cordl_internal_set__OnUpdate(::System::Action_1<T>*  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_OnDisableMethod, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::System::Action_1<T>* get_OnDisableMethod() ;

/// @brief Method get_OnEnableMethod, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::System::Action_1<T>* get_OnEnableMethod() ;

/// @brief Method get_OnFixedUpdateMethod, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::System::Action_1<T>* get_OnFixedUpdateMethod() ;

/// @brief Method get_OnLateUpdateMethod, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::System::Action_1<T>* get_OnLateUpdateMethod() ;

/// @brief Method get_OnUpdateMethod, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::System::Action_1<T>* get_OnUpdateMethod() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ManagedBehaviour_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ManagedBehaviour_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ManagedBehaviour_1(ManagedBehaviour_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ManagedBehaviour_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ManagedBehaviour_1(ManagedBehaviour_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20160};

/// @brief Field _OnUpdate, offset: 0x28, size: 0x8, def value: None
 ::System::Action_1<T>*  ____OnUpdate;

/// @brief Field _OnLateUpdate, offset: 0x30, size: 0x8, def value: None
 ::System::Action_1<T>*  ____OnLateUpdate;

/// @brief Field _OnFixedUpdate, offset: 0x38, size: 0x8, def value: None
 ::System::Action_1<T>*  ____OnFixedUpdate;

/// @brief Field _OnEnable, offset: 0x40, size: 0x8, def value: None
 ::System::Action_1<T>*  ____OnEnable;

/// @brief Field _OnDisable, offset: 0x48, size: 0x8, def value: None
 ::System::Action_1<T>*  ____OnDisable;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def WaveHarmonic::Crest::Internal

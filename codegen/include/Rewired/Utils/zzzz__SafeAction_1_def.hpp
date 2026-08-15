#pragma once
// IWYU pragma private; include "Rewired/Utils/SafeAction_1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Rewired/Utils/zzzz__SafeDelegate_1_def.hpp"
CORDL_MODULE_EXPORT(SafeAction_1)
namespace System {
template<typename T>
class Action_1;
}
namespace System {
template<typename T1,typename T2>
class Action_2;
}
namespace System {
class Exception;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Rewired::Utils {
template<typename T>
class SafeAction_1;
}
// Write type traits
MARK_GEN_REF_T_PTR(::Rewired::Utils::SafeAction_1);
DEFINE_IL2CPP_GEN_CLASS_PTR(::Rewired::Utils::SafeAction_1, "Rewired.Utils", "SafeAction`1");
// Dependencies Rewired.Utils.SafeDelegate`1<T>
namespace Rewired::Utils {
// cpp template
template<typename T>
// Is value type: false
// CS Name: Rewired.Utils.SafeAction`1<T>
class CORDL_TYPE SafeAction_1 : public ::Rewired::Utils::SafeDelegate_1<::System::Action_1<T>*> {
public:
// Declarations
/// @brief Field ACSyZjFKfyGBbSjRWoWeqhKppxmU, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_ACSyZjFKfyGBbSjRWoWeqhKppxmU, put=setStaticF_ACSyZjFKfyGBbSjRWoWeqhKppxmU)) ::System::Action_2<::System::Object*,::System::Action_1<T>*>*  ACSyZjFKfyGBbSjRWoWeqhKppxmU;

/// @brief Field aimBSQcwOcOwAjWHBnHWozGXeGyMA, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_aimBSQcwOcOwAjWHBnHWozGXeGyMA, put=__cordl_internal_set_aimBSQcwOcOwAjWHBnHWozGXeGyMA)) T  aimBSQcwOcOwAjWHBnHWozGXeGyMA;

/// @brief Method Clone, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::System::Object* Clone() ;

/// @brief Method EefIxVbmOMTnCmydLddMEiaHbXaSb, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline void EefIxVbmOMTnCmydLddMEiaHbXaSb(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::Action_1<T>*  _cordl_fixed_empty_name_whitespace_param_1) ;

/// @brief Method Invoke, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void Invoke(T  arg0) ;

/// @brief Method NcWWUuOmDvaxhdphZEFCIMXgITEb, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline ::System::Action_2<::System::Object*,::System::Action_1<T>*>* NcWWUuOmDvaxhdphZEFCIMXgITEb() ;

static inline ::Rewired::Utils::SafeAction_1<T>* New_ctor() ;

static inline ::Rewired::Utils::SafeAction_1<T>* New_ctor(::Rewired::Utils::SafeAction_1<T>*  _cordl_fixed_empty_name_whitespace) ;

static inline ::Rewired::Utils::SafeAction_1<T>* New_ctor(::System::Action_1<::System::Exception*>*  _cordl_fixed_empty_name_whitespace) ;

constexpr T const& __cordl_internal_get_aimBSQcwOcOwAjWHBnHWozGXeGyMA() const;

constexpr T& __cordl_internal_get_aimBSQcwOcOwAjWHBnHWozGXeGyMA() ;

constexpr void __cordl_internal_set_aimBSQcwOcOwAjWHBnHWozGXeGyMA(T  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(::Rewired::Utils::SafeAction_1<T>*  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(::System::Action_1<::System::Exception*>*  _cordl_fixed_empty_name_whitespace) ;

static inline ::System::Action_2<::System::Object*,::System::Action_1<T>*>* getStaticF_ACSyZjFKfyGBbSjRWoWeqhKppxmU() ;

/// @brief Method op_Addition, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline ::Rewired::Utils::SafeAction_1<T>* op_Addition(::Rewired::Utils::SafeAction_1<T>*  eventList, ::System::Action_1<T>*  listener) ;

/// @brief Method op_Implicit, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline ::Rewired::Utils::SafeAction_1<T>* op_Implicit___Rewired__Utils__SafeAction_1_T__(::System::Action_1<T>*  obj) ;

/// @brief Method op_Implicit, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline ::System::Action_1<T>* op_Implicit___System__Action_1_T__(::Rewired::Utils::SafeAction_1<T>*  obj) ;

/// @brief Method op_Subtraction, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline ::Rewired::Utils::SafeAction_1<T>* op_Subtraction(::Rewired::Utils::SafeAction_1<T>*  eventList, ::System::Action_1<T>*  listener) ;

static inline void setStaticF_ACSyZjFKfyGBbSjRWoWeqhKppxmU(::System::Action_2<::System::Object*,::System::Action_1<T>*>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SafeAction_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SafeAction_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SafeAction_1(SafeAction_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SafeAction_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SafeAction_1(SafeAction_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2905};

/// @brief Field aimBSQcwOcOwAjWHBnHWozGXeGyMA, offset: 0x28, size: 0x8, def value: None
 T  ___aimBSQcwOcOwAjWHBnHWozGXeGyMA;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Rewired::Utils

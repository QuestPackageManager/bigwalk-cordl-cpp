#pragma once
// IWYU pragma private; include "Rewired/Utils/Classes/Utility/ValueWatcher_1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Rewired/Utils/Classes/Utility/zzzz__ValueWatcher_def.hpp"
CORDL_MODULE_EXPORT(ValueWatcher_1)
namespace Rewired::Utils::Classes::Utility {
struct ValueWatcher_cwCCCzmjklmzLtXDCaZqsFdhCGFY;
}
namespace System::Collections::Generic {
template<typename T>
class IEqualityComparer_1;
}
namespace System {
template<typename T>
class Action_1;
}
namespace System {
class Delegate;
}
namespace System {
template<typename TResult>
class Func_1;
}
// Forward declare root types
namespace Rewired::Utils::Classes::Utility {
template<typename T>
class ValueWatcher_1;
}
// Write type traits
MARK_GEN_REF_T_PTR(::Rewired::Utils::Classes::Utility::ValueWatcher_1);
DEFINE_IL2CPP_GEN_CLASS_PTR(::Rewired::Utils::Classes::Utility::ValueWatcher_1, "Rewired.Utils.Classes.Utility", "ValueWatcher`1");
// Dependencies Rewired.Utils.Classes.Utility.ValueWatcher
namespace Rewired::Utils::Classes::Utility {
// cpp template
template<typename T>
// Is value type: false
// CS Name: Rewired.Utils.Classes.Utility.ValueWatcher`1<T>
class CORDL_TYPE ValueWatcher_1 : public ::Rewired::Utils::Classes::Utility::ValueWatcher {
public:
// Declarations
/// @brief Field CFaPkWYOVWJRmPoCawbdKaxnHHCX, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_CFaPkWYOVWJRmPoCawbdKaxnHHCX, put=__cordl_internal_set_CFaPkWYOVWJRmPoCawbdKaxnHHCX)) ::System::Func_1<T>*  CFaPkWYOVWJRmPoCawbdKaxnHHCX;

/// @brief Field DvDeCpgHcUWseLIhqTYqAfccacTv, offset 0x10, size 0x1 
 __declspec(property(get=__cordl_internal_get_DvDeCpgHcUWseLIhqTYqAfccacTv, put=__cordl_internal_set_DvDeCpgHcUWseLIhqTYqAfccacTv)) bool  DvDeCpgHcUWseLIhqTYqAfccacTv;

/// @brief Field FNxaPZqawlcOuZRJJhbAAgrWJEpS, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_FNxaPZqawlcOuZRJJhbAAgrWJEpS, put=setStaticF_FNxaPZqawlcOuZRJJhbAAgrWJEpS)) ::System::Collections::Generic::IEqualityComparer_1<T>*  FNxaPZqawlcOuZRJJhbAAgrWJEpS;

/// @brief Field FYuUHbnFtrOYxTHRdtezDuowTuuG, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get_FYuUHbnFtrOYxTHRdtezDuowTuuG, put=__cordl_internal_set_FYuUHbnFtrOYxTHRdtezDuowTuuG)) bool  FYuUHbnFtrOYxTHRdtezDuowTuuG;

/// @brief Field HvzsZkzDLeQdzmliYGbgcnaFSLrz, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_HvzsZkzDLeQdzmliYGbgcnaFSLrz, put=__cordl_internal_set_HvzsZkzDLeQdzmliYGbgcnaFSLrz)) T  HvzsZkzDLeQdzmliYGbgcnaFSLrz;

/// @brief Field YguOYbNncOVJMHMqhdAvDlNEiXpEb, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_YguOYbNncOVJMHMqhdAvDlNEiXpEb, put=__cordl_internal_set_YguOYbNncOVJMHMqhdAvDlNEiXpEb)) ::System::Action_1<T>*  YguOYbNncOVJMHMqhdAvDlNEiXpEb;

 __declspec(property(get=get_autoTriggerEvent, put=set_autoTriggerEvent)) bool  autoTriggerEvent;

 __declspec(property(get=get_changed)) bool  changed;

 __declspec(property(get=get_getValueDelegate, put=set_getValueDelegate)) ::System::Func_1<T>*  getValueDelegate;

 __declspec(property(get=get_value)) T  value;

/// @brief Method AddEventListener, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void AddEventListener(::Rewired::Utils::Classes::Utility::ValueWatcher_cwCCCzmjklmzLtXDCaZqsFdhCGFY  eventType, ::System::Delegate*  listener) ;

static inline ::Rewired::Utils::Classes::Utility::ValueWatcher_1<T>* New_ctor(T  _cordl_fixed_empty_name_whitespace, ::System::Func_1<T>*  _cordl_fixed_empty_name_whitespace_param_1, bool  _cordl_fixed_empty_name_whitespace_param_2) ;

static inline ::Rewired::Utils::Classes::Utility::ValueWatcher_1<T>* New_ctor(T  _cordl_fixed_empty_name_whitespace, bool  _cordl_fixed_empty_name_whitespace_param_1) ;

/// @brief Method RemoveEventListener, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void RemoveEventListener(::Rewired::Utils::Classes::Utility::ValueWatcher_cwCCCzmjklmzLtXDCaZqsFdhCGFY  eventType, ::System::Delegate*  listener) ;

/// @brief Method Set, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline bool Set(T  value) ;

/// @brief Method TriggerEvent, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline bool TriggerEvent() ;

/// @brief Method Update, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline bool Update() ;

/// @brief Method Use, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline bool Use() ;

constexpr ::System::Func_1<T>* const& __cordl_internal_get_CFaPkWYOVWJRmPoCawbdKaxnHHCX() const;

constexpr ::System::Func_1<T>*& __cordl_internal_get_CFaPkWYOVWJRmPoCawbdKaxnHHCX() ;

constexpr bool const& __cordl_internal_get_DvDeCpgHcUWseLIhqTYqAfccacTv() const;

constexpr bool& __cordl_internal_get_DvDeCpgHcUWseLIhqTYqAfccacTv() ;

constexpr bool const& __cordl_internal_get_FYuUHbnFtrOYxTHRdtezDuowTuuG() const;

constexpr bool& __cordl_internal_get_FYuUHbnFtrOYxTHRdtezDuowTuuG() ;

constexpr T const& __cordl_internal_get_HvzsZkzDLeQdzmliYGbgcnaFSLrz() const;

constexpr T& __cordl_internal_get_HvzsZkzDLeQdzmliYGbgcnaFSLrz() ;

constexpr ::System::Action_1<T>* const& __cordl_internal_get_YguOYbNncOVJMHMqhdAvDlNEiXpEb() const;

constexpr ::System::Action_1<T>*& __cordl_internal_get_YguOYbNncOVJMHMqhdAvDlNEiXpEb() ;

constexpr void __cordl_internal_set_CFaPkWYOVWJRmPoCawbdKaxnHHCX(::System::Func_1<T>*  value) ;

constexpr void __cordl_internal_set_DvDeCpgHcUWseLIhqTYqAfccacTv(bool  value) ;

constexpr void __cordl_internal_set_FYuUHbnFtrOYxTHRdtezDuowTuuG(bool  value) ;

constexpr void __cordl_internal_set_HvzsZkzDLeQdzmliYGbgcnaFSLrz(T  value) ;

constexpr void __cordl_internal_set_YguOYbNncOVJMHMqhdAvDlNEiXpEb(::System::Action_1<T>*  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(T  _cordl_fixed_empty_name_whitespace, ::System::Func_1<T>*  _cordl_fixed_empty_name_whitespace_param_1, bool  _cordl_fixed_empty_name_whitespace_param_2) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(T  _cordl_fixed_empty_name_whitespace, bool  _cordl_fixed_empty_name_whitespace_param_1) ;

/// @brief Method add_ChangedEvent, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void add_ChangedEvent(::System::Action_1<T>*  value) ;

static inline ::System::Collections::Generic::IEqualityComparer_1<T>* getStaticF_FNxaPZqawlcOuZRJJhbAAgrWJEpS() ;

/// @brief Method get_autoTriggerEvent, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline bool get_autoTriggerEvent() ;

/// @brief Method get_changed, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline bool get_changed() ;

/// @brief Method get_getValueDelegate, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::System::Func_1<T>* get_getValueDelegate() ;

/// @brief Method get_value, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline T get_value() ;

/// @brief Method remove_ChangedEvent, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void remove_ChangedEvent(::System::Action_1<T>*  value) ;

static inline void setStaticF_FNxaPZqawlcOuZRJJhbAAgrWJEpS(::System::Collections::Generic::IEqualityComparer_1<T>*  value) ;

/// @brief Method set_autoTriggerEvent, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void set_autoTriggerEvent(bool  value) ;

/// @brief Method set_getValueDelegate, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void set_getValueDelegate(::System::Func_1<T>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ValueWatcher_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ValueWatcher_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ValueWatcher_1(ValueWatcher_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ValueWatcher_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ValueWatcher_1(ValueWatcher_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2997};

/// @brief Field DvDeCpgHcUWseLIhqTYqAfccacTv, offset: 0x10, size: 0x1, def value: None
 bool  ___DvDeCpgHcUWseLIhqTYqAfccacTv;

/// @brief Field HvzsZkzDLeQdzmliYGbgcnaFSLrz, offset: 0x18, size: 0x8, def value: None
 T  ___HvzsZkzDLeQdzmliYGbgcnaFSLrz;

/// @brief Field FYuUHbnFtrOYxTHRdtezDuowTuuG, offset: 0x20, size: 0x1, def value: None
 bool  ___FYuUHbnFtrOYxTHRdtezDuowTuuG;

/// @brief Field CFaPkWYOVWJRmPoCawbdKaxnHHCX, offset: 0x28, size: 0x8, def value: None
 ::System::Func_1<T>*  ___CFaPkWYOVWJRmPoCawbdKaxnHHCX;

/// @brief Field YguOYbNncOVJMHMqhdAvDlNEiXpEb, offset: 0x30, size: 0x8, def value: None
 ::System::Action_1<T>*  ___YguOYbNncOVJMHMqhdAvDlNEiXpEb;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Rewired::Utils::Classes::Utility

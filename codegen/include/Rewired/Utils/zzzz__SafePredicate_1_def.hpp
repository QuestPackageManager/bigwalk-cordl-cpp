#pragma once
// IWYU pragma private; include "Rewired/Utils/SafePredicate_1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Rewired/Utils/zzzz__SafeDelegate_1_def.hpp"
CORDL_MODULE_EXPORT(SafePredicate_1)
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
namespace System {
template<typename T>
class Predicate_1;
}
// Forward declare root types
namespace Rewired::Utils {
template<typename T>
class SafePredicate_1;
}
// Write type traits
MARK_GEN_REF_T_PTR(::Rewired::Utils::SafePredicate_1);
DEFINE_IL2CPP_GEN_CLASS_PTR(::Rewired::Utils::SafePredicate_1, "Rewired.Utils", "SafePredicate`1");
// Dependencies Rewired.Utils.SafeDelegate`1<T>
namespace Rewired::Utils {
// cpp template
template<typename T>
// Is value type: false
// CS Name: Rewired.Utils.SafePredicate`1<T>
class CORDL_TYPE SafePredicate_1 : public ::Rewired::Utils::SafeDelegate_1<::System::Predicate_1<T>*> {
public:
// Declarations
/// @brief Field LlZuvTEhqJKCCialLvZNJKzvUWKF, offset 0x30, size 0x1 
 __declspec(property(get=__cordl_internal_get_LlZuvTEhqJKCCialLvZNJKzvUWKF, put=__cordl_internal_set_LlZuvTEhqJKCCialLvZNJKzvUWKF)) bool  LlZuvTEhqJKCCialLvZNJKzvUWKF;

/// @brief Field PdVCpoGdxFyuzNXzEMcguFcfeOfAA, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_PdVCpoGdxFyuzNXzEMcguFcfeOfAA, put=__cordl_internal_set_PdVCpoGdxFyuzNXzEMcguFcfeOfAA)) T  PdVCpoGdxFyuzNXzEMcguFcfeOfAA;

/// @brief Field vQOzdThzSOQUrPVrxtUKqgDTGTQp, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_vQOzdThzSOQUrPVrxtUKqgDTGTQp, put=setStaticF_vQOzdThzSOQUrPVrxtUKqgDTGTQp)) ::System::Action_2<::System::Object*,::System::Predicate_1<T>*>*  vQOzdThzSOQUrPVrxtUKqgDTGTQp;

/// @brief Method Clone, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::System::Object* Clone() ;

/// @brief Method Invoke, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline bool Invoke(T  arg0) ;

static inline ::Rewired::Utils::SafePredicate_1<T>* New_ctor() ;

static inline ::Rewired::Utils::SafePredicate_1<T>* New_ctor(::Rewired::Utils::SafePredicate_1<T>*  _cordl_fixed_empty_name_whitespace) ;

static inline ::Rewired::Utils::SafePredicate_1<T>* New_ctor(::System::Action_1<::System::Exception*>*  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method QQbGnwyWRmACOZDPQZIIpjWSvCHj, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline void QQbGnwyWRmACOZDPQZIIpjWSvCHj(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::Predicate_1<T>*  _cordl_fixed_empty_name_whitespace_param_1) ;

constexpr bool const& __cordl_internal_get_LlZuvTEhqJKCCialLvZNJKzvUWKF() const;

constexpr bool& __cordl_internal_get_LlZuvTEhqJKCCialLvZNJKzvUWKF() ;

constexpr T const& __cordl_internal_get_PdVCpoGdxFyuzNXzEMcguFcfeOfAA() const;

constexpr T& __cordl_internal_get_PdVCpoGdxFyuzNXzEMcguFcfeOfAA() ;

constexpr void __cordl_internal_set_LlZuvTEhqJKCCialLvZNJKzvUWKF(bool  value) ;

constexpr void __cordl_internal_set_PdVCpoGdxFyuzNXzEMcguFcfeOfAA(T  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(::Rewired::Utils::SafePredicate_1<T>*  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(::System::Action_1<::System::Exception*>*  _cordl_fixed_empty_name_whitespace) ;

static inline ::System::Action_2<::System::Object*,::System::Predicate_1<T>*>* getStaticF_vQOzdThzSOQUrPVrxtUKqgDTGTQp() ;

/// @brief Method op_Addition, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline ::Rewired::Utils::SafePredicate_1<T>* op_Addition(::Rewired::Utils::SafePredicate_1<T>*  eventList, ::System::Predicate_1<T>*  predicate) ;

/// @brief Method op_Implicit, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline ::Rewired::Utils::SafePredicate_1<T>* op_Implicit___Rewired__Utils__SafePredicate_1_T__(::System::Predicate_1<T>*  obj) ;

/// @brief Method op_Implicit, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline ::System::Predicate_1<T>* op_Implicit___System__Predicate_1_T__(::Rewired::Utils::SafePredicate_1<T>*  obj) ;

/// @brief Method op_Subtraction, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline ::Rewired::Utils::SafePredicate_1<T>* op_Subtraction(::Rewired::Utils::SafePredicate_1<T>*  eventList, ::System::Predicate_1<T>*  predicate) ;

static inline void setStaticF_vQOzdThzSOQUrPVrxtUKqgDTGTQp(::System::Action_2<::System::Object*,::System::Predicate_1<T>*>*  value) ;

/// @brief Method tzJaddkMGlsxVZclbiSnHTdlXZeaA, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline ::System::Action_2<::System::Object*,::System::Predicate_1<T>*>* tzJaddkMGlsxVZclbiSnHTdlXZeaA() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SafePredicate_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SafePredicate_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SafePredicate_1(SafePredicate_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SafePredicate_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SafePredicate_1(SafePredicate_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2908};

/// @brief Field PdVCpoGdxFyuzNXzEMcguFcfeOfAA, offset: 0x28, size: 0x8, def value: None
 T  ___PdVCpoGdxFyuzNXzEMcguFcfeOfAA;

/// @brief Field LlZuvTEhqJKCCialLvZNJKzvUWKF, offset: 0x30, size: 0x1, def value: None
 bool  ___LlZuvTEhqJKCCialLvZNJKzvUWKF;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Rewired::Utils

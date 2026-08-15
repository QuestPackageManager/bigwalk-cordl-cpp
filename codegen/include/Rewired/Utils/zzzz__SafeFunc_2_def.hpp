#pragma once
// IWYU pragma private; include "Rewired/Utils/SafeFunc_2.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Rewired/Utils/zzzz__SafeDelegate_1_def.hpp"
CORDL_MODULE_EXPORT(SafeFunc_2)
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
template<typename T,typename TResult>
class Func_2;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Rewired::Utils {
template<typename T,typename TResult>
class SafeFunc_2;
}
// Write type traits
MARK_GEN_REF_T_PTR(::Rewired::Utils::SafeFunc_2);
DEFINE_IL2CPP_GEN_CLASS_PTR(::Rewired::Utils::SafeFunc_2, "Rewired.Utils", "SafeFunc`2");
// Dependencies Rewired.Utils.SafeDelegate`1<T>
namespace Rewired::Utils {
// cpp template
template<typename T,typename TResult>
// Is value type: false
// CS Name: Rewired.Utils.SafeFunc`2<T,TResult>
class CORDL_TYPE SafeFunc_2 : public ::Rewired::Utils::SafeDelegate_1<::System::Func_2<T,TResult>*> {
public:
// Declarations
/// @brief Field bEYkDMqAJbqCpsVOqnNaLgkVIjHl, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_bEYkDMqAJbqCpsVOqnNaLgkVIjHl, put=setStaticF_bEYkDMqAJbqCpsVOqnNaLgkVIjHl)) ::System::Action_2<::System::Object*,::System::Func_2<T,TResult>*>*  bEYkDMqAJbqCpsVOqnNaLgkVIjHl;

/// @brief Field jVmTuXSwOPzMbhJFxcDnuDFMRIWG, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_jVmTuXSwOPzMbhJFxcDnuDFMRIWG, put=__cordl_internal_set_jVmTuXSwOPzMbhJFxcDnuDFMRIWG)) TResult  jVmTuXSwOPzMbhJFxcDnuDFMRIWG;

/// @brief Field laRyhXDGWNtzGPfrqmsltToPRDmc, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_laRyhXDGWNtzGPfrqmsltToPRDmc, put=__cordl_internal_set_laRyhXDGWNtzGPfrqmsltToPRDmc)) T  laRyhXDGWNtzGPfrqmsltToPRDmc;

/// @brief Method Clone, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::System::Object* Clone() ;

/// @brief Method Invoke, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline TResult Invoke(T  arg0) ;

static inline ::Rewired::Utils::SafeFunc_2<T,TResult>* New_ctor() ;

static inline ::Rewired::Utils::SafeFunc_2<T,TResult>* New_ctor(::Rewired::Utils::SafeFunc_2<T,TResult>*  _cordl_fixed_empty_name_whitespace) ;

static inline ::Rewired::Utils::SafeFunc_2<T,TResult>* New_ctor(::System::Action_1<::System::Exception*>*  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method TxbNvAIfwTcwfcQCRvrXHGiJOraU, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline ::System::Action_2<::System::Object*,::System::Func_2<T,TResult>*>* TxbNvAIfwTcwfcQCRvrXHGiJOraU() ;

constexpr TResult const& __cordl_internal_get_jVmTuXSwOPzMbhJFxcDnuDFMRIWG() const;

constexpr TResult& __cordl_internal_get_jVmTuXSwOPzMbhJFxcDnuDFMRIWG() ;

constexpr T const& __cordl_internal_get_laRyhXDGWNtzGPfrqmsltToPRDmc() const;

constexpr T& __cordl_internal_get_laRyhXDGWNtzGPfrqmsltToPRDmc() ;

constexpr void __cordl_internal_set_jVmTuXSwOPzMbhJFxcDnuDFMRIWG(TResult  value) ;

constexpr void __cordl_internal_set_laRyhXDGWNtzGPfrqmsltToPRDmc(T  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(::Rewired::Utils::SafeFunc_2<T,TResult>*  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(::System::Action_1<::System::Exception*>*  _cordl_fixed_empty_name_whitespace) ;

static inline ::System::Action_2<::System::Object*,::System::Func_2<T,TResult>*>* getStaticF_bEYkDMqAJbqCpsVOqnNaLgkVIjHl() ;

/// @brief Method op_Addition, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline ::Rewired::Utils::SafeFunc_2<T,TResult>* op_Addition(::Rewired::Utils::SafeFunc_2<T,TResult>*  eventList, ::System::Func_2<T,TResult>*  func) ;

/// @brief Method op_Implicit, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline ::Rewired::Utils::SafeFunc_2<T,TResult>* op_Implicit___Rewired__Utils__SafeFunc_2_T_TResult__(::System::Func_2<T,TResult>*  obj) ;

/// @brief Method op_Implicit, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline ::System::Func_2<T,TResult>* op_Implicit___System__Func_2_T_TResult__(::Rewired::Utils::SafeFunc_2<T,TResult>*  obj) ;

/// @brief Method op_Subtraction, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline ::Rewired::Utils::SafeFunc_2<T,TResult>* op_Subtraction(::Rewired::Utils::SafeFunc_2<T,TResult>*  eventList, ::System::Func_2<T,TResult>*  func) ;

/// @brief Method rsREJJEByaTtXljCEnmeIGKoBlRz, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline void rsREJJEByaTtXljCEnmeIGKoBlRz(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::Func_2<T,TResult>*  _cordl_fixed_empty_name_whitespace_param_1) ;

static inline void setStaticF_bEYkDMqAJbqCpsVOqnNaLgkVIjHl(::System::Action_2<::System::Object*,::System::Func_2<T,TResult>*>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SafeFunc_2() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SafeFunc_2", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SafeFunc_2(SafeFunc_2 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SafeFunc_2", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SafeFunc_2(SafeFunc_2 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2907};

/// @brief Field laRyhXDGWNtzGPfrqmsltToPRDmc, offset: 0x28, size: 0x8, def value: None
 T  ___laRyhXDGWNtzGPfrqmsltToPRDmc;

/// @brief Field jVmTuXSwOPzMbhJFxcDnuDFMRIWG, offset: 0x30, size: 0x8, def value: None
 TResult  ___jVmTuXSwOPzMbhJFxcDnuDFMRIWG;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Rewired::Utils

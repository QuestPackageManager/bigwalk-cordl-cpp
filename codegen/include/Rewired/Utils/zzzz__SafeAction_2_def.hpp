#pragma once
// IWYU pragma private; include "Rewired/Utils/SafeAction_2.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Rewired/Utils/zzzz__SafeDelegate_1_def.hpp"
CORDL_MODULE_EXPORT(SafeAction_2)
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
template<typename T,typename T2>
class SafeAction_2;
}
// Write type traits
MARK_GEN_REF_T_PTR(::Rewired::Utils::SafeAction_2);
DEFINE_IL2CPP_GEN_CLASS_PTR(::Rewired::Utils::SafeAction_2, "Rewired.Utils", "SafeAction`2");
// Dependencies Rewired.Utils.SafeDelegate`1<T>
namespace Rewired::Utils {
// cpp template
template<typename T,typename T2>
// Is value type: false
// CS Name: Rewired.Utils.SafeAction`2<T,T2>
class CORDL_TYPE SafeAction_2 : public ::Rewired::Utils::SafeDelegate_1<::System::Action_2<T,T2>*> {
public:
// Declarations
/// @brief Field HpvcocLhIriIvEdcNdysNsfMWHsY, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_HpvcocLhIriIvEdcNdysNsfMWHsY, put=__cordl_internal_set_HpvcocLhIriIvEdcNdysNsfMWHsY)) T2  HpvcocLhIriIvEdcNdysNsfMWHsY;

/// @brief Field QvdYGOMnlgHsyjNiHwncfEgZEbff, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_QvdYGOMnlgHsyjNiHwncfEgZEbff, put=setStaticF_QvdYGOMnlgHsyjNiHwncfEgZEbff)) ::System::Action_2<::System::Object*,::System::Action_2<T,T2>*>*  QvdYGOMnlgHsyjNiHwncfEgZEbff;

/// @brief Field mKvqjBgcGdQrmpDKZwJzlEHqKHrg, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_mKvqjBgcGdQrmpDKZwJzlEHqKHrg, put=__cordl_internal_set_mKvqjBgcGdQrmpDKZwJzlEHqKHrg)) T  mKvqjBgcGdQrmpDKZwJzlEHqKHrg;

/// @brief Method Clone, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::System::Object* Clone() ;

/// @brief Method Invoke, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void Invoke(T  arg0, T2  arg1) ;

/// @brief Method LmOqGcANxWHACxNtCDupNoxMKWuS, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline ::System::Action_2<::System::Object*,::System::Action_2<T,T2>*>* LmOqGcANxWHACxNtCDupNoxMKWuS() ;

static inline ::Rewired::Utils::SafeAction_2<T,T2>* New_ctor() ;

static inline ::Rewired::Utils::SafeAction_2<T,T2>* New_ctor(::Rewired::Utils::SafeAction_2<T,T2>*  _cordl_fixed_empty_name_whitespace) ;

static inline ::Rewired::Utils::SafeAction_2<T,T2>* New_ctor(::System::Action_1<::System::Exception*>*  _cordl_fixed_empty_name_whitespace) ;

constexpr T2 const& __cordl_internal_get_HpvcocLhIriIvEdcNdysNsfMWHsY() const;

constexpr T2& __cordl_internal_get_HpvcocLhIriIvEdcNdysNsfMWHsY() ;

constexpr T const& __cordl_internal_get_mKvqjBgcGdQrmpDKZwJzlEHqKHrg() const;

constexpr T& __cordl_internal_get_mKvqjBgcGdQrmpDKZwJzlEHqKHrg() ;

constexpr void __cordl_internal_set_HpvcocLhIriIvEdcNdysNsfMWHsY(T2  value) ;

constexpr void __cordl_internal_set_mKvqjBgcGdQrmpDKZwJzlEHqKHrg(T  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(::Rewired::Utils::SafeAction_2<T,T2>*  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(::System::Action_1<::System::Exception*>*  _cordl_fixed_empty_name_whitespace) ;

static inline ::System::Action_2<::System::Object*,::System::Action_2<T,T2>*>* getStaticF_QvdYGOMnlgHsyjNiHwncfEgZEbff() ;

/// @brief Method op_Addition, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline ::Rewired::Utils::SafeAction_2<T,T2>* op_Addition(::Rewired::Utils::SafeAction_2<T,T2>*  eventList, ::System::Action_2<T,T2>*  listener) ;

/// @brief Method op_Implicit, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline ::Rewired::Utils::SafeAction_2<T,T2>* op_Implicit___Rewired__Utils__SafeAction_2_T_T2__(::System::Action_2<T,T2>*  obj) ;

/// @brief Method op_Implicit, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline ::System::Action_2<T,T2>* op_Implicit___System__Action_2_T_T2__(::Rewired::Utils::SafeAction_2<T,T2>*  obj) ;

/// @brief Method op_Subtraction, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline ::Rewired::Utils::SafeAction_2<T,T2>* op_Subtraction(::Rewired::Utils::SafeAction_2<T,T2>*  eventList, ::System::Action_2<T,T2>*  listener) ;

static inline void setStaticF_QvdYGOMnlgHsyjNiHwncfEgZEbff(::System::Action_2<::System::Object*,::System::Action_2<T,T2>*>*  value) ;

/// @brief Method tfHuVxbZFDATQcikWlnxiDPFTZwU, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline void tfHuVxbZFDATQcikWlnxiDPFTZwU(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::Action_2<T,T2>*  _cordl_fixed_empty_name_whitespace_param_1) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SafeAction_2() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SafeAction_2", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SafeAction_2(SafeAction_2 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SafeAction_2", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SafeAction_2(SafeAction_2 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2906};

/// @brief Field mKvqjBgcGdQrmpDKZwJzlEHqKHrg, offset: 0x28, size: 0x8, def value: None
 T  ___mKvqjBgcGdQrmpDKZwJzlEHqKHrg;

/// @brief Field HpvcocLhIriIvEdcNdysNsfMWHsY, offset: 0x30, size: 0x8, def value: None
 T2  ___HpvcocLhIriIvEdcNdysNsfMWHsY;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Rewired::Utils

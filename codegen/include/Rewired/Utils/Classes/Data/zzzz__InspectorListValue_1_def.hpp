#pragma once
// IWYU pragma private; include "Rewired/Utils/Classes/Data/InspectorListValue_1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(InspectorListValue_1)
namespace System::Collections::Generic {
template<typename T>
class IList_1;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace Rewired::Utils::Classes::Data {
template<typename T>
class InspectorListValue_1;
}
// Write type traits
MARK_GEN_REF_T_PTR(::Rewired::Utils::Classes::Data::InspectorListValue_1);
DEFINE_IL2CPP_GEN_CLASS_PTR(::Rewired::Utils::Classes::Data::InspectorListValue_1, "Rewired.Utils.Classes.Data", "InspectorListValue`1");
// Dependencies System.Object
namespace Rewired::Utils::Classes::Data {
// cpp template
template<typename T>
// Is value type: false
// CS Name: Rewired.Utils.Classes.Data.InspectorListValue`1<T>
class CORDL_TYPE InspectorListValue_1 : public ::System::Object {
public:
// Declarations
/// @brief Field IgmmSyHiPpZJTopePtLoOYjKdJCg, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get_IgmmSyHiPpZJTopePtLoOYjKdJCg, put=__cordl_internal_set_IgmmSyHiPpZJTopePtLoOYjKdJCg)) bool  IgmmSyHiPpZJTopePtLoOYjKdJCg;

/// @brief Field JQPVhfjdJKhPteyQMRfAeBYaqszE, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_JQPVhfjdJKhPteyQMRfAeBYaqszE, put=__cordl_internal_set_JQPVhfjdJKhPteyQMRfAeBYaqszE)) ::System::Collections::Generic::IList_1<T>*  JQPVhfjdJKhPteyQMRfAeBYaqszE;

 __declspec(property(get=get_isSet)) bool  isSet;

 __declspec(property(get=get_value, put=set_value)) ::System::Collections::Generic::IList_1<T>*  value;

/// @brief Field yqkhQBluBtoOeyUtnXIMlazRGZGF, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_yqkhQBluBtoOeyUtnXIMlazRGZGF, put=__cordl_internal_set_yqkhQBluBtoOeyUtnXIMlazRGZGF)) ::System::Collections::Generic::List_1<T>*  yqkhQBluBtoOeyUtnXIMlazRGZGF;

/// @brief Method Clear, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void Clear() ;

static inline ::Rewired::Utils::Classes::Data::InspectorListValue_1<T>* New_ctor() ;

/// @brief Method SetIfChanged, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline bool SetIfChanged(::System::Collections::Generic::IList_1<T>*  value) ;

constexpr bool const& __cordl_internal_get_IgmmSyHiPpZJTopePtLoOYjKdJCg() const;

constexpr bool& __cordl_internal_get_IgmmSyHiPpZJTopePtLoOYjKdJCg() ;

constexpr ::System::Collections::Generic::IList_1<T>* const& __cordl_internal_get_JQPVhfjdJKhPteyQMRfAeBYaqszE() const;

constexpr ::System::Collections::Generic::IList_1<T>*& __cordl_internal_get_JQPVhfjdJKhPteyQMRfAeBYaqszE() ;

constexpr ::System::Collections::Generic::List_1<T>* const& __cordl_internal_get_yqkhQBluBtoOeyUtnXIMlazRGZGF() const;

constexpr ::System::Collections::Generic::List_1<T>*& __cordl_internal_get_yqkhQBluBtoOeyUtnXIMlazRGZGF() ;

constexpr void __cordl_internal_set_IgmmSyHiPpZJTopePtLoOYjKdJCg(bool  value) ;

constexpr void __cordl_internal_set_JQPVhfjdJKhPteyQMRfAeBYaqszE(::System::Collections::Generic::IList_1<T>*  value) ;

constexpr void __cordl_internal_set_yqkhQBluBtoOeyUtnXIMlazRGZGF(::System::Collections::Generic::List_1<T>*  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_isSet, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline bool get_isSet() ;

/// @brief Method get_value, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::System::Collections::Generic::IList_1<T>* get_value() ;

/// @brief Method kBkpigDHyApBQCGMfONqLEKnSAnO, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline bool kBkpigDHyApBQCGMfONqLEKnSAnO(::System::Collections::Generic::IList_1<T>*  _cordl_fixed_empty_name_whitespace, ::System::Collections::Generic::IList_1<T>*  _cordl_fixed_empty_name_whitespace_param_1) ;

/// @brief Method set_value, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void set_value(::System::Collections::Generic::IList_1<T>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr InspectorListValue_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "InspectorListValue_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
InspectorListValue_1(InspectorListValue_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InspectorListValue_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
InspectorListValue_1(InspectorListValue_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3062};

/// @brief Field JQPVhfjdJKhPteyQMRfAeBYaqszE, offset: 0x10, size: 0x8, def value: None
 ::System::Collections::Generic::IList_1<T>*  ___JQPVhfjdJKhPteyQMRfAeBYaqszE;

/// @brief Field yqkhQBluBtoOeyUtnXIMlazRGZGF, offset: 0x18, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<T>*  ___yqkhQBluBtoOeyUtnXIMlazRGZGF;

/// @brief Field IgmmSyHiPpZJTopePtLoOYjKdJCg, offset: 0x20, size: 0x1, def value: None
 bool  ___IgmmSyHiPpZJTopePtLoOYjKdJCg;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Rewired::Utils::Classes::Data

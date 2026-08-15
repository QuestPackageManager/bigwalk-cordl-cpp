#pragma once
// IWYU pragma private; include "Rewired/Utils/Classes/Data/GetSetValue_1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(GetSetValue_1)
namespace Rewired::Utils::Interfaces {
template<typename T>
class IGetSetValue_1;
}
namespace Rewired::Utils::Interfaces {
template<typename T>
class IGetValue_1;
}
namespace Rewired::Utils::Interfaces {
template<typename T>
class ISetValue_1;
}
namespace System {
template<typename T>
class Action_1;
}
namespace System {
template<typename TResult>
class Func_1;
}
// Forward declare root types
namespace Rewired::Utils::Classes::Data {
template<typename T>
class GetSetValue_1;
}
// Write type traits
MARK_GEN_REF_T_PTR(::Rewired::Utils::Classes::Data::GetSetValue_1);
DEFINE_IL2CPP_GEN_CLASS_PTR(::Rewired::Utils::Classes::Data::GetSetValue_1, "Rewired.Utils.Classes.Data", "GetSetValue`1");
// Dependencies System.Object
namespace Rewired::Utils::Classes::Data {
// cpp template
template<typename T>
// Is value type: false
// CS Name: Rewired.Utils.Classes.Data.GetSetValue`1<T>
class CORDL_TYPE GetSetValue_1 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_getValueDelegate, put=set_getValueDelegate)) ::System::Func_1<T>*  getValueDelegate;

/// @brief Field lougZNBveRqBsIsBlaNdyFuziKxl, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_lougZNBveRqBsIsBlaNdyFuziKxl, put=__cordl_internal_set_lougZNBveRqBsIsBlaNdyFuziKxl)) ::System::Action_1<T>*  lougZNBveRqBsIsBlaNdyFuziKxl;

/// @brief Field sUPqMfabgCcNTkrlIHtAaCAeYamEB, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_sUPqMfabgCcNTkrlIHtAaCAeYamEB, put=__cordl_internal_set_sUPqMfabgCcNTkrlIHtAaCAeYamEB)) ::System::Func_1<T>*  sUPqMfabgCcNTkrlIHtAaCAeYamEB;

 __declspec(property(get=get_setValueDelegate, put=set_setValueDelegate)) ::System::Action_1<T>*  setValueDelegate;

/// @brief Convert operator to "::Rewired::Utils::Interfaces::IGetSetValue_1<T>"
constexpr operator  ::Rewired::Utils::Interfaces::IGetSetValue_1<T>*() noexcept;

/// @brief Convert operator to "::Rewired::Utils::Interfaces::IGetValue_1<T>"
constexpr operator  ::Rewired::Utils::Interfaces::IGetValue_1<T>*() noexcept;

/// @brief Convert operator to "::Rewired::Utils::Interfaces::ISetValue_1<T>"
constexpr operator  ::Rewired::Utils::Interfaces::ISetValue_1<T>*() noexcept;

/// @brief Method GetValue, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline T GetValue() ;

static inline ::Rewired::Utils::Classes::Data::GetSetValue_1<T>* New_ctor(::System::Func_1<T>*  _cordl_fixed_empty_name_whitespace, ::System::Action_1<T>*  _cordl_fixed_empty_name_whitespace_param_1) ;

/// @brief Method SetValue, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void SetValue(T  value) ;

constexpr ::System::Action_1<T>* const& __cordl_internal_get_lougZNBveRqBsIsBlaNdyFuziKxl() const;

constexpr ::System::Action_1<T>*& __cordl_internal_get_lougZNBveRqBsIsBlaNdyFuziKxl() ;

constexpr ::System::Func_1<T>* const& __cordl_internal_get_sUPqMfabgCcNTkrlIHtAaCAeYamEB() const;

constexpr ::System::Func_1<T>*& __cordl_internal_get_sUPqMfabgCcNTkrlIHtAaCAeYamEB() ;

constexpr void __cordl_internal_set_lougZNBveRqBsIsBlaNdyFuziKxl(::System::Action_1<T>*  value) ;

constexpr void __cordl_internal_set_sUPqMfabgCcNTkrlIHtAaCAeYamEB(::System::Func_1<T>*  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(::System::Func_1<T>*  _cordl_fixed_empty_name_whitespace, ::System::Action_1<T>*  _cordl_fixed_empty_name_whitespace_param_1) ;

/// @brief Method get_getValueDelegate, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::System::Func_1<T>* get_getValueDelegate() ;

/// @brief Method get_setValueDelegate, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::System::Action_1<T>* get_setValueDelegate() ;

/// @brief Convert to "::Rewired::Utils::Interfaces::IGetSetValue_1<T>"
constexpr ::Rewired::Utils::Interfaces::IGetSetValue_1<T>* i___Rewired__Utils__Interfaces__IGetSetValue_1_T_() noexcept;

/// @brief Convert to "::Rewired::Utils::Interfaces::IGetValue_1<T>"
constexpr ::Rewired::Utils::Interfaces::IGetValue_1<T>* i___Rewired__Utils__Interfaces__IGetValue_1_T_() noexcept;

/// @brief Convert to "::Rewired::Utils::Interfaces::ISetValue_1<T>"
constexpr ::Rewired::Utils::Interfaces::ISetValue_1<T>* i___Rewired__Utils__Interfaces__ISetValue_1_T_() noexcept;

/// @brief Method set_getValueDelegate, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void set_getValueDelegate(::System::Func_1<T>*  value) ;

/// @brief Method set_setValueDelegate, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void set_setValueDelegate(::System::Action_1<T>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GetSetValue_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GetSetValue_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
GetSetValue_1(GetSetValue_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GetSetValue_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
GetSetValue_1(GetSetValue_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3057};

/// @brief Field sUPqMfabgCcNTkrlIHtAaCAeYamEB, offset: 0x10, size: 0x8, def value: None
 ::System::Func_1<T>*  ___sUPqMfabgCcNTkrlIHtAaCAeYamEB;

/// @brief Field lougZNBveRqBsIsBlaNdyFuziKxl, offset: 0x18, size: 0x8, def value: None
 ::System::Action_1<T>*  ___lougZNBveRqBsIsBlaNdyFuziKxl;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Rewired::Utils::Classes::Data
